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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1085))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::SM2KeyExchangePublicParameters*
class CORDL_TYPE SM2KeyExchangePublicParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field mStaticPublicKey, offset 0x10, size 0x8
  __declspec(property(get = __get_mStaticPublicKey, put = __set_mStaticPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mStaticPublicKey;

  /// @brief Field mEphemeralPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __get_mEphemeralPublicKey, put = __set_mEphemeralPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mEphemeralPublicKey;

  __declspec(property(get = get_StaticPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* StaticPublicKey;

  __declspec(property(get = get_EphemeralPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* EphemeralPublicKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __get_mStaticPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const& __get_mStaticPublicKey() const;

  constexpr void __set_mStaticPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __get_mEphemeralPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const& __get_mEphemeralPublicKey() const;

  constexpr void __set_mEphemeralPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey,
                                                                                                  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey);

  /// @brief Method .ctor addr 0xf3b730 size 0xfc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey);

  /// @brief Method get_StaticPublicKey addr 0xf3b82c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_StaticPublicKey();

  /// @brief Method get_EphemeralPublicKey addr 0xf3b834 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_EphemeralPublicKey();

  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePublicParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2KeyExchangePublicParameters(SM2KeyExchangePublicParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePublicParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2KeyExchangePublicParameters(SM2KeyExchangePublicParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2KeyExchangePublicParameters();

public:
  /// @brief Field mStaticPublicKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ___mStaticPublicKey;

  /// @brief Field mEphemeralPublicKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ___mEphemeralPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*, "Org.BouncyCastle.Crypto.Parameters", "SM2KeyExchangePublicParameters");
