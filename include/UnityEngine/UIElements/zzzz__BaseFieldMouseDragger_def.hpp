#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseFieldMouseDragger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseFieldMouseDragger)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseFieldMouseDragger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseFieldMouseDragger);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseFieldMouseDragger
class CORDL_TYPE BaseFieldMouseDragger : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::BaseFieldMouseDragger* New_ctor();

  /// @brief Method SetDragZone, addr 0x4a42590, size 0x1c, virtual false, abstract: false, final false
  inline void SetDragZone(::UnityEngine::UIElements::VisualElement* dragElement);

  /// @brief Method SetDragZone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetDragZone(::UnityEngine::UIElements::VisualElement* dragElement, ::UnityEngine::Rect hotZone);

  /// @brief Method .ctor, addr 0x4a425ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseFieldMouseDragger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseFieldMouseDragger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseFieldMouseDragger(BaseFieldMouseDragger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseFieldMouseDragger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseFieldMouseDragger(BaseFieldMouseDragger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5950 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseFieldMouseDragger, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseFieldMouseDragger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseFieldMouseDragger*, "UnityEngine.UIElements", "BaseFieldMouseDragger");
