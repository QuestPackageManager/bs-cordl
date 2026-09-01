#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\Drbg\DrbgUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DrbgUtilities)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class DrbgUtilities;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*, "Org.BouncyCastle.Crypto.Prng.Drbg", "DrbgUtilities");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.Drbg.DrbgUtilities
class CORDL_TYPE DrbgUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field maxSecurityStrengths, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_maxSecurityStrengths, put = setStaticF_maxSecurityStrengths)) ::System::Collections::IDictionary* maxSecurityStrengths;

  /// @brief Method GetMaxSecurityStrength, addr 0x341abb4, size 0x17c, virtual false, abstract: false, final false
  static inline int32_t GetMaxSecurityStrength(::Org::BouncyCastle::Crypto::IDigest* d);

  /// @brief Method GetMaxSecurityStrength, addr 0x341ad30, size 0x1d0, virtual false, abstract: false, final false
  static inline int32_t GetMaxSecurityStrength(::Org::BouncyCastle::Crypto::IMac* m);

  /// @brief Method HashDF, addr 0x341af00, size 0x51c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> HashDF(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> seedMaterial, int32_t seedLength);

  /// @brief Method IsTooLarge, addr 0x341a304, size 0x14, virtual false, abstract: false, final false
  static inline bool IsTooLarge(::ArrayW<uint8_t> bytes, int32_t maxBytes);

  static inline ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x341b41c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_maxSecurityStrengths();

  static inline void setStaticF_maxSecurityStrengths(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrbgUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrbgUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrbgUtilities(DrbgUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrbgUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrbgUtilities(DrbgUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1096 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng::Drbg
