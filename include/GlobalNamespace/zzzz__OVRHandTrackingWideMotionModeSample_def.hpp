#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHandTrackingWideMotionModeSample.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRHandTrackingWideMotionModeSample)
namespace GlobalNamespace {
class OVRHand;
}
namespace UnityEngine::EventSystems {
class OVRInputModule;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHandTrackingWideMotionModeSample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRHandTrackingWideMotionModeSample);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHandTrackingWideMotionModeSample
class CORDL_TYPE OVRHandTrackingWideMotionModeSample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field fusionToggle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fusionToggle, put = __cordl_internal_set_fusionToggle)) ::UnityW<::UnityEngine::UI::Toggle> fusionToggle;

  /// @brief Field handLeft, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_handLeft, put = __cordl_internal_set_handLeft)) ::UnityW<::GlobalNamespace::OVRHand> handLeft;

  /// @brief Field handRight, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_handRight, put = __cordl_internal_set_handRight)) ::UnityW<::GlobalNamespace::OVRHand> handRight;

  /// @brief Field inputModule, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_inputModule, put = __cordl_internal_set_inputModule)) ::UnityW<::UnityEngine::EventSystems::OVRInputModule> inputModule;

  /// @brief Field leftLinePointer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_leftLinePointer, put = __cordl_internal_set_leftLinePointer)) ::UnityW<::UnityEngine::LineRenderer> leftLinePointer;

  /// @brief Field rightLinePointer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rightLinePointer, put = __cordl_internal_set_rightLinePointer)) ::UnityW<::UnityEngine::LineRenderer> rightLinePointer;

  static inline ::GlobalNamespace::OVRHandTrackingWideMotionModeSample* New_ctor();

  /// @brief Method OnDisable, addr 0x5c41b04, size 0xe8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5c41a1c, size 0xe8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnFusionToggleChanged, addr 0x5c41fe8, size 0xb0, virtual false, abstract: false, final false
  inline void OnFusionToggleChanged(bool newValue);

  /// @brief Method Update, addr 0x5c41bec, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateLineRenderer, addr 0x5c41bf0, size 0x50, virtual false, abstract: false, final false
  inline void UpdateLineRenderer();

  /// @brief Method UpdateLineRendererForHand, addr 0x5c41c40, size 0x3a8, virtual false, abstract: false, final false
  inline void UpdateLineRendererForHand(bool isLeft);

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_fusionToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_fusionToggle();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get_handLeft() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get_handLeft();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get_handRight() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get_handRight();

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule> const& __cordl_internal_get_inputModule() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule>& __cordl_internal_get_inputModule();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_leftLinePointer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_leftLinePointer();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_rightLinePointer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_rightLinePointer();

  constexpr void __cordl_internal_set_fusionToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set_handLeft(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set_handRight(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set_inputModule(::UnityW<::UnityEngine::EventSystems::OVRInputModule> value);

  constexpr void __cordl_internal_set_leftLinePointer(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set_rightLinePointer(::UnityW<::UnityEngine::LineRenderer> value);

  /// @brief Method .ctor, addr 0x5c42098, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHandTrackingWideMotionModeSample();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRHandTrackingWideMotionModeSample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHandTrackingWideMotionModeSample(OVRHandTrackingWideMotionModeSample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHandTrackingWideMotionModeSample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHandTrackingWideMotionModeSample(OVRHandTrackingWideMotionModeSample const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7154 };

  /// @brief Field fusionToggle, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___fusionToggle;

  /// @brief Field leftLinePointer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___leftLinePointer;

  /// @brief Field rightLinePointer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___rightLinePointer;

  /// @brief Field handLeft, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___handLeft;

  /// @brief Field handRight, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___handRight;

  /// @brief Field inputModule, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRInputModule> ___inputModule;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHandTrackingWideMotionModeSample, ___fusionToggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTrackingWideMotionModeSample, ___leftLinePointer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTrackingWideMotionModeSample, ___rightLinePointer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTrackingWideMotionModeSample, ___handLeft) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTrackingWideMotionModeSample, ___handRight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTrackingWideMotionModeSample, ___inputModule) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHandTrackingWideMotionModeSample, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRHandTrackingWideMotionModeSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHandTrackingWideMotionModeSample*, "", "OVRHandTrackingWideMotionModeSample");
