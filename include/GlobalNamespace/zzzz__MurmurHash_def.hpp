#pragma once
// IWYU pragma private; include "GlobalNamespace/MurmurHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MurmurHash)
// Forward declare root types
namespace GlobalNamespace {
class MurmurHash;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MurmurHash);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MurmurHash
class CORDL_TYPE MurmurHash : public ::System::Object {
public:
  // Declarations
  /// @brief Method MurmurHash2, addr 0x2721c54, size 0x16c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17007 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MurmurHash, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MurmurHash);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MurmurHash*, "", "MurmurHash");
