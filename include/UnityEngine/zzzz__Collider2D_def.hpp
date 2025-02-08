#pragma once
// IWYU pragma private; include "UnityEngine/Collider2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(Collider2D)
// Forward declare root types
namespace UnityEngine {
class Collider2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Collider2D);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Collider2D
class CORDL_TYPE Collider2D : public ::UnityEngine::Behaviour {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Collider2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Collider2D(Collider2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Collider2D(Collider2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18655 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Collider2D, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Collider2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collider2D*, "UnityEngine", "Collider2D");
