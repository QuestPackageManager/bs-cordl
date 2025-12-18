#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSpectatingSpotPickerViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerSpectatingSpotPickerViewController)
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController;
}
namespace GlobalNamespace {
class StepValuePicker;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerSpectatingSpotPickerViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSpectatingSpotPickerViewController
class CORDL_TYPE MultiplayerSpectatingSpotPickerViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _spectatorController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatorController, put = __cordl_internal_set__spectatorController)) ::UnityW<::GlobalNamespace::MultiplayerSpectatorController>
      _spectatorController;

  /// @brief Field _stepValuePicker, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__stepValuePicker, put = __cordl_internal_set__stepValuePicker)) ::UnityW<::GlobalNamespace::StepValuePicker> _stepValuePicker;

  /// @brief Method HandleDecButtonWasPressed, addr 0x5803f90, size 0x18, virtual false, abstract: false, final false
  inline void HandleDecButtonWasPressed();

  /// @brief Method HandleIncButtonWasPressed, addr 0x5803f78, size 0x18, virtual false, abstract: false, final false
  inline void HandleIncButtonWasPressed();

  /// @brief Method HandleSpectatingSpotDidChangeEvent, addr 0x5803f74, size 0x4, virtual false, abstract: false, final false
  inline void HandleSpectatingSpotDidChangeEvent(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  static inline ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x5803d54, size 0x220, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshSpectatingSpotName, addr 0x5803c44, size 0x110, virtual false, abstract: false, final false
  inline void RefreshSpectatingSpotName();

  /// @brief Method Start, addr 0x5803a94, size 0x1b0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> const& __cordl_internal_get__spectatorController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController>& __cordl_internal_get__spectatorController();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__stepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__stepValuePicker();

  constexpr void __cordl_internal_set__spectatorController(::UnityW<::GlobalNamespace::MultiplayerSpectatorController> value);

  constexpr void __cordl_internal_set__stepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  /// @brief Method .ctor, addr 0x5803fa8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSpectatingSpotPickerViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotPickerViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSpectatingSpotPickerViewController(MultiplayerSpectatingSpotPickerViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotPickerViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSpectatingSpotPickerViewController(MultiplayerSpectatingSpotPickerViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6019 };

  /// @brief Field _stepValuePicker, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____stepValuePicker;

  /// @brief Field _spectatorController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> ____spectatorController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController, ____stepValuePicker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController, ____spectatorController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*, "", "MultiplayerSpectatingSpotPickerViewController");
