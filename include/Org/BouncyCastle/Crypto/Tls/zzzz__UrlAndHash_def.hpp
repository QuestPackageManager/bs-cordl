#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/UrlAndHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UrlAndHash)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class UrlAndHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::UrlAndHash);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.UrlAndHash
class CORDL_TYPE UrlAndHash : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Sha1Hash)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Sha1Hash;

  __declspec(property(get = get_Url)) ::StringW Url;

  /// @brief Field mSha1Hash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mSha1Hash, put = __cordl_internal_set_mSha1Hash)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mSha1Hash;

  /// @brief Field mUrl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mUrl, put = __cordl_internal_set_mUrl)) ::StringW mUrl;

  /// @brief Method Encode, addr 0x2440db4, size 0x100, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::UrlAndHash* New_ctor(::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> sha1Hash);

  /// @brief Method Parse, addr 0x2440eb4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::UrlAndHash* Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* input);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSha1Hash() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSha1Hash();

  constexpr ::StringW const& __cordl_internal_get_mUrl() const;

  constexpr ::StringW& __cordl_internal_get_mUrl();

  constexpr void __cordl_internal_set_mSha1Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mUrl(::StringW value);

  /// @brief Method .ctor, addr 0x2440cc4, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> sha1Hash);

  /// @brief Method get_Sha1Hash, addr 0x2440dac, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Sha1Hash();

  /// @brief Method get_Url, addr 0x2440da4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Url();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UrlAndHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UrlAndHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UrlAndHash(UrlAndHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UrlAndHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UrlAndHash(UrlAndHash const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1333 };

  /// @brief Field mUrl, offset: 0x10, size: 0x8, def value: None
  ::StringW ___mUrl;

  /// @brief Field mSha1Hash, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSha1Hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::UrlAndHash, ___mUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::UrlAndHash, ___mSha1Hash) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::UrlAndHash, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::UrlAndHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::UrlAndHash*, "Org.BouncyCastle.Crypto.Tls", "UrlAndHash");
