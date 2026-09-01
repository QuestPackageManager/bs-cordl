#pragma once
// IWYU pragma private; include "GlobalNamespace\PosesSerializer.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesSerializer::*)(::GlobalNamespace::IBeatSaberLogger*)>(&::GlobalNamespace::PosesSerializer::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58ea4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveInfoFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(&::GlobalNamespace::PosesSerializer::SaveInfoFile)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x58ea544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(),
                                                             { "SaveInfoFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveDataFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(&::GlobalNamespace::PosesSerializer::SaveDataFile)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x58ea680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(),
                                                             { "SaveDataFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveRecordingIntoDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(
    &::GlobalNamespace::PosesSerializer::SaveRecordingIntoDirectory)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x58ea9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(),
                                                             { "SaveRecordingIntoDirectory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.LoadInfoFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PosesRecordingInfoSaveData* (::GlobalNamespace::PosesSerializer::*)(::StringW)>(
    &::GlobalNamespace::PosesSerializer::LoadInfoFile)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x58eac5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "LoadInfoFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.LoadDataFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>* (
    ::GlobalNamespace::PosesSerializer::*)(::StringW)>(&::GlobalNamespace::PosesSerializer::LoadDataFile)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x58eadc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "LoadDataFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.LoadRecordingFromDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PosesRecordingData* (::GlobalNamespace::PosesSerializer::*)(::StringW)>(
    &::GlobalNamespace::PosesSerializer::LoadRecordingFromDirectory)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x58eb350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "LoadRecordingFromDirectory", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveToOldFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(
    &::GlobalNamespace::PosesSerializer::SaveToOldFormat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58eb62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(),
                                                             { "SaveToOldFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.SaveRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData*, bool)>(
    &::GlobalNamespace::PosesSerializer::SaveRecording)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58eb740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(),
                                                { "SaveRecording", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.LoadRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PosesRecordingData* (::GlobalNamespace::PosesSerializer::*)(::StringW)>(&::GlobalNamespace::PosesSerializer::LoadRecording)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58eb77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "LoadRecording", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.RecordingExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PosesSerializer::*)(::StringW)>(&::GlobalNamespace::PosesSerializer::RecordingExists)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x58eb8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "RecordingExists", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesSerializer.RecordingCanBeCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PosesSerializer::*)(::StringW)>(&::GlobalNamespace::PosesSerializer::RecordingCanBeCreated)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x58ebc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "RecordingCanBeCreated", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::PosesSerializer::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::GlobalNamespace::IBeatSaberLogger* const& GlobalNamespace::PosesSerializer::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void GlobalNamespace::PosesSerializer::__cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____logger = value;
}
constexpr ::GlobalNamespace::RecordingConverter*& GlobalNamespace::PosesSerializer::__cordl_internal_get__recordingConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingConverter;
}
constexpr ::GlobalNamespace::RecordingConverter* const& GlobalNamespace::PosesSerializer::__cordl_internal_get__recordingConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingConverter;
}
constexpr void GlobalNamespace::PosesSerializer::__cordl_internal_set__recordingConverter(::GlobalNamespace::RecordingConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordingConverter = value;
}
inline void GlobalNamespace::PosesSerializer::_ctor(::GlobalNamespace::IBeatSaberLogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline void GlobalNamespace::PosesSerializer::SaveInfoFile(::StringW filePath, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "SaveInfoFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filePath, data);
}
inline void GlobalNamespace::PosesSerializer::SaveDataFile(::StringW filePath, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "SaveDataFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filePath, data);
}
inline void GlobalNamespace::PosesSerializer::SaveRecordingIntoDirectory(::StringW path, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(),
                                                           { "SaveRecordingIntoDirectory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, data);
}
inline ::GlobalNamespace::PosesRecordingInfoSaveData* GlobalNamespace::PosesSerializer::LoadInfoFile(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "LoadInfoFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingInfoSaveData*>(this, ___internal_method, filePath);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>* GlobalNamespace::PosesSerializer::LoadDataFile(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "LoadDataFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>*>(this, ___internal_method, filePath);
}
inline ::GlobalNamespace::PosesRecordingData* GlobalNamespace::PosesSerializer::LoadRecordingFromDirectory(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "LoadRecordingFromDirectory", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingData*>(this, ___internal_method, path);
}
inline void GlobalNamespace::PosesSerializer::SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(),
                                                           { "SaveToOldFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, data);
}
inline void GlobalNamespace::PosesSerializer::SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(),
                                              { "SaveRecording", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, data, saveToOldFormat);
}
inline ::GlobalNamespace::PosesRecordingData* GlobalNamespace::PosesSerializer::LoadRecording(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "LoadRecording", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingData*>(this, ___internal_method, path);
}
inline bool GlobalNamespace::PosesSerializer::RecordingExists(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "RecordingExists", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline bool GlobalNamespace::PosesSerializer::RecordingCanBeCreated(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesSerializer*>(), { "RecordingCanBeCreated", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline ::GlobalNamespace::PosesSerializer* GlobalNamespace::PosesSerializer::New_ctor(::GlobalNamespace::IBeatSaberLogger* logger) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesSerializer*>(logger));
}
/// @brief Convert operator to "::GlobalNamespace::IPosesSerializer"
constexpr GlobalNamespace::PosesSerializer::operator ::GlobalNamespace::IPosesSerializer*() noexcept {
  return static_cast<::GlobalNamespace::IPosesSerializer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPosesSerializer"
constexpr ::GlobalNamespace::IPosesSerializer* GlobalNamespace::PosesSerializer::i___GlobalNamespace__IPosesSerializer() noexcept {
  return static_cast<::GlobalNamespace::IPosesSerializer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesSerializer::PosesSerializer() {}
