#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5590))
// CS Name: ::DropdownSettingsController*
class CORDL_TYPE DropdownSettingsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _dropdown, offset 0x18, size 0x8
  __declspec(property(get = __get__dropdown, put = __set__dropdown))::HMUI::SimpleTextDropdown* _dropdown;

  /// @brief Field dropDownValueDidChangeEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_dropDownValueDidChangeEvent, put = __set_dropDownValueDidChangeEvent))::System::Action* dropDownValueDidChangeEvent;

  /// @brief Field _idx, offset 0x28, size 0x4
  __declspec(property(get = __get__idx, put = __set__idx)) int32_t _idx;

  /// @brief Field _numberOfElements, offset 0x2c, size 0x4
  __declspec(property(get = __get__numberOfElements, put = __set__numberOfElements)) int32_t _numberOfElements;

  constexpr ::HMUI::SimpleTextDropdown*& __get__dropdown();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> const& __get__dropdown() const;

  constexpr void __set__dropdown(::HMUI::SimpleTextDropdown* value);

  constexpr ::System::Action*& __get_dropDownValueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_dropDownValueDidChangeEvent() const;

  constexpr void __set_dropDownValueDidChangeEvent(::System::Action* value);

  constexpr int32_t& __get__idx();

  constexpr int32_t const& __get__idx() const;

  constexpr void __set__idx(int32_t value);

  constexpr int32_t& __get__numberOfElements();

  constexpr int32_t const& __get__numberOfElements() const;

  constexpr void __set__numberOfElements(int32_t value);

  /// @brief Method add_dropDownValueDidChangeEvent, addr 0x22a9f0c, size 0x9c, virtual false, abstract: false, final false
  inline void add_dropDownValueDidChangeEvent(::System::Action* value);

  /// @brief Method remove_dropDownValueDidChangeEvent, addr 0x22a9fa8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_dropDownValueDidChangeEvent(::System::Action* value);

  /// @brief Method GetInitValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW TextForValue(int32_t idx);

  /// @brief Method OnEnable, addr 0x22aa044, size 0xbc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x22aa240, size 0xd0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method HandleDropdownValueDidChange, addr 0x22aa310, size 0x40, virtual false, abstract: false, final false
  inline void HandleDropdownValueDidChange(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  /// @brief Method RefreshUI, addr 0x22aa100, size 0x140, virtual false, abstract: false, final false
  inline void RefreshUI();

  /// @brief Method Refresh, addr 0x22aa350, size 0x5c, virtual false, abstract: false, final false
  inline void Refresh(bool applyValue);

  static inline ::GlobalNamespace::DropdownSettingsController* New_ctor();

  /// @brief Method .ctor, addr 0x22aa3ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DropdownSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownSettingsController(DropdownSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownSettingsController(DropdownSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownSettingsController();

public:
  /// @brief Field _dropdown, offset: 0x18, size: 0x8, def value: None
  ::HMUI::SimpleTextDropdown* ____dropdown;

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
