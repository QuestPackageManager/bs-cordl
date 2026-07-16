#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerRecorderDescription.hpp"
#include "Unity/Profiling/LowLevel/zzzz__MarkerFlags_impl.hpp"
#include "Unity/Profiling/LowLevel/zzzz__ProfilerMarkerDataType_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarkerDataUnit_impl.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderDescription_def.hpp"
#include "Unity/Profiling/LowLevel/zzzz__MarkerFlags_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription.get_Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerCategory (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::*)()>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::get_Category)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a58728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(), { "get_Category", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription.get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::MarkerFlags (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::*)()>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a58730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(), { "get_Flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::*)()>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a58738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Profiling::ProfilerCategory& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_category() {
  return this->___category;
}
constexpr ::Unity::Profiling::ProfilerCategory const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_category() const {
  return this->___category;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_set_category(::Unity::Profiling::ProfilerCategory value) {
  this->___category = value;
}
constexpr ::Unity::Profiling::LowLevel::MarkerFlags& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_flags() {
  return this->___flags;
}
constexpr ::Unity::Profiling::LowLevel::MarkerFlags const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_flags() const {
  return this->___flags;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_set_flags(::Unity::Profiling::LowLevel::MarkerFlags value) {
  this->___flags = value;
}
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_dataType() {
  return this->___dataType;
}
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_dataType() const {
  return this->___dataType;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_set_dataType(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value) {
  this->___dataType = value;
}
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_unitType() {
  return this->___unitType;
}
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_unitType() const {
  return this->___unitType;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_set_unitType(::Unity::Profiling::ProfilerMarkerDataUnit value) {
  this->___unitType = value;
}
constexpr int32_t& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_reserved0() {
  return this->___reserved0;
}
constexpr int32_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_reserved0() const {
  return this->___reserved0;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_set_reserved0(int32_t value) {
  this->___reserved0 = value;
}
constexpr int32_t& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_nameUtf8Len() {
  return this->___nameUtf8Len;
}
constexpr int32_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_nameUtf8Len() const {
  return this->___nameUtf8Len;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_set_nameUtf8Len(int32_t value) {
  this->___nameUtf8Len = value;
}
constexpr uint8_t*& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_nameUtf8() {
  return this->___nameUtf8;
}
constexpr uint8_t* const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_get_nameUtf8() const {
  return this->___nameUtf8;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::__cordl_internal_set_nameUtf8(uint8_t* value) {
  this->___nameUtf8 = value;
}
inline ::Unity::Profiling::ProfilerCategory Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::get_Category() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(), { "get_Category", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerCategory>(*this, ___internal_method);
}
inline ::Unity::Profiling::LowLevel::MarkerFlags Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::get_Flags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(), { "get_Flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::MarkerFlags>(*this, ___internal_method);
}
inline ::StringW Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::get_Name() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "category", ty: "::Unity::Profiling::ProfilerCategory", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty:
// "::Unity::Profiling::LowLevel::MarkerFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "dataType", ty: "::Unity::Profiling::LowLevel::ProfilerMarkerDataType", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "unitType", ty: "::Unity::Profiling::ProfilerMarkerDataUnit", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved0", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "nameUtf8Len", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameUtf8", ty: "uint8_t*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::ProfilerRecorderDescription(::Unity::Profiling::ProfilerCategory category, ::Unity::Profiling::LowLevel::MarkerFlags flags,
                                                                                                         ::Unity::Profiling::LowLevel::ProfilerMarkerDataType dataType,
                                                                                                         ::Unity::Profiling::ProfilerMarkerDataUnit unitType, int32_t reserved0, int32_t nameUtf8Len,
                                                                                                         uint8_t* nameUtf8) noexcept {
  this->category = category;
  this->flags = flags;
  this->dataType = dataType;
  this->unitType = unitType;
  this->reserved0 = reserved0;
  this->nameUtf8Len = nameUtf8Len;
  this->nameUtf8 = nameUtf8;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription::ProfilerRecorderDescription() {}
