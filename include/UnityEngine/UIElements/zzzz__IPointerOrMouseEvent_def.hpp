#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IPointerOrMouseEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPointerOrMouseEvent)
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IPointerOrMouseEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::IPointerOrMouseEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::IPointerOrMouseEvent*, "UnityEngine.UIElements", "IPointerOrMouseEvent");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IPointerOrMouseEvent
class CORDL_TYPE IPointerOrMouseEvent {
public:
  // Declarations
  __declspec(property(put = set_deltaPosition)) ::UnityEngine::Vector3 deltaPosition;

  __declspec(property(get = get_panelRay)) ::System::Nullable_1<::UnityEngine::Ray> panelRay;

  __declspec(property(get = get_position)) ::UnityEngine::Vector3 position;

  /// @brief Method get_panelRay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Nullable_1<::UnityEngine::Ray> get_panelRay();

  /// @brief Method get_position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method set_deltaPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_deltaPosition(::UnityEngine::Vector3 value);

  // Ctor Parameters [CppParam { name: "", ty: "IPointerOrMouseEvent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerOrMouseEvent(IPointerOrMouseEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4538 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
