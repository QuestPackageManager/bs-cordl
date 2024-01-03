#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DHAgreement)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class DHAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::DHAgreement);
// Type: Org.BouncyCastle.Crypto.Agreement::DHAgreement
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(732))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::DHAgreement*
class CORDL_TYPE DHAgreement : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* key;

  /// @brief Field dhParams, offset 0x18, size 0x8
  __declspec(property(get = __get_dhParams, put = __set_dhParams))::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams;

  /// @brief Field privateValue, offset 0x20, size 0x8
  __declspec(property(get = __get_privateValue, put = __set_privateValue))::Org::BouncyCastle::Math::BigInteger* privateValue;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*> const& __get_key() const;

  constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __get_dhParams();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> const& __get_dhParams() const;

  constexpr void __set_dhParams(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_privateValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_privateValue() const;

  constexpr void __set_privateValue(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method Init, addr 0x1219360, size 0x1b8, virtual false, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method CalculateMessage, addr 0x1219518, size 0x194, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateMessage();

  /// @brief Method CalculateAgreement, addr 0x12196ac, size 0x298, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* pub, ::Org::BouncyCastle::Math::BigInteger* message);

  static inline ::Org::BouncyCastle::Crypto::Agreement::DHAgreement* New_ctor();

  /// @brief Method .ctor, addr 0x1219944, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DHAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHAgreement(DHAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHAgreement(DHAgreement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHAgreement();

public:
  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* ___key;

  /// @brief Field dhParams, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ___dhParams;

  /// @brief Field privateValue, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___privateValue;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::DHAgreement, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHAgreement, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHAgreement, ___dhParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHAgreement, ___privateValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHAgreement, ___random) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::DHAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::DHAgreement*, "Org.BouncyCastle.Crypto.Agreement", "DHAgreement");
