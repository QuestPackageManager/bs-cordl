#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/Srp/Srp6Server.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Srp6Server)
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
class Srp6Server;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.Srp.Srp6Server
class CORDL_TYPE Srp6Server : public ::System::Object {
public:
  // Declarations
  /// @brief Field A, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_A, put = __cordl_internal_set_A)) ::Org::BouncyCastle::Math::BigInteger* A;

  /// @brief Field Key, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_Key, put = __cordl_internal_set_Key)) ::Org::BouncyCastle::Math::BigInteger* Key;

  /// @brief Field M1, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_M1, put = __cordl_internal_set_M1)) ::Org::BouncyCastle::Math::BigInteger* M1;

  /// @brief Field M2, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_M2, put = __cordl_internal_set_M2)) ::Org::BouncyCastle::Math::BigInteger* M2;

  /// @brief Field N, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_N, put = __cordl_internal_set_N)) ::Org::BouncyCastle::Math::BigInteger* N;

  /// @brief Field S, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_S, put = __cordl_internal_set_S)) ::Org::BouncyCastle::Math::BigInteger* S;

  /// @brief Field digest, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) ::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field privB, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_privB, put = __cordl_internal_set_privB)) ::Org::BouncyCastle::Math::BigInteger* privB;

  /// @brief Field pubB, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_pubB, put = __cordl_internal_set_pubB)) ::Org::BouncyCastle::Math::BigInteger* pubB;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field u, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_u, put = __cordl_internal_set_u)) ::Org::BouncyCastle::Math::BigInteger* u;

  /// @brief Field v, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_v, put = __cordl_internal_set_v)) ::Org::BouncyCastle::Math::BigInteger* v;

  /// @brief Method CalculateS, addr 0x268c9e8, size 0x5c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateS();

  /// @brief Method CalculateSecret, addr 0x268c9a4, size 0x44, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateSecret(::Org::BouncyCastle::Math::BigInteger* clientA);

  /// @brief Method CalculateServerEvidenceMessage, addr 0x268cafc, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateServerEvidenceMessage();

  /// @brief Method CalculateSessionKey, addr 0x268cb7c, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateSessionKey();

  /// @brief Method GenerateServerCredentials, addr 0x268c8f4, size 0xb0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* GenerateServerCredentials();

  /// @brief Method Init, addr 0x268c8b4, size 0x10, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* v, ::Org::BouncyCastle::Crypto::IDigest* digest,
                   ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Init, addr 0x268c8c4, size 0x30, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Math::BigInteger* v, ::Org::BouncyCastle::Crypto::IDigest* digest,
                   ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* New_ctor();

  /// @brief Method SelectPrivateValue, addr 0x268ca44, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* SelectPrivateValue();

  /// @brief Method VerifyClientEvidenceMessage, addr 0x268ca50, size 0xac, virtual true, abstract: false, final false
  inline bool VerifyClientEvidenceMessage(::Org::BouncyCastle::Math::BigInteger* clientM1);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_A() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_A();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_Key() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_Key();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_M1() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_M1();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_M2() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_M2();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_N() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_N();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_S() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_S();

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_g();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_privB() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_privB();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_pubB() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_pubB();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_u() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_u();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_v() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_v();

  constexpr void __cordl_internal_set_A(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_Key(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_M1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_M2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_N(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_S(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_privB(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_pubB(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_u(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_v(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x268c8ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Srp6Server();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Srp6Server", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Srp6Server(Srp6Server&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Srp6Server", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Srp6Server(Srp6Server const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 728 };

  /// @brief Field N, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___N;

  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  /// @brief Field v, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___v;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field digest, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field A, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___A;

  /// @brief Field privB, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___privB;

  /// @brief Field pubB, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___pubB;

  /// @brief Field u, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___u;

  /// @brief Field S, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___S;

  /// @brief Field M1, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___M1;

  /// @brief Field M2, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___M2;

  /// @brief Field Key, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___Key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___N) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___g) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___v) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___random) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___digest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___A) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___privB) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___pubB) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___u) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___S) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___M1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___M2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, ___Key) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, 0x78>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Srp
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*, "Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6Server");
