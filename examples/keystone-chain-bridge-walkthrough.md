# Keystone Chain Bridge Stack Walkthrough

I use this file as a small checklist before changing the C implementation.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 133 | watch |
| stress | nonce pressure | 144 | ship |
| edge | settlement risk | 225 | ship |
| recovery | proof depth | 237 | ship |
| stale | event finality | 136 | watch |

Start with `recovery` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`recovery` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
