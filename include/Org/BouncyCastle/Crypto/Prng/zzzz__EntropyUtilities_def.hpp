#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/EntropyUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EntropyUtilities)
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class EntropyUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::EntropyUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.EntropyUtilities
class CORDL_TYPE EntropyUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method GenerateSeed, addr 0x23ca1cc, size 0x15c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSeed(::Org::BouncyCastle::Crypto::IEntropySource* entropySource, int32_t numBytes);

  static inline ::Org::BouncyCastle::Crypto::Prng::EntropyUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x23ca328, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntropyUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntropyUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntropyUtilities(EntropyUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntropyUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntropyUtilities(EntropyUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1108 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::EntropyUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::EntropyUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::EntropyUtilities*, "Org.BouncyCastle.Crypto.Prng", "EntropyUtilities");
