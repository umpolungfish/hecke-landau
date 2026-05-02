# Hecke--Landau Equidistribution

A proof that for any unitary Hecke character $\chi$ of infinite order over a number field $K$, the angles $\theta_\chi(\mathfrak{p}) \in [0, 2\pi)$ defined by $\chi(\mathfrak{p}) = e^{i\theta_\chi(\mathfrak{p})}$ are equidistributed on the unit circle with respect to the uniform measure.

$\lim_{x \to \infty} \frac{1}{\pi_K(x)} \sum_{N(\mathfrak{p}) \leq x} f(\chi(\mathfrak{p})) = \int_0^{2\pi} f(e^{i\theta}) \, \frac{d\theta}{2\pi}$

for every continuous $f: S^1 \to \mathbb{C}$, where $\pi_K(x)$ is the number of prime ideals of $\mathcal{O}_K$ with norm at most $x$.

---

## The Result

The result is a theorem, not a conjecture, though the name is nonstandard. It follows from three classical pillars of Hecke's 1918--1920 theory:

1. **Analytic continuation and functional equation.** For a nontrivial Hecke character $\psi$, $L(s, \psi)$ is entire and satisfies $\Lambda(s, \psi) = \varepsilon(\psi)\Lambda(1-s, \overline{\psi})$. This makes contour shifting possible.

2. **Nonvanishing on $\Re(s) = 1$.** $L(1+it, \psi) \neq 0$ for all real $t$. Proved by Hecke via the same nonnegativity argument as Hadamard--de la Vallée-Poussin, adapted to number fields using the positivity of $L(s, \psi \otimes \overline{\psi})$.

3. **Classical zero-free region.** For each fixed $\psi$, there exists $c_\psi > 0$ such that $L(s, \psi) \neq 0$ for $\sigma \geq 1 - c_\psi/\log(|t|+2)$. Sufficient to drive the contour error to $o(x)$.

**Proof structure.** Weyl's criterion reduces equidistribution to showing $\sum_{N(\mathfrak{p}) \leq x} \psi(\mathfrak{p}) = o(x/\log x)$ for each nontrivial $\psi = \chi^k$, $k \neq 0$ (nontrivial because $\chi$ has infinite order). Perron's formula converts the prime sum to a contour integral of $-L'/L(s, \psi)$. Shifting to $\Re(s) = 1 - c_0/\log T$ with $T = \exp(\sqrt{\log x})$ gives $S(x, \psi) = O(x \cdot e^{-c\sqrt{\log x}} \log^3 x) = o(x)$. Partial summation delivers the unweighted sum; Weyl's criterion closes the argument.

---

## Files

| File | Contents |
|------|----------|
| `hecke_landau_proof.tex` | LaTeX source |
| `HECKE_LANDAU_PROOF.pdf` | Compiled PDF |

---

## Note on GPT's Review

A GPT-4o review of an earlier draft raised objections claiming the zero-free region is "not available in the required generality" and that the result is an open conjecture. Both objections are incorrect for the case of a **fixed** character. The confusion is between:

- equidistribution for a fixed infinite-order Hecke character (this paper — classical, $c_\psi$ depends on $\psi$ but is fixed throughout)
- uniformity of error bounds over *families* of characters as the conductor grows (genuinely hard, related to Siegel zeros and effective Chebotarev)

The proof addresses the former. For a fixed $\psi = \chi^k$, every analytic input invoked is classical.
