#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CertificateUrl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateUrl)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateUrl_ListBuffer16;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateUrl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateUrl_ListBuffer16;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertificateUrl);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16);
// Dependencies System.IO.MemoryStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateUrl/ListBuffer16
class CORDL_TYPE CertificateUrl_ListBuffer16 : public ::System::IO::MemoryStream {
public:
  // Declarations
  /// @brief Method EncodeTo, addr 0x23e4c68, size 0xe4, virtual false, abstract: false, final false
  inline void EncodeTo(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16* New_ctor();

  /// @brief Method .ctor, addr 0x23e4c00, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateUrl_ListBuffer16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateUrl_ListBuffer16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateUrl_ListBuffer16(CertificateUrl_ListBuffer16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateUrl_ListBuffer16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateUrl_ListBuffer16(CertificateUrl_ListBuffer16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1192 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateUrl
class CORDL_TYPE CertificateUrl : public ::System::Object {
public:
  // Declarations
  using ListBuffer16 = ::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16;

  __declspec(property(get = get_Type)) uint8_t Type;

  __declspec(property(get = get_UrlAndHashList)) ::System::Collections::IList* UrlAndHashList;

  /// @brief Field mType, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mType, put = __cordl_internal_set_mType)) uint8_t mType;

  /// @brief Field mUrlAndHashList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mUrlAndHashList, put = __cordl_internal_set_mUrlAndHashList)) ::System::Collections::IList* mUrlAndHashList;

  /// @brief Method Encode, addr 0x23e485c, size 0x3a4, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateUrl* New_ctor(uint8_t type, ::System::Collections::IList* urlAndHashList);

  constexpr uint8_t const& __cordl_internal_get_mType() const;

  constexpr uint8_t& __cordl_internal_get_mType();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_mUrlAndHashList() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_mUrlAndHashList();

  constexpr void __cordl_internal_set_mType(uint8_t value);

  constexpr void __cordl_internal_set_mUrlAndHashList(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x23e46e8, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(uint8_t type, ::System::Collections::IList* urlAndHashList);

  /// @brief Method get_Type, addr 0x23e484c, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_Type();

  /// @brief Method get_UrlAndHashList, addr 0x23e4854, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_UrlAndHashList();

  /// @brief Method parse, addr 0x23e4d4c, size 0x28c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateUrl* parse(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* input);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateUrl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateUrl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateUrl(CertificateUrl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateUrl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateUrl(CertificateUrl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1193 };

  /// @brief Field mType, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mType;

  /// @brief Field mUrlAndHashList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___mUrlAndHashList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateUrl, ___mType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateUrl, ___mUrlAndHashList) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateUrl, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateUrl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateUrl*, "Org.BouncyCastle.Crypto.Tls", "CertificateUrl");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16*, "Org.BouncyCastle.Crypto.Tls", "CertificateUrl/ListBuffer16");
