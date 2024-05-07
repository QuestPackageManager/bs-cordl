#pragma once
// IWYU pragma private; include "GlobalNamespace/DropdownSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownSettingsController)
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class DropdownSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DropdownSettingsController);
// Type: ::DropdownSettingsController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DropdownSettingsController*
class CORDL_TYPE DropdownSettingsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _dropdown, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dropdown, put = __cordl_internal_set__dropdown))::UnityW<::HMUI::SimpleTextDropdown> _dropdown;

  /// @brief Field _idx, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__idx, put = __cordl_internal_set__idx)) int32_t _idx;

  /// @brief Field _numberOfElements, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfElements, put = __cordl_internal_set__numberOfElements)) int32_t _numberOfElements;

  /// @brief Field dropDownValueDidChangeEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dropDownValueDidChangeEvent, put = __cordl_internal_set_dropDownValueDidChangeEvent))::System::Action* dropDownValueDidChangeEvent;

  /// @brief Method ApplyValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method HandleDropdownValueDidChange, addr 0x2631f1c, size 0x40, virtual false, abstract: false, final false
  inline void HandleDropdownValueDidChange(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  static inline ::GlobalNamespace::DropdownSettingsController* New_ctor();

  /// @brief Method OnDisable, addr 0x2631e4c, size 0xd0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2631c50, size 0xbc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x2631f5c, size 0x5c, virtual false, abstract: false, final false
  inline void Refresh(bool applyValue);

  /// @brief Method RefreshUI, addr 0x2631d0c, size 0x140, virtual false, abstract: false, final false
  inline void RefreshUI();

  /// @brief Method TextForValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__dropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__dropdown();

  constexpr int32_t const& __cordl_internal_get__idx() const;

  constexpr int32_t& __cordl_internal_get__idx();

  constexpr int32_t const& __cordl_internal_get__numberOfElements() const;

  constexpr int32_t& __cordl_internal_get__numberOfElements();

  constexpr ::System::Action*& __cordl_internal_get_dropDownValueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_dropDownValueDidChangeEvent() const;

  constexpr void __cordl_internal_set__dropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  constexpr void __cordl_internal_set__idx(int32_t value);

  constexpr void __cordl_internal_set__numberOfElements(int32_t value);

  constexpr void __cordl_internal_set_dropDownValueDidChangeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2631fb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_dropDownValueDidChangeEvent, addr 0x2631b18, size 0x9c, virtual false, abstract: false, final false
  inline void add_dropDownValueDidChangeEvent(::System::Action* value);

  /// @brief Method remove_dropDownValueDidChangeEvent, addr 0x2631bb4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_dropDownValueDidChangeEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownSettingsController(DropdownSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownSettingsController(DropdownSettingsController const&) = delete;

  /// @brief Field _dropdown, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ____dropdown;

  /// @brief Field dropDownValueDidChangeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___dropDownValueDidChangeEvent;

  /// @brief Field _idx, offset: 0x28, size: 0x4, def value: None
  int32_t ____idx;

  /// @brief Field _numberOfElements, offset: 0x2c, size: 0x4, def value: None
  int32_t ____numberOfElements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DropdownSettingsController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownSettingsController, ____dropdown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownSettingsController, ___dropDownValueDidChangeEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownSettingsController, ____idx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownSettingsController, ____numberOfElements) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DropdownSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DropdownSettingsController*, "", "DropdownSettingsController");
