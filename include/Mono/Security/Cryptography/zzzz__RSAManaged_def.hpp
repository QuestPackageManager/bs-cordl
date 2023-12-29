#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAManaged)
namespace Mono::Math {
class BigInteger;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace Mono::Security::Cryptography {
class __RSAManaged__KeyGeneratedEventHandler;
}
namespace System {
class Object;
}
namespace System {
class EventArgs;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class RSAManaged;
}
namespace Mono::Security::Cryptography {
class __RSAManaged__KeyGeneratedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::RSAManaged);
MARK_REF_PTR_T(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler);
// Type: ::KeyGeneratedEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2282))
// CS Name: ::RSAManaged::KeyGeneratedEventHandler*
class CORDL_TYPE __RSAManaged__KeyGeneratedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x22cb428 size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x22cb558 size 0x14 virtual true final false
  inline void Invoke(::System::Object* sender, ::System::EventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "__RSAManaged__KeyGeneratedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RSAManaged__KeyGeneratedEventHandler(__RSAManaged__KeyGeneratedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RSAManaged__KeyGeneratedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RSAManaged__KeyGeneratedEventHandler(__RSAManaged__KeyGeneratedEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RSAManaged__KeyGeneratedEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler, 0x80>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
// Type: Mono.Security.Cryptography::RSAManaged
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2955))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2283))
// CS Name: ::Mono.Security.Cryptography::RSAManaged*
class CORDL_TYPE RSAManaged : public ::System::Security::Cryptography::RSA {
public:
  // Declarations
  using KeyGeneratedEventHandler = ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler;

  /// @brief Field isCRTpossible, offset 0x20, size 0x1
  __declspec(property(get = __get_isCRTpossible, put = __set_isCRTpossible)) bool isCRTpossible;

  /// @brief Field keyBlinding, offset 0x21, size 0x1
  __declspec(property(get = __get_keyBlinding, put = __set_keyBlinding)) bool keyBlinding;

  /// @brief Field keypairGenerated, offset 0x22, size 0x1
  __declspec(property(get = __get_keypairGenerated, put = __set_keypairGenerated)) bool keypairGenerated;

  /// @brief Field m_disposed, offset 0x23, size 0x1
  __declspec(property(get = __get_m_disposed, put = __set_m_disposed)) bool m_disposed;

  /// @brief Field d, offset 0x28, size 0x8
  __declspec(property(get = __get_d, put = __set_d))::Mono::Math::BigInteger* d;

  /// @brief Field p, offset 0x30, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Mono::Math::BigInteger* p;

  /// @brief Field q, offset 0x38, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Mono::Math::BigInteger* q;

  /// @brief Field dp, offset 0x40, size 0x8
  __declspec(property(get = __get_dp, put = __set_dp))::Mono::Math::BigInteger* dp;

  /// @brief Field dq, offset 0x48, size 0x8
  __declspec(property(get = __get_dq, put = __set_dq))::Mono::Math::BigInteger* dq;

  /// @brief Field qInv, offset 0x50, size 0x8
  __declspec(property(get = __get_qInv, put = __set_qInv))::Mono::Math::BigInteger* qInv;

  /// @brief Field n, offset 0x58, size 0x8
  __declspec(property(get = __get_n, put = __set_n))::Mono::Math::BigInteger* n;

  /// @brief Field e, offset 0x60, size 0x8
  __declspec(property(get = __get_e, put = __set_e))::Mono::Math::BigInteger* e;

  /// @brief Field KeyGenerated, offset 0x68, size 0x8
  __declspec(property(get = __get_KeyGenerated, put = __set_KeyGenerated))::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* KeyGenerated;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_PublicOnly)) bool PublicOnly;

  constexpr bool& __get_isCRTpossible();

  constexpr bool const& __get_isCRTpossible() const;

  constexpr void __set_isCRTpossible(bool value);

  constexpr bool& __get_keyBlinding();

  constexpr bool const& __get_keyBlinding() const;

  constexpr void __set_keyBlinding(bool value);

  constexpr bool& __get_keypairGenerated();

  constexpr bool const& __get_keypairGenerated() const;

  constexpr void __set_keypairGenerated(bool value);

  constexpr bool& __get_m_disposed();

  constexpr bool const& __get_m_disposed() const;

  constexpr void __set_m_disposed(bool value);

  constexpr ::Mono::Math::BigInteger*& __get_d();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_d() const;

  constexpr void __set_d(::Mono::Math::BigInteger* value);

  constexpr ::Mono::Math::BigInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_p() const;

  constexpr void __set_p(::Mono::Math::BigInteger* value);

  constexpr ::Mono::Math::BigInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_q() const;

  constexpr void __set_q(::Mono::Math::BigInteger* value);

  constexpr ::Mono::Math::BigInteger*& __get_dp();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_dp() const;

  constexpr void __set_dp(::Mono::Math::BigInteger* value);

  constexpr ::Mono::Math::BigInteger*& __get_dq();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_dq() const;

  constexpr void __set_dq(::Mono::Math::BigInteger* value);

  constexpr ::Mono::Math::BigInteger*& __get_qInv();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_qInv() const;

  constexpr void __set_qInv(::Mono::Math::BigInteger* value);

  constexpr ::Mono::Math::BigInteger*& __get_n();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_n() const;

  constexpr void __set_n(::Mono::Math::BigInteger* value);

  constexpr ::Mono::Math::BigInteger*& __get_e();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_e() const;

  constexpr void __set_e(::Mono::Math::BigInteger* value);

  constexpr ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler*& __get_KeyGenerated();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler*> const& __get_KeyGenerated() const;

  constexpr void __set_KeyGenerated(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* value);

  static inline ::Mono::Security::Cryptography::RSAManaged* New_ctor(int32_t keySize);

  /// @brief Method .ctor addr 0x22c90dc size 0xf0 virtual false final false
  inline void _ctor(int32_t keySize);

  /// @brief Method Finalize addr 0x22c91cc size 0xa0 virtual true final false
  inline void Finalize();

  /// @brief Method GenerateKeyPair addr 0x22c926c size 0x268 virtual false final false
  inline void GenerateKeyPair();

  /// @brief Method get_KeySize addr 0x22c9ae4 size 0xa4 virtual true final false
  inline int32_t get_KeySize();

  /// @brief Method get_PublicOnly addr 0x22c9b88 size 0xa0 virtual false final false
  inline bool get_PublicOnly();

  /// @brief Method EncryptValue addr 0x22c9cd8 size 0x10c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method ExportParameters addr 0x22ca198 size 0x334 virtual true final false
  inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method ImportParameters addr 0x22ca5f8 size 0x46c virtual true final false
  inline void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);

  /// @brief Method Dispose addr 0x22caa64 size 0x204 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method add_KeyGenerated addr 0x22cac68 size 0x9c virtual false final false
  inline void add_KeyGenerated(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* value);

  /// @brief Method remove_KeyGenerated addr 0x22cad04 size 0x9c virtual false final false
  inline void remove_KeyGenerated(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* value);

  /// @brief Method ToXmlString addr 0x22cada0 size 0x688 virtual true final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  /// @brief Method GetPaddedValue addr 0x22ca098 size 0xb0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPaddedValue(::Mono::Math::BigInteger* value, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "RSAManaged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAManaged(RSAManaged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAManaged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAManaged(RSAManaged const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAManaged();

public:
  /// @brief Field isCRTpossible, offset: 0x20, size: 0x1, def value: None
  bool ___isCRTpossible;

  /// @brief Field keyBlinding, offset: 0x21, size: 0x1, def value: None
  bool ___keyBlinding;

  /// @brief Field keypairGenerated, offset: 0x22, size: 0x1, def value: None
  bool ___keypairGenerated;

  /// @brief Field m_disposed, offset: 0x23, size: 0x1, def value: None
  bool ___m_disposed;

  /// @brief Field d, offset: 0x28, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___d;

  /// @brief Field p, offset: 0x30, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___p;

  /// @brief Field q, offset: 0x38, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___q;

  /// @brief Field dp, offset: 0x40, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___dp;

  /// @brief Field dq, offset: 0x48, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___dq;

  /// @brief Field qInv, offset: 0x50, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___qInv;

  /// @brief Field n, offset: 0x58, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___n;

  /// @brief Field e, offset: 0x60, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___e;

  /// @brief Field KeyGenerated, offset: 0x68, size: 0x8, def value: None
  ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* ___KeyGenerated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::RSAManaged, 0x70>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___isCRTpossible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___keyBlinding) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___keypairGenerated) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___m_disposed) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___d) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___p) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___q) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___dp) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___dq) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___qInv) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___n) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___e) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::RSAManaged, ___KeyGenerated) == 0x68, "Offset mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::RSAManaged);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::RSAManaged*, "Mono.Security.Cryptography", "RSAManaged");
NEED_NO_BOX(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler*, "Mono.Security.Cryptography", "RSAManaged/KeyGeneratedEventHandler");
