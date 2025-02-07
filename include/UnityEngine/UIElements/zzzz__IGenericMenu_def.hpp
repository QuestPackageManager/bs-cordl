#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IGenericMenu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IGenericMenu)
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
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IGenericMenu;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IGenericMenu);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IGenericMenu
class CORDL_TYPE IGenericMenu {
public:
  // Declarations
  /// @brief Method AddItem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action* action);

  /// @brief Method AddItem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action_1<::System::Object*>* action, ::System::Object* data);

  /// @brief Method DropDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored);

  // Ctor Parameters [CppParam { name: "", ty: "IGenericMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGenericMenu(IGenericMenu const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5583 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IGenericMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGenericMenu*, "UnityEngine.UIElements", "IGenericMenu");
