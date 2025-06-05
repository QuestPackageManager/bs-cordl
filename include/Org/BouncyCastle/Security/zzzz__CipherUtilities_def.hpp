#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/CipherUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CipherUtilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Security {
struct CipherUtilities_CipherAlgorithm;
}
namespace Org::BouncyCastle::Security {
struct CipherUtilities_CipherMode;
}
namespace Org::BouncyCastle::Security {
struct CipherUtilities_CipherPadding;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
struct CipherUtilities_CipherAlgorithm;
}
namespace Org::BouncyCastle::Security {
struct CipherUtilities_CipherMode;
}
namespace Org::BouncyCastle::Security {
struct CipherUtilities_CipherPadding;
}
namespace Org::BouncyCastle::Security {
class CipherUtilities;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm);
MARK_VAL_T(::Org::BouncyCastle::Security::CipherUtilities_CipherMode);
MARK_VAL_T(::Org::BouncyCastle::Security::CipherUtilities_CipherPadding);
MARK_REF_PTR_T(::Org::BouncyCastle::Security::CipherUtilities);
// Dependencies
namespace Org::BouncyCastle::Security {
// Is value type: true
// CS Name: Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm
struct CORDL_TYPE CipherUtilities_CipherAlgorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CipherUtilities_CipherAlgorithm_Unwrapped
  enum struct __CipherUtilities_CipherAlgorithm_Unwrapped : int32_t {
    __E_AES = static_cast<int32_t>(0x0),
    __E_ARC4 = static_cast<int32_t>(0x1),
    __E_BLOWFISH = static_cast<int32_t>(0x2),
    __E_CAMELLIA = static_cast<int32_t>(0x3),
    __E_CAST5 = static_cast<int32_t>(0x4),
    __E_CAST6 = static_cast<int32_t>(0x5),
    __E_CHACHA = static_cast<int32_t>(0x6),
    __E_CHACHA20_POLY1305 = static_cast<int32_t>(0x7),
    __E_CHACHA7539 = static_cast<int32_t>(0x8),
    __E_DES = static_cast<int32_t>(0x9),
    __E_DESEDE = static_cast<int32_t>(0xa),
    __E_ELGAMAL = static_cast<int32_t>(0xb),
    __E_GOST28147 = static_cast<int32_t>(0xc),
    __E_HC128 = static_cast<int32_t>(0xd),
    __E_HC256 = static_cast<int32_t>(0xe),
    __E_IDEA = static_cast<int32_t>(0xf),
    __E_NOEKEON = static_cast<int32_t>(0x10),
    __E_PBEWITHSHAAND128BITRC4 = static_cast<int32_t>(0x11),
    __E_PBEWITHSHAAND40BITRC4 = static_cast<int32_t>(0x12),
    __E_RC2 = static_cast<int32_t>(0x13),
    __E_RC5 = static_cast<int32_t>(0x14),
    __E_RC5_64 = static_cast<int32_t>(0x15),
    __E_RC6 = static_cast<int32_t>(0x16),
    __E_RIJNDAEL = static_cast<int32_t>(0x17),
    __E_RSA = static_cast<int32_t>(0x18),
    __E_SALSA20 = static_cast<int32_t>(0x19),
    __E_SEED = static_cast<int32_t>(0x1a),
    __E_SERPENT = static_cast<int32_t>(0x1b),
    __E_SKIPJACK = static_cast<int32_t>(0x1c),
    __E_SM4 = static_cast<int32_t>(0x1d),
    __E_TEA = static_cast<int32_t>(0x1e),
    __E_THREEFISH_256 = static_cast<int32_t>(0x1f),
    __E_THREEFISH_512 = static_cast<int32_t>(0x20),
    __E_THREEFISH_1024 = static_cast<int32_t>(0x21),
    __E_TNEPRES = static_cast<int32_t>(0x22),
    __E_TWOFISH = static_cast<int32_t>(0x23),
    __E_VMPC = static_cast<int32_t>(0x24),
    __E_VMPC_KSA3 = static_cast<int32_t>(0x25),
    __E_XTEA = static_cast<int32_t>(0x26),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CipherUtilities_CipherAlgorithm_Unwrapped() const noexcept {
    return static_cast<__CipherUtilities_CipherAlgorithm_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherUtilities_CipherAlgorithm();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CipherUtilities_CipherAlgorithm(int32_t value__) noexcept;

  /// @brief Field AES value: I32(0)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const AES;

  /// @brief Field ARC4 value: I32(1)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const ARC4;

  /// @brief Field BLOWFISH value: I32(2)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const BLOWFISH;

  /// @brief Field CAMELLIA value: I32(3)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const CAMELLIA;

  /// @brief Field CAST5 value: I32(4)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const CAST5;

  /// @brief Field CAST6 value: I32(5)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const CAST6;

  /// @brief Field CHACHA value: I32(6)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const CHACHA;

  /// @brief Field CHACHA20_POLY1305 value: I32(7)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const CHACHA20_POLY1305;

  /// @brief Field CHACHA7539 value: I32(8)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const CHACHA7539;

  /// @brief Field DES value: I32(9)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const DES;

  /// @brief Field DESEDE value: I32(10)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const DESEDE;

  /// @brief Field ELGAMAL value: I32(11)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const ELGAMAL;

  /// @brief Field GOST28147 value: I32(12)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const GOST28147;

  /// @brief Field HC128 value: I32(13)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const HC128;

  /// @brief Field HC256 value: I32(14)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const HC256;

  /// @brief Field IDEA value: I32(15)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const IDEA;

  /// @brief Field NOEKEON value: I32(16)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const NOEKEON;

  /// @brief Field PBEWITHSHAAND128BITRC4 value: I32(17)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const PBEWITHSHAAND128BITRC4;

  /// @brief Field PBEWITHSHAAND40BITRC4 value: I32(18)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const PBEWITHSHAAND40BITRC4;

  /// @brief Field RC2 value: I32(19)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const RC2;

  /// @brief Field RC5 value: I32(20)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const RC5;

  /// @brief Field RC5_64 value: I32(21)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const RC5_64;

  /// @brief Field RC6 value: I32(22)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const RC6;

  /// @brief Field RIJNDAEL value: I32(23)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const RIJNDAEL;

  /// @brief Field RSA value: I32(24)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const RSA;

  /// @brief Field SALSA20 value: I32(25)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const SALSA20;

  /// @brief Field SEED value: I32(26)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const SEED;

  /// @brief Field SERPENT value: I32(27)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const SERPENT;

  /// @brief Field SKIPJACK value: I32(28)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const SKIPJACK;

  /// @brief Field SM4 value: I32(29)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const SM4;

  /// @brief Field TEA value: I32(30)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const TEA;

  /// @brief Field THREEFISH_1024 value: I32(33)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const THREEFISH_1024;

  /// @brief Field THREEFISH_256 value: I32(31)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const THREEFISH_256;

  /// @brief Field THREEFISH_512 value: I32(32)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const THREEFISH_512;

  /// @brief Field TNEPRES value: I32(34)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const TNEPRES;

  /// @brief Field TWOFISH value: I32(35)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const TWOFISH;

  /// @brief Field VMPC value: I32(36)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const VMPC;

  /// @brief Field VMPC_KSA3 value: I32(37)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const VMPC_KSA3;

  /// @brief Field XTEA value: I32(38)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm const XTEA;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1740 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
// Dependencies
namespace Org::BouncyCastle::Security {
// Is value type: true
// CS Name: Org.BouncyCastle.Security.CipherUtilities/CipherMode
struct CORDL_TYPE CipherUtilities_CipherMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CipherUtilities_CipherMode_Unwrapped
  enum struct __CipherUtilities_CipherMode_Unwrapped : int32_t {
    __E_ECB = static_cast<int32_t>(0x0),
    __E_NONE = static_cast<int32_t>(0x1),
    __E_CBC = static_cast<int32_t>(0x2),
    __E_CCM = static_cast<int32_t>(0x3),
    __E_CFB = static_cast<int32_t>(0x4),
    __E_CTR = static_cast<int32_t>(0x5),
    __E_CTS = static_cast<int32_t>(0x6),
    __E_EAX = static_cast<int32_t>(0x7),
    __E_GCM = static_cast<int32_t>(0x8),
    __E_GOFB = static_cast<int32_t>(0x9),
    __E_OCB = static_cast<int32_t>(0xa),
    __E_OFB = static_cast<int32_t>(0xb),
    __E_OPENPGPCFB = static_cast<int32_t>(0xc),
    __E_SIC = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CipherUtilities_CipherMode_Unwrapped() const noexcept {
    return static_cast<__CipherUtilities_CipherMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherUtilities_CipherMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CipherUtilities_CipherMode(int32_t value__) noexcept;

  /// @brief Field CBC value: I32(2)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const CBC;

  /// @brief Field CCM value: I32(3)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const CCM;

  /// @brief Field CFB value: I32(4)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const CFB;

  /// @brief Field CTR value: I32(5)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const CTR;

  /// @brief Field CTS value: I32(6)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const CTS;

  /// @brief Field EAX value: I32(7)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const EAX;

  /// @brief Field ECB value: I32(0)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const ECB;

  /// @brief Field GCM value: I32(8)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const GCM;

  /// @brief Field GOFB value: I32(9)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const GOFB;

  /// @brief Field NONE value: I32(1)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const NONE;

  /// @brief Field OCB value: I32(10)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const OCB;

  /// @brief Field OFB value: I32(11)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const OFB;

  /// @brief Field OPENPGPCFB value: I32(12)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const OPENPGPCFB;

  /// @brief Field SIC value: I32(13)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherMode const SIC;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1741 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Security::CipherUtilities_CipherMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::CipherUtilities_CipherMode, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
// Dependencies
namespace Org::BouncyCastle::Security {
// Is value type: true
// CS Name: Org.BouncyCastle.Security.CipherUtilities/CipherPadding
struct CORDL_TYPE CipherUtilities_CipherPadding {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CipherUtilities_CipherPadding_Unwrapped
  enum struct __CipherUtilities_CipherPadding_Unwrapped : int32_t {
    __E_NOPADDING = static_cast<int32_t>(0x0),
    __E_RAW = static_cast<int32_t>(0x1),
    __E_ISO10126PADDING = static_cast<int32_t>(0x2),
    __E_ISO10126D2PADDING = static_cast<int32_t>(0x3),
    __E_ISO10126_2PADDING = static_cast<int32_t>(0x4),
    __E_ISO7816_4PADDING = static_cast<int32_t>(0x5),
    __E_ISO9797_1PADDING = static_cast<int32_t>(0x6),
    __E_ISO9796_1 = static_cast<int32_t>(0x7),
    __E_ISO9796_1PADDING = static_cast<int32_t>(0x8),
    __E_OAEP = static_cast<int32_t>(0x9),
    __E_OAEPPADDING = static_cast<int32_t>(0xa),
    __E_OAEPWITHMD5ANDMGF1PADDING = static_cast<int32_t>(0xb),
    __E_OAEPWITHSHA1ANDMGF1PADDING = static_cast<int32_t>(0xc),
    __E_OAEPWITHSHA_1ANDMGF1PADDING = static_cast<int32_t>(0xd),
    __E_OAEPWITHSHA224ANDMGF1PADDING = static_cast<int32_t>(0xe),
    __E_OAEPWITHSHA_224ANDMGF1PADDING = static_cast<int32_t>(0xf),
    __E_OAEPWITHSHA256ANDMGF1PADDING = static_cast<int32_t>(0x10),
    __E_OAEPWITHSHA_256ANDMGF1PADDING = static_cast<int32_t>(0x11),
    __E_OAEPWITHSHA384ANDMGF1PADDING = static_cast<int32_t>(0x12),
    __E_OAEPWITHSHA_384ANDMGF1PADDING = static_cast<int32_t>(0x13),
    __E_OAEPWITHSHA512ANDMGF1PADDING = static_cast<int32_t>(0x14),
    __E_OAEPWITHSHA_512ANDMGF1PADDING = static_cast<int32_t>(0x15),
    __E_PKCS1 = static_cast<int32_t>(0x16),
    __E_PKCS1PADDING = static_cast<int32_t>(0x17),
    __E_PKCS5 = static_cast<int32_t>(0x18),
    __E_PKCS5PADDING = static_cast<int32_t>(0x19),
    __E_PKCS7 = static_cast<int32_t>(0x1a),
    __E_PKCS7PADDING = static_cast<int32_t>(0x1b),
    __E_TBCPADDING = static_cast<int32_t>(0x1c),
    __E_WITHCTS = static_cast<int32_t>(0x1d),
    __E_X923PADDING = static_cast<int32_t>(0x1e),
    __E_ZEROBYTEPADDING = static_cast<int32_t>(0x1f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CipherUtilities_CipherPadding_Unwrapped() const noexcept {
    return static_cast<__CipherUtilities_CipherPadding_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherUtilities_CipherPadding();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CipherUtilities_CipherPadding(int32_t value__) noexcept;

  /// @brief Field ISO10126D2PADDING value: I32(3)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const ISO10126D2PADDING;

  /// @brief Field ISO10126PADDING value: I32(2)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const ISO10126PADDING;

  /// @brief Field ISO10126_2PADDING value: I32(4)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const ISO10126_2PADDING;

  /// @brief Field ISO7816_4PADDING value: I32(5)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const ISO7816_4PADDING;

  /// @brief Field ISO9796_1 value: I32(7)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const ISO9796_1;

  /// @brief Field ISO9796_1PADDING value: I32(8)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const ISO9796_1PADDING;

  /// @brief Field ISO9797_1PADDING value: I32(6)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const ISO9797_1PADDING;

  /// @brief Field NOPADDING value: I32(0)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const NOPADDING;

  /// @brief Field OAEP value: I32(9)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEP;

  /// @brief Field OAEPPADDING value: I32(10)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPPADDING;

  /// @brief Field OAEPWITHMD5ANDMGF1PADDING value: I32(11)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHMD5ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA1ANDMGF1PADDING value: I32(12)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA1ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA224ANDMGF1PADDING value: I32(14)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA224ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA256ANDMGF1PADDING value: I32(16)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA256ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA384ANDMGF1PADDING value: I32(18)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA384ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA512ANDMGF1PADDING value: I32(20)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA512ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_1ANDMGF1PADDING value: I32(13)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA_1ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_224ANDMGF1PADDING value: I32(15)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA_224ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_256ANDMGF1PADDING value: I32(17)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA_256ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_384ANDMGF1PADDING value: I32(19)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA_384ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_512ANDMGF1PADDING value: I32(21)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const OAEPWITHSHA_512ANDMGF1PADDING;

  /// @brief Field PKCS1 value: I32(22)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const PKCS1;

  /// @brief Field PKCS1PADDING value: I32(23)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const PKCS1PADDING;

  /// @brief Field PKCS5 value: I32(24)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const PKCS5;

  /// @brief Field PKCS5PADDING value: I32(25)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const PKCS5PADDING;

  /// @brief Field PKCS7 value: I32(26)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const PKCS7;

  /// @brief Field PKCS7PADDING value: I32(27)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const PKCS7PADDING;

  /// @brief Field RAW value: I32(1)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const RAW;

  /// @brief Field TBCPADDING value: I32(28)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const TBCPADDING;

  /// @brief Field WITHCTS value: I32(29)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const WITHCTS;

  /// @brief Field X923PADDING value: I32(30)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const X923PADDING;

  /// @brief Field ZEROBYTEPADDING value: I32(31)
  static ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding const ZEROBYTEPADDING;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1742 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Security::CipherUtilities_CipherPadding, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::CipherUtilities_CipherPadding, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
// Dependencies System.Object
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.CipherUtilities
class CORDL_TYPE CipherUtilities : public ::System::Object {
public:
  // Declarations
  using CipherAlgorithm = ::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm;

  using CipherMode = ::Org::BouncyCastle::Security::CipherUtilities_CipherMode;

  using CipherPadding = ::Org::BouncyCastle::Security::CipherUtilities_CipherPadding;

  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::IDictionary* algorithms;

  /// @brief Field oids, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_oids, put = setStaticF_oids)) ::System::Collections::IDictionary* oids;

  /// @brief Method CreateBlockCipher, addr 0x25a03b0, size 0x534, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateBlockCipher(::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm cipherAlgorithm);

  /// @brief Method GetAlgorithmName, addr 0x25a08e4, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetCipher, addr 0x259e444, size 0x1ebc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IBufferedCipher* GetCipher(::StringW algorithm);

  /// @brief Method GetCipher, addr 0x259e3e4, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IBufferedCipher* GetCipher(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetDigitIndex, addr 0x25a0300, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t GetDigitIndex(::StringW s);

  /// @brief Method GetObjectIdentifier, addr 0x259e0c0, size 0x258, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetObjectIdentifier(::StringW mechanism);

  static inline ::Org::BouncyCastle::Security::CipherUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x259e0b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline ::System::Collections::IDictionary* getStaticF_oids();

  /// @brief Method get_Algorithms, addr 0x259e318, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* get_Algorithms();

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_oids(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CipherUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CipherUtilities(CipherUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CipherUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CipherUtilities(CipherUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1743 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::CipherUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::CipherUtilities_CipherAlgorithm, "Org.BouncyCastle.Security", "CipherUtilities/CipherAlgorithm");
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::CipherUtilities_CipherMode, "Org.BouncyCastle.Security", "CipherUtilities/CipherMode");
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::CipherUtilities_CipherPadding, "Org.BouncyCastle.Security", "CipherUtilities/CipherPadding");
NEED_NO_BOX(::Org::BouncyCastle::Security::CipherUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::CipherUtilities*, "Org.BouncyCastle.Security", "CipherUtilities");
