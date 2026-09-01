#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Icao\CscaMasterList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CscaMasterList)
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class CscaMasterList;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::Icao::CscaMasterList*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::Icao::CscaMasterList*, "Org.BouncyCastle.Asn1.Icao", "CscaMasterList");
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.X509.X509CertificateStructure
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Icao.CscaMasterList
class CORDL_TYPE CscaMasterList : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field certList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certList, put = __cordl_internal_set_certList)) ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> certList;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method CopyCertList, addr 0x344ee80, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> CopyCertList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> orig);

  /// @brief Method GetCertStructs, addr 0x344ef10, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> GetCertStructs();

  /// @brief Method GetInstance, addr 0x344eaf4, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> certStructs);

  static inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x344ef18, size 0x124, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& __cordl_internal_get_certList() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>& __cordl_internal_get_certList();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_certList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x344ee08, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> certStructs);

  /// @brief Method .ctor, addr 0x344eb94, size 0x274, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version, addr 0x344eef8, size 0x18, virtual true, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CscaMasterList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CscaMasterList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CscaMasterList(CscaMasterList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CscaMasterList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CscaMasterList(CscaMasterList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 174 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field certList, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> ___certList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::CscaMasterList, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::CscaMasterList, ___certList) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Asn1::Icao::CscaMasterList) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Icao
