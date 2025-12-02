#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/Ocsp/RequestedCertificate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestedCertificate)
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
struct RequestedCertificate_Choice;
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
struct RequestedCertificate_Choice;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
class RequestedCertificate;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate);
// Dependencies
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
// Is value type: true
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.Ocsp.RequestedCertificate/Choice
struct CORDL_TYPE RequestedCertificate_Choice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RequestedCertificate_Choice_Unwrapped
  enum struct __RequestedCertificate_Choice_Unwrapped : int32_t {
    __E_Certificate = static_cast<int32_t>(0xffffffff),
    __E_PublicKeyCertificate = static_cast<int32_t>(0x0),
    __E_AttributeCertificate = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RequestedCertificate_Choice_Unwrapped() const noexcept {
    return static_cast<__RequestedCertificate_Choice_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestedCertificate_Choice();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RequestedCertificate_Choice(int32_t value__) noexcept;

  /// @brief Field AttributeCertificate value: I32(1)
  static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice const AttributeCertificate;

  /// @brief Field Certificate value: I32(-1)
  static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice const Certificate;

  /// @brief Field PublicKeyCertificate value: I32(0)
  static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice const PublicKeyCertificate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 180 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.Ocsp.RequestedCertificate
class CORDL_TYPE RequestedCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  using Choice = ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice;

  __declspec(property(get = get_Type)) ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice Type;

  /// @brief Field attributeCert, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeCert, put = __cordl_internal_set_attributeCert)) ::ArrayW<uint8_t, ::Array<uint8_t>*> attributeCert;

  /// @brief Field cert, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cert, put = __cordl_internal_set_cert)) ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* cert;

  /// @brief Field publicKeyCert, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKeyCert, put = __cordl_internal_set_publicKeyCert)) ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKeyCert;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetCertificateBytes, addr 0x332a924, size 0x100, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCertificateBytes();

  /// @brief Method GetInstance, addr 0x332a7f0, size 0x74, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x332a4f8, size 0x1e8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* certificate);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* New_ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice type,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateOctets);

  /// @brief Method ToAsn1Object, addr 0x332aa24, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_attributeCert() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_attributeCert();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& __cordl_internal_get_cert() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __cordl_internal_get_cert();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_publicKeyCert() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_publicKeyCert();

  constexpr void __cordl_internal_set_attributeCert(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_cert(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  constexpr void __cordl_internal_set_publicKeyCert(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x332a6e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* certificate);

  /// @brief Method .ctor, addr 0x332a6e8, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method .ctor, addr 0x332a864, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice type, ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateOctets);

  /// @brief Method get_Type, addr 0x332a904, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice get_Type();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 181 };

  /// @brief Field cert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* ___cert;

  /// @brief Field publicKeyCert, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___publicKeyCert;

  /// @brief Field attributeCert, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___attributeCert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, ___cert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, ___publicKeyCert) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, ___attributeCert) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice, "Org.BouncyCastle.Asn1.IsisMtt.Ocsp", "RequestedCertificate/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*, "Org.BouncyCastle.Asn1.IsisMtt.Ocsp", "RequestedCertificate");
