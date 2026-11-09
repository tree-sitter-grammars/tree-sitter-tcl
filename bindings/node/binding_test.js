const assert = require('node:assert');
const {test} = require('node:test');
const Parser = require('tree-sitter');

test('can parse an array element', () => {
  const parser = new Parser();
  parser.setLanguage(require('.'));
  const tree = parser.parse('set anAry(msg) "Hello, World!"\nputs $anAry(msg)\n');
  assert.strictEqual(tree.rootNode.hasError, false, tree.rootNode.toString());
});
