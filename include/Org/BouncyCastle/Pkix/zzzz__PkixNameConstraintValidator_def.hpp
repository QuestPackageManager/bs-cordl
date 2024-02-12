#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixNameConstraintValidator)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralSubtree;
}
namespace Org::BouncyCastle::Asn1::X509 {
class OtherName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixNameConstraintValidator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator);
// Type: Org.BouncyCastle.Pkix::PkixNameConstraintValidator
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1726))
// CS Name: ::Org.BouncyCastle.Pkix::PkixNameConstraintValidator*
class CORDL_TYPE PkixNameConstraintValidator : public ::System::Object {
public:
  // Declarations
  /// @brief Field excludedSubtreesDN, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedSubtreesDN, put = __cordl_internal_set_excludedSubtreesDN))::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesDN;

  /// @brief Field excludedSubtreesDNS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedSubtreesDNS, put = __cordl_internal_set_excludedSubtreesDNS))::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesDNS;

  /// @brief Field excludedSubtreesEmail, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedSubtreesEmail, put = __cordl_internal_set_excludedSubtreesEmail))::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesEmail;

  /// @brief Field excludedSubtreesURI, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedSubtreesURI, put = __cordl_internal_set_excludedSubtreesURI))::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesURI;

  /// @brief Field excludedSubtreesIP, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedSubtreesIP, put = __cordl_internal_set_excludedSubtreesIP))::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesIP;

  /// @brief Field excludedSubtreesOtherName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedSubtreesOtherName,
                      put = __cordl_internal_set_excludedSubtreesOtherName))::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesOtherName;

  /// @brief Field permittedSubtreesDN, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_permittedSubtreesDN, put = __cordl_internal_set_permittedSubtreesDN))::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesDN;

  /// @brief Field permittedSubtreesDNS, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_permittedSubtreesDNS, put = __cordl_internal_set_permittedSubtreesDNS))::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesDNS;

  /// @brief Field permittedSubtreesEmail, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_permittedSubtreesEmail, put = __cordl_internal_set_permittedSubtreesEmail))::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesEmail;

  /// @brief Field permittedSubtreesURI, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_permittedSubtreesURI, put = __cordl_internal_set_permittedSubtreesURI))::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesURI;

  /// @brief Field permittedSubtreesIP, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_permittedSubtreesIP, put = __cordl_internal_set_permittedSubtreesIP))::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesIP;

  /// @brief Field permittedSubtreesOtherName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_permittedSubtreesOtherName,
                      put = __cordl_internal_set_permittedSubtreesOtherName))::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesOtherName;

  /// @brief Field SerialNumberOid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SerialNumberOid, put = setStaticF_SerialNumberOid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SerialNumberOid;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_excludedSubtreesDN();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_excludedSubtreesDN() const;

  constexpr void __cordl_internal_set_excludedSubtreesDN(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_excludedSubtreesDNS();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_excludedSubtreesDNS() const;

  constexpr void __cordl_internal_set_excludedSubtreesDNS(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_excludedSubtreesEmail();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_excludedSubtreesEmail() const;

  constexpr void __cordl_internal_set_excludedSubtreesEmail(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_excludedSubtreesURI();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_excludedSubtreesURI() const;

  constexpr void __cordl_internal_set_excludedSubtreesURI(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_excludedSubtreesIP();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_excludedSubtreesIP() const;

  constexpr void __cordl_internal_set_excludedSubtreesIP(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_excludedSubtreesOtherName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_excludedSubtreesOtherName() const;

  constexpr void __cordl_internal_set_excludedSubtreesOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_permittedSubtreesDN();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_permittedSubtreesDN() const;

  constexpr void __cordl_internal_set_permittedSubtreesDN(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_permittedSubtreesDNS();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_permittedSubtreesDNS() const;

  constexpr void __cordl_internal_set_permittedSubtreesDNS(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_permittedSubtreesEmail();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_permittedSubtreesEmail() const;

  constexpr void __cordl_internal_set_permittedSubtreesEmail(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_permittedSubtreesURI();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_permittedSubtreesURI() const;

  constexpr void __cordl_internal_set_permittedSubtreesURI(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_permittedSubtreesIP();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_permittedSubtreesIP() const;

  constexpr void __cordl_internal_set_permittedSubtreesIP(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_permittedSubtreesOtherName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_permittedSubtreesOtherName() const;

  constexpr void __cordl_internal_set_permittedSubtreesOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  static inline void setStaticF_SerialNumberOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SerialNumberOid();

  static inline ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* New_ctor();

  /// @brief Method .ctor, addr 0x1124a90, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method WithinDNSubtree, addr 0x1133dc0, size 0x3bc, virtual false, abstract: false, final false
  static inline bool WithinDNSubtree(::Org::BouncyCastle::Asn1::Asn1Sequence* dns, ::Org::BouncyCastle::Asn1::Asn1Sequence* subtree);

  /// @brief Method CheckPermittedDN, addr 0x113417c, size 0x10, virtual false, abstract: false, final false
  inline void CheckPermittedDN(::Org::BouncyCastle::Asn1::Asn1Sequence* dn);

  /// @brief Method CheckExcludedDN, addr 0x11342ac, size 0x10, virtual false, abstract: false, final false
  inline void CheckExcludedDN(::Org::BouncyCastle::Asn1::Asn1Sequence* dn);

  /// @brief Method IntersectDN, addr 0x1134318, size 0x7d4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* IntersectDN(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::Org::BouncyCastle::Utilities::Collections::ISet* dns);

  /// @brief Method UnionDN, addr 0x1134aec, size 0x5e4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* UnionDN(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::Org::BouncyCastle::Asn1::Asn1Sequence* dn);

  /// @brief Method IntersectOtherName, addr 0x11350d0, size 0x698, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* IntersectOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                               ::Org::BouncyCastle::Utilities::Collections::ISet* otherNames);

  /// @brief Method IntersectOtherName, addr 0x1135768, size 0xd8, virtual false, abstract: false, final false
  inline void IntersectOtherName(::Org::BouncyCastle::Asn1::X509::OtherName* otherName1, ::Org::BouncyCastle::Asn1::X509::OtherName* otherName2,
                                 ::Org::BouncyCastle::Utilities::Collections::ISet* intersect);

  /// @brief Method UnionOtherName, addr 0x1135840, size 0xf0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* UnionOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::Org::BouncyCastle::Asn1::X509::OtherName* otherName);

  /// @brief Method IntersectEmail, addr 0x1135930, size 0x6b8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* IntersectEmail(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::Org::BouncyCastle::Utilities::Collections::ISet* emails);

  /// @brief Method UnionEmail, addr 0x1136598, size 0x438, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* UnionEmail(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW email);

  /// @brief Method IntersectIP, addr 0x1137310, size 0x780, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* IntersectIP(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::Org::BouncyCastle::Utilities::Collections::ISet* ips);

  /// @brief Method UnionIP, addr 0x1137cd0, size 0x4a8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* UnionIP(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip);

  /// @brief Method UnionIPRange, addr 0x1138178, size 0x174, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* UnionIPRange(::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask2);

  /// @brief Method IntersectIPRange, addr 0x1137a90, size 0x240, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* IntersectIPRange(::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask2);

  /// @brief Method IpWithSubnetMask, addr 0x1138a1c, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IpWithSubnetMask(::ArrayW<uint8_t, ::Array<uint8_t>*> ip, ::ArrayW<uint8_t, ::Array<uint8_t>*> subnetMask);

  /// @brief Method ExtractIPsAndSubnetMasks, addr 0x11382ec, size 0x1fc, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ExtractIPsAndSubnetMasks(::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask1,
                                                                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask2);

  /// @brief Method MinMaxIPs, addr 0x11384e8, size 0x2bc, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>
  MinMaxIPs(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> subnetmask1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2, ::ArrayW<uint8_t, ::Array<uint8_t>*> subnetmask2);

  /// @brief Method IsOtherNameConstrained, addr 0x1138ac0, size 0x1c, virtual false, abstract: false, final false
  inline bool IsOtherNameConstrained(::Org::BouncyCastle::Asn1::X509::OtherName* constraint, ::Org::BouncyCastle::Asn1::X509::OtherName* otherName);

  /// @brief Method IsOtherNameConstrained, addr 0x1138adc, size 0x324, virtual false, abstract: false, final false
  inline bool IsOtherNameConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::Org::BouncyCastle::Asn1::X509::OtherName* otherName);

  /// @brief Method CheckPermittedOtherName, addr 0x1138e00, size 0x60, virtual false, abstract: false, final false
  inline void CheckPermittedOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::Org::BouncyCastle::Asn1::X509::OtherName* name);

  /// @brief Method CheckExcludedOtherName, addr 0x1138ec8, size 0x5c, virtual false, abstract: false, final false
  inline void CheckExcludedOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::Org::BouncyCastle::Asn1::X509::OtherName* name);

  /// @brief Method IsEmailConstrained, addr 0x1138f24, size 0x164, virtual false, abstract: false, final false
  inline bool IsEmailConstrained(::StringW constraint, ::StringW email);

  /// @brief Method IsEmailConstrained, addr 0x113927c, size 0x354, virtual false, abstract: false, final false
  inline bool IsEmailConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::StringW email);

  /// @brief Method CheckPermittedEmail, addr 0x11395d0, size 0x120, virtual false, abstract: false, final false
  inline void CheckPermittedEmail(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::StringW email);

  /// @brief Method CheckExcludedEmail, addr 0x11396f0, size 0x5c, virtual false, abstract: false, final false
  inline void CheckExcludedEmail(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW email);

  /// @brief Method IsDnsConstrained, addr 0x113974c, size 0x80, virtual false, abstract: false, final false
  inline bool IsDnsConstrained(::StringW constraint, ::StringW dns);

  /// @brief Method IsDnsConstrained, addr 0x11397cc, size 0x33c, virtual false, abstract: false, final false
  inline bool IsDnsConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::StringW dns);

  /// @brief Method CheckPermittedDns, addr 0x1139b08, size 0x110, virtual false, abstract: false, final false
  inline void CheckPermittedDns(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::StringW dns);

  /// @brief Method CheckExcludedDns, addr 0x1139c18, size 0x5c, virtual false, abstract: false, final false
  inline void CheckExcludedDns(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW dns);

  /// @brief Method IsDirectoryConstrained, addr 0x1139c74, size 0x34c, virtual false, abstract: false, final false
  inline bool IsDirectoryConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::Org::BouncyCastle::Asn1::Asn1Sequence* directory);

  /// @brief Method CheckPermittedDirectory, addr 0x113418c, size 0x120, virtual false, abstract: false, final false
  inline void CheckPermittedDirectory(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::Org::BouncyCastle::Asn1::Asn1Sequence* directory);

  /// @brief Method CheckExcludedDirectory, addr 0x11342bc, size 0x5c, virtual false, abstract: false, final false
  inline void CheckExcludedDirectory(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::Org::BouncyCastle::Asn1::Asn1Sequence* directory);

  /// @brief Method IsUriConstrained, addr 0x1139fc0, size 0xec, virtual false, abstract: false, final false
  inline bool IsUriConstrained(::StringW constraint, ::StringW uri);

  /// @brief Method IsUriConstrained, addr 0x113a248, size 0x33c, virtual false, abstract: false, final false
  inline bool IsUriConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::StringW uri);

  /// @brief Method CheckPermittedUri, addr 0x113a584, size 0x110, virtual false, abstract: false, final false
  inline void CheckPermittedUri(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::StringW uri);

  /// @brief Method CheckExcludedUri, addr 0x113a694, size 0x5c, virtual false, abstract: false, final false
  inline void CheckExcludedUri(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW uri);

  /// @brief Method IsIPConstrained, addr 0x113a6f0, size 0x1b8, virtual false, abstract: false, final false
  inline bool IsIPConstrained(::ArrayW<uint8_t, ::Array<uint8_t>*> constraint, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip);

  /// @brief Method IsIPConstrained, addr 0x113a8a8, size 0x35c, virtual false, abstract: false, final false
  inline bool IsIPConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip);

  /// @brief Method CheckPermittedIP, addr 0x113ac04, size 0x110, virtual false, abstract: false, final false
  inline void CheckPermittedIP(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip);

  /// @brief Method CheckExcludedIP, addr 0x113ad14, size 0x5c, virtual false, abstract: false, final false
  inline void CheckExcludedIP(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip);

  /// @brief Method WithinDomain, addr 0x1139088, size 0x1f4, virtual false, abstract: false, final false
  inline bool WithinDomain(::StringW testDomain, ::StringW domain);

  /// @brief Method UnionEmail, addr 0x11369d0, size 0x940, virtual false, abstract: false, final false
  inline void UnionEmail(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* _cordl_union);

  /// @brief Method unionURI, addr 0x113ad70, size 0x940, virtual false, abstract: false, final false
  inline void unionURI(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* _cordl_union);

  /// @brief Method IntersectDns, addr 0x113b6b0, size 0x7b8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* IntersectDns(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::Org::BouncyCastle::Utilities::Collections::ISet* dnss);

  /// @brief Method UnionDns, addr 0x113be68, size 0x5c8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* UnionDns(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW dns);

  /// @brief Method IntersectEmail, addr 0x1136014, size 0x584, virtual false, abstract: false, final false
  inline void IntersectEmail(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* intersect);

  /// @brief Method IntersectUri, addr 0x113c430, size 0x6a4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* IntersectUri(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::Org::BouncyCastle::Utilities::Collections::ISet* uris);

  /// @brief Method UnionUri, addr 0x113d058, size 0x428, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* UnionUri(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW uri);

  /// @brief Method IntersectUri, addr 0x113cad4, size 0x584, virtual false, abstract: false, final false
  inline void IntersectUri(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* intersect);

  /// @brief Method ExtractHostFromURL, addr 0x113a0ac, size 0x19c, virtual false, abstract: false, final false
  static inline ::StringW ExtractHostFromURL(::StringW url);

  /// @brief Method checkPermitted, addr 0x113d480, size 0x128, virtual false, abstract: false, final false
  inline void checkPermitted(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method checkExcluded, addr 0x113d5a8, size 0x128, virtual false, abstract: false, final false
  inline void checkExcluded(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method IntersectPermittedSubtree, addr 0x113d6d0, size 0xaa4, virtual false, abstract: false, final false
  inline void IntersectPermittedSubtree(::Org::BouncyCastle::Asn1::Asn1Sequence* permitted);

  /// @brief Method ExtractNameAsString, addr 0x1135fe8, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW ExtractNameAsString(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method IntersectEmptyPermittedSubtree, addr 0x113e174, size 0x128, virtual false, abstract: false, final false
  inline void IntersectEmptyPermittedSubtree(int32_t nameType);

  /// @brief Method AddExcludedSubtree, addr 0x113e29c, size 0x188, virtual false, abstract: false, final false
  inline void AddExcludedSubtree(::Org::BouncyCastle::Asn1::X509::GeneralSubtree* subtree);

  /// @brief Method Max, addr 0x1138810, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Max(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2);

  /// @brief Method Min, addr 0x11387a4, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Min(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2);

  /// @brief Method CompareTo, addr 0x113887c, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t CompareTo(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2);

  /// @brief Method Or, addr 0x1138958, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Or(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2);

  /// @brief Method HashCode, addr 0x113e424, size 0xc, virtual false, abstract: false, final false
  inline int32_t HashCode();

  /// @brief Method GetHashCode, addr 0x113e430, size 0xf0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method HashCollection, addr 0x113e520, size 0x39c, virtual false, abstract: false, final false
  inline int32_t HashCollection(::System::Collections::ICollection* c);

  /// @brief Method Equals, addr 0x113e8bc, size 0x16c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method CollectionsAreEqual, addr 0x113ea28, size 0x6a4, virtual false, abstract: false, final false
  inline bool CollectionsAreEqual(::System::Collections::ICollection* coll1, ::System::Collections::ICollection* coll2);

  /// @brief Method SpecialEquals, addr 0x113f0cc, size 0x128, virtual false, abstract: false, final false
  inline bool SpecialEquals(::System::Object* o1, ::System::Object* o2);

  /// @brief Method StringifyIP, addr 0x113f1f4, size 0x1b4, virtual false, abstract: false, final false
  inline ::StringW StringifyIP(::ArrayW<uint8_t, ::Array<uint8_t>*> ip);

  /// @brief Method StringifyIPCollection, addr 0x113f3a8, size 0x3f0, virtual false, abstract: false, final false
  inline ::StringW StringifyIPCollection(::Org::BouncyCastle::Utilities::Collections::ISet* ips);

  /// @brief Method StringifyOtherNameCollection, addr 0x113f798, size 0x594, virtual false, abstract: false, final false
  inline ::StringW StringifyOtherNameCollection(::Org::BouncyCastle::Utilities::Collections::ISet* otherNames);

  /// @brief Method ToString, addr 0x113fd2c, size 0x6bc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixNameConstraintValidator(PkixNameConstraintValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixNameConstraintValidator(PkixNameConstraintValidator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixNameConstraintValidator();

public:
  /// @brief Field excludedSubtreesDN, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___excludedSubtreesDN;

  /// @brief Field excludedSubtreesDNS, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___excludedSubtreesDNS;

  /// @brief Field excludedSubtreesEmail, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___excludedSubtreesEmail;

  /// @brief Field excludedSubtreesURI, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___excludedSubtreesURI;

  /// @brief Field excludedSubtreesIP, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___excludedSubtreesIP;

  /// @brief Field excludedSubtreesOtherName, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___excludedSubtreesOtherName;

  /// @brief Field permittedSubtreesDN, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___permittedSubtreesDN;

  /// @brief Field permittedSubtreesDNS, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___permittedSubtreesDNS;

  /// @brief Field permittedSubtreesEmail, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___permittedSubtreesEmail;

  /// @brief Field permittedSubtreesURI, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___permittedSubtreesURI;

  /// @brief Field permittedSubtreesIP, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___permittedSubtreesIP;

  /// @brief Field permittedSubtreesOtherName, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___permittedSubtreesOtherName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, 0x70>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___excludedSubtreesDN) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___excludedSubtreesDNS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___excludedSubtreesEmail) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___excludedSubtreesURI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___excludedSubtreesIP) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___excludedSubtreesOtherName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___permittedSubtreesDN) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___permittedSubtreesDNS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___permittedSubtreesEmail) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___permittedSubtreesURI) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___permittedSubtreesIP) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator, ___permittedSubtreesOtherName) == 0x68, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*, "Org.BouncyCastle.Pkix", "PkixNameConstraintValidator");
