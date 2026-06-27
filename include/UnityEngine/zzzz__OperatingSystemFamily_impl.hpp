#pragma once
// IWYU pragma private; include "UnityEngine/OperatingSystemFamily.hpp"
#include "UnityEngine/zzzz__OperatingSystemFamily_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::OperatingSystemFamily::OperatingSystemFamily(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::OperatingSystemFamily::OperatingSystemFamily()   {
}
constexpr ::UnityEngine::OperatingSystemFamily  UnityEngine::OperatingSystemFamily::Other{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::OperatingSystemFamily  UnityEngine::OperatingSystemFamily::MacOSX{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::OperatingSystemFamily  UnityEngine::OperatingSystemFamily::Windows{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::OperatingSystemFamily  UnityEngine::OperatingSystemFamily::Linux{static_cast<int32_t>(0x3)};
