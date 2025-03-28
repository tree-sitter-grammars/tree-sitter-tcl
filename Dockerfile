FROM rockylinux:9

# Install system dependencies
RUN dnf install -y dnf-plugins-core && \
    dnf install -y --allowerasing \
    gcc gcc-c++ make python3 python3-devel \
    curl git tar bzip2 xz findutils \
    glibc-devel libstdc++-devel && \
    dnf module reset nodejs -y && \
    dnf module enable nodejs:20 -y && \
    dnf install -y nodejs npm && \
    npm install -g node-gyp node-gyp-build && \
    rm -rf /var/cache/dnf

# Install cargo and tree-sitter-cli
RUN curl -o sh.rustup.rs https://sh.rustup.rs -sSf && \
    echo "b25b33de9e5678e976905db7f21b42a58fb124dd098b35a962f963734b790a9b  sh.rustup.rs" | sha256sum -c - && \
    sh sh.rustup.rs -y && \
    $HOME/.cargo/bin/cargo install --locked tree-sitter-cli

# Set Python for node-gyp
ENV PYTHON=/usr/bin/python3

# Set working directory
WORKDIR /app
COPY . /app

# Install project dependencies
RUN npm install

CMD ["node"]
