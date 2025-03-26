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

# Set Python for node-gyp
ENV PYTHON=/usr/bin/python3

# Set working directory
WORKDIR /app
COPY . /app

# Install project dependencies
RUN npm install

CMD ["node"]
