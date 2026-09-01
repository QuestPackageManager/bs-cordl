#pragma once
// IWYU pragma private; include "UnityEngine\WaitForEndOfFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(WaitForEndOfFrame)
// Forward declare root types
namespace UnityEngine {
class WaitForEndOfFrame;
}
// Write type traits
MARK_REF_T(::UnityEngine::WaitForEndOfFrame*);
DEFINE_IL2CPP_CLASS(::UnityEngine::WaitForEndOfFrame*, "UnityEngine", "WaitForEndOfFrame");
// Dependencies UnityEngine.YieldInstruction
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WaitForEndOfFrame
class CORDL_TYPE WaitForEndOfFrame : public ::UnityEngine::YieldInstruction {
public:
  // Declarations
  static inline ::UnityEngine::WaitForEndOfFrame* New_ctor();

  /// @brief Method .ctor, addr 0x6aebe84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitForEndOfFrame();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitForEndOfFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitForEndOfFrame(WaitForEndOfFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitForEndOfFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitForEndOfFrame(WaitForEndOfFrame const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::WaitForEndOfFrame) == 0x10, "Size mismatch!");

} // namespace UnityEngine
