#pragma once
// IWYU pragma private; include "Unity/Properties/VisitReturnCode.hpp"
#include "Unity/Properties/zzzz__VisitReturnCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::VisitReturnCode::VisitReturnCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Properties::VisitReturnCode::VisitReturnCode() {}
constexpr ::Unity::Properties::VisitReturnCode Unity::Properties::VisitReturnCode::Ok{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Properties::VisitReturnCode Unity::Properties::VisitReturnCode::NullContainer{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Properties::VisitReturnCode Unity::Properties::VisitReturnCode::InvalidContainerType{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Properties::VisitReturnCode Unity::Properties::VisitReturnCode::MissingPropertyBag{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Properties::VisitReturnCode Unity::Properties::VisitReturnCode::InvalidPath{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Properties::VisitReturnCode Unity::Properties::VisitReturnCode::InvalidCast{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Properties::VisitReturnCode Unity::Properties::VisitReturnCode::AccessViolation{ static_cast<int32_t>(0x6) };
