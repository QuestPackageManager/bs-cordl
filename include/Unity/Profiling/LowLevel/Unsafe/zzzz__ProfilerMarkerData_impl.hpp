#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerMarkerData.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerMarkerData_def.hpp"
constexpr uint8_t& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_Type() {
  return this->___Type;
}
constexpr uint8_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_Type() const {
  return this->___Type;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_set_Type(uint8_t value) {
  this->___Type = value;
}
constexpr uint8_t& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_reserved0() {
  return this->___reserved0;
}
constexpr uint8_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_reserved0() const {
  return this->___reserved0;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_set_reserved0(uint8_t value) {
  this->___reserved0 = value;
}
constexpr uint16_t& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_reserved1() {
  return this->___reserved1;
}
constexpr uint16_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_reserved1() const {
  return this->___reserved1;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_set_reserved1(uint16_t value) {
  this->___reserved1 = value;
}
constexpr uint32_t& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_Size() {
  return this->___Size;
}
constexpr uint32_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_Size() const {
  return this->___Size;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_set_Size(uint32_t value) {
  this->___Size = value;
}
constexpr void*& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_Ptr() {
  return this->___Ptr;
}
constexpr void* const& Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_get_Ptr() const {
  return this->___Ptr;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::__cordl_internal_set_Ptr(void* value) {
  this->___Ptr = value;
}
// Ctor Parameters [CppParam { name: "Type", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved0", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "reserved1", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Size", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Ptr", ty: "void*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::ProfilerMarkerData(uint8_t Type, uint8_t reserved0, uint16_t reserved1, uint32_t Size, void* Ptr) noexcept {
  this->Type = Type;
  this->reserved0 = reserved0;
  this->reserved1 = reserved1;
  this->Size = Size;
  this->Ptr = Ptr;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData::ProfilerMarkerData() {}
