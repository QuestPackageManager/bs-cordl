#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/TbsCertificateList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TbsCertificateList)
namespace GlobalNamespace {
class __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class __TbsCertificateList__RevokedCertificatesEnumeration;
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
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class __TbsCertificateList__RevokedCertificatesEnumeration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::TbsCertificateList);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration);
// Type: ::RevokedCertificatesEnumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*
class CORDL_TYPE __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field e, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e)) ::System::Collections::IEnumerator* e;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x25d1fbc, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator* New_ctor(::System::Collections::IEnumerator* e);

  /// @brief Method Reset, addr 0x25d205c, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_e();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get_e() const;

  constexpr void __cordl_internal_set_e(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x25d1f94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerator* e);

  /// @brief Method get_Current, addr 0x25d2100, size 0xe4, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator(__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator(__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator const&) = delete;

  /// @brief Field e, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___e;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator, ___e) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RevokedCertificatesEnumeration
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::TbsCertificateList::RevokedCertificatesEnumeration*
class CORDL_TYPE __TbsCertificateList__RevokedCertificatesEnumeration : public ::System::Object {
public:
  // Declarations
  using RevokedCertificatesEnumerator = ::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator;

  /// @brief Field en, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_en, put = __cordl_internal_set_en)) ::System::Collections::IEnumerable* en;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x25d1eb8, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration* New_ctor(::System::Collections::IEnumerable* en);

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_en();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_en() const;

  constexpr void __cordl_internal_set_en(::System::Collections::IEnumerable* value);

  /// @brief Method .ctor, addr 0x25d1e80, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* en);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TbsCertificateList__RevokedCertificatesEnumeration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TbsCertificateList__RevokedCertificatesEnumeration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TbsCertificateList__RevokedCertificatesEnumeration(__TbsCertificateList__RevokedCertificatesEnumeration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TbsCertificateList__RevokedCertificatesEnumeration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TbsCertificateList__RevokedCertificatesEnumeration(__TbsCertificateList__RevokedCertificatesEnumeration const&) = delete;

  /// @brief Field en, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___en;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration, ___en) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
// Type: Org.BouncyCastle.Asn1.X509::TbsCertificateList
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::TbsCertificateList*
class CORDL_TYPE TbsCertificateList : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  using RevokedCertificatesEnumeration = ::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration;

  __declspec(property(get = get_Extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  __declspec(property(get = get_Issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_NextUpdate)) ::Org::BouncyCastle::Asn1::X509::Time* NextUpdate;

  __declspec(property(get = get_Signature)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Signature;

  __declspec(property(get = get_ThisUpdate)) ::Org::BouncyCastle::Asn1::X509::Time* ThisUpdate;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_VersionNumber)) ::Org::BouncyCastle::Asn1::DerInteger* VersionNumber;

  /// @brief Field crlExtensions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_crlExtensions, put = __cordl_internal_set_crlExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* crlExtensions;

  /// @brief Field issuer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field nextUpdate, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_nextUpdate, put = __cordl_internal_set_nextUpdate)) ::Org::BouncyCastle::Asn1::X509::Time* nextUpdate;

  /// @brief Field revokedCertificates, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_revokedCertificates, put = __cordl_internal_set_revokedCertificates)) ::Org::BouncyCastle::Asn1::Asn1Sequence* revokedCertificates;

  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seq, put = __cordl_internal_set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Field signature, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;

  /// @brief Field thisUpdate, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_thisUpdate, put = __cordl_internal_set_thisUpdate)) ::Org::BouncyCastle::Asn1::X509::Time* thisUpdate;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x25d15d4, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x25d15ec, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GetInstance(::System::Object* obj);

  /// @brief Method GetRevokedCertificateEnumeration, addr 0x25d1de8, size 0x98, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetRevokedCertificateEnumeration();

  /// @brief Method GetRevokedCertificates, addr 0x25d1c9c, size 0x14c, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*, ::Array<::Org::BouncyCastle::Asn1::X509::CrlEntry*>*> GetRevokedCertificates();

  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x25d1eb0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_crlExtensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __cordl_internal_get_crlExtensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __cordl_internal_get_issuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __cordl_internal_get_nextUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __cordl_internal_get_nextUpdate() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_revokedCertificates();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_revokedCertificates() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_seq() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_signature();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_signature() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __cordl_internal_get_thisUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __cordl_internal_get_thisUpdate() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_version() const;

  constexpr void __cordl_internal_set_crlExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_nextUpdate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr void __cordl_internal_set_revokedCertificates(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_thisUpdate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x25d1768, size 0x4e8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Extensions, addr 0x25d1ea8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method get_Issuer, addr 0x25d1c84, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_NextUpdate, addr 0x25d1c94, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_NextUpdate();

  /// @brief Method get_Signature, addr 0x25d1c7c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Signature();

  /// @brief Method get_ThisUpdate, addr 0x25d1c8c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_ThisUpdate();

  /// @brief Method get_Version, addr 0x25d1c50, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get_VersionNumber, addr 0x25d1c74, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_VersionNumber();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TbsCertificateList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TbsCertificateList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TbsCertificateList(TbsCertificateList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TbsCertificateList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TbsCertificateList(TbsCertificateList const&) = delete;

  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  /// @brief Field version, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field signature, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signature;

  /// @brief Field issuer, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___issuer;

  /// @brief Field thisUpdate, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___thisUpdate;

  /// @brief Field nextUpdate, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___nextUpdate;

  /// @brief Field revokedCertificates, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___revokedCertificates;

  /// @brief Field crlExtensions, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___crlExtensions;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 393 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::TbsCertificateList, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateList, ___seq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateList, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateList, ___signature) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateList, ___issuer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateList, ___thisUpdate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateList, ___nextUpdate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateList, ___revokedCertificates) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateList, ___crlExtensions) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator*, "Org.BouncyCastle.Asn1.X509",
                       "TbsCertificateList/RevokedCertificatesEnumeration/RevokedCertificatesEnumerator");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::TbsCertificateList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::TbsCertificateList*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList/RevokedCertificatesEnumeration");
