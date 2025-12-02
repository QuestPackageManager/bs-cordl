#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/EyeTrackingUsages.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(EyeTrackingUsages)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class EyeTrackingUsages;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages);
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.InputFeatureUsage`1<T>
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.EyeTrackingUsages
class CORDL_TYPE EyeTrackingUsages : public ::System::Object {
public:
  // Declarations
  /// @brief Field gazePosition, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gazePosition, put = setStaticF_gazePosition)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> gazePosition;

  /// @brief Field gazeRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gazeRotation, put = setStaticF_gazeRotation)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> gazeRotation;

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_gazePosition();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> getStaticF_gazeRotation();

  static inline void setStaticF_gazePosition(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_gazeRotation(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EyeTrackingUsages();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EyeTrackingUsages", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EyeTrackingUsages(EyeTrackingUsages&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EyeTrackingUsages", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EyeTrackingUsages(EyeTrackingUsages const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18521 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages*, "UnityEngine.XR.OpenXR.Features.Interactions", "EyeTrackingUsages");
