#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PoseDataSource)
namespace UnityEngine::XR {
struct XRNode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackedPose;
}
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
class PoseDataSource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpatialTracking::PoseDataSource);
// Type: UnityEngine.SpatialTracking::PoseDataSource
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16192))
// CS Name: ::UnityEngine.SpatialTracking::PoseDataSource*
class CORDL_TYPE PoseDataSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field nodeStates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nodeStates, put = setStaticF_nodeStates))::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* nodeStates;

  static inline void setStaticF_nodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* getStaticF_nodeStates();

  /// @brief Method GetNodePoseData, addr 0x2d19334, size 0x280, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpatialTracking::PoseDataFlags GetNodePoseData(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> resultPose);

  /// @brief Method TryGetDataFromSource, addr 0x2d195b4, size 0x70, virtual false, abstract: false, final false
  static inline bool TryGetDataFromSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose);

  /// @brief Method GetDataFromSource, addr 0x2d19624, size 0x270, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpatialTracking::PoseDataFlags GetDataFromSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose);

  // Ctor Parameters [CppParam { name: "", ty: "PoseDataSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseDataSource(PoseDataSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseDataSource(PoseDataSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseDataSource();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::PoseDataSource, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
NEED_NO_BOX(::UnityEngine::SpatialTracking::PoseDataSource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::PoseDataSource*, "UnityEngine.SpatialTracking", "PoseDataSource");
