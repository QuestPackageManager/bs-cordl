#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSimultaneousHandsAndControllersSample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRSimultaneousHandsAndControllersSample)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSimultaneousHandsAndControllersSample;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*, "", "OVRSimultaneousHandsAndControllersSample");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSimultaneousHandsAndControllersSample
class CORDL_TYPE OVRSimultaneousHandsAndControllersSample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field disableButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_disableButton, put = __cordl_internal_set_disableButton)) ::UnityW<::UnityEngine::UI::Button> disableButton;

  /// @brief Field displayText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_displayText, put = __cordl_internal_set_displayText)) ::UnityW<::UnityEngine::UI::Text> displayText;

  /// @brief Field enableButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_enableButton, put = __cordl_internal_set_enableButton)) ::UnityW<::UnityEngine::UI::Button> enableButton;

  /// @brief Method DisableSimultaneousHandsAndControllers, addr 0x5ecf450, size 0x84, virtual false, abstract: false, final false
  inline void DisableSimultaneousHandsAndControllers();

  /// @brief Method EnableSimultaneousHandsAndControllers, addr 0x5ecf3cc, size 0x84, virtual false, abstract: false, final false
  inline void EnableSimultaneousHandsAndControllers();

  static inline ::GlobalNamespace::OVRSimultaneousHandsAndControllersSample* New_ctor();

  /// @brief Method Update, addr 0x5ecf2cc, size 0x100, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x5ecf4d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSimultaneousHandsAndControllersSample();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSimultaneousHandsAndControllersSample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSimultaneousHandsAndControllersSample(OVRSimultaneousHandsAndControllersSample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSimultaneousHandsAndControllersSample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSimultaneousHandsAndControllersSample(OVRSimultaneousHandsAndControllersSample const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7673 };

  /// @brief Field enableButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___enableButton;

  /// @brief Field disableButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___disableButton;

  /// @brief Field displayText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___displayText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSimultaneousHandsAndControllersSample, ___enableButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSimultaneousHandsAndControllersSample, ___disableButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSimultaneousHandsAndControllersSample, ___displayText) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSimultaneousHandsAndControllersSample) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
