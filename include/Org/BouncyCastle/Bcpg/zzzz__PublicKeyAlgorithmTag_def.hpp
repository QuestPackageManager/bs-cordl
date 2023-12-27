#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PublicKeyAlgorithmTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag);
// Type: Org.BouncyCastle.Bcpg::PublicKeyAlgorithmTag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(580))
// CS Name: ::Org.BouncyCastle.Bcpg::PublicKeyAlgorithmTag
struct CORDL_TYPE PublicKeyAlgorithmTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PublicKeyAlgorithmTag_Unwrapped
  enum struct __PublicKeyAlgorithmTag_Unwrapped : int32_t {
    __E_RsaGeneral = static_cast<int32_t>(0x1),
    __E_RsaEncrypt = static_cast<int32_t>(0x2),
    __E_RsaSign = static_cast<int32_t>(0x3),
    __E_ElGamalEncrypt = static_cast<int32_t>(0x10),
    __E_Dsa = static_cast<int32_t>(0x11),
    __E_EC = static_cast<int32_t>(0x12),
    __E_ECDH = static_cast<int32_t>(0x12),
    __E_ECDsa = static_cast<int32_t>(0x13),
    __E_ElGamalGeneral = static_cast<int32_t>(0x14),
    __E_DiffieHellman = static_cast<int32_t>(0x15),
    __E_EdDsa = static_cast<int32_t>(0x16),
    __E_Experimental_1 = static_cast<int32_t>(0x64),
    __E_Experimental_2 = static_cast<int32_t>(0x65),
    __E_Experimental_3 = static_cast<int32_t>(0x66),
    __E_Experimental_4 = static_cast<int32_t>(0x67),
    __E_Experimental_5 = static_cast<int32_t>(0x68),
    __E_Experimental_6 = static_cast<int32_t>(0x69),
    __E_Experimental_7 = static_cast<int32_t>(0x6a),
    __E_Experimental_8 = static_cast<int32_t>(0x6b),
    __E_Experimental_9 = static_cast<int32_t>(0x6c),
    __E_Experimental_10 = static_cast<int32_t>(0x6d),
    __E_Experimental_11 = static_cast<int32_t>(0x6e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PublicKeyAlgorithmTag_Unwrapped() const noexcept {
    return static_cast<__PublicKeyAlgorithmTag_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PublicKeyAlgorithmTag(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicKeyAlgorithmTag();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field RsaGeneral value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const RsaGeneral;

  /// @brief Field RsaEncrypt value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const RsaEncrypt;

  /// @brief Field RsaSign value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const RsaSign;

  /// @brief Field ElGamalEncrypt value: static_cast<int32_t>(0x10)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const ElGamalEncrypt;

  /// @brief Field Dsa value: static_cast<int32_t>(0x11)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Dsa;

  /// @brief Field EC value: static_cast<int32_t>(0x12)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const EC;

  /// @brief Field ECDH value: static_cast<int32_t>(0x12)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const ECDH;

  /// @brief Field ECDsa value: static_cast<int32_t>(0x13)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const ECDsa;

  /// @brief Field ElGamalGeneral value: static_cast<int32_t>(0x14)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const ElGamalGeneral;

  /// @brief Field DiffieHellman value: static_cast<int32_t>(0x15)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const DiffieHellman;

  /// @brief Field EdDsa value: static_cast<int32_t>(0x16)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const EdDsa;

  /// @brief Field Experimental_1 value: static_cast<int32_t>(0x64)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_1;

  /// @brief Field Experimental_2 value: static_cast<int32_t>(0x65)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_2;

  /// @brief Field Experimental_3 value: static_cast<int32_t>(0x66)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_3;

  /// @brief Field Experimental_4 value: static_cast<int32_t>(0x67)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_4;

  /// @brief Field Experimental_5 value: static_cast<int32_t>(0x68)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_5;

  /// @brief Field Experimental_6 value: static_cast<int32_t>(0x69)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_6;

  /// @brief Field Experimental_7 value: static_cast<int32_t>(0x6a)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_7;

  /// @brief Field Experimental_8 value: static_cast<int32_t>(0x6b)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_8;

  /// @brief Field Experimental_9 value: static_cast<int32_t>(0x6c)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_9;

  /// @brief Field Experimental_10 value: static_cast<int32_t>(0x6d)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_10;

  /// @brief Field Experimental_11 value: static_cast<int32_t>(0x6e)
  static ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const Experimental_11;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, "Org.BouncyCastle.Bcpg", "PublicKeyAlgorithmTag");
