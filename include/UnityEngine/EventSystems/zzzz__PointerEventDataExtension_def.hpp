#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/PointerEventDataExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PointerEventDataExtension)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class PointerEventDataExtension;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::PointerEventDataExtension);
// Dependencies System.Object
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.PointerEventDataExtension
class CORDL_TYPE PointerEventDataExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetRay, addr 0x407cb90, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray GetRay(::UnityEngine::EventSystems::PointerEventData* pointerEventData);

  /// @brief Method GetSwipeStart, addr 0x407c004, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetSwipeStart(::UnityEngine::EventSystems::PointerEventData* pointerEventData);

  /// @brief Method IsVRPointer, addr 0x407a4d0, size 0x78, virtual false, abstract: false, final false
  static inline bool IsVRPointer(::UnityEngine::EventSystems::PointerEventData* pointerEventData);

  /// @brief Method SetSwipeStart, addr 0x407a548, size 0x8c, virtual false, abstract: false, final false
  static inline void SetSwipeStart(::UnityEngine::EventSystems::PointerEventData* pointerEventData, ::UnityEngine::Vector2 start);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEventDataExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerEventDataExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEventDataExtension(PointerEventDataExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEventDataExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEventDataExtension(PointerEventDataExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9061 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerEventDataExtension, 0x10>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::PointerEventDataExtension);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerEventDataExtension*, "UnityEngine.EventSystems", "PointerEventDataExtension");
