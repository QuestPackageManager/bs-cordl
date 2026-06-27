#pragma once
// IWYU pragma private; include "GlobalNamespace/Region.hpp"
#include "GlobalNamespace/zzzz__Region_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Region::Region(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Region::Region()   {
}
constexpr ::GlobalNamespace::Region  GlobalNamespace::Region::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Region  GlobalNamespace::Region::NorthAndSouthAmerica{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Region  GlobalNamespace::Region::Europe{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Region  GlobalNamespace::Region::SouthKorea{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Region  GlobalNamespace::Region::Japan{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Region  GlobalNamespace::Region::Other{static_cast<int32_t>(0x5)};
