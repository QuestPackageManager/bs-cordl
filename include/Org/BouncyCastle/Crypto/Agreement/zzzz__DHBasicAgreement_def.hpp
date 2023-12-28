#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHBasicAgreement)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class DHBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement);
// Type: Org.BouncyCastle.Crypto.Agreement::DHBasicAgreement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(734))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::DHBasicAgreement*
class CORDL_TYPE DHBasicAgreement : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* key;

  /// @brief Field dhParams, offset 0x18, size 0x8
  __declspec(property(get = __get_dhParams, put = __set_dhParams))::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
  constexpr operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*> const& __get_key() const;

  constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __get_dhParams();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> const& __get_dhParams() const;

  constexpr void __set_dhParams(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  /// @brief Method Init addr 0x121994c size 0x13c virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetFieldSize addr 0x1219a88 size 0x44 virtual true final false
  inline int32_t GetFieldSize();

  /// @brief Method CalculateAgreement addr 0x1219acc size 0x27c virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey);

  static inline ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* New_ctor();

  /// @brief Method .ctor addr 0x1219d48 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DHBasicAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHBasicAgreement(DHBasicAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHBasicAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHBasicAgreement(DHBasicAgreement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHBasicAgreement();

public:
  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* ___key;

  /// @brief Field dhParams, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ___dhParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "DHBasicAgreement");
