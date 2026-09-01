#pragma once
// IWYU pragma private; include "GlobalNamespace\MurmurHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MurmurHash)
// Forward declare root types
namespace GlobalNamespace {
class MurmurHash;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MurmurHash*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MurmurHash*, "", "MurmurHash");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MurmurHash
class CORDL_TYPE MurmurHash : public ::System::Object {
public:
  // Declarations
  /// @brief Method MurmurHash2, addr 0x377e970, size 0x184, virtual false, abstract: false, final false
  static inline uint32_t MurmurHash2(::StringW key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MurmurHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MurmurHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MurmurHash(MurmurHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MurmurHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MurmurHash(MurmurHash const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21194 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MurmurHash) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
