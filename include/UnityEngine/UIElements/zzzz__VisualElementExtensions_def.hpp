#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VisualElementExtensions)
namespace UnityEngine::UIElements {
class IManipulator;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementExtensions);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementExtensions
class CORDL_TYPE VisualElementExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddManipulator, addr 0x499dd78, size 0xac, virtual false, abstract: false, final false
  static inline void AddManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator);

  /// @brief Method ChangeCoordinatesTo, addr 0x499e184, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement* src, ::UnityEngine::UIElements::VisualElement* dest, ::UnityEngine::Vector2 point);

  /// @brief Method LocalToWorld, addr 0x499dfb4, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LocalToWorld(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector2 p);

  /// @brief Method RemoveManipulator, addr 0x499de24, size 0xa8, virtual false, abstract: false, final false
  static inline void RemoveManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator);

  /// @brief Method StretchToParentSize, addr 0x499da5c, size 0x31c, virtual false, abstract: false, final false
  static inline void StretchToParentSize(::UnityEngine::UIElements::VisualElement* elem);

  /// @brief Method WorldToLocal, addr 0x499e09c, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect WorldToLocal(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Rect r);

  /// @brief Method WorldToLocal, addr 0x499decc, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 WorldToLocal(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector2 p);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementExtensions(VisualElementExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementExtensions(VisualElementExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6313 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementExtensions*, "UnityEngine.UIElements", "VisualElementExtensions");
