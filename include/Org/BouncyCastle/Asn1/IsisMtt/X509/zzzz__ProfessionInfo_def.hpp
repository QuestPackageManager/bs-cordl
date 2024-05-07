#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/ProfessionInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfessionInfo)
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class NamingAuthority;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class ProfessionInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::ProfessionInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::ProfessionInfo*
class CORDL_TYPE ProfessionInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AddProfessionInfo))::Org::BouncyCastle::Asn1::Asn1OctetString* AddProfessionInfo;

  __declspec(property(get = get_NamingAuthority))::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* NamingAuthority;

  /// @brief Field Notar, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Notar, put = setStaticF_Notar))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notar;

  /// @brief Field Notariatsverwalter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Notariatsverwalter, put = setStaticF_Notariatsverwalter))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notariatsverwalter;

  /// @brief Field Notariatsverwalterin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Notariatsverwalterin, put = setStaticF_Notariatsverwalterin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notariatsverwalterin;

  /// @brief Field Notarin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Notarin, put = setStaticF_Notarin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notarin;

  /// @brief Field Notarvertreter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Notarvertreter, put = setStaticF_Notarvertreter))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notarvertreter;

  /// @brief Field Notarvertreterin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Notarvertreterin, put = setStaticF_Notarvertreterin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notarvertreterin;

  /// @brief Field Patentanwalt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Patentanwalt, put = setStaticF_Patentanwalt))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Patentanwalt;

  /// @brief Field Patentanwltin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Patentanwltin, put = setStaticF_Patentanwltin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Patentanwltin;

  /// @brief Field Rechtsanwalt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Rechtsanwalt, put = setStaticF_Rechtsanwalt))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Rechtsanwalt;

  /// @brief Field Rechtsanwltin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Rechtsanwltin, put = setStaticF_Rechtsanwltin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Rechtsanwltin;

  /// @brief Field Rechtsbeistand, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Rechtsbeistand, put = setStaticF_Rechtsbeistand))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Rechtsbeistand;

  __declspec(property(get = get_RegistrationNumber))::StringW RegistrationNumber;

  /// @brief Field Steuerberater, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Steuerberater, put = setStaticF_Steuerberater))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Steuerberater;

  /// @brief Field Steuerberaterin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Steuerberaterin, put = setStaticF_Steuerberaterin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Steuerberaterin;

  /// @brief Field Steuerbevollmchtigte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Steuerbevollmchtigte, put = setStaticF_Steuerbevollmchtigte))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Steuerbevollmchtigte;

  /// @brief Field Steuerbevollmchtigter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Steuerbevollmchtigter, put = setStaticF_Steuerbevollmchtigter))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Steuerbevollmchtigter;

  /// @brief Field VereidigteBuchprferin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VereidigteBuchprferin, put = setStaticF_VereidigteBuchprferin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* VereidigteBuchprferin;

  /// @brief Field VereidigterBuchprfer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VereidigterBuchprfer, put = setStaticF_VereidigterBuchprfer))::Org::BouncyCastle::Asn1::DerObjectIdentifier* VereidigterBuchprfer;

  /// @brief Field Wirtschaftsprfer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Wirtschaftsprfer, put = setStaticF_Wirtschaftsprfer))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Wirtschaftsprfer;

  /// @brief Field Wirtschaftsprferin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Wirtschaftsprferin, put = setStaticF_Wirtschaftsprferin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Wirtschaftsprferin;

  /// @brief Field addProfessionInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_addProfessionInfo, put = __cordl_internal_set_addProfessionInfo))::Org::BouncyCastle::Asn1::Asn1OctetString* addProfessionInfo;

  /// @brief Field namingAuthority, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_namingAuthority, put = __cordl_internal_set_namingAuthority))::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority;

  /// @brief Field professionItems, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_professionItems, put = __cordl_internal_set_professionItems))::Org::BouncyCastle::Asn1::Asn1Sequence* professionItems;

  /// @brief Field professionOids, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_professionOids, put = __cordl_internal_set_professionOids))::Org::BouncyCastle::Asn1::Asn1Sequence* professionOids;

  /// @brief Field registrationNumber, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_registrationNumber, put = __cordl_internal_set_registrationNumber))::StringW registrationNumber;

  /// @brief Method GetInstance, addr 0x11d5f00, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* GetInstance(::System::Object* obj);

  /// @brief Method GetProfessionItems, addr 0x11d8fb0, size 0x114, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> GetProfessionItems();

  /// @brief Method GetProfessionOids, addr 0x11d90c4, size 0x168, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetProfessionOids();

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*
  New_ctor(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority,
           ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> professionItems,
           ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> professionOids, ::StringW registrationNumber,
           ::Org::BouncyCastle::Asn1::Asn1OctetString* addProfessionInfo);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11d8dd8, size 0x1c8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_addProfessionInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_addProfessionInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*& __cordl_internal_get_namingAuthority();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*> const& __cordl_internal_get_namingAuthority() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_professionItems();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_professionItems() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_professionOids();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_professionOids() const;

  constexpr ::StringW const& __cordl_internal_get_registrationNumber() const;

  constexpr ::StringW& __cordl_internal_get_registrationNumber();

  constexpr void __cordl_internal_set_addProfessionInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_namingAuthority(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* value);

  constexpr void __cordl_internal_set_professionItems(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_professionOids(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_registrationNumber(::StringW value);

  /// @brief Method .ctor, addr 0x11d8d10, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority,
                    ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> professionItems,
                    ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> professionOids, ::StringW registrationNumber,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* addProfessionInfo);

  /// @brief Method .ctor, addr 0x11d8460, size 0x8b0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Notar();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Notariatsverwalter();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Notariatsverwalterin();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Notarin();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Notarvertreter();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Notarvertreterin();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Patentanwalt();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Patentanwltin();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Rechtsanwalt();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Rechtsanwltin();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Rechtsbeistand();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Steuerberater();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Steuerberaterin();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Steuerbevollmchtigte();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Steuerbevollmchtigter();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_VereidigteBuchprferin();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_VereidigterBuchprfer();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Wirtschaftsprfer();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Wirtschaftsprferin();

  /// @brief Method get_AddProfessionInfo, addr 0x11d8fa0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_AddProfessionInfo();

  /// @brief Method get_NamingAuthority, addr 0x11d8fa8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* get_NamingAuthority();

  /// @brief Method get_RegistrationNumber, addr 0x11d922c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_RegistrationNumber();

  static inline void setStaticF_Notar(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Notariatsverwalter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Notariatsverwalterin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Notarin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Notarvertreter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Notarvertreterin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Patentanwalt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Patentanwltin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Rechtsanwalt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Rechtsanwltin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Rechtsbeistand(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Steuerberater(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Steuerberaterin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Steuerbevollmchtigte(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Steuerbevollmchtigter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_VereidigteBuchprferin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_VereidigterBuchprfer(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Wirtschaftsprfer(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Wirtschaftsprferin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfessionInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfessionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfessionInfo(ProfessionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfessionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfessionInfo(ProfessionInfo const&) = delete;

  /// @brief Field namingAuthority, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* ___namingAuthority;

  /// @brief Field professionItems, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___professionItems;

  /// @brief Field professionOids, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___professionOids;

  /// @brief Field registrationNumber, offset: 0x28, size: 0x8, def value: None
  ::StringW ___registrationNumber;

  /// @brief Field addProfessionInfo, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___addProfessionInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo, ___namingAuthority) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo, ___professionItems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo, ___professionOids) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo, ___registrationNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo, ___addProfessionInfo) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "ProfessionInfo");
