#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\HaltonSequence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HaltonSequence)
// Forward declare root types
namespace UnityEngine::Rendering {
class HaltonSequence;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::HaltonSequence*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::HaltonSequence*, "UnityEngine.Rendering", "HaltonSequence");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.HaltonSequence
class CORDL_TYPE HaltonSequence : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0x67c5370, size 0x44, virtual false, abstract: false, final false
  static inline float_t Get(int32_t index, int32_t radix);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HaltonSequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HaltonSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HaltonSequence(HaltonSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HaltonSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HaltonSequence(HaltonSequence const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12301 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::HaltonSequence) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
