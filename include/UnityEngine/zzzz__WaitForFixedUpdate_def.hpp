#pragma once
// IWYU pragma private; include "UnityEngine/WaitForFixedUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(WaitForFixedUpdate)
// Forward declare root types
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Write type traits
MARK_REF_T(::UnityEngine::WaitForFixedUpdate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::WaitForFixedUpdate*, "UnityEngine", "WaitForFixedUpdate");
// Dependencies UnityEngine.YieldInstruction
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WaitForFixedUpdate
class CORDL_TYPE WaitForFixedUpdate : public ::UnityEngine::YieldInstruction {
public:
  // Declarations
  static inline ::UnityEngine::WaitForFixedUpdate* New_ctor();

  /// @brief Method .ctor, addr 0x6ae8b78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10356 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::WaitForFixedUpdate) == 0x10, "Size mismatch!");

} // namespace UnityEngine
