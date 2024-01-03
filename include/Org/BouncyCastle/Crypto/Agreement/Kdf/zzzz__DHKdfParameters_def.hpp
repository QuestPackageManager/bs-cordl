#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHKdfParameters)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class DHKdfParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters);
// Type: Org.BouncyCastle.Crypto.Agreement.Kdf::DHKdfParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(724))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Kdf::DHKdfParameters*
class CORDL_TYPE DHKdfParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x10, size 0x8
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm;

  /// @brief Field keySize, offset 0x18, size 0x4
  __declspec(property(get = __get_keySize, put = __set_keySize)) int32_t keySize;

  /// @brief Field z, offset 0x20, size 0x8
  __declspec(property(get = __get_z, put = __set_z))::ArrayW<uint8_t, ::Array<uint8_t>*> z;

  /// @brief Field extraInfo, offset 0x28, size 0x8
  __declspec(property(get = __get_extraInfo, put = __set_extraInfo))::ArrayW<uint8_t, ::Array<uint8_t>*> extraInfo;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Algorithm;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_algorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr int32_t& __get_keySize();

  constexpr int32_t const& __get_keySize() const;

  constexpr void __set_keySize(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_z();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_z() const;

  constexpr void __set_z(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_extraInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_extraInfo() const;

  constexpr void __set_extraInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method .ctor, addr 0x1216d58, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> z, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraInfo);

  /// @brief Method .ctor, addr 0x1216d98, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize, ::ArrayW<uint8_t, ::Array<uint8_t>*> z, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraInfo);

  /// @brief Method get_Algorithm, addr 0x1216ddc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Algorithm();

  /// @brief Method get_KeySize, addr 0x1216de4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method GetZ, addr 0x1216dec, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetZ();

  /// @brief Method GetExtraInfo, addr 0x1216df4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetExtraInfo();

  // Ctor Parameters [CppParam { name: "", ty: "DHKdfParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHKdfParameters(DHKdfParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHKdfParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHKdfParameters(DHKdfParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHKdfParameters();

public:
  /// @brief Field algorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___algorithm;

  /// @brief Field keySize, offset: 0x18, size: 0x4, def value: None
  int32_t ___keySize;

  /// @brief Field z, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___z;

  /// @brief Field extraInfo, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___extraInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, ___algorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, ___keySize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, ___z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, ___extraInfo) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*, "Org.BouncyCastle.Crypto.Agreement.Kdf", "DHKdfParameters");
