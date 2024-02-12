#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NamingAuthority)
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
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
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class NamingAuthority;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::NamingAuthority
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(188))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::NamingAuthority*
class CORDL_TYPE NamingAuthority : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field namingAuthorityID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_namingAuthorityID, put = __cordl_internal_set_namingAuthorityID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* namingAuthorityID;

  /// @brief Field namingAuthorityUrl, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_namingAuthorityUrl, put = __cordl_internal_set_namingAuthorityUrl))::StringW namingAuthorityUrl;

  /// @brief Field namingAuthorityText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_namingAuthorityText, put = __cordl_internal_set_namingAuthorityText))::Org::BouncyCastle::Asn1::X500::DirectoryString* namingAuthorityText;

  /// @brief Field IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern,
                             put = setStaticF_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern;

  __declspec(property(get = get_NamingAuthorityID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NamingAuthorityID;

  __declspec(property(get = get_NamingAuthorityText))::Org::BouncyCastle::Asn1::X500::DirectoryString* NamingAuthorityText;

  __declspec(property(get = get_NamingAuthorityUrl))::StringW NamingAuthorityUrl;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_namingAuthorityID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_namingAuthorityID() const;

  constexpr void __cordl_internal_set_namingAuthorityID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::StringW& __cordl_internal_get_namingAuthorityUrl();

  constexpr ::StringW const& __cordl_internal_get_namingAuthorityUrl() const;

  constexpr void __cordl_internal_set_namingAuthorityUrl(::StringW value);

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __cordl_internal_get_namingAuthorityText();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __cordl_internal_get_namingAuthorityText() const;

  constexpr void __cordl_internal_set_namingAuthorityText(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  static inline void setStaticF_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern();

  /// @brief Method GetInstance, addr 0xfa3878, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0xfa20cc, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xfa3a00, size 0x5c8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_NamingAuthorityID, addr 0xfa40b8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_NamingAuthorityID();

  /// @brief Method get_NamingAuthorityText, addr 0xfa40c0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_NamingAuthorityText();

  /// @brief Method get_NamingAuthorityUrl, addr 0xfa40c8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NamingAuthorityUrl();

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* namingAuthorityID, ::StringW namingAuthorityUrl,
                                                                                    ::Org::BouncyCastle::Asn1::X500::DirectoryString* namingAuthorityText);

  /// @brief Method .ctor, addr 0xfa40d0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* namingAuthorityID, ::StringW namingAuthorityUrl, ::Org::BouncyCastle::Asn1::X500::DirectoryString* namingAuthorityText);

  /// @brief Method ToAsn1Object, addr 0xfa410c, size 0x19c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "NamingAuthority", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamingAuthority(NamingAuthority&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamingAuthority", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamingAuthority(NamingAuthority const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamingAuthority();

public:
  /// @brief Field namingAuthorityID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___namingAuthorityID;

  /// @brief Field namingAuthorityUrl, offset: 0x18, size: 0x8, def value: None
  ::StringW ___namingAuthorityUrl;

  /// @brief Field namingAuthorityText, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___namingAuthorityText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority, ___namingAuthorityID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority, ___namingAuthorityUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority, ___namingAuthorityText) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "NamingAuthority");
