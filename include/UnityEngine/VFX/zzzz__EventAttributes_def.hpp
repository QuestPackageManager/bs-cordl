#pragma once
// IWYU pragma private; include "UnityEngine/VFX/EventAttributes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__EventAttribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EventAttributes)
namespace UnityEngine::VFX {
class EventAttribute;
}
// Forward declare root types
namespace UnityEngine::VFX {
struct EventAttributes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::EventAttributes);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::EventAttributes, "UnityEngine.VFX", "EventAttributes");
// Dependencies UnityEngine.VFX.EventAttribute
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.EventAttributes
struct CORDL_TYPE EventAttributes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributes();

  // Ctor Parameters [CppParam { name: "content", ty: "::ArrayW<::UnityEngine::VFX::EventAttribute*>", modifiers: "", def_value: None }]
  constexpr EventAttributes(::ArrayW<::UnityEngine::VFX::EventAttribute*> content) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19901 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field content, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::VFX::EventAttribute*> content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::EventAttributes, content) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::EventAttributes) == 0x8, "Size mismatch!");

} // namespace UnityEngine::VFX
