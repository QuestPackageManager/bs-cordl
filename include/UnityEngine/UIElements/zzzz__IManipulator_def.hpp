#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IManipulator)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IManipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IManipulator);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IManipulator
class CORDL_TYPE IManipulator {
public:
  // Declarations
  __declspec(property(put = set_target)) ::UnityEngine::UIElements::VisualElement* target;

  /// @brief Method set_target, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_target(::UnityEngine::UIElements::VisualElement* value);

  // Ctor Parameters [CppParam { name: "", ty: "IManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IManipulator(IManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IManipulator*, "UnityEngine.UIElements", "IManipulator");
