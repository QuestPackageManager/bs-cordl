#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriverDataDescription.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49193b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::setStaticF_DeviceData(
    ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>*, "DeviceData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>*
UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::getStaticF_DeviceData() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>*, "DeviceData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>::get>();
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription* UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::TrackedPoseDriverDataDescription() {}
