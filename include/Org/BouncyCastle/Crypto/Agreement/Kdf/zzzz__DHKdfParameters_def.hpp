#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/Kdf/DHKdfParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.Kdf.DHKdfParameters
class CORDL_TYPE DHKdfParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Algorithm;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  /// @brief Field algorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm;

  /// @brief Field extraInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_extraInfo, put = __cordl_internal_set_extraInfo)) ::ArrayW<uint8_t, ::Array<uint8_t>*> extraInfo;

  /// @brief Field keySize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_keySize, put = __cordl_internal_set_keySize)) int32_t keySize;

  /// @brief Field z, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) ::ArrayW<uint8_t, ::Array<uint8_t>*> z;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

  /// @brief Method GetExtraInfo, addr 0x35ba538, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetExtraInfo();

  /// @brief Method GetZ, addr 0x35ba530, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetZ();

  static inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> z, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraInfo);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_algorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_algorithm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_extraInfo() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_extraInfo();

  constexpr int32_t const& __cordl_internal_get_keySize() const;

  constexpr int32_t& __cordl_internal_get_keySize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_z() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_extraInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_keySize(int32_t value);

  constexpr void __cordl_internal_set_z(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x35ba500, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method .ctor, addr 0x35ba510, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize, ::ArrayW<uint8_t, ::Array<uint8_t>*> z, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraInfo);

  /// @brief Method get_Algorithm, addr 0x35ba520, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Algorithm();

  /// @brief Method get_KeySize, addr 0x35ba528, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHKdfParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHKdfParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHKdfParameters(DHKdfParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHKdfParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHKdfParameters(DHKdfParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 724 };

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
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, ___algorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, ___keySize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, ___z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, ___extraInfo) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*, "Org.BouncyCastle.Crypto.Agreement.Kdf", "DHKdfParameters");
