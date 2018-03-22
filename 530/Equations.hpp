// Distributed under the MIT License.
// See LICENSE.txt for details.

/// \file
/// Defines class template GeneralizedHarmonicEquations.

#pragma once

#include <cstddef>

#include "GrTagsDeclarations.hpp"  // IWYU pragma: keep

namespace tmpl {
template <class...>
struct list {};
}

namespace Tags {
template <typename>
class dt;
}

namespace GeneralizedHarmonic {
template <size_t Dim>
struct ComputeDuDt {
 public:
  using return_tags = tmpl::list<Tags::dt<gr::Tags::SpacetimeMetric<Dim>>>;
  using argument_tags = tmpl::list<gr::Tags::InverseSpacetimeMetric<Dim>>;
};
}  // namespace GeneralizedHarmonic
