#pragma once
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
struct __TrackedPoseDriverDataDescription__PoseData;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackedPose;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriverDataDescription;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriverDataDescription__PoseData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription);
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData);
// Type: ::PoseData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: true
// CS Name: ::TrackedPoseDriverDataDescription::PoseData
struct CORDL_TYPE __TrackedPoseDriverDataDescription__PoseData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriverDataDescription__PoseData();

  // Ctor Parameters [CppParam { name: "PoseNames", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "Poses", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriverDataDescription__PoseData(::System::Collections::Generic::List_1<::StringW>* PoseNames,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>* Poses) noexcept;

  /// @brief Field PoseNames, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* PoseNames;

  /// @brief Field Poses, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>* Poses;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData, PoseNames) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData, Poses) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::SpatialTracking
// Type: UnityEngine.SpatialTracking::TrackedPoseDriverDataDescription
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: false
// CS Name: ::UnityEngine.SpatialTracking::TrackedPoseDriverDataDescription*
class CORDL_TYPE TrackedPoseDriverDataDescription : public ::System::Object {
public:
  // Declarations
  using PoseData = ::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData;

  /// @brief Field DeviceData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeviceData,
                             put = setStaticF_DeviceData))::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>* DeviceData;

  static inline ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription* New_ctor();

  /// @brief Method .ctor, addr 0x2e25bbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>* getStaticF_DeviceData();

  static inline void setStaticF_DeviceData(::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
NEED_NO_BOX(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription/PoseData");
