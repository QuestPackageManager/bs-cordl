#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaPrivateKeyParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaPrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DsaPrivateKeyParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1027))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1030))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DsaPrivateKeyParameters*
class CORDL_TYPE DsaPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters {
public:
  // Declarations
  /// @brief Field x, offset 0x20, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::Org::BouncyCastle::Math::BigInteger* x;

  __declspec(property(get = get_X))::Org::BouncyCastle::Math::BigInteger* X;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_x() const;

  constexpr void __set_x(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* x,
                                                                                           ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters);

  /// @brief Method .ctor addr 0xebcbec size 0x88 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters);

  /// @brief Method get_X addr 0xebcc74 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_X();

  /// @brief Method Equals addr 0xebcc7c size 0x9c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xebcd18 size 0x58 virtual false final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters* other);

  /// @brief Method GetHashCode addr 0xebcd70 size 0x40 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DsaPrivateKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaPrivateKeyParameters(DsaPrivateKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaPrivateKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaPrivateKeyParameters(DsaPrivateKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaPrivateKeyParameters();

public:
  /// @brief Field x, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters, ___x) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaPrivateKeyParameters");
