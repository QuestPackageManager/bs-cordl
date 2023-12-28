#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsUtilities)
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsUtilities);
// Type: Org.BouncyCastle.Cms::CmsUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(664))
// CS Name: ::Org.BouncyCastle.Cms::CmsUtilities*
class CORDL_TYPE CmsUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_MaximumMemory addr 0x120001c size 0x8 virtual false final false
  static inline int32_t get_MaximumMemory();

  /// @brief Method ReadContentInfo addr 0x11e5848 size 0x64 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadContentInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadContentInfo addr 0x11e5580 size 0x68 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadContentInfo(::System::IO::Stream* input);

  /// @brief Method ReadContentInfo addr 0x1200024 size 0x158 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadContentInfo(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  /// @brief Method StreamToByteArray addr 0x120017c size 0x8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> StreamToByteArray(::System::IO::Stream* inStream);

  /// @brief Method StreamToByteArray addr 0x1200184 size 0x8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> StreamToByteArray(::System::IO::Stream* inStream, int32_t limit);

  /// @brief Method GetCertificatesFromStore addr 0x11e78c4 size 0x5a4 virtual false final false
  static inline ::System::Collections::IList* GetCertificatesFromStore(::Org::BouncyCastle::X509::Store::IX509Store* certStore);

  /// @brief Method GetCrlsFromStore addr 0x11e81f8 size 0x5a4 virtual false final false
  static inline ::System::Collections::IList* GetCrlsFromStore(::Org::BouncyCastle::X509::Store::IX509Store* crlStore);

  /// @brief Method CreateBerSetFromList addr 0x11e7e68 size 0x390 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Set* CreateBerSetFromList(::System::Collections::IList* berObjects);

  /// @brief Method CreateDerSetFromList addr 0x11ecc04 size 0x390 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Set* CreateDerSetFromList(::System::Collections::IList* derObjects);

  /// @brief Method CreateBerOctetOutputStream addr 0x11f1d2c size 0x90 virtual false final false
  static inline ::System::IO::Stream* CreateBerOctetOutputStream(::System::IO::Stream* s, int32_t tagNo, bool isExplicit, int32_t bufferSize);

  /// @brief Method GetTbsCertificateStructure addr 0x120018c size 0x30 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GetTbsCertificateStructure(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method GetIssuerAndSerialNumber addr 0x11e96c4 size 0x94 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* GetIssuerAndSerialNumber(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::Cms::CmsUtilities* New_ctor();

  /// @brief Method .ctor addr 0x12001bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CmsUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsUtilities(CmsUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsUtilities(CmsUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsUtilities*, "Org.BouncyCastle.Cms", "CmsUtilities");
