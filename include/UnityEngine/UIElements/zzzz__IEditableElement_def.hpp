#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IEditableElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEditableElement)
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IEditableElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IEditableElement);
// Type: UnityEngine.UIElements::IEditableElement
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IEditableElement*
class CORDL_TYPE IEditableElement {
public:
  // Declarations
  __declspec(property(get = get_editingEnded)) ::System::Action* editingEnded;

  __declspec(property(get = get_editingStarted)) ::System::Action* editingStarted;

  /// @brief Method get_editingEnded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action* get_editingEnded();

  /// @brief Method get_editingStarted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action* get_editingStarted();

  // Ctor Parameters [CppParam { name: "", ty: "IEditableElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEditableElement(IEditableElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEditableElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEditableElement(IEditableElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5575 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IEditableElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IEditableElement*, "UnityEngine.UIElements", "IEditableElement");
