#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AbstractGenericMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AbstractGenericMenu)
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
struct DropdownMenuSizeMode;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AbstractGenericMenu;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::AbstractGenericMenu*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::AbstractGenericMenu*, "UnityEngine.UIElements", "AbstractGenericMenu");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.AbstractGenericMenu
class CORDL_TYPE AbstractGenericMenu : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddDisabledItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddDisabledItem(::StringW itemName, bool isChecked);

  /// @brief Method AddItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action* action);

  /// @brief Method AddItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action_1<::System::Object*>* action, ::System::Object* data);

  /// @brief Method AddSeparator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddSeparator(::StringW path);

  /// @brief Method DropDown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, ::UnityEngine::UIElements::DropdownMenuSizeMode dropdownMenuSizeMode);

  static inline ::UnityEngine::UIElements::AbstractGenericMenu* New_ctor();

  /// @brief Method .ctor, addr 0x71b5918, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractGenericMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractGenericMenu", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractGenericMenu(AbstractGenericMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractGenericMenu", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractGenericMenu(AbstractGenericMenu const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::AbstractGenericMenu) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
