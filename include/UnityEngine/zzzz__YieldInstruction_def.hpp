#pragma once
// IWYU pragma private; include "UnityEngine\YieldInstruction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(YieldInstruction)
// Forward declare root types
namespace UnityEngine {
class YieldInstruction;
}
// Write type traits
MARK_REF_T(::UnityEngine::YieldInstruction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::YieldInstruction*, "UnityEngine", "YieldInstruction");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.YieldInstruction
class CORDL_TYPE YieldInstruction : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::YieldInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x6ad9ca8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr YieldInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "YieldInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  YieldInstruction(YieldInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "YieldInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  YieldInstruction(YieldInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10389 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::YieldInstruction) == 0x10, "Size mismatch!");

} // namespace UnityEngine
