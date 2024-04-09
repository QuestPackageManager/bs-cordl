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
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Client*
class CORDL_TYPE Srp6Client : public ::System::Object {
public:
  // Declarations
  /// @brief Field B, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_B, put = __cordl_internal_set_B))::Org::BouncyCastle::Math::BigInteger* B;

  /// @brief Field Key, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Key, put = __cordl_internal_set_Key))::Org::BouncyCastle::Math::BigInteger* Key;

  /// @brief Field M1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_M1, put = __cordl_internal_set_M1))::Org::BouncyCastle::Math::BigInteger* M1;

  /// @brief Field M2, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_M2, put = __cordl_internal_set_M2))::Org::BouncyCastle::Math::BigInteger* M2;

  /// @brief Field N, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_N, put = __cordl_internal_set_N))::Org::BouncyCastle::Math::BigInteger* N;

  /// @brief Field S, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_S, put = __cordl_internal_set_S))::Org::BouncyCastle::Math::BigInteger* S;

  /// @brief Field digest, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g))::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field privA, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_privA, put = __cordl_internal_set_privA))::Org::BouncyCastle::Math::BigInteger* privA;

  /// @brief Field pubA, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_pubA, put = __cordl_internal_set_pubA))::Org::BouncyCastle::Math::BigInteger* pubA;

  /// @brief Field random, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field u, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_u, put = __cordl_internal_set_u))::Org::BouncyCastle::Math::BigInteger* u;

  /// @brief Field x, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x))::Org::BouncyCastle::Math::BigInteger* x;

  /// @brief Method CalculateClientEvidenceMessage, addr 0x13862f0, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateClientEvidenceMessage();

  /// @brief Method CalculateS, addr 0x1386104, size 0xd0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateS();

  /// @brief Method CalculateSecret, addr 0x1385fd4, size 0x44, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateSecret(::Org::BouncyCastle::Math::BigInteger* serverB);

  /// @brief Method CalculateSessionKey, addr 0x1386434, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateSessionKey();

  /// @brief Method GenerateClientCredentials, addr 0x1385b6c, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* GenerateClientCredentials(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method Init, addr 0x1385b34, size 0xc, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Crypto::IDigest* digest,
                   ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Init, addr 0x1385b40, size 0x2c, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* New_ctor();

  /// @brief Method SelectPrivateValue, addr 0x13861d4, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* SelectPrivateValue();

  /// @brief Method VerifyServerEvidenceMessage, addr 0x1386378, size 0xb8, virtual true, abstract: false, final false
  inline bool VerifyServerEvidenceMessage(::Org::BouncyCastle::Math::BigInteger* serverM2);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_B();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_B() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_Key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_Key() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_M1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_M1() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_M2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_M2() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_N();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_N() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_S();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_S() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_privA();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_privA() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_pubA();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_pubA() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_u();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_u() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_x() const;

  constexpr void __cordl_internal_set_B(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_Key(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_M1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_M2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_N(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_S(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_privA(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_pubA(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_u(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_x(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x1385b2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Srp6Client();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Srp6Client", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Srp6Client(Srp6Client&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Srp6Client", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Srp6Client(Srp6Client const&) = delete;

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
