#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/RevocationValues.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(RevocationValues)
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevVals;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class BasicOcspResponse;
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
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class RevocationValues;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::RevocationValues);
// Type: Org.BouncyCastle.Asn1.Esf::RevocationValues
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Esf::RevocationValues*
class CORDL_TYPE RevocationValues : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_OtherRevVals))::Org::BouncyCastle::Asn1::Esf::OtherRevVals* OtherRevVals;

  /// @brief Field crlVals, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_crlVals, put = __cordl_internal_set_crlVals))::Org::BouncyCastle::Asn1::Asn1Sequence* crlVals;

  /// @brief Field ocspVals, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ocspVals, put = __cordl_internal_set_ocspVals))::Org::BouncyCastle::Asn1::Asn1Sequence* ocspVals;

  /// @brief Field otherRevVals, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_otherRevVals, put = __cordl_internal_set_otherRevVals))::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals;

  /// @brief Method GetCrlVals, addr 0x10f5d6c, size 0x124, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> GetCrlVals();

  /// @brief Method GetInstance, addr 0x10f4f40, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* GetInstance(::System::Object* obj);

  /// @brief Method GetOcspVals, addr 0x10f5e90, size 0x124, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*> GetOcspVals();

  static inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> crlVals,
           ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*> ocspVals,
           ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals);

  static inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* New_ctor(::System::Collections::IEnumerable* crlVals, ::System::Collections::IEnumerable* ocspVals,
                                                                           ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals);

  static inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10f5fbc, size 0x124, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_crlVals();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_crlVals() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_ocspVals();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_ocspVals() const;

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherRevVals*& __cordl_internal_get_otherRevVals();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*> const& __cordl_internal_get_otherRevVals() const;

  constexpr void __cordl_internal_set_crlVals(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_ocspVals(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_otherRevVals(::Org::BouncyCastle::Asn1::Esf::OtherRevVals* value);

  /// @brief Method .ctor, addr 0x10f5a60, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> crlVals,
                    ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*> ocspVals,
                    ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals);

  /// @brief Method .ctor, addr 0x10f5b18, size 0x254, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* crlVals, ::System::Collections::IEnumerable* ocspVals, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals);

  /// @brief Method .ctor, addr 0x10f4fe4, size 0xa7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_OtherRevVals, addr 0x10f5fb4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* get_OtherRevVals();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevocationValues();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevocationValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevocationValues(RevocationValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevocationValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevocationValues(RevocationValues const&) = delete;

  /// @brief Field crlVals, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___crlVals;

  /// @brief Field ocspVals, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___ocspVals;

  /// @brief Field otherRevVals, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* ___otherRevVals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::RevocationValues, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::RevocationValues, ___crlVals) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::RevocationValues, ___ocspVals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::RevocationValues, ___otherRevVals) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::RevocationValues);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::RevocationValues*, "Org.BouncyCastle.Asn1.Esf", "RevocationValues");
