#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsUtilities)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsUtilities
class CORDL_TYPE CmsUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateBerOctetOutputStream, addr 0x35c1320, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* CreateBerOctetOutputStream(::System::IO::Stream* s, int32_t tagNo, bool isExplicit, int32_t bufferSize);

  /// @brief Method CreateBerSetFromList, addr 0x35b75a8, size 0x37c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Set* CreateBerSetFromList(::System::Collections::IList* berObjects);

  /// @brief Method CreateDerSetFromList, addr 0x35bc2f0, size 0x380, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Set* CreateDerSetFromList(::System::Collections::IList* derObjects);

  /// @brief Method GetCertificatesFromStore, addr 0x35b7030, size 0x578, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetCertificatesFromStore(::Org::BouncyCastle::X509::Store::IX509Store* certStore);

  /// @brief Method GetCrlsFromStore, addr 0x35b7924, size 0x578, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetCrlsFromStore(::Org::BouncyCastle::X509::Store::IX509Store* crlStore);

  /// @brief Method GetIssuerAndSerialNumber, addr 0x35b8d60, size 0x94, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* GetIssuerAndSerialNumber(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method GetTbsCertificateStructure, addr 0x35cf710, size 0x30, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GetTbsCertificateStructure(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::Cms::CmsUtilities* New_ctor();

  /// @brief Method ReadContentInfo, addr 0x35cf5a4, size 0x15c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadContentInfo(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  /// @brief Method ReadContentInfo, addr 0x35b5010, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadContentInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadContentInfo, addr 0x35b4d54, size 0x64, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadContentInfo(::System::IO::Stream* input);

  /// @brief Method StreamToByteArray, addr 0x35cf700, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> StreamToByteArray(::System::IO::Stream* inStream);

  /// @brief Method StreamToByteArray, addr 0x35cf708, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> StreamToByteArray(::System::IO::Stream* inStream, int32_t limit);

  /// @brief Method .ctor, addr 0x35cf740, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MaximumMemory, addr 0x35cf59c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_MaximumMemory();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsUtilities(CmsUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsUtilities(CmsUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 664 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsUtilities*, "Org.BouncyCastle.Cms", "CmsUtilities");
