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
// Type: UnityEngine.UIElements::VisualElementExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VisualElementExtensions*
class CORDL_TYPE VisualElementExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddManipulator, addr 0x4936d1c, size 0xac, virtual false, abstract: false, final false
  static inline void AddManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator);

  /// @brief Method ChangeCoordinatesTo, addr 0x4937128, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement* src, ::UnityEngine::UIElements::VisualElement* dest, ::UnityEngine::Vector2 point);

  /// @brief Method LocalToWorld, addr 0x4936f58, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LocalToWorld(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector2 p);

  /// @brief Method RemoveManipulator, addr 0x4936dc8, size 0xa8, virtual false, abstract: false, final false
  static inline void RemoveManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator);

  /// @brief Method StretchToParentSize, addr 0x4936a00, size 0x31c, virtual false, abstract: false, final false
  static inline void StretchToParentSize(::UnityEngine::UIElements::VisualElement* elem);

  /// @brief Method WorldToLocal, addr 0x4937040, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect WorldToLocal(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Rect r);

  /// @brief Method WorldToLocal, addr 0x4936e70, size 0xe8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6283 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementExtensions*, "UnityEngine.UIElements", "VisualElementExtensions");
