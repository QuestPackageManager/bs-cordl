#pragma once
// IWYU pragma private; include "TMPro/VertexSortingOrder.hpp"
#include "TMPro/zzzz__VertexSortingOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::VertexSortingOrder::VertexSortingOrder(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::VertexSortingOrder::VertexSortingOrder()   {
}
constexpr ::TMPro::VertexSortingOrder  TMPro::VertexSortingOrder::Normal{static_cast<int32_t>(0x0)};
constexpr ::TMPro::VertexSortingOrder  TMPro::VertexSortingOrder::Reverse{static_cast<int32_t>(0x1)};
