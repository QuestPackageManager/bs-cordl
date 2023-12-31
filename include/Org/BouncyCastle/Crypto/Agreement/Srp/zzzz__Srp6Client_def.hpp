#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Srp6Client)
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Client;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client);
// Type: Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Client
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(727))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Client*
class CORDL_TYPE Srp6Client : public ::System::Object {
public:
  // Declarations
  /// @brief Field N, offset 0x10, size 0x8
  __declspec(property(get = __get_N, put = __set_N))::Org::BouncyCastle::Math::BigInteger* N;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __get_g, put = __set_g))::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field privA, offset 0x20, size 0x8
  __declspec(property(get = __get_privA, put = __set_privA))::Org::BouncyCastle::Math::BigInteger* privA;

  /// @brief Field pubA, offset 0x28, size 0x8
  __declspec(property(get = __get_pubA, put = __set_pubA))::Org::BouncyCastle::Math::BigInteger* pubA;

  /// @brief Field B, offset 0x30, size 0x8
  __declspec(property(get = __get_B, put = __set_B))::Org::BouncyCastle::Math::BigInteger* B;

  /// @brief Field x, offset 0x38, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::Org::BouncyCastle::Math::BigInteger* x;

  /// @brief Field u, offset 0x40, size 0x8
  __declspec(property(get = __get_u, put = __set_u))::Org::BouncyCastle::Math::BigInteger* u;

  /// @brief Field S, offset 0x48, size 0x8
  __declspec(property(get = __get_S, put = __set_S))::Org::BouncyCastle::Math::BigInteger* S;

  /// @brief Field M1, offset 0x50, size 0x8
  __declspec(property(get = __get_M1, put = __set_M1))::Org::BouncyCastle::Math::BigInteger* M1;

  /// @brief Field M2, offset 0x58, size 0x8
  __declspec(property(get = __get_M2, put = __set_M2))::Org::BouncyCastle::Math::BigInteger* M2;

  /// @brief Field Key, offset 0x60, size 0x8
  __declspec(property(get = __get_Key, put = __set_Key))::Org::BouncyCastle::Math::BigInteger* Key;

  /// @brief Field digest, offset 0x68, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field random, offset 0x70, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_N();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_N() const;

  constexpr void __set_N(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_g() const;

  constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_privA();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_privA() const;

  constexpr void __set_privA(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_pubA();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_pubA() const;

  constexpr void __set_pubA(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_B();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_B() const;

  constexpr void __set_B(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_x() const;

  constexpr void __set_x(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_u();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_u() const;

  constexpr void __set_u(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_S();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_S() const;

  constexpr void __set_S(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_M1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_M1() const;

  constexpr void __set_M1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_M2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_M2() const;

  constexpr void __set_M2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_Key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_Key() const;

  constexpr void __set_Key(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* New_ctor();

  /// @brief Method .ctor, addr 0x1217a44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x1217a4c, size 0xc, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Crypto::IDigest* digest,
                   ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Init, addr 0x1217a58, size 0x2c, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GenerateClientCredentials, addr 0x1217a84, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* GenerateClientCredentials(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method CalculateSecret, addr 0x1217eec, size 0x44, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateSecret(::Org::BouncyCastle::Math::BigInteger* serverB);

  /// @brief Method SelectPrivateValue, addr 0x12180ec, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* SelectPrivateValue();

  /// @brief Method CalculateS, addr 0x121801c, size 0xd0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateS();

  /// @brief Method CalculateClientEvidenceMessage, addr 0x1218208, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateClientEvidenceMessage();

  /// @brief Method VerifyServerEvidenceMessage, addr 0x1218290, size 0xb8, virtual true, abstract: false, final false
  inline bool VerifyServerEvidenceMessage(::Org::BouncyCastle::Math::BigInteger* serverM2);

  /// @brief Method CalculateSessionKey, addr 0x121834c, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateSessionKey();

  // Ctor Parameters [CppParam { name: "", ty: "Srp6Client", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Srp6Client(Srp6Client&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Srp6Client", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Srp6Client(Srp6Client const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Srp6Client();

public:
  /// @brief Field N, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___N;

  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  /// @brief Field privA, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___privA;

  /// @brief Field pubA, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___pubA;

  /// @brief Field B, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___B;

  /// @brief Field x, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___x;

  /// @brief Field u, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___u;

  /// @brief Field S, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___S;

  /// @brief Field M1, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___M1;

  /// @brief Field M2, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___M2;

  /// @brief Field Key, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___Key;

  /// @brief Field digest, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field random, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, 0x78>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___N) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___g) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___privA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___pubA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___B) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___x) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___u) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___S) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___M1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___M2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___Key) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___digest) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, ___random) == 0x70, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Srp
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*, "Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6Client");
