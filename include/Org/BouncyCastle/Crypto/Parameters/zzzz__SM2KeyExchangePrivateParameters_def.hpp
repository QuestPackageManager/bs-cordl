#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/SM2KeyExchangePrivateParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SM2KeyExchangePrivateParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class SM2KeyExchangePrivateParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters);
// Dependencies Org.BouncyCastle.Crypto.ICipherParameters, System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.SM2KeyExchangePrivateParameters
class CORDL_TYPE SM2KeyExchangePrivateParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EphemeralPrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* EphemeralPrivateKey;

  __declspec(property(get = get_EphemeralPublicPoint)) ::Org::BouncyCastle::Math::EC::ECPoint* EphemeralPublicPoint;

  __declspec(property(get = get_IsInitiator)) bool IsInitiator;

  __declspec(property(get = get_StaticPrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* StaticPrivateKey;

  __declspec(property(get = get_StaticPublicPoint)) ::Org::BouncyCastle::Math::EC::ECPoint* StaticPublicPoint;

  /// @brief Field mEphemeralPrivateKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mEphemeralPrivateKey,
                      put = __cordl_internal_set_mEphemeralPrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mEphemeralPrivateKey;

  /// @brief Field mEphemeralPublicPoint, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mEphemeralPublicPoint, put = __cordl_internal_set_mEphemeralPublicPoint)) ::Org::BouncyCastle::Math::EC::ECPoint* mEphemeralPublicPoint;

  /// @brief Field mInitiator, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mInitiator, put = __cordl_internal_set_mInitiator)) bool mInitiator;

  /// @brief Field mStaticPrivateKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mStaticPrivateKey, put = __cordl_internal_set_mStaticPrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mStaticPrivateKey;

  /// @brief Field mStaticPublicPoint, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mStaticPublicPoint, put = __cordl_internal_set_mStaticPublicPoint)) ::Org::BouncyCastle::Math::EC::ECPoint* mStaticPublicPoint;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters* New_ctor(bool initiator, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* staticPrivateKey,
                                                                                                   ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ephemeralPrivateKey);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* const& __cordl_internal_get_mEphemeralPrivateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __cordl_internal_get_mEphemeralPrivateKey();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_mEphemeralPublicPoint() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_mEphemeralPublicPoint();

  constexpr bool const& __cordl_internal_get_mInitiator() const;

  constexpr bool& __cordl_internal_get_mInitiator();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* const& __cordl_internal_get_mStaticPrivateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __cordl_internal_get_mStaticPrivateKey();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_mStaticPublicPoint() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_mStaticPublicPoint();

  constexpr void __cordl_internal_set_mEphemeralPrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr void __cordl_internal_set_mEphemeralPublicPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr void __cordl_internal_set_mInitiator(bool value);

  constexpr void __cordl_internal_set_mStaticPrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr void __cordl_internal_set_mStaticPublicPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method .ctor, addr 0x23c3058, size 0x268, virtual false, abstract: false, final false
  inline void _ctor(bool initiator, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* staticPrivateKey,
                    ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ephemeralPrivateKey);

  /// @brief Method get_EphemeralPrivateKey, addr 0x23c32d8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_EphemeralPrivateKey();

  /// @brief Method get_EphemeralPublicPoint, addr 0x23c32e0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_EphemeralPublicPoint();

  /// @brief Method get_IsInitiator, addr 0x23c32c0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsInitiator();

  /// @brief Method get_StaticPrivateKey, addr 0x23c32c8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_StaticPrivateKey();

  /// @brief Method get_StaticPublicPoint, addr 0x23c32d0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_StaticPublicPoint();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2KeyExchangePrivateParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePrivateParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2KeyExchangePrivateParameters(SM2KeyExchangePrivateParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePrivateParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2KeyExchangePrivateParameters(SM2KeyExchangePrivateParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1084 };

  /// @brief Field mInitiator, offset: 0x10, size: 0x1, def value: None
  bool ___mInitiator;

  /// @brief Field mStaticPrivateKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___mStaticPrivateKey;

  /// @brief Field mStaticPublicPoint, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___mStaticPublicPoint;

  /// @brief Field mEphemeralPrivateKey, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___mEphemeralPrivateKey;

  /// @brief Field mEphemeralPublicPoint, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___mEphemeralPublicPoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mInitiator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mStaticPrivateKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mStaticPublicPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mEphemeralPrivateKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mEphemeralPublicPoint) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters*, "Org.BouncyCastle.Crypto.Parameters", "SM2KeyExchangePrivateParameters");
