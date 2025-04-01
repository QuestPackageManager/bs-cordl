#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/DSAManaged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSAManaged)
namespace Mono::Math {
class BigInteger;
}
namespace Mono::Security::Cryptography {
class DSAManaged_KeyGeneratedEventHandler;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System {
class EventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class DSAManaged;
}
namespace Mono::Security::Cryptography {
class DSAManaged_KeyGeneratedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::DSAManaged);
MARK_REF_PTR_T(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler);
// Dependencies System.MulticastDelegate
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
class CORDL_TYPE DSAManaged_KeyGeneratedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3c66404, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::EventArgs* e);

  static inline ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3c66300, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSAManaged_KeyGeneratedEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSAManaged_KeyGeneratedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSAManaged_KeyGeneratedEventHandler(DSAManaged_KeyGeneratedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSAManaged_KeyGeneratedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSAManaged_KeyGeneratedEventHandler(DSAManaged_KeyGeneratedEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2285 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler, 0x80>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
// Dependencies System.Security.Cryptography.DSA
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.DSAManaged
class CORDL_TYPE DSAManaged : public ::System::Security::Cryptography::DSA {
public:
  // Declarations
  using KeyGeneratedEventHandler = ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler;

  /// @brief Field KeyGenerated, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyGenerated, put = __cordl_internal_set_KeyGenerated)) ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* KeyGenerated;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_PublicOnly)) bool PublicOnly;

  __declspec(property(get = get_Random)) ::System::Security::Cryptography::RandomNumberGenerator* Random;

  /// @brief Field counter, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_counter, put = __cordl_internal_set_counter)) int32_t counter;

  /// @brief Field g, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) ::Mono::Math::BigInteger* g;

  /// @brief Field j, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_j, put = __cordl_internal_set_j)) ::Mono::Math::BigInteger* j;

  /// @brief Field j_missing, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_j_missing, put = __cordl_internal_set_j_missing)) bool j_missing;

  /// @brief Field keypairGenerated, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_keypairGenerated, put = __cordl_internal_set_keypairGenerated)) bool keypairGenerated;

  /// @brief Field m_disposed, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field p, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) ::Mono::Math::BigInteger* p;

  /// @brief Field q, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q)) ::Mono::Math::BigInteger* q;

  /// @brief Field rng, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_rng, put = __cordl_internal_set_rng)) ::System::Security::Cryptography::RandomNumberGenerator* rng;

  /// @brief Field seed, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed)) ::Mono::Math::BigInteger* seed;

  /// @brief Field x, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::Mono::Math::BigInteger* x;

  /// @brief Field y, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) ::Mono::Math::BigInteger* y;

  /// @brief Method Dispose, addr 0x3c65ff8, size 0x1d0, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ExportParameters, addr 0x3c65618, size 0x26c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method Finalize, addr 0x3c648d4, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Generate, addr 0x3c64974, size 0x4c, virtual false, abstract: false, final false
  inline void Generate();

  /// @brief Method GenerateKeyPair, addr 0x3c64ee8, size 0xe0, virtual false, abstract: false, final false
  inline void GenerateKeyPair();

  /// @brief Method GenerateParams, addr 0x3c649c0, size 0x528, virtual false, abstract: false, final false
  inline void GenerateParams(int32_t keyLength);

  /// @brief Method ImportParameters, addr 0x3c658f0, size 0x27c, virtual true, abstract: false, final false
  inline void ImportParameters(::System::Security::Cryptography::DSAParameters parameters);

  static inline ::Mono::Security::Cryptography::DSAManaged* New_ctor(int32_t dwKeySize);

  /// @brief Method NormalizeArray, addr 0x3c65574, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> NormalizeArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method VerifySignature, addr 0x3c65b6c, size 0x48c, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  constexpr ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* const& __cordl_internal_get_KeyGenerated() const;

  constexpr ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*& __cordl_internal_get_KeyGenerated();

  constexpr int32_t const& __cordl_internal_get_counter() const;

  constexpr int32_t& __cordl_internal_get_counter();

  constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_g() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_g();

  constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_j() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_j();

  constexpr bool const& __cordl_internal_get_j_missing() const;

  constexpr bool& __cordl_internal_get_j_missing();

  constexpr bool const& __cordl_internal_get_keypairGenerated() const;

  constexpr bool& __cordl_internal_get_keypairGenerated();

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_p() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_p();

  constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_q() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_q();

  constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& __cordl_internal_get_rng() const;

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get_rng();

  constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_seed() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_seed();

  constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_x() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_x();

  constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_y() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value);

  constexpr void __cordl_internal_set_counter(int32_t value);

  constexpr void __cordl_internal_set_g(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_j(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_j_missing(bool value);

  constexpr void __cordl_internal_set_keypairGenerated(bool value);

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_p(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_q(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_rng(::System::Security::Cryptography::RandomNumberGenerator* value);

  constexpr void __cordl_internal_set_seed(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_x(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_y(::Mono::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x3c64818, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwKeySize);

  /// @brief Method add, addr 0x3c65104, size 0x9c, virtual false, abstract: false, final false
  inline void add(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t value);

  /// @brief Method add_KeyGenerated, addr 0x3c661c8, size 0x9c, virtual false, abstract: false, final false
  inline void add_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value);

  /// @brief Method get_KeySize, addr 0x3c654d4, size 0x2c, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_PublicOnly, addr 0x3c65500, size 0x74, virtual false, abstract: false, final false
  inline bool get_PublicOnly();

  /// @brief Method get_Random, addr 0x3c651a0, size 0x20, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::RandomNumberGenerator* get_Random();

  /// @brief Method remove_KeyGenerated, addr 0x3c66264, size 0x9c, virtual false, abstract: false, final false
  inline void remove_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSAManaged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSAManaged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSAManaged(DSAManaged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSAManaged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSAManaged(DSAManaged const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2286 };

  /// @brief Field keypairGenerated, offset: 0x20, size: 0x1, def value: None
  bool ___keypairGenerated;

  /// @brief Field m_disposed, offset: 0x21, size: 0x1, def value: None
  bool ___m_disposed;

  /// @brief Field p, offset: 0x28, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___p;

  /// @brief Field q, offset: 0x30, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___q;

  /// @brief Field g, offset: 0x38, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___g;

  /// @brief Field x, offset: 0x40, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___x;

  /// @brief Field y, offset: 0x48, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___y;

  /// @brief Field j, offset: 0x50, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___j;

  /// @brief Field seed, offset: 0x58, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___seed;

  /// @brief Field counter, offset: 0x60, size: 0x4, def value: None
  int32_t ___counter;

  /// @brief Field j_missing, offset: 0x64, size: 0x1, def value: None
  bool ___j_missing;

  /// @brief Field rng, offset: 0x68, size: 0x8, def value: None
  ::System::Security::Cryptography::RandomNumberGenerator* ___rng;

  /// @brief Field KeyGenerated, offset: 0x70, size: 0x8, def value: None
  ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* ___KeyGenerated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___keypairGenerated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___m_disposed) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___p) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___q) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___g) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___x) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___y) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___j) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___seed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___counter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___j_missing) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___rng) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::DSAManaged, ___KeyGenerated) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::DSAManaged, 0x78>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::DSAManaged);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::DSAManaged*, "Mono.Security.Cryptography", "DSAManaged");
NEED_NO_BOX(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*, "Mono.Security.Cryptography", "DSAManaged/KeyGeneratedEventHandler");
