#pragma once
// IWYU pragma private; include "GlobalNamespace\NormalizedHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NormalizedHash)
// Forward declare root types
namespace GlobalNamespace {
class NormalizedHash;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NormalizedHash*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NormalizedHash*, "", "NormalizedHash");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NormalizedHash
class CORDL_TYPE NormalizedHash : public ::System::Object {
public:
  // Declarations
  /// @brief Method Evaluate, addr 0x330c394, size 0x64, virtual false, abstract: false, final false
  static inline double_t Evaluate(double_t seed);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalizedHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NormalizedHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalizedHash(NormalizedHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalizedHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalizedHash(NormalizedHash const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20461 };

  /// @brief Field kHashMixer offset 0xffffffff size 0x4
  static constexpr uint32_t kHashMixer{ static_cast<uint32_t>(0x27d4eb2du) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NormalizedHash) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
