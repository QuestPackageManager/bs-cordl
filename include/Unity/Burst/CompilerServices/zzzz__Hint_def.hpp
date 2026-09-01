#pragma once
// IWYU pragma private; include "Unity\Burst\CompilerServices\Hint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Hint)
// Forward declare root types
namespace Unity::Burst::CompilerServices {
class Hint;
}
// Write type traits
MARK_REF_T(::Unity::Burst::CompilerServices::Hint*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::CompilerServices::Hint*, "Unity.Burst.CompilerServices", "Hint");
// Dependencies System.Object
namespace Unity::Burst::CompilerServices {
// Is value type: false
// CS Name: Unity.Burst.CompilerServices.Hint
class CORDL_TYPE Hint : public ::System::Object {
public:
  // Declarations
  /// @brief Method Assume, addr 0x64a7620, size 0x4, virtual false, abstract: false, final false
  static inline void Assume(bool condition);

  /// @brief Method Likely, addr 0x64a7610, size 0x8, virtual false, abstract: false, final false
  static inline bool Likely(bool condition);

  /// @brief Method Unlikely, addr 0x64a7618, size 0x8, virtual false, abstract: false, final false
  static inline bool Unlikely(bool condition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hint(Hint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hint(Hint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17371 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::CompilerServices::Hint) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::CompilerServices
