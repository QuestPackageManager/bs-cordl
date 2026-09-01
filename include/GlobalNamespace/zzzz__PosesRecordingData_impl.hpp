#pragma once
// IWYU pragma private; include "GlobalNamespace\PosesRecordingData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData_TransformsKeyframe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingData_TransformsKeyframe::*)(::ArrayW<::UnityEngine::Pose>, float_t)>(
    &::GlobalNamespace::PosesRecordingData_TransformsKeyframe::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ea210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Pose>& GlobalNamespace::PosesRecordingData_TransformsKeyframe::__cordl_internal_get_poses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poses;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& GlobalNamespace::PosesRecordingData_TransformsKeyframe::__cordl_internal_get_poses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poses;
}
constexpr void GlobalNamespace::PosesRecordingData_TransformsKeyframe::__cordl_internal_set_poses(::ArrayW<::UnityEngine::Pose> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___poses = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingData_TransformsKeyframe::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::PosesRecordingData_TransformsKeyframe::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::PosesRecordingData_TransformsKeyframe::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
inline void GlobalNamespace::PosesRecordingData_TransformsKeyframe::_ctor(::ArrayW<::UnityEngine::Pose> poses, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poses, time);
}
inline ::GlobalNamespace::PosesRecordingData_TransformsKeyframe* GlobalNamespace::PosesRecordingData_TransformsKeyframe::New_ctor(::ArrayW<::UnityEngine::Pose> poses, float_t time) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>(poses, time));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingData_TransformsKeyframe::PosesRecordingData_TransformsKeyframe() {}
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::*)(float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58ea3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>(),
                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58e7c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_fieldOfVision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldOfVision;
}
constexpr float_t const& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_fieldOfVision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldOfVision;
}
constexpr void GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_set_fieldOfVision(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldOfVision = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_nearClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearClip;
}
constexpr float_t const& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_nearClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearClip;
}
constexpr void GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_set_nearClip(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nearClip = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_farClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___farClip;
}
constexpr float_t const& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_farClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___farClip;
}
constexpr void GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_set_farClip(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___farClip = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_hmdOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdOffset;
}
constexpr float_t const& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_hmdOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdOffset;
}
constexpr void GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_set_hmdOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hmdOffset = value;
}
constexpr float_t& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_nearOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearOffset;
}
constexpr float_t const& GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_get_nearOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearOffset;
}
constexpr void GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::__cordl_internal_set_nearOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nearOffset = value;
}
inline void GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>(),
                                       { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldOfVision, nearClip, farClip, hmdOffset, nearOffset);
}
inline void GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::_ctor(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*
GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>(fieldOfVision, nearClip, farClip, hmdOffset, nearOffset));
}
inline ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::New_ctor(::UnityEngine::Camera* camera) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>(camera));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration::PosesRecordingData_ExternalCameraCalibration() {}
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingData::*)(::ArrayW<::StringW>, ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*)>(
    &::GlobalNamespace::PosesRecordingData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58ea188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingData::*)(
    ::ArrayW<::StringW>, ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>*, ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*)>(
    &::GlobalNamespace::PosesRecordingData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ea360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>*>(),
                                ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData.AddKeyframe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecordingData::*)(::GlobalNamespace::PosesRecordingData_TransformsKeyframe*)>(
    &::GlobalNamespace::PosesRecordingData::AddKeyframe)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58ea21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(),
                                                                                           { "AddKeyframe", {}, { ::i2c::type_of<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PosesRecordingData::*)(::StringW)>(&::GlobalNamespace::PosesRecordingData::Contains)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58e7c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData.ObjectIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PosesRecordingData::*)(::StringW)>(&::GlobalNamespace::PosesRecordingData::ObjectIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58ea36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(), { "ObjectIndex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::PosesRecordingData::__cordl_internal_get_objectIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectIds;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::PosesRecordingData::__cordl_internal_get_objectIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectIds;
}
constexpr void GlobalNamespace::PosesRecordingData::__cordl_internal_set_objectIds(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectIds = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>*& GlobalNamespace::PosesRecordingData::__cordl_internal_get_keyframes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyframes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>* const& GlobalNamespace::PosesRecordingData::__cordl_internal_get_keyframes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyframes;
}
constexpr void GlobalNamespace::PosesRecordingData::__cordl_internal_set_keyframes(::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyframes = value;
}
constexpr ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*& GlobalNamespace::PosesRecordingData::__cordl_internal_get_externalCameraCalibration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCameraCalibration;
}
constexpr ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* const& GlobalNamespace::PosesRecordingData::__cordl_internal_get_externalCameraCalibration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCameraCalibration;
}
constexpr void GlobalNamespace::PosesRecordingData::__cordl_internal_set_externalCameraCalibration(::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalCameraCalibration = value;
}
inline void GlobalNamespace::PosesRecordingData::_ctor(::ArrayW<::StringW> objectIds, ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* externalCameraCalibration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectIds, externalCameraCalibration);
}
inline void GlobalNamespace::PosesRecordingData::_ctor(::ArrayW<::StringW> objectIds, ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>* keyframes,
                                                       ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* externalCameraCalibration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>*>(),
                                           ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectIds, keyframes, externalCameraCalibration);
}
inline void GlobalNamespace::PosesRecordingData::AddKeyframe(::GlobalNamespace::PosesRecordingData_TransformsKeyframe* keyframe) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(),
                                                                                         { "AddKeyframe", {}, { ::i2c::type_of<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyframe);
}
inline bool GlobalNamespace::PosesRecordingData::Contains(::StringW objectId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectId);
}
inline int32_t GlobalNamespace::PosesRecordingData::ObjectIndex(::StringW objectId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecordingData*>(), { "ObjectIndex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, objectId);
}
inline ::GlobalNamespace::PosesRecordingData* GlobalNamespace::PosesRecordingData::New_ctor(::ArrayW<::StringW> objectIds,
                                                                                            ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* externalCameraCalibration) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingData*>(objectIds, externalCameraCalibration));
}
inline ::GlobalNamespace::PosesRecordingData*
GlobalNamespace::PosesRecordingData::New_ctor(::ArrayW<::StringW> objectIds, ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>* keyframes,
                                              ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* externalCameraCalibration) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecordingData*>(objectIds, keyframes, externalCameraCalibration));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingData::PosesRecordingData() {}
