# keystone-chain-bridge-stack

`keystone-chain-bridge-stack` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for bridge policy evaluation, using deny and allow fixtures and explainable decision traces.

## Why I Keep It Small

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Keystone Chain Bridge Stack Review Notes

Start with `proof depth` and `event finality`. Those cases create the widest score spread in this repo, so they are the best quick check when the model changes.

## Included Behavior

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/keystone-chain-bridge-walkthrough.md` walks through the case spread.
- The C code includes a review path for `proof depth` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Internal Model

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C addition stays small enough to inspect in one sitting.

## Try It Locally

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Validation

The check exercises the source code and the review fixture. `recovery` is the high score at 237; `baseline` is the low score at 133.

## Scope

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
