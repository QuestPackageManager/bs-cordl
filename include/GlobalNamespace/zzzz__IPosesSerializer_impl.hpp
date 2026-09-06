#pragma once
// IWYU pragma private; include "GlobalNamespace/IPosesSerializer.hpp"
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.SaveToOldFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IPosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(
    &::GlobalNamespace::IPosesSerializer::SaveToOldFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.SaveRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IPosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*, bool)>(
    &::GlobalNamespace::IPosesSerializer::SaveRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.LoadRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PosesRecordingData* (::GlobalNamespace::IPosesSerializer::*)(::StringW)>(
    &::GlobalNamespace::IPosesSerializer::LoadRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.RecordingExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IPosesSerializer::*)(::StringW)>(&::GlobalNamespace::IPosesSerializer::RecordingExists)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.RecordingCanBeCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IPosesSerializer::*)(::StringW)>(&::GlobalNamespace::IPosesSerializer::RecordingCanBeCreated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 4 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IPosesSerializer::SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, data);
}
inline void GlobalNamespace::IPosesSerializer::SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, data, saveToOldFormat);
}
inline ::GlobalNamespace::PosesRecordingData* GlobalNamespace::IPosesSerializer::LoadRecording(::StringW path) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingData*>(this, ___internal_method, path);
}
inline bool GlobalNamespace::IPosesSerializer::RecordingExists(::StringW path) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline bool GlobalNamespace::IPosesSerializer::RecordingCanBeCreated(::StringW path) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IPosesSerializer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
