#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PosesRecordingData__TransformsKeyframe._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PosesRecordingData__TransformsKeyframe::*)(
    ::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*>, float_t)>(&::GlobalNamespace::__PosesRecordingData__TransformsKeyframe::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x245dbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*>& GlobalNamespace::__PosesRecordingData__TransformsKeyframe::__cordl_internal_get_poses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poses;
}
constexpr ::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> const& GlobalNamespace::__PosesRecordingData__TransformsKeyframe::__cordl_internal_get_poses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poses;
}
constexpr void GlobalNamespace::__PosesRecordingData__TransformsKeyframe::__cordl_internal_set_poses(::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__PosesRecordingData__TransformsKeyframe::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::__PosesRecordingData__TransformsKeyframe::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::__PosesRecordingData__TransformsKeyframe::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
inline ::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*
GlobalNamespace::__PosesRecordingData__TransformsKeyframe::New_ctor(::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> poses, float_t time) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>(poses, time));
}
inline void GlobalNamespace::__PosesRecordingData__TransformsKeyframe::_ctor(::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> poses, float_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poses, time);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PosesRecordingData__TransformsKeyframe::__PosesRecordingData__TransformsKeyframe() {}
//  Writing Method size for method: ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::*)(
    float_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x245de2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x245de7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_fieldOfVision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldOfVision;
}
constexpr float_t const& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_fieldOfVision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldOfVision;
}
constexpr void GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_set_fieldOfVision(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldOfVision = value;
}
constexpr float_t& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_nearClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearClip;
}
constexpr float_t const& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_nearClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearClip;
}
constexpr void GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_set_nearClip(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nearClip = value;
}
constexpr float_t& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_farClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___farClip;
}
constexpr float_t const& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_farClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___farClip;
}
constexpr void GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_set_farClip(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___farClip = value;
}
constexpr float_t& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_hmdOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdOffset;
}
constexpr float_t const& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_hmdOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdOffset;
}
constexpr void GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_set_hmdOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hmdOffset = value;
}
constexpr float_t& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_nearOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearOffset;
}
constexpr float_t const& GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_get_nearOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearOffset;
}
constexpr void GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__cordl_internal_set_nearOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nearOffset = value;
}
inline ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*
GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>(fieldOfVision, nearClip, farClip, hmdOffset, nearOffset));
}
inline void GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fieldOfVision, nearClip, farClip, hmdOffset, nearOffset);
}
inline ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::New_ctor(::UnityEngine::Camera* camera) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>(camera));
}
inline void GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::_ctor(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration::__PosesRecordingData__ExternalCameraCalibration() {}
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesRecordingData::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*)>(&::GlobalNamespace::PosesRecordingData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x245db10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesRecordingData::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>*,
    ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*)>(&::GlobalNamespace::PosesRecordingData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x245dd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData.AddKeyframe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesRecordingData::*)(::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*)>(
    &::GlobalNamespace::PosesRecordingData::AddKeyframe)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x245dbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), "AddKeyframe", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PosesRecordingData::*)(::StringW)>(&::GlobalNamespace::PosesRecordingData::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x245dd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecordingData.ObjectIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PosesRecordingData::*)(::StringW)>(&::GlobalNamespace::PosesRecordingData::ObjectIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x245ddd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), "ObjectIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::PosesRecordingData::__cordl_internal_get_objectIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectIds;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::PosesRecordingData::__cordl_internal_get_objectIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectIds;
}
constexpr void GlobalNamespace::PosesRecordingData::__cordl_internal_set_objectIds(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>*& GlobalNamespace::PosesRecordingData::__cordl_internal_get_keyframes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyframes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>*> const&
GlobalNamespace::PosesRecordingData::__cordl_internal_get_keyframes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyframes;
}
constexpr void GlobalNamespace::PosesRecordingData::__cordl_internal_set_keyframes(::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyframes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*& GlobalNamespace::PosesRecordingData::__cordl_internal_get_externalCameraCalibration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCameraCalibration;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*> const&
GlobalNamespace::PosesRecordingData::__cordl_internal_get_externalCameraCalibration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCameraCalibration;
}
constexpr void GlobalNamespace::PosesRecordingData::__cordl_internal_set_externalCameraCalibration(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___externalCameraCalibration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PosesRecordingData* GlobalNamespace::PosesRecordingData::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
                                                                                            ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PosesRecordingData*>(objectIds, externalCameraCalibration));
}
inline void GlobalNamespace::PosesRecordingData::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
                                                       ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectIds, externalCameraCalibration);
}
inline ::GlobalNamespace::PosesRecordingData*
GlobalNamespace::PosesRecordingData::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
                                              ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* keyframes,
                                              ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PosesRecordingData*>(objectIds, keyframes, externalCameraCalibration));
}
inline void GlobalNamespace::PosesRecordingData::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
                                                       ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* keyframes,
                                                       ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectIds, keyframes, externalCameraCalibration);
}
inline void GlobalNamespace::PosesRecordingData::AddKeyframe(::GlobalNamespace::__PosesRecordingData__TransformsKeyframe* keyframe) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), "AddKeyframe", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyframe);
}
inline bool GlobalNamespace::PosesRecordingData::Contains(::StringW objectId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectId);
}
inline int32_t GlobalNamespace::PosesRecordingData::ObjectIndex(::StringW objectId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesRecordingData*>::get(), "ObjectIndex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, objectId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecordingData::PosesRecordingData() {}
