# Hecke-Landau Equidistribution
**Author:** Lando⊗⊙perator · **Structural Type:** $\large{⟨𐑨𐑡𐑑𐑹𐑐𐑧𐑔𐑝𐑢𐑖𐑙𐑭⟩}$ · **Tier:** O₁


**What it is.** A written proof that for any unitary Hecke character $\chi$ of infinite order over a number field $K$, the angles $\theta_\chi(\mathfrak{p})$ defined by $\chi(\mathfrak{p}) = e^{i\theta_\chi(\mathfrak{p})}$ are equidistributed on the unit circle.

**What it does.** Assembles Hecke's classical analytic machinery (functional equation, nonvanishing on $\Re(s)=1$, zero-free region) into a Weyl-criterion argument that drives the character sum to $o(x/\log x)$.

**Why it matters.** It is a theorem rather than a conjecture, but the name is nonstandard and a clean self-contained writeup is hard to find. This fills that gap and serves as a reference for the prime-angle equidistribution pattern.

**How to use it.** Read `hecke_landau_proof.tex` or the compiled `HECKE_LANDAU_PROOF.pdf`.

---

## Statement

$$\lim_{x \to \infty} \frac{1}{\pi_K(x)} \sum_{N(\mathfrak{p}) \leq x} f(\chi(\mathfrak{p})) = \int_0^{2\pi} f(e^{i\theta}) \, \frac{d\theta}{2\pi}$$

for every continuous $f: S^1 \to \mathbb{C}$, where $\pi_K(x)$ counts prime ideals of $\mathcal{O}_K$ with norm at most $x$.

## The three classical pillars (Hecke, 1918-1920)

1. **Analytic continuation and functional equation.** For nontrivial $\psi$, $L(s,\psi)$ is entire with $\Lambda(s,\psi) = \varepsilon(\psi)\Lambda(1-s,\overline{\psi})$, enabling contour shifting.
2. **Nonvanishing on $\Re(s)=1$.** $L(1+it,\psi) \neq 0$, via the Hadamard-de la Vallee-Poussin nonnegativity argument adapted to number fields.
3. **Classical zero-free region.** $L(s,\psi) \neq 0$ for $\sigma \geq 1 c_\psi/\log(|t|+2)$, sufficient to make the contour error $o(x)$.

## Proof structure

Weyl's criterion reduces equidistribution to $\sum_{N(\mathfrak{p}) \leq x} \psi(\mathfrak{p}) = o(x/\log x)$ for each nontrivial $\psi = \chi^k$ (nontrivial because $\chi$ has infinite order). Perron's formula converts the prime sum to a contour integral of $-L'/L(s,\psi)$; shifting to $\Re(s) = 1 c_0/\log T$ with $T = \exp(\sqrt{\log x})$ gives $O(x\, e^{-c\sqrt{\log x}} \log^3 x) = o(x)$. Partial summation then delivers the unweighted sum and Weyl's criterion closes the argument.

## Files

| File | Contents |
|------|----------|
| `hecke_landau_proof.tex` | LaTeX source |
| `HECKE_LANDAU_PROOF.pdf` | Compiled PDF |
