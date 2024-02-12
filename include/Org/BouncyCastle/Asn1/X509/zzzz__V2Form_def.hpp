#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(V2Form)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1::X509 {
class ObjectDigestInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class V2Form;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::V2Form);
// Type: Org.BouncyCastle.Asn1.X509::V2Form
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(398))
// CS Name: ::Org.BouncyCastle.Asn1.X509::V2Form*
class CORDL_TYPE V2Form : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field issuerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerName, put = __cordl_internal_set_issuerName))::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName;

  /// @brief Field baseCertificateID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCertificateID, put = __cordl_internal_set_baseCertificateID))::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID;

  /// @brief Field objectDigestInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_objectDigestInfo, put = __cordl_internal_set_objectDigestInfo))::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo;

  __declspec(property(get = get_IssuerName))::Org::BouncyCastle::Asn1::X509::GeneralNames* IssuerName;

  __declspec(property(get = get_BaseCertificateID))::Org::BouncyCastle::Asn1::X509::IssuerSerial* BaseCertificateID;

  __declspec(property(get = get_ObjectDigestInfo))::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* ObjectDigestInfo;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __cordl_internal_get_issuerName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralNames*> const& __cordl_internal_get_issuerName() const;

  constexpr void __cordl_internal_set_issuerName(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __cordl_internal_get_baseCertificateID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> const& __cordl_internal_get_baseCertificateID() const;

  constexpr void __cordl_internal_set_baseCertificateID(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*& __cordl_internal_get_objectDigestInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*> const& __cordl_internal_get_objectDigestInfo() const;

  constexpr void __cordl_internal_set_objectDigestInfo(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* value);

  /// @brief Method GetInstance, addr 0x11c90d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::V2Form* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x11c90f0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::V2Form* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::V2Form* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName);

  /// @brief Method .ctor, addr 0x11c93c4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName);

  static inline ::Org::BouncyCastle::Asn1::X509::V2Form* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID);

  /// @brief Method .ctor, addr 0x11c942c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID);

  static inline ::Org::BouncyCastle::Asn1::X509::V2Form* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName, ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo);

  /// @brief Method .ctor, addr 0x11c945c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName, ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo);

  static inline ::Org::BouncyCastle::Asn1::X509::V2Form* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID,
                                                                  ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo);

  /// @brief Method .ctor, addr 0x11c93f0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID,
                    ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo);

  static inline ::Org::BouncyCastle::Asn1::X509::V2Form* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x11c9194, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_IssuerName, addr 0x11c948c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_IssuerName();

  /// @brief Method get_BaseCertificateID, addr 0x11c9494, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_BaseCertificateID();

  /// @brief Method get_ObjectDigestInfo, addr 0x11c949c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* get_ObjectDigestInfo();

  /// @brief Method ToAsn1Object, addr 0x11c94a4, size 0x138, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "V2Form", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  V2Form(V2Form&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "V2Form", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  V2Form(V2Form const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr V2Form();

public:
  /// @brief Field issuerName, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___issuerName;

  /// @brief Field baseCertificateID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::IssuerSerial* ___baseCertificateID;

  /// @brief Field objectDigestInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* ___objectDigestInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::V2Form, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2Form, ___issuerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2Form, ___baseCertificateID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2Form, ___objectDigestInfo) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::V2Form);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::V2Form*, "Org.BouncyCastle.Asn1.X509", "V2Form");
