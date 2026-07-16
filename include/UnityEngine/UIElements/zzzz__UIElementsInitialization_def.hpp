#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsInitialization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UIElementsInitialization)
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsInitialization;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIElementsInitialization*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIElementsInitialization*, "UnityEngine.UIElements", "UIElementsInitialization");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIElementsInitialization
class CORDL_TYPE UIElementsInitialization : public ::System::Object {
public:
  // Declarations
  /// @brief Method InitializeUIElementsManaged, addr 0x6caff8c, size 0x4, virtual false, abstract: false, final false
  static inline void InitializeUIElementsManaged();

  /// @brief Method RegisterBuiltInPropertyBags, addr 0x6caff90, size 0x15f8, virtual false, abstract: false, final false
  static inline void RegisterBuiltInPropertyBags();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIElementsInitialization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIElementsInitialization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIElementsInitialization(UIElementsInitialization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsInitialization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIElementsInitialization(UIElementsInitialization const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5112 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIElementsInitialization) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
