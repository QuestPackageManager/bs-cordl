#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TimeStampAndCrl)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampAndCrl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl);
// Type: Org.BouncyCastle.Asn1.Cms::TimeStampAndCrl
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(98))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::TimeStampAndCrl*
class CORDL_TYPE TimeStampAndCrl : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field timeStamp, offset 0x10, size 0x8
  __declspec(property(get = __get_timeStamp, put = __set_timeStamp))::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStamp;

  /// @brief Field crl, offset 0x18, size 0x8
  __declspec(property(get = __get_crl, put = __set_crl))::Org::BouncyCastle::Asn1::X509::CertificateList* crl;

  __declspec(property(get = get_TimeStampToken))::Org::BouncyCastle::Asn1::Cms::ContentInfo* TimeStampToken;

  __declspec(property(get = get_Crl))::Org::BouncyCastle::Asn1::X509::CertificateList* Crl;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __get_timeStamp();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& __get_timeStamp() const;

  constexpr void __set_timeStamp(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList*& __get_crl();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::CertificateList*> const& __get_crl() const;

  constexpr void __set_crl(::Org::BouncyCastle::Asn1::X509::CertificateList* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStamp);

  /// @brief Method .ctor addr 0xe8203c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStamp);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe82064 size 0x88 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe820ec size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl* GetInstance(::System::Object* obj);

  /// @brief Method get_TimeStampToken addr 0xe82190 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_TimeStampToken();

  /// @brief Method get_Crl addr 0xe82198 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::CertificateList* get_Crl();

  /// @brief Method ToAsn1Object addr 0xe821a0 size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampAndCrl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampAndCrl(TimeStampAndCrl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampAndCrl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampAndCrl(TimeStampAndCrl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampAndCrl();

public:
  /// @brief Field timeStamp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___timeStamp;

  /// @brief Field crl, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::CertificateList* ___crl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, "Org.BouncyCastle.Asn1.Cms", "TimeStampAndCrl");
