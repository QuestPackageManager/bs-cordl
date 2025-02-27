#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRControllerDrivenHandPosesSample.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRControllerDrivenHandPosesSample)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRControllerDrivenHandPosesSample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerDrivenHandPosesSample);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRControllerDrivenHandPosesSample
class CORDL_TYPE OVRControllerDrivenHandPosesSample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field buttonConforming, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonConforming, put = __cordl_internal_set_buttonConforming)) ::UnityW<::UnityEngine::UI::Button> buttonConforming;

  /// @brief Field buttonNatural, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonNatural, put = __cordl_internal_set_buttonNatural)) ::UnityW<::UnityEngine::UI::Button> buttonNatural;

  /// @brief Field buttonOff, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonOff, put = __cordl_internal_set_buttonOff)) ::UnityW<::UnityEngine::UI::Button> buttonOff;

  /// @brief Field cameraRig, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraRig, put = __cordl_internal_set_cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig> cameraRig;

  /// @brief Field leftLinePointer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_leftLinePointer, put = __cordl_internal_set_leftLinePointer)) ::UnityW<::UnityEngine::LineRenderer> leftLinePointer;

  /// @brief Field rightLinePointer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_rightLinePointer, put = __cordl_internal_set_rightLinePointer)) ::UnityW<::UnityEngine::LineRenderer> rightLinePointer;

  /// @brief Method Awake, addr 0x3fb4c90, size 0xdc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x3fb5328, size 0x4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::OVRControllerDrivenHandPosesSample* New_ctor();

  /// @brief Method OnDestroy, addr 0x3fb4fe4, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3fb4fec, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3fb4fe8, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetControllerDrivenHandPosesTypeToControllerConforming, addr 0x3fb4e3c, size 0xd4, virtual false, abstract: false, final false
  inline void SetControllerDrivenHandPosesTypeToControllerConforming();

  /// @brief Method SetControllerDrivenHandPosesTypeToNatural, addr 0x3fb4f10, size 0xd4, virtual false, abstract: false, final false
  inline void SetControllerDrivenHandPosesTypeToNatural();

  /// @brief Method SetControllerDrivenHandPosesTypeToNone, addr 0x3fb4d6c, size 0xd0, virtual false, abstract: false, final false
  inline void SetControllerDrivenHandPosesTypeToNone();

  /// @brief Method Update, addr 0x3fb4ff0, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateLineRenderer, addr 0x3fb4ff4, size 0x50, virtual false, abstract: false, final false
  inline void UpdateLineRenderer();

  /// @brief Method UpdateLineRendererForHand, addr 0x3fb5044, size 0x2e4, virtual false, abstract: false, final false
  inline void UpdateLineRendererForHand(bool isLeft);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_buttonConforming() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_buttonConforming();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_buttonNatural() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_buttonNatural();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_buttonOff() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_buttonOff();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_cameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_cameraRig();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_leftLinePointer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_leftLinePointer();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_rightLinePointer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_rightLinePointer();

  constexpr void __cordl_internal_set_buttonConforming(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_buttonNatural(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_buttonOff(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set_leftLinePointer(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set_rightLinePointer(::UnityW<::UnityEngine::LineRenderer> value);

  /// @brief Method .ctor, addr 0x3fb532c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerDrivenHandPosesSample();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerDrivenHandPosesSample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerDrivenHandPosesSample(OVRControllerDrivenHandPosesSample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerDrivenHandPosesSample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerDrivenHandPosesSample(OVRControllerDrivenHandPosesSample const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7853 };

  /// @brief Field buttonOff, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___buttonOff;

  /// @brief Field buttonConforming, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___buttonConforming;

  /// @brief Field buttonNatural, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___buttonNatural;

  /// @brief Field leftLinePointer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___leftLinePointer;

  /// @brief Field rightLinePointer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___rightLinePointer;

  /// @brief Field cameraRig, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraRig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerDrivenHandPosesSample, ___buttonOff) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerDrivenHandPosesSample, ___buttonConforming) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerDrivenHandPosesSample, ___buttonNatural) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerDrivenHandPosesSample, ___leftLinePointer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerDrivenHandPosesSample, ___rightLinePointer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerDrivenHandPosesSample, ___cameraRig) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerDrivenHandPosesSample, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRControllerDrivenHandPosesSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerDrivenHandPosesSample*, "", "OVRControllerDrivenHandPosesSample");
