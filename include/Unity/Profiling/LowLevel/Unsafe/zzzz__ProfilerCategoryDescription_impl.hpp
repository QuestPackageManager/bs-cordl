#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerCategoryDescription.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerCategoryDescription_def.hpp"
constexpr uint16_t& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_Id() {
  return this->___Id;
}
constexpr uint16_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_Id() const {
  return this->___Id;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_set_Id(uint16_t value) {
  this->___Id = value;
}
constexpr uint16_t& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_Flags() {
  return this->___Flags;
}
constexpr uint16_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_Flags() const {
  return this->___Flags;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_set_Flags(uint16_t value) {
  this->___Flags = value;
}
constexpr ::UnityEngine::Color32& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_Color() {
  return this->___Color;
}
constexpr ::UnityEngine::Color32 const& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_Color() const {
  return this->___Color;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_set_Color(::UnityEngine::Color32 value) {
  this->___Color = value;
}
constexpr int32_t& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_reserved0() {
  return this->___reserved0;
}
constexpr int32_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_reserved0() const {
  return this->___reserved0;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_set_reserved0(int32_t value) {
  this->___reserved0 = value;
}
constexpr int32_t& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_NameUtf8Len() {
  return this->___NameUtf8Len;
}
constexpr int32_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_NameUtf8Len() const {
  return this->___NameUtf8Len;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_set_NameUtf8Len(int32_t value) {
  this->___NameUtf8Len = value;
}
constexpr ::cordl_internals::Ptr<uint8_t>& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_NameUtf8() {
  return this->___NameUtf8;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_get_NameUtf8() const {
  return this->___NameUtf8;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::__cordl_internal_set_NameUtf8(::cordl_internals::Ptr<uint8_t> value) {
  this->___NameUtf8 = value;
}
// Ctor Parameters [CppParam { name: "Id", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Flags", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NameUtf8Len",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NameUtf8", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::ProfilerCategoryDescription(uint16_t Id, uint16_t Flags, ::UnityEngine::Color32 Color, int32_t reserved0,
                                                                                                         int32_t NameUtf8Len, ::cordl_internals::Ptr<uint8_t> NameUtf8) noexcept {
  this->Id = Id;
  this->Flags = Flags;
  this->Color = Color;
  this->reserved0 = reserved0;
  this->NameUtf8Len = NameUtf8Len;
  this->NameUtf8 = NameUtf8;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription::ProfilerCategoryDescription() {}
