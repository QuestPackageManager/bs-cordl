#pragma once
// IWYU pragma private; include "GlobalNamespace/PosesRecordingSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingSaveData_PoseSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingSaveData_PoseSaveData::*)(float_t, float_t, float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::PosesRecordingSaveData_PoseSaveData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58e8844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_posX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posX;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_posX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posX;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_set_posX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___posX = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_posY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posY;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_posY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posY;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_set_posY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___posY = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_posZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posZ;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_posZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posZ;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_set_posZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___posZ = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_rotX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotX;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_rotX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotX;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_set_rotX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotX = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_rotY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotY;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_rotY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotY;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_set_rotY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotY = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_rotZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotZ;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_rotZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotZ;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_set_rotZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotZ = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_rotW() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotW;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_get_rotW() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotW;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_PoseSaveData::__cordl_internal_set_rotW(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotW = value;
}
inline void GlobalNamespace::PosesRecordingSaveData_PoseSaveData::_ctor(float_t posX, float_t posY, float_t posZ, float_t rotX, float_t rotY, float_t rotZ, float_t rotW) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, posX, posY, posZ, rotX, rotY, rotZ, rotW);
}
inline ::GlobalNamespace::PosesRecordingSaveData_PoseSaveData* GlobalNamespace::PosesRecordingSaveData_PoseSaveData::New_ctor(float_t posX, float_t posY, float_t posZ, float_t rotX, float_t rotY,
                                                                                                                              float_t rotZ, float_t rotW) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>(posX, posY, posZ, rotX, rotY, rotZ, rotW));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingSaveData_PoseSaveData::PosesRecordingSaveData_PoseSaveData() {}
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::*)(
    ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>, float_t)>(&::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e8858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>& GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::__cordl_internal_get_poses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poses;
}
constexpr ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*> const& GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::__cordl_internal_get_poses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poses;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::__cordl_internal_set_poses(::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___poses = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
inline void GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::_ctor(::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*> poses, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poses, time);
}
inline ::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*
GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::New_ctor(::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*> poses, float_t time) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>(poses, time));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe::PosesRecordingSaveData_TransformsSaveKeyframe() {}
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::*)(float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58e8864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*>(),
                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_fieldOfVision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldOfVision;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_fieldOfVision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldOfVision;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set_fieldOfVision(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldOfVision = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_nearClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearClip;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_nearClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearClip;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set_nearClip(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nearClip = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_farClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___farClip;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_farClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___farClip;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set_farClip(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___farClip = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_hmdOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdOffset;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_hmdOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdOffset;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set_hmdOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hmdOffset = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_nearOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearOffset;
}
constexpr float_t const& GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_get_nearOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearOffset;
}
constexpr void GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::__cordl_internal_set_nearOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nearOffset = value;
}
inline void GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*>(),
                                       { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldOfVision, nearClip, farClip, hmdOffset, nearOffset);
}
inline ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*
GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*>(fieldOfVision, nearClip, farClip, hmdOffset, nearOffset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData::PosesRecordingSaveData_ExternalCameraCalibrationSaveData() {}
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingSaveData::*)(
    ::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>, ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*)>(
    &::GlobalNamespace::PosesRecordingSaveData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e8838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingSaveData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::PosesRecordingSaveData::__cordl_internal_get_objectIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectIds;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::PosesRecordingSaveData::__cordl_internal_get_objectIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectIds;
}
constexpr void GlobalNamespace::PosesRecordingSaveData::__cordl_internal_set_objectIds(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectIds = value;
}
constexpr ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>& GlobalNamespace::PosesRecordingSaveData::__cordl_internal_get_keyframes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyframes;
}
constexpr ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*> const& GlobalNamespace::PosesRecordingSaveData::__cordl_internal_get_keyframes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyframes;
}
constexpr void GlobalNamespace::PosesRecordingSaveData::__cordl_internal_set_keyframes(::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyframes = value;
}
constexpr ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*& GlobalNamespace::PosesRecordingSaveData::__cordl_internal_get_externalCameraCalibration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCameraCalibration;
}
constexpr ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* const& GlobalNamespace::PosesRecordingSaveData::__cordl_internal_get_externalCameraCalibration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCameraCalibration;
}
constexpr void GlobalNamespace::PosesRecordingSaveData::__cordl_internal_set_externalCameraCalibration(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalCameraCalibration = value;
}
inline void GlobalNamespace::PosesRecordingSaveData::_ctor(::ArrayW<::StringW> objectIds, ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*> keyframes,
                                                           ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingSaveData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>>(),
                                                               ::i2c::type_of<::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectIds, keyframes, externalCameraCalibration);
}
inline ::GlobalNamespace::PosesRecordingSaveData*
GlobalNamespace::PosesRecordingSaveData::New_ctor(::ArrayW<::StringW> objectIds, ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*> keyframes,
                                                  ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingSaveData*>(objectIds, keyframes, externalCameraCalibration));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingSaveData::PosesRecordingSaveData() {}
