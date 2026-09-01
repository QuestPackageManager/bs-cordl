#pragma once
// IWYU pragma private; include "UnityEngine\SpatialTracking\TrackedPoseDriverDataDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriverDataDescription_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriverDataDescription_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
// Ctor Parameters [CppParam { name: "PoseNames", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Poses", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData::TrackedPoseDriverDataDescription_PoseData(
    ::System::Collections::Generic::List_1<::StringW>* PoseNames, ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>* Poses) noexcept {
  this->PoseNames = PoseNames;
  this->Poses = Poses;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData::TrackedPoseDriverDataDescription_PoseData() {}
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb6680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::setStaticF_DeviceData(
    ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>*, "DeviceData",
                                    ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>*
UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::getStaticF_DeviceData() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>*, "DeviceData",
                                           ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>();
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription* UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::TrackedPoseDriverDataDescription() {}
