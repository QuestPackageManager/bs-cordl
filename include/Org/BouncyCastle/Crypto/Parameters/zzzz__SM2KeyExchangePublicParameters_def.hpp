#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SM2KeyExchangePublicParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class SM2KeyExchangePublicParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::SM2KeyExchangePublicParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::SM2KeyExchangePublicParameters*
class CORDL_TYPE SM2KeyExchangePublicParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EphemeralPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* EphemeralPublicKey;

  __declspec(property(get = get_StaticPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* StaticPublicKey;

  /// @brief Field mEphemeralPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mEphemeralPublicKey,
                      put = __cordl_internal_set_mEphemeralPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mEphemeralPublicKey;

  /// @brief Field mStaticPublicKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mStaticPublicKey, put = __cordl_internal_set_mStaticPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mStaticPublicKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey,
                                                                                                  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __cordl_internal_get_mEphemeralPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const& __cordl_internal_get_mEphemeralPublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __cordl_internal_get_mStaticPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const& __cordl_internal_get_mStaticPublicKey() const;

  constexpr void __cordl_internal_set_mEphemeralPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  constexpr void __cordl_internal_set_mStaticPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  /// @brief Method .ctor, addr 0xfab590, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey);

  /// @brief Method get_EphemeralPublicKey, addr 0xfab694, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_EphemeralPublicKey();

  /// @brief Method get_StaticPublicKey, addr 0xfab68c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_StaticPublicKey();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2KeyExchangePublicParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePublicParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2KeyExchangePublicParameters(SM2KeyExchangePublicParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePublicParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2KeyExchangePublicParameters(SM2KeyExchangePublicParameters const&) = delete;

  /// @brief Field mStaticPublicKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ___mStaticPublicKey;

  /// @brief Field mEphemeralPublicKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ___mEphemeralPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters, ___mStaticPublicKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters, ___mEphemeralPublicKey) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*, "Org.BouncyCastle.Crypto.Parameters", "SM2KeyExchangePublicParameters");
