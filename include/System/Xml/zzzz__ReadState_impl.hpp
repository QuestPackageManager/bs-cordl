#pragma once
// IWYU pragma private; include "System/Xml/ReadState.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ReadState::ReadState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::ReadState::ReadState()   {
}
constexpr ::System::Xml::ReadState  System::Xml::ReadState::Initial{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::ReadState  System::Xml::ReadState::Interactive{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::ReadState  System::Xml::ReadState::Error{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::ReadState  System::Xml::ReadState::EndOfFile{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::ReadState  System::Xml::ReadState::Closed{static_cast<int32_t>(0x4)};
