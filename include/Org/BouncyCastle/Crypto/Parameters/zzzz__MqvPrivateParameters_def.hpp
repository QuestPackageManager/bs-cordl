#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MqvPrivateParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class MqvPrivateParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::MqvPrivateParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1066))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::MqvPrivateParameters*
class CORDL_TYPE MqvPrivateParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field staticPrivateKey, offset 0x10, size 0x8
  __declspec(property(get = __get_staticPrivateKey, put = __set_staticPrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* staticPrivateKey;

  /// @brief Field ephemeralPrivateKey, offset 0x18, size 0x8
  __declspec(property(get = __get_ephemeralPrivateKey, put = __set_ephemeralPrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ephemeralPrivateKey;

  /// @brief Field ephemeralPublicKey, offset 0x20, size 0x8
  __declspec(property(get = __get_ephemeralPublicKey, put = __set_ephemeralPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey;

  __declspec(property(get = get_StaticPrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* StaticPrivateKey;

  __declspec(property(get = get_EphemeralPrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* EphemeralPrivateKey;

  __declspec(property(get = get_EphemeralPublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* EphemeralPublicKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __get_staticPrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __get_staticPrivateKey() const;

  constexpr void __set_staticPrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __get_ephemeralPrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __get_ephemeralPrivateKey() const;

  constexpr void __set_ephemeralPrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __get_ephemeralPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const& __get_ephemeralPublicKey() const;

  constexpr void __set_ephemeralPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* staticPrivateKey,
                                                                                        ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ephemeralPrivateKey);

  /// @brief Method .ctor, addr 0xf38958, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* staticPrivateKey, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ephemeralPrivateKey);

  static inline ::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* staticPrivateKey,
                                                                                        ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ephemeralPrivateKey,
                                                                                        ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey);

  /// @brief Method .ctor, addr 0xf38960, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* staticPrivateKey, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ephemeralPrivateKey,
                    ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey);

  /// @brief Method get_StaticPrivateKey, addr 0xf38b50, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_StaticPrivateKey();

  /// @brief Method get_EphemeralPrivateKey, addr 0xf38b58, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_EphemeralPrivateKey();

  /// @brief Method get_EphemeralPublicKey, addr 0xf38b60, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_EphemeralPublicKey();

  // Ctor Parameters [CppParam { name: "", ty: "MqvPrivateParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MqvPrivateParameters(MqvPrivateParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MqvPrivateParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MqvPrivateParameters(MqvPrivateParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MqvPrivateParameters();

public:
  /// @brief Field staticPrivateKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___staticPrivateKey;

  /// @brief Field ephemeralPrivateKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___ephemeralPrivateKey;

  /// @brief Field ephemeralPublicKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ___ephemeralPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters, ___staticPrivateKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters, ___ephemeralPrivateKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters, ___ephemeralPublicKey) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters*, "Org.BouncyCastle.Crypto.Parameters", "MqvPrivateParameters");
