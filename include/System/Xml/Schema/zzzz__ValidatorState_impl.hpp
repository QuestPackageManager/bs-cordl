#pragma once
// IWYU pragma private; include "System/Xml/Schema/ValidatorState.hpp"
#include "System/Xml/Schema/zzzz__ValidatorState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::ValidatorState::ValidatorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ValidatorState::ValidatorState()   {
}
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::Start{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::TopLevelAttribute{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::TopLevelTextOrWS{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::Element{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::Attribute{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::EndOfAttributes{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::Text{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::Whitespace{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::EndElement{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::SkipToEndElement{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::Schema::ValidatorState  System::Xml::Schema::ValidatorState::Finish{static_cast<int32_t>(0xb)};
