#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TbsCertificateList)
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class __TbsCertificateList__RevokedCertificatesEnumeration;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace GlobalNamespace {
class __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(391))
// CS Name: ::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*
class CORDL_TYPE __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field e, offset 0x10, size 0x8
  __declspec(property(get = __get_e, put = __set_e))::System::Collections::IEnumerator* e;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::IEnumerator*& __get_e();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get_e() const;

  constexpr void __set_e(::System::Collections::IEnumerator* value);

  static inline ::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator* New_ctor(::System::Collections::IEnumerator* e);

  /// @brief Method .ctor, addr 0x1199c74, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerator* e);

  /// @brief Method MoveNext, addr 0x1199c9c, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x1199d3c, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Current, addr 0x1199de0, size 0xe8, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator(__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator(__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator();

public:
  /// @brief Field e, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator, ___e) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RevokedCertificatesEnumeration
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(392))
// CS Name: ::TbsCertificateList::RevokedCertificatesEnumeration*
class CORDL_TYPE __TbsCertificateList__RevokedCertificatesEnumeration : public ::System::Object {
public:
  // Declarations
  using RevokedCertificatesEnumerator = ::GlobalNamespace::__TbsCertificateList__RevokedCertificatesEnumeration__RevokedCertificatesEnumerator;

  /// @brief Field en, offset 0x10, size 0x8
  __declspec(property(get = __get_en, put = __set_en))::System::Collections::IEnumerable* en;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::IEnumerable*& __get_en();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __get_en() const;

  constexpr void __set_en(::System::Collections::IEnumerable* value);

  static inline ::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration* New_ctor(::System::Collections::IEnumerable* en);

  /// @brief Method .ctor, addr 0x1199b5c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* en);

  /// @brief Method GetEnumerator, addr 0x1199b94, size 0xe0, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__TbsCertificateList__RevokedCertificatesEnumeration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TbsCertificateList__RevokedCertificatesEnumeration(__TbsCertificateList__RevokedCertificatesEnumeration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TbsCertificateList__RevokedCertificatesEnumeration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TbsCertificateList__RevokedCertificatesEnumeration(__TbsCertificateList__RevokedCertificatesEnumeration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TbsCertificateList__RevokedCertificatesEnumeration();

public:
  /// @brief Field en, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___en;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration, ___en) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
// Type: Org.BouncyCastle.Asn1.X509::TbsCertificateList
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(393))
// CS Name: ::Org.BouncyCastle.Asn1.X509::TbsCertificateList*
class CORDL_TYPE TbsCertificateList : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  using RevokedCertificatesEnumeration = ::Org::BouncyCastle::Asn1::X509::__TbsCertificateList__RevokedCertificatesEnumeration;

  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __get_seq, put = __set_seq))::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field signature, offset 0x20, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;

  /// @brief Field issuer, offset 0x28, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field thisUpdate, offset 0x30, size 0x8
  __declspec(property(get = __get_thisUpdate, put = __set_thisUpdate))::Org::BouncyCastle::Asn1::X509::Time* thisUpdate;

  /// @brief Field nextUpdate, offset 0x38, size 0x8
  __declspec(property(get = __get_nextUpdate, put = __set_nextUpdate))::Org::BouncyCastle::Asn1::X509::Time* nextUpdate;

  /// @brief Field revokedCertificates, offset 0x40, size 0x8
  __declspec(property(get = __get_revokedCertificates, put = __set_revokedCertificates))::Org::BouncyCastle::Asn1::Asn1Sequence* revokedCertificates;

  /// @brief Field crlExtensions, offset 0x48, size 0x8
  __declspec(property(get = __get_crlExtensions, put = __set_crlExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* crlExtensions;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_VersionNumber))::Org::BouncyCastle::Asn1::DerInteger* VersionNumber;

  __declspec(property(get = get_Signature))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Signature;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_ThisUpdate))::Org::BouncyCastle::Asn1::X509::Time* ThisUpdate;

  __declspec(property(get = get_NextUpdate))::Org::BouncyCastle::Asn1::X509::Time* NextUpdate;

  __declspec(property(get = get_Extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_seq() const;

  constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_signature();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_signature() const;

  constexpr void __set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_issuer() const;

  constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __get_thisUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __get_thisUpdate() const;

  constexpr void __set_thisUpdate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __get_nextUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __get_nextUpdate() const;

  constexpr void __set_nextUpdate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_revokedCertificates();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_revokedCertificates() const;

  constexpr void __set_revokedCertificates(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_crlExtensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_crlExtensions() const;

  constexpr void __set_crlExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method GetInstance, addr 0x1199298, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x11992b0, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1199438, size 0x4ec, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version, addr 0x1199924, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get_VersionNumber, addr 0x1199948, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_VersionNumber();

  /// @brief Method get_Signature, addr 0x1199950, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Signature();

  /// @brief Method get_Issuer, addr 0x1199958, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_ThisUpdate, addr 0x1199960, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_ThisUpdate();

  /// @brief Method get_NextUpdate, addr 0x1199968, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_NextUpdate();

  /// @brief Method GetRevokedCertificates, addr 0x1199970, size 0x14c, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*, ::Array<::Org::BouncyCastle::Asn1::X509::CrlEntry*>*> GetRevokedCertificates();

  /// @brief Method GetRevokedCertificateEnumeration, addr 0x1199abc, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetRevokedCertificateEnumeration();

  /// @brief Method get_Extensions, addr 0x1199b84, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method ToAsn1Object, addr 0x1199b8c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TbsCertificateList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TbsCertificateList(TbsCertificateList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TbsCertificateList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TbsCertificateList(TbsCertificateList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TbsCertificateList();

public:
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
