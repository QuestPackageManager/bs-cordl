#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Macs/GMac.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GMac)
namespace Org::BouncyCastle::Crypto::Modes {
class GcmBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class GMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::GMac);
// Dependencies Org.BouncyCastle.Crypto.IMac, System.Object
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Macs.GMac
class CORDL_TYPE GMac : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* cipher;

  /// @brief Field macSizeBits, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_macSizeBits, put = __cordl_internal_set_macSizeBits)) int32_t macSizeBits;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Method BlockUpdate, addr 0x2397340, size 0x24, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x2397364, size 0xf0, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetMacSize, addr 0x2397304, size 0x18, virtual true, abstract: false, final true
  inline int32_t GetMacSize();

  /// @brief Method Init, addr 0x23970bc, size 0x180, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Macs::GMac* New_ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Crypto::Macs::GMac* New_ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* cipher, int32_t macSizeBits);

  /// @brief Method Reset, addr 0x2397454, size 0x24, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Update, addr 0x239731c, size 0x24, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*& __cordl_internal_get_cipher();

  constexpr int32_t const& __cordl_internal_get_macSizeBits() const;

  constexpr int32_t& __cordl_internal_get_macSizeBits();

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* value);

  constexpr void __cordl_internal_set_macSizeBits(int32_t value);

  /// @brief Method .ctor, addr 0x239705c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* cipher);

  /// @brief Method .ctor, addr 0x239708c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* cipher, int32_t macSizeBits);

  /// @brief Method get_AlgorithmName, addr 0x239723c, size 0xc8, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GMac();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GMac(GMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GMac(GMac const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 941 };

  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* ___cipher;

  /// @brief Field macSizeBits, offset: 0x18, size: 0x4, def value: None
  int32_t ___macSizeBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::GMac, ___cipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::GMac, ___macSizeBits) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::GMac, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::GMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::GMac*, "Org.BouncyCastle.Crypto.Macs", "GMac");
