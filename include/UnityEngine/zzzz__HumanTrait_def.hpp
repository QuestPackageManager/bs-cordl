#pragma once
// IWYU pragma private; include "UnityEngine\HumanTrait.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HumanTrait)
// Forward declare root types
namespace UnityEngine {
class HumanTrait;
}
// Write type traits
MARK_REF_T(::UnityEngine::HumanTrait*);
DEFINE_IL2CPP_CLASS(::UnityEngine::HumanTrait*, "UnityEngine", "HumanTrait");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.HumanTrait
class CORDL_TYPE HumanTrait : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBoneIndexFromMono, addr 0x6a3f5a0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoneIndexFromMono(int32_t humanId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanTrait();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HumanTrait", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HumanTrait(HumanTrait&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HumanTrait", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HumanTrait(HumanTrait const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20238 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::HumanTrait) == 0x10, "Size mismatch!");

} // namespace UnityEngine
