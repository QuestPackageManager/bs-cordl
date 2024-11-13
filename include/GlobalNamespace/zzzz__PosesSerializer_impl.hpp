#pragma once
// IWYU pragma private; include "GlobalNamespace/PosesSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingInfoSaveData_def.hpp"
#include "GlobalNamespace/zzzz__RecordingConverter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesSerializer::*)(::GlobalNamespace::IBeatSaberLogger*)>(
    &::GlobalNamespace::PosesSerializer::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3abd49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveInfoFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(&::GlobalNamespace::PosesSerializer::SaveInfoFile)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3abd53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveInfoFile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveDataFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(&::GlobalNamespace::PosesSerializer::SaveDataFile)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x3abd640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveDataFile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveRecordingIntoDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(
    &::GlobalNamespace::PosesSerializer::SaveRecordingIntoDirectory)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x3abd9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveRecordingIntoDirectory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.LoadInfoFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PosesRecordingInfoSaveData* (::GlobalNamespace::PosesSerializer::*)(::StringW)>(
    &::GlobalNamespace::PosesSerializer::LoadInfoFile)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x3abdc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "LoadInfoFile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.LoadDataFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* (
    ::GlobalNamespace::PosesSerializer::*)(::StringW)>(&::GlobalNamespace::PosesSerializer::LoadDataFile)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x3abdddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "LoadDataFile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.LoadRecordingFromDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PosesRecordingData* (::GlobalNamespace::PosesSerializer::*)(::StringW)>(
    &::GlobalNamespace::PosesSerializer::LoadRecordingFromDirectory)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x3abe3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "LoadRecordingFromDirectory",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveToOldFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(
    &::GlobalNamespace::PosesSerializer::SaveToOldFormat)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3abe6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveToOldFormat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*, bool)>(
    &::GlobalNamespace::PosesSerializer::SaveRecording)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3abe7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveRecording", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.LoadRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PosesRecordingData* (::GlobalNamespace::PosesSerializer::*)(::StringW)>(
    &::GlobalNamespace::PosesSerializer::LoadRecording)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3abe7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "LoadRecording", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.RecordingExists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PosesSerializer::*)(::StringW)>(&::GlobalNamespace::PosesSerializer::RecordingExists)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x3abe8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "RecordingExists", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.RecordingCanBeCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PosesSerializer::*)(::StringW)>(
    &::GlobalNamespace::PosesSerializer::RecordingCanBeCreated)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x3abec84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "RecordingCanBeCreated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPosesSerializer"
constexpr GlobalNamespace::PosesSerializer::operator ::GlobalNamespace::IPosesSerializer*() noexcept {
  return static_cast<::GlobalNamespace::IPosesSerializer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPosesSerializer"
constexpr ::GlobalNamespace::IPosesSerializer* GlobalNamespace::PosesSerializer::i___GlobalNamespace__IPosesSerializer() noexcept {
  return static_cast<::GlobalNamespace::IPosesSerializer*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::PosesSerializer::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& GlobalNamespace::PosesSerializer::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void GlobalNamespace::PosesSerializer::__cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingConverter*& GlobalNamespace::PosesSerializer::__cordl_internal_get__recordingConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingConverter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingConverter*> const& GlobalNamespace::PosesSerializer::__cordl_internal_get__recordingConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingConverter;
}
constexpr void GlobalNamespace::PosesSerializer::__cordl_internal_set__recordingConverter(::GlobalNamespace::RecordingConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingConverter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PosesSerializer* GlobalNamespace::PosesSerializer::New_ctor(::GlobalNamespace::IBeatSaberLogger* logger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PosesSerializer*>(logger));
}
inline void GlobalNamespace::PosesSerializer::_ctor(::GlobalNamespace::IBeatSaberLogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger);
}
inline void GlobalNamespace::PosesSerializer::SaveInfoFile(::StringW filePath, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveInfoFile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filePath, data);
}
inline void GlobalNamespace::PosesSerializer::SaveDataFile(::StringW filePath, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveDataFile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filePath, data);
}
inline void GlobalNamespace::PosesSerializer::SaveRecordingIntoDirectory(::StringW path, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveRecordingIntoDirectory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, data);
}
inline ::GlobalNamespace::PosesRecordingInfoSaveData* GlobalNamespace::PosesSerializer::LoadInfoFile(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "LoadInfoFile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingInfoSaveData*, false>(this, ___internal_method, filePath);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* GlobalNamespace::PosesSerializer::LoadDataFile(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "LoadDataFile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>*, false>(this, ___internal_method, filePath);
}
inline ::GlobalNamespace::PosesRecordingData* GlobalNamespace::PosesSerializer::LoadRecordingFromDirectory(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "LoadRecordingFromDirectory",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingData*, false>(this, ___internal_method, path);
}
inline void GlobalNamespace::PosesSerializer::SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveToOldFormat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, data);
}
inline void GlobalNamespace::PosesSerializer::SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "SaveRecording", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, data, saveToOldFormat);
}
inline ::GlobalNamespace::PosesRecordingData* GlobalNamespace::PosesSerializer::LoadRecording(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "LoadRecording", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingData*, false>(this, ___internal_method, path);
}
inline bool GlobalNamespace::PosesSerializer::RecordingExists(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "RecordingExists", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, path);
}
inline bool GlobalNamespace::PosesSerializer::RecordingCanBeCreated(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesSerializer*>::get(), "RecordingCanBeCreated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesSerializer::PosesSerializer() {}
