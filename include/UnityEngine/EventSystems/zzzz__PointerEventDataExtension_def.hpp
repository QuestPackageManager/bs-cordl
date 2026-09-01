#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\PointerEventDataExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::EventSystems::PointerEventDataExtension*);
DEFINE_IL2CPP_CLASS(::UnityEngine::EventSystems::PointerEventDataExtension*, "UnityEngine.EventSystems", "PointerEventDataExtension");
// Dependencies System.Object
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.PointerEventDataExtension
class CORDL_TYPE PointerEventDataExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetRay, addr 0x5e4f3a0, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray GetRay(::UnityEngine::EventSystems::PointerEventData* pointerEventData);

  /// @brief Method GetSwipeStart, addr 0x5e4f434, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetSwipeStart(::UnityEngine::EventSystems::PointerEventData* pointerEventData);

  /// @brief Method IsVRPointer, addr 0x5e4f324, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsVRPointer(::UnityEngine::EventSystems::PointerEventData* pointerEventData);

  /// @brief Method SetSwipeStart, addr 0x5e4f4b4, size 0x90, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8559 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::EventSystems::PointerEventDataExtension) == 0x10, "Size mismatch!");

} // namespace UnityEngine::EventSystems
