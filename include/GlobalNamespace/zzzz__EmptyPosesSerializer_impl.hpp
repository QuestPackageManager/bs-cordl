#pragma once
// IWYU pragma private; include "GlobalNamespace/EmptyPosesSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EmptyPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EmptyPosesSerializer.SaveToOldFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmptyPosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(
    &::GlobalNamespace::EmptyPosesSerializer::SaveToOldFormat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e5760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(),
                                                             { "SaveToOldFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPosesSerializer.SaveRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmptyPosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*, bool)>(
    &::GlobalNamespace::EmptyPosesSerializer::SaveRecording)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e5764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(),
                                                { "SaveRecording", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPosesSerializer.LoadRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PosesRecordingData* (::GlobalNamespace::EmptyPosesSerializer::*)(::StringW)>(
    &::GlobalNamespace::EmptyPosesSerializer::LoadRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e5768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(), { "LoadRecording", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPosesSerializer.RecordingExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EmptyPosesSerializer::*)(::StringW)>(&::GlobalNamespace::EmptyPosesSerializer::RecordingExists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e5770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(), { "RecordingExists", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPosesSerializer.RecordingCanBeCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EmptyPosesSerializer::*)(::StringW)>(&::GlobalNamespace::EmptyPosesSerializer::RecordingCanBeCreated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e5778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(), { "RecordingCanBeCreated", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPosesSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmptyPosesSerializer::*)()>(&::GlobalNamespace::EmptyPosesSerializer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e5780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EmptyPosesSerializer::SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(),
                                                           { "SaveToOldFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, data);
}
inline void GlobalNamespace::EmptyPosesSerializer::SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(),
                                              { "SaveRecording", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, data, saveToOldFormat);
}
inline ::GlobalNamespace::PosesRecordingData* GlobalNamespace::EmptyPosesSerializer::LoadRecording(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(), { "LoadRecording", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingData*>(this, ___internal_method, path);
}
inline bool GlobalNamespace::EmptyPosesSerializer::RecordingExists(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(), { "RecordingExists", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline bool GlobalNamespace::EmptyPosesSerializer::RecordingCanBeCreated(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(), { "RecordingCanBeCreated", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline void GlobalNamespace::EmptyPosesSerializer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EmptyPosesSerializer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EmptyPosesSerializer* GlobalNamespace::EmptyPosesSerializer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EmptyPosesSerializer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IPosesSerializer"
constexpr GlobalNamespace::EmptyPosesSerializer::operator ::GlobalNamespace::IPosesSerializer*() noexcept {
  return static_cast<::GlobalNamespace::IPosesSerializer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPosesSerializer"
constexpr ::GlobalNamespace::IPosesSerializer* GlobalNamespace::EmptyPosesSerializer::i___GlobalNamespace__IPosesSerializer() noexcept {
  return static_cast<::GlobalNamespace::IPosesSerializer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EmptyPosesSerializer::EmptyPosesSerializer() {}
