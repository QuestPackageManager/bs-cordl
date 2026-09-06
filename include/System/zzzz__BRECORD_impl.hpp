#pragma once
// IWYU pragma private; include "System/BRECORD.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__BRECORD_def.hpp"
// Ctor Parameters [CppParam { name: "pvRecord", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pRecInfo", ty: "::System::IntPtr", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::System::BRECORD::BRECORD(::System::IntPtr pvRecord, ::System::IntPtr pRecInfo) noexcept {
  this->pvRecord = pvRecord;
  this->pRecInfo = pRecInfo;
}
// Ctor Parameters []
constexpr ::System::BRECORD::BRECORD() {}
