#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IPointerEventInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPointerEventInternal)
namespace UnityEngine::UIElements {
class IMouseEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IPointerEventInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IPointerEventInternal);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IPointerEventInternal
class CORDL_TYPE IPointerEventInternal {
public:
  // Declarations
  __declspec(property(get = get_compatibilityMouseEvent, put = set_compatibilityMouseEvent)) ::UnityEngine::UIElements::IMouseEvent* compatibilityMouseEvent;

  __declspec(property(put = set_displayIndex)) int32_t displayIndex;

  __declspec(property(get = get_triggeredByOS, put = set_triggeredByOS)) bool triggeredByOS;

  /// @brief Method get_compatibilityMouseEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IMouseEvent* get_compatibilityMouseEvent();

  /// @brief Method get_triggeredByOS, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_triggeredByOS();

  /// @brief Method set_compatibilityMouseEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_compatibilityMouseEvent(::UnityEngine::UIElements::IMouseEvent* value);

  /// @brief Method set_displayIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_displayIndex(int32_t value);

  /// @brief Method set_triggeredByOS, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_triggeredByOS(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IPointerEventInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerEventInternal(IPointerEventInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4536 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IPointerEventInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPointerEventInternal*, "UnityEngine.UIElements", "IPointerEventInternal");
