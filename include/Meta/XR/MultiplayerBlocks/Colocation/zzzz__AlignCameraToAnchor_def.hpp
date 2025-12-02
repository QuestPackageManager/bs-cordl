#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AlignCameraToAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AlignCameraToAnchor)
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class AlignCameraToAnchor;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AlignCameraToAnchor
class CORDL_TYPE AlignCameraToAnchor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_CameraAlignmentAnchor, put = set_CameraAlignmentAnchor)) ::UnityW<::GlobalNamespace::OVRSpatialAnchor> CameraAlignmentAnchor;

  /// @brief Field <CameraAlignmentAnchor>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CameraAlignmentAnchor_k__BackingField,
                      put = __cordl_internal_set__CameraAlignmentAnchor_k__BackingField)) ::UnityW<::GlobalNamespace::OVRSpatialAnchor>
      _CameraAlignmentAnchor_k__BackingField;

  /// @brief Method Align, addr 0x5864520, size 0x200, virtual false, abstract: false, final false
  inline void Align(::UnityEngine::Transform* anchorTransform);

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor* New_ctor();

  /// @brief Method RealignToAnchor, addr 0x585c5a8, size 0x2c, virtual false, abstract: false, final false
  inline void RealignToAnchor();

  /// @brief Method Update, addr 0x586451c, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor> const& __cordl_internal_get__CameraAlignmentAnchor_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor>& __cordl_internal_get__CameraAlignmentAnchor_k__BackingField();

  constexpr void __cordl_internal_set__CameraAlignmentAnchor_k__BackingField(::UnityW<::GlobalNamespace::OVRSpatialAnchor> value);

  /// @brief Method .ctor, addr 0x5864720, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CameraAlignmentAnchor, addr 0x586450c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRSpatialAnchor> get_CameraAlignmentAnchor();

  /// @brief Method set_CameraAlignmentAnchor, addr 0x5864514, size 0x8, virtual false, abstract: false, final false
  inline void set_CameraAlignmentAnchor(::GlobalNamespace::OVRSpatialAnchor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlignCameraToAnchor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlignCameraToAnchor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlignCameraToAnchor(AlignCameraToAnchor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlignCameraToAnchor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlignCameraToAnchor(AlignCameraToAnchor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20359 };

  /// @brief Field <CameraAlignmentAnchor>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpatialAnchor> ____CameraAlignmentAnchor_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor, ____CameraAlignmentAnchor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor, 0x28>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*, "Meta.XR.MultiplayerBlocks.Colocation", "AlignCameraToAnchor");
