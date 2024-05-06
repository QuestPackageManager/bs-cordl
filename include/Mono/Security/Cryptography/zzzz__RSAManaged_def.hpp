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
namespace Mono::Security::Cryptography {
class __RSAManaged__KeyGeneratedEventHandler;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System {
class EventArgs;
}
namespace System {
class Object;
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
// CS Name: ::RSAManaged::KeyGeneratedEventHandler*
class CORDL_TYPE __RSAManaged__KeyGeneratedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2788614, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::EventArgs* e);

  static inline ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27884e4, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RSAManaged__KeyGeneratedEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RSAManaged__KeyGeneratedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RSAManaged__KeyGeneratedEventHandler(__RSAManaged__KeyGeneratedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RSAManaged__KeyGeneratedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RSAManaged__KeyGeneratedEventHandler(__RSAManaged__KeyGeneratedEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler, 0x80>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
// Type: Mono.Security.Cryptography::RSAManaged
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: ::Mono.Security.Cryptography::RSAManaged*
class CORDL_TYPE RSAManaged : public ::System::Security::Cryptography::RSA {
public:
  // Declarations
  using KeyGeneratedEventHandler = ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler;

  /// @brief Field KeyGenerated, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyGenerated, put = __cordl_internal_set_KeyGenerated))::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* KeyGenerated;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_PublicOnly)) bool PublicOnly;

  /// @brief Field d, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d))::Mono::Math::BigInteger* d;

  /// @brief Field dp, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_dp, put = __cordl_internal_set_dp))::Mono::Math::BigInteger* dp;

  /// @brief Field dq, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_dq, put = __cordl_internal_set_dq))::Mono::Math::BigInteger* dq;

  /// @brief Field e, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e))::Mono::Math::BigInteger* e;

  /// @brief Field isCRTpossible, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isCRTpossible, put = __cordl_internal_set_isCRTpossible)) bool isCRTpossible;

  /// @brief Field keyBlinding, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_keyBlinding, put = __cordl_internal_set_keyBlinding)) bool keyBlinding;

  /// @brief Field keypairGenerated, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_keypairGenerated, put = __cordl_internal_set_keypairGenerated)) bool keypairGenerated;

  /// @brief Field m_disposed, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field n, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n))::Mono::Math::BigInteger* n;

  /// @brief Field p, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p))::Mono::Math::BigInteger* p;

  /// @brief Field q, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q))::Mono::Math::BigInteger* q;

  /// @brief Field qInv, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_qInv, put = __cordl_internal_set_qInv))::Mono::Math::BigInteger* qInv;

  /// @brief Method Dispose, addr 0x2787c5c, size 0x204, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EncryptValue, addr 0x2786ed0, size 0x10c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method ExportParameters, addr 0x2787390, size 0x334, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method Finalize, addr 0x27863c4, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GenerateKeyPair, addr 0x2786464, size 0x268, virtual false, abstract: false, final false
  inline void GenerateKeyPair();

  /// @brief Method GetPaddedValue, addr 0x2787290, size 0xb0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPaddedValue(::Mono::Math::BigInteger* value, int32_t length);

  /// @brief Method ImportParameters, addr 0x27877f0, size 0x46c, virtual true, abstract: false, final false
  inline void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);

  static inline ::Mono::Security::Cryptography::RSAManaged* New_ctor();

  static inline ::Mono::Security::Cryptography::RSAManaged* New_ctor(int32_t keySize);

  /// @brief Method ToXmlString, addr 0x2787e60, size 0x684, virtual true, abstract: false, final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  constexpr ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler*& __cordl_internal_get_KeyGenerated();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler*> const& __cordl_internal_get_KeyGenerated() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_d();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_d() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_dp();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_dp() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_dq();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_dq() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_e();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_e() const;

  constexpr bool const& __cordl_internal_get_isCRTpossible() const;

  constexpr bool& __cordl_internal_get_isCRTpossible();

  constexpr bool const& __cordl_internal_get_keyBlinding() const;

  constexpr bool& __cordl_internal_get_keyBlinding();

  constexpr bool const& __cordl_internal_get_keypairGenerated() const;

  constexpr bool& __cordl_internal_get_keypairGenerated();

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_n();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_n() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_p();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_p() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_q();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_q() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_qInv();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_qInv() const;

  constexpr void __cordl_internal_set_KeyGenerated(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* value);

  constexpr void __cordl_internal_set_d(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_dp(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_dq(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_e(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_isCRTpossible(bool value);

  constexpr void __cordl_internal_set_keyBlinding(bool value);

  constexpr void __cordl_internal_set_keypairGenerated(bool value);

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_n(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_p(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_q(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_qInv(::Mono::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x27862cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27862d4, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(int32_t keySize);

  /// @brief Method get_KeySize, addr 0x2786cdc, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_PublicOnly, addr 0x2786d80, size 0xa0, virtual false, abstract: false, final false
  inline bool get_PublicOnly();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAManaged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSAManaged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAManaged(RSAManaged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAManaged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAManaged(RSAManaged const&) = delete;

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
