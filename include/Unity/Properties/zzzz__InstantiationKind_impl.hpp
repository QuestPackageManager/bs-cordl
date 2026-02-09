#pragma once
// IWYU pragma private; include "Unity/Properties/InstantiationKind.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::InstantiationKind::InstantiationKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Properties::InstantiationKind::InstantiationKind()   {
}
constexpr ::Unity::Properties::InstantiationKind  Unity::Properties::InstantiationKind::Activator{static_cast<int32_t>(0x0)};
constexpr ::Unity::Properties::InstantiationKind  Unity::Properties::InstantiationKind::PropertyBagOverride{static_cast<int32_t>(0x1)};
constexpr ::Unity::Properties::InstantiationKind  Unity::Properties::InstantiationKind::NotInstantiatable{static_cast<int32_t>(0x2)};
