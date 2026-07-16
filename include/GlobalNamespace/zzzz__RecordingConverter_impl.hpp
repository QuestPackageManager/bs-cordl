#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingConverter::*)(::GlobalNamespace::IBeatSaberLogger*)>(&::GlobalNamespace::RecordingConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e899c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingConverter*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingConverter.SaveToOldFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingConverter::*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(
    &::GlobalNamespace::RecordingConverter::SaveToOldFormat)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58e9aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingConverter*>(),
                                                             { "SaveToOldFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::RecordingConverter::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::GlobalNamespace::IBeatSaberLogger* const& GlobalNamespace::RecordingConverter::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void GlobalNamespace::RecordingConverter::__cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____logger = value;
}
inline void GlobalNamespace::RecordingConverter::_ctor(::GlobalNamespace::IBeatSaberLogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingConverter*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline void GlobalNamespace::RecordingConverter::SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingConverter*>(),
                                                           { "SaveToOldFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, data);
}
inline ::GlobalNamespace::RecordingConverter* GlobalNamespace::RecordingConverter::New_ctor(::GlobalNamespace::IBeatSaberLogger* logger) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingConverter*>(logger));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingConverter::RecordingConverter() {}
