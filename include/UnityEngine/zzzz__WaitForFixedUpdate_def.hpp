#pragma once
// IWYU pragma private; include "UnityEngine/WaitForFixedUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(WaitForFixedUpdate)
// Forward declare root types
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WaitForFixedUpdate);
// Dependencies UnityEngine.YieldInstruction
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WaitForFixedUpdate
class CORDL_TYPE WaitForFixedUpdate : public ::UnityEngine::YieldInstruction {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitForFixedUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitForFixedUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitForFixedUpdate(WaitForFixedUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitForFixedUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitForFixedUpdate(WaitForFixedUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10922 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WaitForFixedUpdate, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WaitForFixedUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitForFixedUpdate*, "UnityEngine", "WaitForFixedUpdate");
