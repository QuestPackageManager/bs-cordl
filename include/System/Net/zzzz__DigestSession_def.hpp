#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestSession)
namespace System::Net {
class Authorization;
}
namespace System::Net {
class DigestHeaderParser;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Net {
class DigestSession;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::DigestSession);
// Type: System.Net::DigestSession
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::DigestSession*
class CORDL_TYPE DigestSession : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Algorithm))::StringW Algorithm;

  __declspec(property(get = get_CNonce))::StringW CNonce;

  __declspec(property(get = get_LastUse))::System::DateTime LastUse;

  __declspec(property(get = get_Nonce))::StringW Nonce;

  __declspec(property(get = get_Opaque))::StringW Opaque;

  __declspec(property(get = get_QOP))::StringW QOP;

  __declspec(property(get = get_Realm))::StringW Realm;

  /// @brief Field _cnonce, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cnonce, put = __cordl_internal_set__cnonce))::StringW _cnonce;

  /// @brief Field _nc, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__nc, put = __cordl_internal_set__nc)) int32_t _nc;

  /// @brief Field hash, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hash, put = __cordl_internal_set_hash))::System::Security::Cryptography::HashAlgorithm* hash;

  /// @brief Field lastUse, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lastUse, put = __cordl_internal_set_lastUse))::System::DateTime lastUse;

  /// @brief Field parser, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_parser, put = __cordl_internal_set_parser))::System::Net::DigestHeaderParser* parser;

  /// @brief Field rng, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rng, put = setStaticF_rng))::System::Security::Cryptography::RandomNumberGenerator* rng;

  /// @brief Method Authenticate, addr 0x2ef2d20, size 0x5e0, virtual false, abstract: false, final false
  inline ::System::Net::Authorization* Authenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  /// @brief Method HA1, addr 0x2ef29cc, size 0x124, virtual false, abstract: false, final false
  inline ::StringW HA1(::StringW username, ::StringW password);

  /// @brief Method HA2, addr 0x2ef2af0, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW HA2(::System::Net::HttpWebRequest* webRequest);

  /// @brief Method HashToHexString, addr 0x2ef287c, size 0x150, virtual false, abstract: false, final false
  inline ::StringW HashToHexString(::StringW toBeHashed);

  static inline ::System::Net::DigestSession* New_ctor();

  /// @brief Method Parse, addr 0x2ef279c, size 0xe0, virtual false, abstract: false, final false
  inline bool Parse(::StringW challenge);

  /// @brief Method Response, addr 0x2ef2bc0, size 0x160, virtual false, abstract: false, final false
  inline ::StringW Response(::StringW username, ::StringW password, ::System::Net::HttpWebRequest* webRequest);

  constexpr ::StringW const& __cordl_internal_get__cnonce() const;

  constexpr ::StringW& __cordl_internal_get__cnonce();

  constexpr int32_t const& __cordl_internal_get__nc() const;

  constexpr int32_t& __cordl_internal_get__nc();

  constexpr ::System::Security::Cryptography::HashAlgorithm*& __cordl_internal_get_hash();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> const& __cordl_internal_get_hash() const;

  constexpr ::System::DateTime const& __cordl_internal_get_lastUse() const;

  constexpr ::System::DateTime& __cordl_internal_get_lastUse();

  constexpr ::System::Net::DigestHeaderParser*& __cordl_internal_get_parser();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::DigestHeaderParser*> const& __cordl_internal_get_parser() const;

  constexpr void __cordl_internal_set__cnonce(::StringW value);

  constexpr void __cordl_internal_set__nc(int32_t value);

  constexpr void __cordl_internal_set_hash(::System::Security::Cryptography::HashAlgorithm* value);

  constexpr void __cordl_internal_set_lastUse(::System::DateTime value);

  constexpr void __cordl_internal_set_parser(::System::Net::DigestHeaderParser* value);

  /// @brief Method .ctor, addr 0x2ef25c0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_rng();

  /// @brief Method get_Algorithm, addr 0x2ef2630, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Algorithm();

  /// @brief Method get_CNonce, addr 0x2ef26a8, size 0xf4, virtual false, abstract: false, final false
  inline ::StringW get_CNonce();

  /// @brief Method get_LastUse, addr 0x2ef3300, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastUse();

  /// @brief Method get_Nonce, addr 0x2ef2660, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Nonce();

  /// @brief Method get_Opaque, addr 0x2ef2678, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Opaque();

  /// @brief Method get_QOP, addr 0x2ef2690, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_QOP();

  /// @brief Method get_Realm, addr 0x2ef2648, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Realm();

  static inline void setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigestSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestSession(DigestSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestSession(DigestSession const&) = delete;

  /// @brief Field lastUse, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime ___lastUse;

  /// @brief Field _nc, offset: 0x18, size: 0x4, def value: None
  int32_t ____nc;

  /// @brief Field hash, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::HashAlgorithm* ___hash;

  /// @brief Field parser, offset: 0x28, size: 0x8, def value: None
  ::System::Net::DigestHeaderParser* ___parser;

  /// @brief Field _cnonce, offset: 0x30, size: 0x8, def value: None
  ::StringW ____cnonce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::DigestSession, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::DigestSession, ___lastUse) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::DigestSession, ____nc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::DigestSession, ___hash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::DigestSession, ___parser) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::DigestSession, ____cnonce) == 0x30, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::DigestSession);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DigestSession*, "System.Net", "DigestSession");
