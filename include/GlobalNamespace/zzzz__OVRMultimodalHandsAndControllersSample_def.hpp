#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMultimodalHandsAndControllersSample.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRMultimodalHandsAndControllersSample)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMultimodalHandsAndControllersSample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMultimodalHandsAndControllersSample);
// Type: ::OVRMultimodalHandsAndControllersSample
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRMultimodalHandsAndControllersSample*
class CORDL_TYPE OVRMultimodalHandsAndControllersSample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field disableButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_disableButton, put = __cordl_internal_set_disableButton))::UnityW<::UnityEngine::UI::Button> disableButton;

  /// @brief Field displayText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_displayText, put = __cordl_internal_set_displayText))::UnityW<::UnityEngine::UI::Text> displayText;

  /// @brief Field enableButton, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_enableButton, put = __cordl_internal_set_enableButton))::UnityW<::UnityEngine::UI::Button> enableButton;

  /// @brief Method Awake, addr 0x2b3d4b8, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DisableMultiModality, addr 0x2b3d630, size 0x80, virtual false, abstract: false, final false
  inline void DisableMultiModality();

  /// @brief Method EnableMultiModality, addr 0x2b3d5b0, size 0x80, virtual false, abstract: false, final false
  inline void EnableMultiModality();

  static inline ::GlobalNamespace::OVRMultimodalHandsAndControllersSample* New_ctor();

  /// @brief Method OnDestroy, addr 0x2b3d4bc, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2b3d4c4, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2b3d4c0, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x2b3d4c8, size 0xe8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_disableButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_disableButton();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_displayText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_displayText();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_enableButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_enableButton();

  constexpr void __cordl_internal_set_disableButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_displayText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_enableButton(::UnityW<::UnityEngine::UI::Button> value);

  /// @brief Method .ctor, addr 0x2b3d6b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMultimodalHandsAndControllersSample();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMultimodalHandsAndControllersSample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMultimodalHandsAndControllersSample(OVRMultimodalHandsAndControllersSample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMultimodalHandsAndControllersSample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMultimodalHandsAndControllersSample(OVRMultimodalHandsAndControllersSample const&) = delete;

  /// @brief Field enableButton, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___enableButton;

  /// @brief Field disableButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___disableButton;

  /// @brief Field displayText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___displayText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMultimodalHandsAndControllersSample, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMultimodalHandsAndControllersSample, ___enableButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMultimodalHandsAndControllersSample, ___disableButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMultimodalHandsAndControllersSample, ___displayText) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMultimodalHandsAndControllersSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMultimodalHandsAndControllersSample*, "", "OVRMultimodalHandsAndControllersSample");
