#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/Cookie.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Cookie)
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::Cookie);
DEFINE_IL2CPP_CLASS(::UnityEngine::Experimental::GlobalIllumination::Cookie, "UnityEngine.Experimental.GlobalIllumination", "Cookie");
// Dependencies UnityEngine.EntityId, UnityEngine.Vector2
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// CS Name: UnityEngine.Experimental.GlobalIllumination.Cookie
struct CORDL_TYPE Cookie {
public:
  // Declarations
  /// @brief Method Defaults, addr 0x6f8cc28, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::GlobalIllumination::Cookie Defaults();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Cookie();

  // Ctor Parameters [CppParam { name: "entityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "sizes", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
  constexpr Cookie(::UnityEngine::EntityId entityId, float_t scale, ::UnityEngine::Vector2 sizes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10517 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field entityId, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::EntityId entityId;

  /// @brief Field scale, offset: 0x4, size: 0x4, def value: None
  float_t scale;

  /// @brief Field sizes, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 sizes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::Cookie, entityId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::Cookie, scale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::Cookie, sizes) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Experimental::GlobalIllumination::Cookie) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
