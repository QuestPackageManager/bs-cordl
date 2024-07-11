#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/TimeStampAndCrl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TimeStampAndCrl)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
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
// CS Name: ::Org.BouncyCastle.Asn1.Cms::TimeStampAndCrl*
class CORDL_TYPE TimeStampAndCrl : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Crl))::Org::BouncyCastle::Asn1::X509::CertificateList* Crl;

  __declspec(property(get = get_TimeStampToken))::Org::BouncyCastle::Asn1::Cms::ContentInfo* TimeStampToken;

  /// @brief Field crl, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_crl, put = __cordl_internal_set_crl))::Org::BouncyCastle::Asn1::X509::CertificateList* crl;

  /// @brief Field timeStamp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_timeStamp, put = __cordl_internal_set_timeStamp))::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStamp;

  /// @brief Method GetInstance, addr 0x10f2460, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStamp);

  /// @brief Method ToAsn1Object, addr 0x10f2514, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList*& __cordl_internal_get_crl();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::CertificateList*> const& __cordl_internal_get_crl() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_timeStamp();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& __cordl_internal_get_timeStamp() const;

  constexpr void __cordl_internal_set_crl(::Org::BouncyCastle::Asn1::X509::CertificateList* value);

  constexpr void __cordl_internal_set_timeStamp(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  /// @brief Method .ctor, addr 0x10f23d8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x10f23b0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStamp);

  /// @brief Method get_Crl, addr 0x10f250c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::CertificateList* get_Crl();

  /// @brief Method get_TimeStampToken, addr 0x10f2504, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_TimeStampToken();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampAndCrl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampAndCrl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampAndCrl(TimeStampAndCrl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampAndCrl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampAndCrl(TimeStampAndCrl const&) = delete;

  /// @brief Field timeStamp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___timeStamp;

  /// @brief Field crl, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::CertificateList* ___crl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl, ___timeStamp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl, ___crl) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, "Org.BouncyCastle.Asn1.Cms", "TimeStampAndCrl");
