#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/ECMqvBasicAgreement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECMqvBasicAgreement)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class MqvPrivateParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECMqvBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement);
// Type: Org.BouncyCastle.Crypto.Agreement::ECMqvBasicAgreement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::ECMqvBasicAgreement*
class CORDL_TYPE ECMqvBasicAgreement : public ::System::Object {
public:
  // Declarations
  /// @brief Field privParams, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_privParams, put = __cordl_internal_set_privParams))::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters* privParams;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
  constexpr operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept;

  /// @brief Method CalculateAgreement, addr 0x1483048, size 0x20c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey);

  /// @brief Method CalculateMqvAgreement, addr 0x1483254, size 0x254, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint*
  CalculateMqvAgreement(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* d1U,
                        ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* d2U, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Q2U,
                        ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Q1V, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Q2V);

  /// @brief Method GetFieldSize, addr 0x1482ff0, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetFieldSize();

  /// @brief Method Init, addr 0x1482f04, size 0xec, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters*& __cordl_internal_get_privParams();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters*> const& __cordl_internal_get_privParams() const;

  constexpr void __cordl_internal_set_privParams(::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters* value);

  /// @brief Method .ctor, addr 0x14834a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBasicAgreement"
  constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement* i___Org__BouncyCastle__Crypto__IBasicAgreement() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECMqvBasicAgreement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECMqvBasicAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECMqvBasicAgreement(ECMqvBasicAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECMqvBasicAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECMqvBasicAgreement(ECMqvBasicAgreement const&) = delete;

  /// @brief Field privParams, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters* ___privParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement, ___privParams) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECMqvBasicAgreement");
