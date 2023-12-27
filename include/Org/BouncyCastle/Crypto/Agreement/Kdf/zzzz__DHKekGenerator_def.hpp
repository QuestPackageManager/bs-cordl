#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHKekGenerator)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class DHKekGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator);
// Type: Org.BouncyCastle.Crypto.Agreement.Kdf::DHKekGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(725))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Kdf::DHKekGenerator*
class CORDL_TYPE DHKekGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm;

  /// @brief Field keySize, offset 0x20, size 0x4
  __declspec(property(get = __get_keySize, put = __set_keySize)) int32_t keySize;

  /// @brief Field z, offset 0x28, size 0x8
  __declspec(property(get = __get_z, put = __set_z))::ArrayW<uint8_t, ::Array<uint8_t>*> z;

  /// @brief Field partyAInfo, offset 0x30, size 0x8
  __declspec(property(get = __get_partyAInfo, put = __set_partyAInfo))::ArrayW<uint8_t, ::Array<uint8_t>*> partyAInfo;

  __declspec(property(get = get_Digest))::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_algorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr int32_t& __get_keySize();

  constexpr int32_t const& __get_keySize() const;

  constexpr void __set_keySize(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_z();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_z() const;

  constexpr void __set_z(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_partyAInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_partyAInfo() const;

  constexpr void __set_partyAInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0x1216dfc size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Init addr 0x1216e24 size 0x98 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* param);

  /// @brief Method get_Digest addr 0x1216ebc size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Method GenerateBytes addr 0x1216ec4 size 0x6b0 virtual true final false
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "DHKekGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHKekGenerator(DHKekGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHKekGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHKekGenerator(DHKekGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHKekGenerator();

public:
  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field algorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___algorithm;

  /// @brief Field keySize, offset: 0x20, size: 0x4, def value: None
  int32_t ___keySize;

  /// @brief Field z, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___z;

  /// @brief Field partyAInfo, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___partyAInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*, "Org.BouncyCastle.Crypto.Agreement.Kdf", "DHKekGenerator");
