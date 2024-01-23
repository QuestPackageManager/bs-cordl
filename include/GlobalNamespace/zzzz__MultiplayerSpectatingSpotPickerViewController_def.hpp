#pragma once
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
// Type: ::MultiplayerSpectatingSpotPickerViewController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5060))
// CS Name: ::MultiplayerSpectatingSpotPickerViewController*
class CORDL_TYPE MultiplayerSpectatingSpotPickerViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _stepValuePicker, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stepValuePicker, put = __cordl_internal_set__stepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _stepValuePicker;

  /// @brief Field _spectatorController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatorController,
                      put = __cordl_internal_set__spectatorController))::UnityW<::GlobalNamespace::MultiplayerSpectatorController> _spectatorController;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__stepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__stepValuePicker() const;

  constexpr void __cordl_internal_set__stepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController>& __cordl_internal_get__spectatorController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> const& __cordl_internal_get__spectatorController() const;

  constexpr void __cordl_internal_set__spectatorController(::UnityW<::GlobalNamespace::MultiplayerSpectatorController> value);

  /// @brief Method Start, addr 0x23c68c4, size 0x148, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23c6b08, size 0x1b4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleSpectatingSpotDidChangeEvent, addr 0x23c6cbc, size 0x4, virtual false, abstract: false, final false
  inline void HandleSpectatingSpotDidChangeEvent(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  /// @brief Method RefreshSpectatingSpotName, addr 0x23c6a0c, size 0xfc, virtual false, abstract: false, final false
  inline void RefreshSpectatingSpotName();

  /// @brief Method HandleIncButtonWasPressed, addr 0x23c6cc0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleIncButtonWasPressed();

  /// @brief Method HandleDecButtonWasPressed, addr 0x23c6cdc, size 0x1c, virtual false, abstract: false, final false
  inline void HandleDecButtonWasPressed();

  static inline ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController* New_ctor();

  /// @brief Method .ctor, addr 0x23c6cf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotPickerViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSpectatingSpotPickerViewController(MultiplayerSpectatingSpotPickerViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotPickerViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSpectatingSpotPickerViewController(MultiplayerSpectatingSpotPickerViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSpectatingSpotPickerViewController();

public:
  /// @brief Field _stepValuePicker, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____stepValuePicker;

  /// @brief Field _spectatorController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> ____spectatorController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController, ____stepValuePicker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController, ____spectatorController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*, "", "MultiplayerSpectatingSpotPickerViewController");
