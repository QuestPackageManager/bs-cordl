#pragma once
// IWYU pragma private; include "UnityEngine\UI\MultipleDisplayUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultipleDisplayUtilities)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UI {
class MultipleDisplayUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::MultipleDisplayUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::MultipleDisplayUtilities*, "UnityEngine.UI", "MultipleDisplayUtilities");
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.MultipleDisplayUtilities
class CORDL_TYPE MultipleDisplayUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetRelativeMousePositionForDrag, addr 0x6e01954, size 0x6c, virtual false, abstract: false, final false
  static inline bool GetRelativeMousePositionForDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::by_ref<::UnityEngine::Vector2> position);

  /// @brief Method GetRelativeMousePositionForRaycast, addr 0x6e01ea4, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetRelativeMousePositionForRaycast(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method RelativeMouseAtScaled, addr 0x6e019c0, size 0x4e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 RelativeMouseAtScaled(::UnityEngine::Vector2 position, int32_t displayIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipleDisplayUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultipleDisplayUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipleDisplayUtilities(MultipleDisplayUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipleDisplayUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipleDisplayUtilities(MultipleDisplayUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::MultipleDisplayUtilities) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UI
