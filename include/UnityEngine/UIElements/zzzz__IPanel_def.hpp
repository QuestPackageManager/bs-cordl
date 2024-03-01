#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPanel)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IPanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IPanel);
// Type: UnityEngine.UIElements::IPanel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IPanel*
class CORDL_TYPE IPanel {
public:
  // Declarations
  __declspec(property(get = get_contextType))::UnityEngine::UIElements::ContextType contextType;

  __declspec(property(get = get_dispatcher))::UnityEngine::UIElements::EventDispatcher* dispatcher;

  __declspec(property(get = get_focusController))::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_visualTree))::UnityEngine::UIElements::VisualElement* visualTree;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Pick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point);

  /// @brief Method get_contextType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::ContextType get_contextType();

  /// @brief Method get_dispatcher, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::EventDispatcher* get_dispatcher();

  /// @brief Method get_focusController, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_visualTree, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPanel(IPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPanel(IPanel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPanel*, "UnityEngine.UIElements", "IPanel");
