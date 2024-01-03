#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSessionImpl)
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSessionImpl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl);
// Type: Org.BouncyCastle.Crypto.Tls::TlsSessionImpl
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1325))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsSessionImpl*
class CORDL_TYPE TlsSessionImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field mSessionID, offset 0x10, size 0x8
  __declspec(property(get = __get_mSessionID, put = __set_mSessionID))::ArrayW<uint8_t, ::Array<uint8_t>*> mSessionID;

  /// @brief Field mSessionParameters, offset 0x18, size 0x8
  __declspec(property(get = __get_mSessionParameters, put = __set_mSessionParameters))::Org::BouncyCastle::Crypto::Tls::SessionParameters* mSessionParameters;

  /// @brief Field mResumable, offset 0x20, size 0x1
  __declspec(property(get = __get_mResumable, put = __set_mResumable)) bool mResumable;

  __declspec(property(get = get_SessionID))::ArrayW<uint8_t, ::Array<uint8_t>*> SessionID;

  __declspec(property(get = get_IsResumable)) bool IsResumable;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSession"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsSession*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mSessionID();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mSessionID() const;

  constexpr void __set_mSessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& __get_mSessionParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SessionParameters*> const& __get_mSessionParameters() const;

  constexpr void __set_mSessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value);

  constexpr bool& __get_mResumable();

  constexpr bool const& __get_mResumable() const;

  constexpr void __set_mResumable(bool value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters);

  /// @brief Method .ctor, addr 0xfb6d84, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters);

  /// @brief Method ExportSessionParameters, addr 0xfb6ec4, size 0xb4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ExportSessionParameters();

  /// @brief Method get_SessionID, addr 0xfb6f78, size 0x34, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SessionID();

  /// @brief Method Invalidate, addr 0xfb6fac, size 0x24, virtual true, abstract: false, final false
  inline void Invalidate();

  /// @brief Method get_IsResumable, addr 0xfb6fd0, size 0x34, virtual true, abstract: false, final false
  inline bool get_IsResumable();

  // Ctor Parameters [CppParam { name: "", ty: "TlsSessionImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSessionImpl(TlsSessionImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSessionImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSessionImpl(TlsSessionImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsSessionImpl();

public:
  /// @brief Field mSessionID, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSessionID;

  /// @brief Field mSessionParameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ___mSessionParameters;

  /// @brief Field mResumable, offset: 0x20, size: 0x1, def value: None
  bool ___mResumable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl, ___mSessionID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl, ___mSessionParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl, ___mResumable) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*, "Org.BouncyCastle.Crypto.Tls", "TlsSessionImpl");
