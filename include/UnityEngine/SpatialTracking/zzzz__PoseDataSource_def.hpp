#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/PoseDataSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PoseDataSource)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine::SpatialTracking {
struct TrackedPoseDriver_TrackedPose;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
class PoseDataSource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpatialTracking::PoseDataSource);
// Dependencies System.Object
namespace UnityEngine::SpatialTracking {
// Is value type: false
// CS Name: UnityEngine.SpatialTracking.PoseDataSource
class CORDL_TYPE PoseDataSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field nodeStates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nodeStates, put = setStaticF_nodeStates)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* nodeStates;

  /// @brief Method GetDataFromSource, addr 0x491aabc, size 0x29c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpatialTracking::PoseDataFlags GetDataFromSource(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose poseSource, ::ByRef<::UnityEngine::Pose> resultPose);

  /// @brief Method GetNodePoseData, addr 0x491a7cc, size 0x280, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpatialTracking::PoseDataFlags GetNodePoseData(::UnityEngine::XR::XRNode node, ::ByRef<::UnityEngine::Pose> resultPose);

  /// @brief Method TryGetDataFromSource, addr 0x491aa4c, size 0x70, virtual false, abstract: false, final false
  static inline bool TryGetDataFromSource(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose poseSource, ::ByRef<::UnityEngine::Pose> resultPose);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* getStaticF_nodeStates();

  static inline void setStaticF_nodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseDataSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoseDataSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseDataSource(PoseDataSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseDataSource(PoseDataSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19013 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::PoseDataSource, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
NEED_NO_BOX(::UnityEngine::SpatialTracking::PoseDataSource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::PoseDataSource*, "UnityEngine.SpatialTracking", "PoseDataSource");
