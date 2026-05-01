#pragma once
// IWYU pragma private; include "Unity/Properties/VisitExceptionKind.hpp"
#include "Unity/Properties/zzzz__VisitExceptionKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::VisitExceptionKind::VisitExceptionKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Properties::VisitExceptionKind::VisitExceptionKind() {}
constexpr ::Unity::Properties::VisitExceptionKind Unity::Properties::VisitExceptionKind::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Properties::VisitExceptionKind Unity::Properties::VisitExceptionKind::Internal{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Properties::VisitExceptionKind Unity::Properties::VisitExceptionKind::Visitor{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Properties::VisitExceptionKind Unity::Properties::VisitExceptionKind::All{ static_cast<int32_t>(0x3) };
