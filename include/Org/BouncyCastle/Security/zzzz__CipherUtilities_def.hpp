#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CipherUtilities)
namespace Org::BouncyCastle::Security {
struct __CipherUtilities__CipherMode;
}
namespace Org::BouncyCastle::Security {
struct __CipherUtilities__CipherAlgorithm;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Security {
struct __CipherUtilities__CipherPadding;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
struct __CipherUtilities__CipherAlgorithm;
}
namespace Org::BouncyCastle::Security {
struct __CipherUtilities__CipherMode;
}
namespace Org::BouncyCastle::Security {
struct __CipherUtilities__CipherPadding;
}
namespace Org::BouncyCastle::Security {
class CipherUtilities;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm);
MARK_VAL_T(::Org::BouncyCastle::Security::__CipherUtilities__CipherMode);
MARK_VAL_T(::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding);
MARK_REF_PTR_T(::Org::BouncyCastle::Security::CipherUtilities);
// Type: ::CipherAlgorithm
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1740))
// CS Name: ::CipherUtilities::CipherAlgorithm
struct CORDL_TYPE __CipherUtilities__CipherAlgorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CipherUtilities__CipherAlgorithm_Unwrapped
  enum struct ____CipherUtilities__CipherAlgorithm_Unwrapped : int32_t {
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
  constexpr operator ____CipherUtilities__CipherAlgorithm_Unwrapped() const noexcept {
    return static_cast<____CipherUtilities__CipherAlgorithm_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CipherUtilities__CipherAlgorithm(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CipherUtilities__CipherAlgorithm();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AES value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const AES;

  /// @brief Field ARC4 value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const ARC4;

  /// @brief Field BLOWFISH value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const BLOWFISH;

  /// @brief Field CAMELLIA value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const CAMELLIA;

  /// @brief Field CAST5 value: static_cast<int32_t>(0x4)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const CAST5;

  /// @brief Field CAST6 value: static_cast<int32_t>(0x5)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const CAST6;

  /// @brief Field CHACHA value: static_cast<int32_t>(0x6)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const CHACHA;

  /// @brief Field CHACHA20_POLY1305 value: static_cast<int32_t>(0x7)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const CHACHA20_POLY1305;

  /// @brief Field CHACHA7539 value: static_cast<int32_t>(0x8)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const CHACHA7539;

  /// @brief Field DES value: static_cast<int32_t>(0x9)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const DES;

  /// @brief Field DESEDE value: static_cast<int32_t>(0xa)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const DESEDE;

  /// @brief Field ELGAMAL value: static_cast<int32_t>(0xb)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const ELGAMAL;

  /// @brief Field GOST28147 value: static_cast<int32_t>(0xc)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const GOST28147;

  /// @brief Field HC128 value: static_cast<int32_t>(0xd)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const HC128;

  /// @brief Field HC256 value: static_cast<int32_t>(0xe)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const HC256;

  /// @brief Field IDEA value: static_cast<int32_t>(0xf)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const IDEA;

  /// @brief Field NOEKEON value: static_cast<int32_t>(0x10)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const NOEKEON;

  /// @brief Field PBEWITHSHAAND128BITRC4 value: static_cast<int32_t>(0x11)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const PBEWITHSHAAND128BITRC4;

  /// @brief Field PBEWITHSHAAND40BITRC4 value: static_cast<int32_t>(0x12)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const PBEWITHSHAAND40BITRC4;

  /// @brief Field RC2 value: static_cast<int32_t>(0x13)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const RC2;

  /// @brief Field RC5 value: static_cast<int32_t>(0x14)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const RC5;

  /// @brief Field RC5_64 value: static_cast<int32_t>(0x15)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const RC5_64;

  /// @brief Field RC6 value: static_cast<int32_t>(0x16)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const RC6;

  /// @brief Field RIJNDAEL value: static_cast<int32_t>(0x17)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const RIJNDAEL;

  /// @brief Field RSA value: static_cast<int32_t>(0x18)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const RSA;

  /// @brief Field SALSA20 value: static_cast<int32_t>(0x19)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const SALSA20;

  /// @brief Field SEED value: static_cast<int32_t>(0x1a)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const SEED;

  /// @brief Field SERPENT value: static_cast<int32_t>(0x1b)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const SERPENT;

  /// @brief Field SKIPJACK value: static_cast<int32_t>(0x1c)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const SKIPJACK;

  /// @brief Field SM4 value: static_cast<int32_t>(0x1d)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const SM4;

  /// @brief Field TEA value: static_cast<int32_t>(0x1e)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const TEA;

  /// @brief Field THREEFISH_256 value: static_cast<int32_t>(0x1f)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const THREEFISH_256;

  /// @brief Field THREEFISH_512 value: static_cast<int32_t>(0x20)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const THREEFISH_512;

  /// @brief Field THREEFISH_1024 value: static_cast<int32_t>(0x21)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const THREEFISH_1024;

  /// @brief Field TNEPRES value: static_cast<int32_t>(0x22)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const TNEPRES;

  /// @brief Field TWOFISH value: static_cast<int32_t>(0x23)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const TWOFISH;

  /// @brief Field VMPC value: static_cast<int32_t>(0x24)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const VMPC;

  /// @brief Field VMPC_KSA3 value: static_cast<int32_t>(0x25)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const VMPC_KSA3;

  /// @brief Field XTEA value: static_cast<int32_t>(0x26)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm const XTEA;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Security
// Type: ::CipherMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1741))
// CS Name: ::CipherUtilities::CipherMode
struct CORDL_TYPE __CipherUtilities__CipherMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CipherUtilities__CipherMode_Unwrapped
  enum struct ____CipherUtilities__CipherMode_Unwrapped : int32_t {
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
  constexpr operator ____CipherUtilities__CipherMode_Unwrapped() const noexcept {
    return static_cast<____CipherUtilities__CipherMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CipherUtilities__CipherMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CipherUtilities__CipherMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ECB value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const ECB;

  /// @brief Field NONE value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const NONE;

  /// @brief Field CBC value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const CBC;

  /// @brief Field CCM value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const CCM;

  /// @brief Field CFB value: static_cast<int32_t>(0x4)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const CFB;

  /// @brief Field CTR value: static_cast<int32_t>(0x5)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const CTR;

  /// @brief Field CTS value: static_cast<int32_t>(0x6)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const CTS;

  /// @brief Field EAX value: static_cast<int32_t>(0x7)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const EAX;

  /// @brief Field GCM value: static_cast<int32_t>(0x8)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const GCM;

  /// @brief Field GOFB value: static_cast<int32_t>(0x9)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const GOFB;

  /// @brief Field OCB value: static_cast<int32_t>(0xa)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const OCB;

  /// @brief Field OFB value: static_cast<int32_t>(0xb)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const OFB;

  /// @brief Field OPENPGPCFB value: static_cast<int32_t>(0xc)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const OPENPGPCFB;

  /// @brief Field SIC value: static_cast<int32_t>(0xd)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode const SIC;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::__CipherUtilities__CipherMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Security::__CipherUtilities__CipherMode, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Security
// Type: ::CipherPadding
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1742))
// CS Name: ::CipherUtilities::CipherPadding
struct CORDL_TYPE __CipherUtilities__CipherPadding {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CipherUtilities__CipherPadding_Unwrapped
  enum struct ____CipherUtilities__CipherPadding_Unwrapped : int32_t {
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
  constexpr operator ____CipherUtilities__CipherPadding_Unwrapped() const noexcept {
    return static_cast<____CipherUtilities__CipherPadding_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CipherUtilities__CipherPadding(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CipherUtilities__CipherPadding();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NOPADDING value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const NOPADDING;

  /// @brief Field RAW value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const RAW;

  /// @brief Field ISO10126PADDING value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const ISO10126PADDING;

  /// @brief Field ISO10126D2PADDING value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const ISO10126D2PADDING;

  /// @brief Field ISO10126_2PADDING value: static_cast<int32_t>(0x4)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const ISO10126_2PADDING;

  /// @brief Field ISO7816_4PADDING value: static_cast<int32_t>(0x5)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const ISO7816_4PADDING;

  /// @brief Field ISO9797_1PADDING value: static_cast<int32_t>(0x6)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const ISO9797_1PADDING;

  /// @brief Field ISO9796_1 value: static_cast<int32_t>(0x7)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const ISO9796_1;

  /// @brief Field ISO9796_1PADDING value: static_cast<int32_t>(0x8)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const ISO9796_1PADDING;

  /// @brief Field OAEP value: static_cast<int32_t>(0x9)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEP;

  /// @brief Field OAEPPADDING value: static_cast<int32_t>(0xa)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPPADDING;

  /// @brief Field OAEPWITHMD5ANDMGF1PADDING value: static_cast<int32_t>(0xb)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHMD5ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA1ANDMGF1PADDING value: static_cast<int32_t>(0xc)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA1ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_1ANDMGF1PADDING value: static_cast<int32_t>(0xd)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA_1ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA224ANDMGF1PADDING value: static_cast<int32_t>(0xe)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA224ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_224ANDMGF1PADDING value: static_cast<int32_t>(0xf)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA_224ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA256ANDMGF1PADDING value: static_cast<int32_t>(0x10)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA256ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_256ANDMGF1PADDING value: static_cast<int32_t>(0x11)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA_256ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA384ANDMGF1PADDING value: static_cast<int32_t>(0x12)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA384ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_384ANDMGF1PADDING value: static_cast<int32_t>(0x13)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA_384ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA512ANDMGF1PADDING value: static_cast<int32_t>(0x14)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA512ANDMGF1PADDING;

  /// @brief Field OAEPWITHSHA_512ANDMGF1PADDING value: static_cast<int32_t>(0x15)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const OAEPWITHSHA_512ANDMGF1PADDING;

  /// @brief Field PKCS1 value: static_cast<int32_t>(0x16)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const PKCS1;

  /// @brief Field PKCS1PADDING value: static_cast<int32_t>(0x17)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const PKCS1PADDING;

  /// @brief Field PKCS5 value: static_cast<int32_t>(0x18)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const PKCS5;

  /// @brief Field PKCS5PADDING value: static_cast<int32_t>(0x19)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const PKCS5PADDING;

  /// @brief Field PKCS7 value: static_cast<int32_t>(0x1a)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const PKCS7;

  /// @brief Field PKCS7PADDING value: static_cast<int32_t>(0x1b)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const PKCS7PADDING;

  /// @brief Field TBCPADDING value: static_cast<int32_t>(0x1c)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const TBCPADDING;

  /// @brief Field WITHCTS value: static_cast<int32_t>(0x1d)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const WITHCTS;

  /// @brief Field X923PADDING value: static_cast<int32_t>(0x1e)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const X923PADDING;

  /// @brief Field ZEROBYTEPADDING value: static_cast<int32_t>(0x1f)
  static ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding const ZEROBYTEPADDING;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Security
// Type: Org.BouncyCastle.Security::CipherUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1743))
// CS Name: ::Org.BouncyCastle.Security::CipherUtilities*
class CORDL_TYPE CipherUtilities : public ::System::Object {
public:
  // Declarations
  using CipherPadding = ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding;

  using CipherMode = ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode;

  using CipherAlgorithm = ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm;

  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms))::System::Collections::IDictionary* algorithms;

  /// @brief Field oids, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_oids, put = setStaticF_oids))::System::Collections::IDictionary* oids;

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline void setStaticF_oids(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_oids();

  static inline ::Org::BouncyCastle::Security::CipherUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x1121578, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetObjectIdentifier, addr 0x1121580, size 0x25c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetObjectIdentifier(::StringW mechanism);

  /// @brief Method get_Algorithms, addr 0x11217dc, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* get_Algorithms();

  /// @brief Method GetCipher, addr 0x11218a8, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IBufferedCipher* GetCipher(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetCipher, addr 0x1121908, size 0x21cc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IBufferedCipher* GetCipher(::StringW algorithm);

  /// @brief Method GetAlgorithmName, addr 0x1124120, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetDigitIndex, addr 0x1123ad4, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t GetDigitIndex(::StringW s);

  /// @brief Method CreateBlockCipher, addr 0x1123b84, size 0x59c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateBlockCipher(::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm cipherAlgorithm);

  // Ctor Parameters [CppParam { name: "", ty: "CipherUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CipherUtilities(CipherUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CipherUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CipherUtilities(CipherUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::CipherUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm, "Org.BouncyCastle.Security", "CipherUtilities/CipherAlgorithm");
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::__CipherUtilities__CipherMode, "Org.BouncyCastle.Security", "CipherUtilities/CipherMode");
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding, "Org.BouncyCastle.Security", "CipherUtilities/CipherPadding");
NEED_NO_BOX(::Org::BouncyCastle::Security::CipherUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::CipherUtilities*, "Org.BouncyCastle.Security", "CipherUtilities");
