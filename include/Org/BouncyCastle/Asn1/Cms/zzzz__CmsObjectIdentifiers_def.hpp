#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmsObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CmsObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Cms::CmsObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(63))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::CmsObjectIdentifiers*
class CORDL_TYPE CmsObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field Data, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Data, put = setStaticF_Data))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Data;

  /// @brief Field SignedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SignedData, put = setStaticF_SignedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignedData;

  /// @brief Field EnvelopedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnvelopedData, put = setStaticF_EnvelopedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EnvelopedData;

  /// @brief Field SignedAndEnvelopedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SignedAndEnvelopedData, put = setStaticF_SignedAndEnvelopedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignedAndEnvelopedData;

  /// @brief Field DigestedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestedData, put = setStaticF_DigestedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DigestedData;

  /// @brief Field EncryptedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncryptedData, put = setStaticF_EncryptedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EncryptedData;

  /// @brief Field AuthenticatedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthenticatedData, put = setStaticF_AuthenticatedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthenticatedData;

  /// @brief Field CompressedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CompressedData, put = setStaticF_CompressedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CompressedData;

  /// @brief Field AuthEnvelopedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthEnvelopedData, put = setStaticF_AuthEnvelopedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthEnvelopedData;

  /// @brief Field timestampedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_timestampedData, put = setStaticF_timestampedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* timestampedData;

  /// @brief Field id_ri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_ri, put = setStaticF_id_ri))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_ri;

  /// @brief Field id_ri_ocsp_response, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_ri_ocsp_response, put = setStaticF_id_ri_ocsp_response))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_ri_ocsp_response;

  /// @brief Field id_ri_scvp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_ri_scvp, put = setStaticF_id_ri_scvp))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_ri_scvp;

  static inline void setStaticF_Data(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Data();

  static inline void setStaticF_SignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignedData();

  static inline void setStaticF_EnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EnvelopedData();

  static inline void setStaticF_SignedAndEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignedAndEnvelopedData();

  static inline void setStaticF_DigestedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DigestedData();

  static inline void setStaticF_EncryptedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EncryptedData();

  static inline void setStaticF_AuthenticatedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthenticatedData();

  static inline void setStaticF_CompressedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CompressedData();

  static inline void setStaticF_AuthEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthEnvelopedData();

  static inline void setStaticF_timestampedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_timestampedData();

  static inline void setStaticF_id_ri(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ri();

  static inline void setStaticF_id_ri_ocsp_response(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ri_ocsp_response();

  static inline void setStaticF_id_ri_scvp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ri_scvp();

  static inline ::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0xea05a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CmsObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsObjectIdentifiers(CmsObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsObjectIdentifiers(CmsObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers*, "Org.BouncyCastle.Asn1.Cms", "CmsObjectIdentifiers");
