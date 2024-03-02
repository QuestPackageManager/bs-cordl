#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IGenericMenu)
namespace System {
class Action;
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
// Type: UnityEngine.UIElements::IGenericMenu
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IGenericMenu*
class CORDL_TYPE IGenericMenu {
public:
  // Declarations
  /// @brief Method AddItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action* action);

  /// @brief Method DropDown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored);

  // Ctor Parameters [CppParam { name: "", ty: "IGenericMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGenericMenu(IGenericMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGenericMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGenericMenu(IGenericMenu const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IGenericMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGenericMenu*, "UnityEngine.UIElements", "IGenericMenu");
