#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CompleteCertificateRefs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CompleteCertificateRefs)
namespace Org::BouncyCastle::Asn1::Esf {
class OtherCertID;
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
class CompleteCertificateRefs;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs);
// Type: Org.BouncyCastle.Asn1.Esf::CompleteCertificateRefs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CompleteCertificateRefs*
class CORDL_TYPE CompleteCertificateRefs : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field otherCertIDs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_otherCertIDs, put = __cordl_internal_set_otherCertIDs))::Org::BouncyCastle::Asn1::Asn1Sequence* otherCertIDs;

  /// @brief Method GetInstance, addr 0x10f5030, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs* GetInstance(::System::Object* obj);

  /// @brief Method GetOtherCertIDs, addr 0x10f58f4, size 0x120, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> GetOtherCertIDs();

  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> otherCertIDs);

  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs* New_ctor(::System::Collections::IEnumerable* otherCertIDs);

  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10f5a14, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_otherCertIDs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_otherCertIDs() const;

  constexpr void __cordl_internal_set_otherCertIDs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x10f568c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> otherCertIDs);

  /// @brief Method .ctor, addr 0x10f5750, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* otherCertIDs);

  /// @brief Method .ctor, addr 0x10f51b8, size 0x34c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompleteCertificateRefs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompleteCertificateRefs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompleteCertificateRefs(CompleteCertificateRefs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompleteCertificateRefs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompleteCertificateRefs(CompleteCertificateRefs const&) = delete;

  /// @brief Field otherCertIDs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___otherCertIDs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs, ___otherCertIDs) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*, "Org.BouncyCastle.Asn1.Esf", "CompleteCertificateRefs");
