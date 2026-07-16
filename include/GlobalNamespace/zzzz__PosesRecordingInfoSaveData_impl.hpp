#pragma once
// IWYU pragma private; include "GlobalNamespace/PosesRecordingInfoSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingInfoSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingInfoSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData.get_fieldOfVision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::*)()>(
    &::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_fieldOfVision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e8900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_fieldOfVision", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData.get_nearClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::*)()>(
    &::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_nearClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e8908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_nearClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData.get_farClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::*)()>(
    &::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_farClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e8910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_farClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData.get_hmdOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::*)()>(
    &::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_hmdOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e8918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_hmdOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData.get_nearOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::*)()>(
    &::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_nearOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e8920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_nearOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::*)(float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58e8928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(),
                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__fieldOfVision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fieldOfVision;
}
constexpr float_t const& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__fieldOfVision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fieldOfVision;
}
constexpr void GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set__fieldOfVision(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fieldOfVision = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__nearClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nearClip;
}
constexpr float_t const& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__nearClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nearClip;
}
constexpr void GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set__nearClip(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nearClip = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__farClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____farClip;
}
constexpr float_t const& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__farClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____farClip;
}
constexpr void GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set__farClip(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____farClip = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__hmdOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdOffset;
}
constexpr float_t const& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__hmdOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdOffset;
}
constexpr void GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set__hmdOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hmdOffset = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__nearOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nearOffset;
}
constexpr float_t const& GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get__nearOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nearOffset;
}
constexpr void GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set__nearOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nearOffset = value;
}
inline float_t GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_fieldOfVision() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_fieldOfVision", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_nearClip() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_nearClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_farClip() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_farClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_hmdOffset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_hmdOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::get_nearOffset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), { "get_nearOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(),
                                       { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldOfVision, nearClip, farClip, hmdOffset, nearOffset);
}
inline ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*
GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(fieldOfVision, nearClip, farClip, hmdOffset, nearOffset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData() {}
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PosesRecordingInfoSaveData::*)()>(&::GlobalNamespace::PosesRecordingInfoSaveData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e8874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData.get_objectIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::PosesRecordingInfoSaveData::*)()>(&::GlobalNamespace::PosesRecordingInfoSaveData::get_objectIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e887c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(), { "get_objectIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData.get_externalCameraCalibration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* (::GlobalNamespace::PosesRecordingInfoSaveData::*)()>(
    &::GlobalNamespace::PosesRecordingInfoSaveData::get_externalCameraCalibration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e8884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(), { "get_externalCameraCalibration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData.get_dataFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PosesRecordingInfoSaveData::*)()>(&::GlobalNamespace::PosesRecordingInfoSaveData::get_dataFileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e888c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(), { "get_dataFileName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingInfoSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingInfoSaveData::*)(
    ::ArrayW<::StringW>, ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*, ::StringW)>(&::GlobalNamespace::PosesRecordingInfoSaveData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58e8894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_get__objectIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectIds;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_get__objectIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectIds;
}
constexpr void GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_set__objectIds(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectIds = value;
}
constexpr ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*& GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_get__externalCameraCalibration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCameraCalibration;
}
constexpr ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* const& GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_get__externalCameraCalibration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCameraCalibration;
}
constexpr void GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_set__externalCameraCalibration(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____externalCameraCalibration = value;
}
constexpr ::StringW& GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_get__dataFileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataFileName;
}
constexpr ::StringW const& GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_get__dataFileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataFileName;
}
constexpr void GlobalNamespace::PosesRecordingInfoSaveData::__cordl_internal_set__dataFileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataFileName = value;
}
inline ::StringW GlobalNamespace::PosesRecordingInfoSaveData::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::StringW> GlobalNamespace::PosesRecordingInfoSaveData::get_objectIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(), { "get_objectIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* GlobalNamespace::PosesRecordingInfoSaveData::get_externalCameraCalibration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(), { "get_externalCameraCalibration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PosesRecordingInfoSaveData::get_dataFileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(), { "get_dataFileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PosesRecordingInfoSaveData::_ctor(::ArrayW<::StringW> objectIds,
                                                               ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration, ::StringW dataFileName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingInfoSaveData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::StringW>>(),
                                                               ::i2c::type_of<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectIds, externalCameraCalibration, dataFileName);
}
inline ::GlobalNamespace::PosesRecordingInfoSaveData*
GlobalNamespace::PosesRecordingInfoSaveData::New_ctor(::ArrayW<::StringW> objectIds, ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration,
                                                      ::StringW dataFileName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingInfoSaveData*>(objectIds, externalCameraCalibration, dataFileName));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingInfoSaveData::PosesRecordingInfoSaveData() {}
