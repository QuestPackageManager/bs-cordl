#pragma once
// IWYU pragma private; include "System/Xml/WriteState.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::WriteState::WriteState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::WriteState::WriteState()   {
}
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Start{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Prolog{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Element{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Attribute{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Content{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Closed{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Error{static_cast<int32_t>(0x6)};
