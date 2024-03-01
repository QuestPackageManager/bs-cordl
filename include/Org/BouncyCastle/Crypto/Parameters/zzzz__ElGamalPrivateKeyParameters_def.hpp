#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalPrivateKeyParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalPrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalPrivateKeyParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ElGamalPrivateKeyParameters*
class CORDL_TYPE ElGamalPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters {
public:
  // Declarations
  __declspec(property(get = get_X))::Org::BouncyCastle::Math::BigInteger* X;

  /// @brief Field x, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x))::Org::BouncyCastle::Math::BigInteger* x;

  /// @brief Method Equals, addr 0xfa58f4, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0xfa5990, size 0x58, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters* other);

  /// @brief Method GetHashCode, addr 0xfa59e8, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* x,
                                                                                               ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_x() const;

  constexpr void __cordl_internal_set_x(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0xfa5864, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters);

  /// @brief Method get_X, addr 0xfa58ec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_X();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalPrivateKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElGamalPrivateKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalPrivateKeyParameters(ElGamalPrivateKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalPrivateKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalPrivateKeyParameters(ElGamalPrivateKeyParameters const&) = delete;

  /// @brief Field x, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters, ___x) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalPrivateKeyParameters");
