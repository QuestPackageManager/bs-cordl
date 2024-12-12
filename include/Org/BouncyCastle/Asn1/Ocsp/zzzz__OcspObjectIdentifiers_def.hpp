#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/OcspObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OcspObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.OcspObjectIdentifiers
class CORDL_TYPE OcspObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field PkixOcsp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PkixOcsp, put = setStaticF_PkixOcsp)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PkixOcsp;

  /// @brief Field PkixOcspArchiveCutoff, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PkixOcspArchiveCutoff, put = setStaticF_PkixOcspArchiveCutoff)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PkixOcspArchiveCutoff;

  /// @brief Field PkixOcspBasic, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PkixOcspBasic, put = setStaticF_PkixOcspBasic)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PkixOcspBasic;

  /// @brief Field PkixOcspCrl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PkixOcspCrl, put = setStaticF_PkixOcspCrl)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PkixOcspCrl;

  /// @brief Field PkixOcspNocheck, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PkixOcspNocheck, put = setStaticF_PkixOcspNocheck)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PkixOcspNocheck;

  /// @brief Field PkixOcspNonce, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PkixOcspNonce, put = setStaticF_PkixOcspNonce)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PkixOcspNonce;

  /// @brief Field PkixOcspResponse, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PkixOcspResponse, put = setStaticF_PkixOcspResponse)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PkixOcspResponse;

  /// @brief Field PkixOcspServiceLocator, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PkixOcspServiceLocator, put = setStaticF_PkixOcspServiceLocator)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PkixOcspServiceLocator;

  static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x2404420, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcsp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspArchiveCutoff();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspBasic();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspCrl();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspNocheck();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspNonce();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspResponse();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspServiceLocator();

  static inline void setStaticF_PkixOcsp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PkixOcspArchiveCutoff(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PkixOcspBasic(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PkixOcspCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PkixOcspNocheck(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PkixOcspNonce(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PkixOcspResponse(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PkixOcspServiceLocator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspObjectIdentifiers(OcspObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspObjectIdentifiers(OcspObjectIdentifiers const&) = delete;

  /// @brief Field PkixOcspId offset 0xffffffff size 0x8
  static constexpr ::ConstString PkixOcspId{ u"1.3.6.1.5.5.7.48.1" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 210 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers*, "Org.BouncyCastle.Asn1.Ocsp", "OcspObjectIdentifiers");
