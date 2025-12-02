#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IPointerOrMouseEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPointerOrMouseEvent)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IPointerOrMouseEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IPointerOrMouseEvent);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IPointerOrMouseEvent
class CORDL_TYPE IPointerOrMouseEvent {
public:
  // Declarations
  __declspec(property(get = get_pointerId)) int32_t pointerId;

  __declspec(property(get = get_position)) ::UnityEngine::Vector3 position;

  /// @brief Method get_pointerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_pointerId();

  /// @brief Method get_position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  // Ctor Parameters [CppParam { name: "", ty: "IPointerOrMouseEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerOrMouseEvent(IPointerOrMouseEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4537 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IPointerOrMouseEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPointerOrMouseEvent*, "UnityEngine.UIElements", "IPointerOrMouseEvent");
