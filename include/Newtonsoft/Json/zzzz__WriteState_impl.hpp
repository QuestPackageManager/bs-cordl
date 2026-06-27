#pragma once
// IWYU pragma private; include "Newtonsoft/Json/WriteState.hpp"
#include "Newtonsoft/Json/zzzz__WriteState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::WriteState::WriteState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::WriteState::WriteState()   {
}
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Error{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Closed{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Object{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Array{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Constructor{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Property{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Start{static_cast<int32_t>(0x6)};
