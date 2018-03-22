

#pragma once

#include <cstddef>

class DataVector;

namespace Frame {
struct Inertial;
}

namespace gr {
namespace Tags {
template <size_t Dim, typename Frame = Frame::Inertial,
          typename DataType = DataVector>
struct SpacetimeMetric;
template <size_t Dim, typename Frame = Frame::Inertial,
          typename DataType = DataVector>
struct InverseSpacetimeMetric;
}  // namespace Tags
}  // namespace gr
