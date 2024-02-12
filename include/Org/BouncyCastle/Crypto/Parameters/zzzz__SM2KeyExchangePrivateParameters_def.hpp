#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SM2KeyExchangePrivateParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
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
// Type: Org.BouncyCastle.Crypto.Parameters::SM2KeyExchangePrivateParameters
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1084))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::SM2KeyExchangePrivateParameters*
class CORDL_TYPE SM2KeyExchangePrivateParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field mInitiator, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mInitiator, put = __cordl_internal_set_mInitiator)) bool mInitiator;

  /// @brief Field mStaticPrivateKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mStaticPrivateKey, put = __cordl_internal_set_mStaticPrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mStaticPrivateKey;

  /// @brief Field mStaticPublicPoint, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mStaticPublicPoint, put = __cordl_internal_set_mStaticPublicPoint))::Org::BouncyCastle::Math::EC::ECPoint* mStaticPublicPoint;

  /// @brief Field mEphemeralPrivateKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mEphemeralPrivateKey,
                      put = __cordl_internal_set_mEphemeralPrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mEphemeralPrivateKey;

  /// @brief Field mEphemeralPublicPoint, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mEphemeralPublicPoint, put = __cordl_internal_set_mEphemeralPublicPoint))::Org::BouncyCastle::Math::EC::ECPoint* mEphemeralPublicPoint;

  __declspec(property(get = get_IsInitiator)) bool IsInitiator;

  __declspec(property(get = get_StaticPrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* StaticPrivateKey;

  __declspec(property(get = get_StaticPublicPoint))::Org::BouncyCastle::Math::EC::ECPoint* StaticPublicPoint;

  __declspec(property(get = get_EphemeralPrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* EphemeralPrivateKey;

  __declspec(property(get = get_EphemeralPublicPoint))::Org::BouncyCastle::Math::EC::ECPoint* EphemeralPublicPoint;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

  constexpr bool& __cordl_internal_get_mInitiator();

  constexpr bool const& __cordl_internal_get_mInitiator() const;

  constexpr void __cordl_internal_set_mInitiator(bool value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __cordl_internal_get_mStaticPrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __cordl_internal_get_mStaticPrivateKey() const;

  constexpr void __cordl_internal_set_mStaticPrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_mStaticPublicPoint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_mStaticPublicPoint() const;

  constexpr void __cordl_internal_set_mStaticPublicPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __cordl_internal_get_mEphemeralPrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __cordl_internal_get_mEphemeralPrivateKey() const;

  constexpr void __cordl_internal_set_mEphemeralPrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_mEphemeralPublicPoint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_mEphemeralPublicPoint() const;

  constexpr void __cordl_internal_set_mEphemeralPublicPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters* New_ctor(bool initiator, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* staticPrivateKey,
                                                                                                   ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ephemeralPrivateKey);

  /// @brief Method .ctor, addr 0xf66324, size 0x274, virtual false, abstract: false, final false
  inline void _ctor(bool initiator, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* staticPrivateKey,
                    ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ephemeralPrivateKey);

  /// @brief Method get_IsInitiator, addr 0xf66598, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsInitiator();

  /// @brief Method get_StaticPrivateKey, addr 0xf665a0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_StaticPrivateKey();

  /// @brief Method get_StaticPublicPoint, addr 0xf665a8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_StaticPublicPoint();

  /// @brief Method get_EphemeralPrivateKey, addr 0xf665b0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_EphemeralPrivateKey();

  /// @brief Method get_EphemeralPublicPoint, addr 0xf665b8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_EphemeralPublicPoint();

  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePrivateParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2KeyExchangePrivateParameters(SM2KeyExchangePrivateParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePrivateParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2KeyExchangePrivateParameters(SM2KeyExchangePrivateParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2KeyExchangePrivateParameters();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mInitiator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mStaticPrivateKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mStaticPublicPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mEphemeralPrivateKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, ___mEphemeralPublicPoint) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters*, "Org.BouncyCastle.Crypto.Parameters", "SM2KeyExchangePrivateParameters");
