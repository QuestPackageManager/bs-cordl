#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/PoseDataSource.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (*)(::UnityEngine::XR::XRNode, ::by_ref<::UnityEngine::Pose>)>(
    &::UnityEngine::SpatialTracking::PoseDataSource::GetNodePoseData)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6bb3a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::PoseDataSource*>(),
                                                             { "GetNodePoseData", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::PoseDataSource.TryGetDataFromSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose, ::by_ref<::UnityEngine::Pose>)>(
    &::UnityEngine::SpatialTracking::PoseDataSource::TryGetDataFromSource)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6bb3c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::PoseDataSource*>(),
                            { "TryGetDataFromSource", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::PoseDataSource.GetDataFromSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (*)(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose, ::by_ref<::UnityEngine::Pose>)>(
    &::UnityEngine::SpatialTracking::PoseDataSource::GetDataFromSource)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x6bb3cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::PoseDataSource*>(),
                            { "GetDataFromSource", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::SpatialTracking::PoseDataSource::setStaticF_nodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*, "nodeStates", ::UnityEngine::SpatialTracking::PoseDataSource*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* UnityEngine::SpatialTracking::PoseDataSource::getStaticF_nodeStates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*, "nodeStates", ::UnityEngine::SpatialTracking::PoseDataSource*>();
}
inline ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::PoseDataSource::GetNodePoseData(::UnityEngine::XR::XRNode node, ::by_ref<::UnityEngine::Pose> resultPose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::PoseDataSource*>(),
                                                           { "GetNodePoseData", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags>(nullptr, ___internal_method, node, resultPose);
}
inline bool UnityEngine::SpatialTracking::PoseDataSource::TryGetDataFromSource(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose poseSource, ::by_ref<::UnityEngine::Pose> resultPose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::PoseDataSource*>(),
                          { "TryGetDataFromSource", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, poseSource, resultPose);
}
inline ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::PoseDataSource::GetDataFromSource(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose poseSource,
                                                                                                                     ::by_ref<::UnityEngine::Pose> resultPose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::PoseDataSource*>(),
                          { "GetDataFromSource", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags>(nullptr, ___internal_method, poseSource, resultPose);
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::PoseDataSource::PoseDataSource() {}
