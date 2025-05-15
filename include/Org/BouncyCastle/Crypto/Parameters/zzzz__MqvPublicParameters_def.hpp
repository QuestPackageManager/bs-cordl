#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/MqvPublicParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MqvPublicParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class MqvPublicParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters);
// Dependencies Org.BouncyCastle.Crypto.ICipherParameters, System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.MqvPublicParameters
class CORDL_TYPE MqvPublicParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EphemeralPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* EphemeralPublicKey;

  __declspec(property(get = get_StaticPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* StaticPublicKey;

  /// @brief Field ephemeralPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ephemeralPublicKey, put = __cordl_internal_set_ephemeralPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey;

  /// @brief Field staticPublicKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_staticPublicKey, put = __cordl_internal_set_staticPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey,
                                                                                       ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* const& __cordl_internal_get_ephemeralPublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __cordl_internal_get_ephemeralPublicKey();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* const& __cordl_internal_get_staticPublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __cordl_internal_get_staticPublicKey();

  constexpr void __cordl_internal_set_ephemeralPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  constexpr void __cordl_internal_set_staticPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  /// @brief Method .ctor, addr 0x23c0788, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey);

  /// @brief Method get_EphemeralPublicKey, addr 0x23c0880, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_EphemeralPublicKey();

  /// @brief Method get_StaticPublicKey, addr 0x23c0878, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_StaticPublicKey();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MqvPublicParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MqvPublicParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MqvPublicParameters(MqvPublicParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MqvPublicParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MqvPublicParameters(MqvPublicParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1067 };

  /// @brief Field staticPublicKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ___staticPublicKey;

  /// @brief Field ephemeralPublicKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ___ephemeralPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters, ___staticPublicKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters, ___ephemeralPublicKey) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters*, "Org.BouncyCastle.Crypto.Parameters", "MqvPublicParameters");
