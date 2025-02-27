#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(Rigidbody2D)
// Forward declare root types
namespace UnityEngine {
class Rigidbody2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rigidbody2D);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Rigidbody2D
class CORDL_TYPE Rigidbody2D : public ::UnityEngine::Component {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rigidbody2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rigidbody2D(Rigidbody2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rigidbody2D(Rigidbody2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rigidbody2D, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Rigidbody2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody2D*, "UnityEngine", "Rigidbody2D");
