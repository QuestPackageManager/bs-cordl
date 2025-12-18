#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriverDataDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TrackedPoseDriverDataDescription)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::SpatialTracking {
struct TrackedPoseDriverDataDescription_PoseData;
}
namespace UnityEngine::SpatialTracking {
struct TrackedPoseDriver_TrackedPose;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriverDataDescription;
}
namespace UnityEngine::SpatialTracking {
struct TrackedPoseDriverDataDescription_PoseData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription);
MARK_VAL_T(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData);
// Dependencies
namespace UnityEngine::SpatialTracking {
// Is value type: true
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct CORDL_TYPE TrackedPoseDriverDataDescription_PoseData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedPoseDriverDataDescription_PoseData();

  // Ctor Parameters [CppParam { name: "PoseNames", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "Poses", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>*", modifiers: "", def_value: None }]
  constexpr TrackedPoseDriverDataDescription_PoseData(::System::Collections::Generic::List_1<::StringW>* PoseNames,
                                                      ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>* Poses) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22992 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field PoseNames, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* PoseNames;

  /// @brief Field Poses, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>* Poses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData, PoseNames) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData, Poses) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
// Dependencies System.Object
namespace UnityEngine::SpatialTracking {
// Is value type: false
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
class CORDL_TYPE TrackedPoseDriverDataDescription : public ::System::Object {
public:
  // Declarations
  using PoseData = ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData;

  /// @brief Field DeviceData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DeviceData,
                      put = setStaticF_DeviceData)) ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>* DeviceData;

  static inline ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription* New_ctor();

  /// @brief Method .ctor, addr 0x69eb19c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>* getStaticF_DeviceData();

  static inline void setStaticF_DeviceData(::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedPoseDriverDataDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriverDataDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedPoseDriverDataDescription(TrackedPoseDriverDataDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriverDataDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedPoseDriverDataDescription(TrackedPoseDriverDataDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22993 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
NEED_NO_BOX(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription_PoseData, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription/PoseData");
