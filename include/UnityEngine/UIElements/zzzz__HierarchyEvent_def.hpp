#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/HierarchyEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(HierarchyEvent)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class HierarchyEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::HierarchyEvent);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.HierarchyEvent
class CORDL_TYPE HierarchyEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4a42b60, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType);

  static inline ::UnityEngine::UIElements::HierarchyEvent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4a42a5c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyEvent(HierarchyEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyEvent(HierarchyEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6009 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HierarchyEvent, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::HierarchyEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HierarchyEvent*, "UnityEngine.UIElements", "HierarchyEvent");
