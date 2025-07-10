#pragma once
// IWYU pragma private; include "BGLib/UIToolkitUtilities/GenericDropdownMenu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GenericDropdownMenu)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class GenericDropdownMenu;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace BGLib::UIToolkitUtilities {
class GenericDropdownMenu;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UIToolkitUtilities::GenericDropdownMenu);
// Dependencies System.Object
namespace BGLib::UIToolkitUtilities {
// Is value type: false
// CS Name: BGLib.UIToolkitUtilities.GenericDropdownMenu
class CORDL_TYPE GenericDropdownMenu : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dropdownMenu, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dropdownMenu, put = __cordl_internal_set__dropdownMenu)) ::UnityEngine::UIElements::GenericDropdownMenu* _dropdownMenu;

  /// @brief Method AddDisabledItem, addr 0x4957210, size 0x20, virtual false, abstract: false, final false
  inline void AddDisabledItem(::StringW itemName, bool isChecked);

  /// @brief Method AddItem, addr 0x49571d0, size 0x20, virtual false, abstract: false, final false
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action* action);

  /// @brief Method AddItem, addr 0x49571f0, size 0x20, virtual false, abstract: false, final false
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action_1<::System::Object*>* action, ::System::Object* data);

  /// @brief Method AddSeparator, addr 0x4957230, size 0x1c, virtual false, abstract: false, final false
  inline void AddSeparator(::StringW path);

  /// @brief Method DropDown, addr 0x495724c, size 0x20, virtual false, abstract: false, final false
  inline void DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored);

  static inline ::BGLib::UIToolkitUtilities::GenericDropdownMenu* New_ctor();

  /// @brief Method UpdateItem, addr 0x495726c, size 0x20, virtual false, abstract: false, final false
  inline void UpdateItem(::StringW itemName, bool isChecked);

  constexpr ::UnityEngine::UIElements::GenericDropdownMenu* const& __cordl_internal_get__dropdownMenu() const;

  constexpr ::UnityEngine::UIElements::GenericDropdownMenu*& __cordl_internal_get__dropdownMenu();

  constexpr void __cordl_internal_set__dropdownMenu(::UnityEngine::UIElements::GenericDropdownMenu* value);

  /// @brief Method .ctor, addr 0x495716c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericDropdownMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericDropdownMenu(GenericDropdownMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericDropdownMenu(GenericDropdownMenu const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15031 };

  /// @brief Field _dropdownMenu, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::GenericDropdownMenu* ____dropdownMenu;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UIToolkitUtilities::GenericDropdownMenu, ____dropdownMenu) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UIToolkitUtilities::GenericDropdownMenu, 0x18>, "Size mismatch!");

} // namespace BGLib::UIToolkitUtilities
NEED_NO_BOX(::BGLib::UIToolkitUtilities::GenericDropdownMenu);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UIToolkitUtilities::GenericDropdownMenu*, "BGLib.UIToolkitUtilities", "GenericDropdownMenu");
