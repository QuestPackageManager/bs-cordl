#pragma once
// IWYU pragma private; include "System/Xml/TriState.hpp"
#include "System/Xml/zzzz__TriState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::TriState::TriState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::TriState::TriState()   {
}
constexpr ::System::Xml::TriState  System::Xml::TriState::Unknown{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Xml::TriState  System::Xml::TriState::False{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::TriState  System::Xml::TriState::True{static_cast<int32_t>(0x1)};
