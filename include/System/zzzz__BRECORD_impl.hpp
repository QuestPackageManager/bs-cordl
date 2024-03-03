#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__BRECORD_def.hpp"
// Ctor Parameters [CppParam { name: "pvRecord", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "pRecInfo", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::BRECORD::BRECORD(void* pvRecord, void* pRecInfo) noexcept {
  this->pvRecord = pvRecord;
  this->pRecInfo = pRecInfo;
}
// Ctor Parameters []
constexpr ::System::BRECORD::BRECORD() {}
