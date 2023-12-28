#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CertificateValues)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CertificateValues;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CertificateValues);
// Type: Org.BouncyCastle.Asn1.Esf::CertificateValues
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(134))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CertificateValues*
class CORDL_TYPE CertificateValues : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certificates, offset 0x10, size 0x8
  __declspec(property(get = __get_certificates, put = __set_certificates))::Org::BouncyCastle::Asn1::Asn1Sequence* certificates;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_certificates();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_certificates() const;

  constexpr void __set_certificates(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xe8eac4 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CertificateValues* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CertificateValues* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe8ec4c size 0x350 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::CertificateValues*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> certificates);

  /// @brief Method .ctor addr 0xe8ef9c size 0xc4 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> certificates);

  static inline ::Org::BouncyCastle::Asn1::Esf::CertificateValues* New_ctor(::System::Collections::IEnumerable* certificates);

  /// @brief Method .ctor addr 0xe8f060 size 0x1a4 virtual false final false
  inline void _ctor(::System::Collections::IEnumerable* certificates);

  /// @brief Method GetCertificates addr 0xe8f204 size 0x114 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> GetCertificates();

  /// @brief Method ToAsn1Object addr 0xe8f318 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertificateValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateValues(CertificateValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateValues(CertificateValues const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateValues();

public:
  /// @brief Field certificates, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certificates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CertificateValues, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CertificateValues);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CertificateValues*, "Org.BouncyCastle.Asn1.Esf", "CertificateValues");
