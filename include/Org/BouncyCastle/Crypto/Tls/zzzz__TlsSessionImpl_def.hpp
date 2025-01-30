#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSessionImpl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSessionImpl)
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSessionImpl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsSession, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSessionImpl
class CORDL_TYPE TlsSessionImpl : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsResumable)) bool IsResumable;

  __declspec(property(get = get_SessionID)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SessionID;

  /// @brief Field mResumable, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_mResumable, put = __cordl_internal_set_mResumable)) bool mResumable;

  /// @brief Field mSessionID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mSessionID, put = __cordl_internal_set_mSessionID)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mSessionID;

  /// @brief Field mSessionParameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mSessionParameters, put = __cordl_internal_set_mSessionParameters)) ::Org::BouncyCastle::Crypto::Tls::SessionParameters* mSessionParameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSession"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsSession*() noexcept;

  /// @brief Method ExportSessionParameters, addr 0x243a7a4, size 0xb4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ExportSessionParameters();

  /// @brief Method Invalidate, addr 0x243a88c, size 0x24, virtual true, abstract: false, final false
  inline void Invalidate();

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters);

  constexpr bool const& __cordl_internal_get_mResumable() const;

  constexpr bool& __cordl_internal_get_mResumable();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSessionID() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSessionID();

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters* const& __cordl_internal_get_mSessionParameters() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& __cordl_internal_get_mSessionParameters();

  constexpr void __cordl_internal_set_mResumable(bool value);

  constexpr void __cordl_internal_set_mSessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value);

  /// @brief Method .ctor, addr 0x243a664, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters);

  /// @brief Method get_IsResumable, addr 0x243a8b0, size 0x34, virtual true, abstract: false, final false
  inline bool get_IsResumable();

  /// @brief Method get_SessionID, addr 0x243a858, size 0x34, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SessionID();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSession"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession* i___Org__BouncyCastle__Crypto__Tls__TlsSession() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsSessionImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsSessionImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSessionImpl(TlsSessionImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSessionImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSessionImpl(TlsSessionImpl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1325 };

  /// @brief Field mSessionID, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSessionID;

  /// @brief Field mSessionParameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ___mSessionParameters;

  /// @brief Field mResumable, offset: 0x20, size: 0x1, def value: None
  bool ___mResumable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl, ___mSessionID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl, ___mSessionParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl, ___mResumable) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*, "Org.BouncyCastle.Crypto.Tls", "TlsSessionImpl");
