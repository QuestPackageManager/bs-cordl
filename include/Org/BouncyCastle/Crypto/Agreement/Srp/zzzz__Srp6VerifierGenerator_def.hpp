#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Srp6VerifierGenerator)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6VerifierGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator);
// Type: Org.BouncyCastle.Crypto.Agreement.Srp::Srp6VerifierGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(731))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Srp::Srp6VerifierGenerator*
class CORDL_TYPE Srp6VerifierGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field N, offset 0x10, size 0x8
  __declspec(property(get = __get_N, put = __set_N))::Org::BouncyCastle::Math::BigInteger* N;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __get_g, put = __set_g))::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field digest, offset 0x20, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_N();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_N() const;

  constexpr void __set_N(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_g() const;

  constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x12192e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x12192ec, size 0xc, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Init, addr 0x12192f8, size 0x28, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method GenerateVerifier, addr 0x1219320, size 0x40, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* GenerateVerifier(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  // Ctor Parameters [CppParam { name: "", ty: "Srp6VerifierGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Srp6VerifierGenerator(Srp6VerifierGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Srp6VerifierGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Srp6VerifierGenerator(Srp6VerifierGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Srp6VerifierGenerator();

public:
  /// @brief Field N, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___N;

  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  /// @brief Field digest, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator, ___N) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator, ___g) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator, ___digest) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Srp
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*, "Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6VerifierGenerator");
