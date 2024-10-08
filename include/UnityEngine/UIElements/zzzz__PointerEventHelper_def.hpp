#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerEventHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEventHelper)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerEventHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerEventHelper);
// Type: UnityEngine.UIElements::PointerEventHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerEventHelper*
class CORDL_TYPE PointerEventHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPooled, addr 0x49b6458, size 0x1a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* GetPooled(::UnityEngine::EventType eventType, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector2 delta, int32_t button,
                                                                int32_t clickCount, ::UnityEngine::EventModifiers modifiers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEventHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerEventHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEventHelper(PointerEventHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEventHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEventHelper(PointerEventHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerEventHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerEventHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerEventHelper*, "UnityEngine.UIElements", "PointerEventHelper");
