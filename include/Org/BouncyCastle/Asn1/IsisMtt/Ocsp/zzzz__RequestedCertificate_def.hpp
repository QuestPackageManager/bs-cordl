#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestedCertificate)
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
struct __RequestedCertificate__Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
struct __RequestedCertificate__Choice;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
class RequestedCertificate;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate);
// Type: ::Choice
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
// Is value type: true
// CS Name: ::RequestedCertificate::Choice
struct CORDL_TYPE __RequestedCertificate__Choice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RequestedCertificate__Choice_Unwrapped
  enum struct ____RequestedCertificate__Choice_Unwrapped : int32_t {
    __E_Certificate = static_cast<int32_t>(0xffffffff),
    __E_PublicKeyCertificate = static_cast<int32_t>(0x0),
    __E_AttributeCertificate = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RequestedCertificate__Choice_Unwrapped() const noexcept {
    return static_cast<____RequestedCertificate__Choice_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RequestedCertificate__Choice();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RequestedCertificate__Choice(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AttributeCertificate value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice const AttributeCertificate;

  /// @brief Field Certificate value: static_cast<int32_t>(0xffffffff)
  static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice const Certificate;

  /// @brief Field PublicKeyCertificate value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice const PublicKeyCertificate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp
// Type: Org.BouncyCastle.Asn1.IsisMtt.Ocsp::RequestedCertificate
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.Ocsp::RequestedCertificate*
class CORDL_TYPE RequestedCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  using Choice = ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice;

  __declspec(property(get = get_Type))::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice Type;

  /// @brief Field attributeCert, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeCert, put = __cordl_internal_set_attributeCert))::ArrayW<uint8_t, ::Array<uint8_t>*> attributeCert;

  /// @brief Field cert, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cert, put = __cordl_internal_set_cert))::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* cert;

  /// @brief Field publicKeyCert, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKeyCert, put = __cordl_internal_set_publicKeyCert))::ArrayW<uint8_t, ::Array<uint8_t>*> publicKeyCert;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetCertificateBytes, addr 0xfe740c, size 0x104, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCertificateBytes();

  /// @brief Method GetInstance, addr 0xfe72d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0xfe6f8c, size 0x1f4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* certificate);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* New_ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice type,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateOctets);

  /// @brief Method ToAsn1Object, addr 0xfe7510, size 0x104, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_attributeCert() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_attributeCert();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __cordl_internal_get_cert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& __cordl_internal_get_cert() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_publicKeyCert() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_publicKeyCert();

  constexpr void __cordl_internal_set_attributeCert(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_cert(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  constexpr void __cordl_internal_set_publicKeyCert(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0xfe7180, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* certificate);

  /// @brief Method .ctor, addr 0xfe71a8, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method .ctor, addr 0xfe7340, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice type, ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateOctets);

  /// @brief Method get_Type, addr 0xfe73ec, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice get_Type();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestedCertificate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestedCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestedCertificate(RequestedCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestedCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestedCertificate(RequestedCertificate const&) = delete;

  /// @brief Field cert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* ___cert;

  /// @brief Field publicKeyCert, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___publicKeyCert;

  /// @brief Field attributeCert, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___attributeCert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, ___cert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, ___publicKeyCert) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, ___attributeCert) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice, "Org.BouncyCastle.Asn1.IsisMtt.Ocsp", "RequestedCertificate/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*, "Org.BouncyCastle.Asn1.IsisMtt.Ocsp", "RequestedCertificate");
