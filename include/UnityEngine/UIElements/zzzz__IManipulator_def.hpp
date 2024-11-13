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
// Type: UnityEngine.UIElements::IManipulator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IManipulator*
class CORDL_TYPE IManipulator {
public:
  // Declarations
  __declspec(property(put = set_target)) ::UnityEngine::UIElements::VisualElement* target;

  /// @brief Method set_target, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_target(::UnityEngine::UIElements::VisualElement* value);

  // Ctor Parameters [CppParam { name: "", ty: "IManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IManipulator(IManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IManipulator(IManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5959 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IManipulator*, "UnityEngine.UIElements", "IManipulator");
