#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputFieldSettingsController)
namespace GlobalNamespace {
class StringSO;
}
namespace HMUI {
class InputFieldView;
}
// Forward declare root types
namespace GlobalNamespace {
class InputFieldSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InputFieldSettingsController);
// Type: ::InputFieldSettingsController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5595))
// CS Name: ::InputFieldSettingsController*
class CORDL_TYPE InputFieldSettingsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _inputFieldView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inputFieldView, put = __cordl_internal_set__inputFieldView))::UnityW<::HMUI::InputFieldView> _inputFieldView;

  /// @brief Field _settingsValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsValue, put = __cordl_internal_set__settingsValue))::UnityW<::GlobalNamespace::StringSO> _settingsValue;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get__inputFieldView();

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get__inputFieldView() const;

  constexpr void __cordl_internal_set__inputFieldView(::UnityW<::HMUI::InputFieldView> value);

  constexpr ::UnityW<::GlobalNamespace::StringSO>& __cordl_internal_get__settingsValue();

  constexpr ::UnityW<::GlobalNamespace::StringSO> const& __cordl_internal_get__settingsValue() const;

  constexpr void __cordl_internal_set__settingsValue(::UnityW<::GlobalNamespace::StringSO> value);

  /// @brief Method Awake, addr 0x22aaaa0, size 0x98, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x22aab38, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x22aabd0, size 0x54, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method HandleInputFieldDidChange, addr 0x22aac24, size 0x5c, virtual true, abstract: false, final false
  inline void HandleInputFieldDidChange(::HMUI::InputFieldView* inputFieldView);

  static inline ::GlobalNamespace::InputFieldSettingsController* New_ctor();

  /// @brief Method .ctor, addr 0x22aac80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldSettingsController(InputFieldSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldSettingsController(InputFieldSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldSettingsController();

public:
  /// @brief Field _inputFieldView, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____inputFieldView;

  /// @brief Field _settingsValue, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StringSO> ____settingsValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InputFieldSettingsController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::InputFieldSettingsController, ____inputFieldView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputFieldSettingsController, ____settingsValue) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InputFieldSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InputFieldSettingsController*, "", "InputFieldSettingsController");
