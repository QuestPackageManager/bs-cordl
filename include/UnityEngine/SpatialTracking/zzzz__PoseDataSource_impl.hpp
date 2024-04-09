#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataSource_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::UnityEngine::SpatialTracking::PoseDataSource.GetNodePoseData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (*)(::UnityEngine::XR::XRNode, ByRef<::UnityEngine::Pose>)>(
    &::UnityEngine::SpatialTracking::PoseDataSource::GetNodePoseData)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x3265b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource*>::get(), "GetNodePoseData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::PoseDataSource.TryGetDataFromSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose, ByRef<::UnityEngine::Pose>)>(
    &::UnityEngine::SpatialTracking::PoseDataSource::TryGetDataFromSource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3265dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource*>::get(), "TryGetDataFromSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::PoseDataSource.GetDataFromSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (*)(
    ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose, ByRef<::UnityEngine::Pose>)>(&::UnityEngine::SpatialTracking::PoseDataSource::GetDataFromSource)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x3265e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource*>::get(), "GetDataFromSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::SpatialTracking::PoseDataSource::setStaticF_nodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*, "nodeStates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* UnityEngine::SpatialTracking::PoseDataSource::getStaticF_nodeStates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*, "nodeStates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource*>::get>();
}
inline ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::PoseDataSource::GetNodePoseData(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> resultPose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource*>::get(), "GetNodePoseData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags, false>(nullptr, ___internal_method, node, resultPose);
}
inline bool UnityEngine::SpatialTracking::PoseDataSource::TryGetDataFromSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource*>::get(), "TryGetDataFromSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, poseSource, resultPose);
}
inline ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::PoseDataSource::GetDataFromSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose poseSource,
                                                                                                                     ByRef<::UnityEngine::Pose> resultPose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource*>::get(), "GetDataFromSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags, false>(nullptr, ___internal_method, poseSource, resultPose);
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::PoseDataSource::PoseDataSource() {}
