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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VisualElementExtensions*
class CORDL_TYPE VisualElementExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddManipulator, addr 0x35419e8, size 0xac, virtual false, abstract: false, final false
  static inline void AddManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator);

  /// @brief Method LocalToWorld, addr 0x3541810, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LocalToWorld(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector2 p);

  /// @brief Method RemoveManipulator, addr 0x3541a94, size 0xa8, virtual false, abstract: false, final false
  static inline void RemoveManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator);

  /// @brief Method WorldToLocal, addr 0x35418fc, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect WorldToLocal(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Rect r);

  /// @brief Method WorldToLocal, addr 0x3541724, size 0xec, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementExtensions*, "UnityEngine.UIElements", "VisualElementExtensions");
