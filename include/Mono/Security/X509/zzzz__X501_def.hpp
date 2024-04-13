#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X501)
namespace Mono::Security {
class ASN1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X501;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X501);
// Type: Mono.Security.X509::X501
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: ::Mono.Security.X509::X501*
class CORDL_TYPE X501 : public ::System::Object {
public:
  // Declarations
  /// @brief Field commonName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_commonName, put = setStaticF_commonName))::ArrayW<uint8_t, ::Array<uint8_t>*> commonName;

  /// @brief Field countryName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_countryName, put = setStaticF_countryName))::ArrayW<uint8_t, ::Array<uint8_t>*> countryName;

  /// @brief Field dnQualifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dnQualifier, put = setStaticF_dnQualifier))::ArrayW<uint8_t, ::Array<uint8_t>*> dnQualifier;

  /// @brief Field domainComponent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_domainComponent, put = setStaticF_domainComponent))::ArrayW<uint8_t, ::Array<uint8_t>*> domainComponent;

  /// @brief Field email, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_email, put = setStaticF_email))::ArrayW<uint8_t, ::Array<uint8_t>*> email;

  /// @brief Field givenName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_givenName, put = setStaticF_givenName))::ArrayW<uint8_t, ::Array<uint8_t>*> givenName;

  /// @brief Field initial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_initial, put = setStaticF_initial))::ArrayW<uint8_t, ::Array<uint8_t>*> initial;

  /// @brief Field localityName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_localityName, put = setStaticF_localityName))::ArrayW<uint8_t, ::Array<uint8_t>*> localityName;

  /// @brief Field organizationName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_organizationName, put = setStaticF_organizationName))::ArrayW<uint8_t, ::Array<uint8_t>*> organizationName;

  /// @brief Field organizationalUnitName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_organizationalUnitName, put = setStaticF_organizationalUnitName))::ArrayW<uint8_t, ::Array<uint8_t>*> organizationalUnitName;

  /// @brief Field serialNumber, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_serialNumber, put = setStaticF_serialNumber))::ArrayW<uint8_t, ::Array<uint8_t>*> serialNumber;

  /// @brief Field stateOrProvinceName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_stateOrProvinceName, put = setStaticF_stateOrProvinceName))::ArrayW<uint8_t, ::Array<uint8_t>*> stateOrProvinceName;

  /// @brief Field streetAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_streetAddress, put = setStaticF_streetAddress))::ArrayW<uint8_t, ::Array<uint8_t>*> streetAddress;

  /// @brief Field surname, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_surname, put = setStaticF_surname))::ArrayW<uint8_t, ::Array<uint8_t>*> surname;

  /// @brief Field title, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_title, put = setStaticF_title))::ArrayW<uint8_t, ::Array<uint8_t>*> title;

  /// @brief Field userid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_userid, put = setStaticF_userid))::ArrayW<uint8_t, ::Array<uint8_t>*> userid;

  /// @brief Method AppendEntry, addr 0x267794c, size 0x7c4, virtual false, abstract: false, final false
  static inline void AppendEntry(::System::Text::StringBuilder* sb, ::Mono::Security::ASN1* entry, bool quotes);

  /// @brief Method ToString, addr 0x267013c, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW ToString(::Mono::Security::ASN1* seq);

  /// @brief Method ToString, addr 0x2678110, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::Mono::Security::ASN1* seq, bool reversed, ::StringW separator, bool quotes);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_commonName();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_countryName();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_dnQualifier();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_domainComponent();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_email();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_givenName();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_initial();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_localityName();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_organizationName();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_organizationalUnitName();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_serialNumber();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_stateOrProvinceName();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_streetAddress();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_surname();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_title();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_userid();

  static inline void setStaticF_commonName(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_countryName(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_dnQualifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_domainComponent(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_email(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_givenName(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_initial(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_localityName(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_organizationName(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_organizationalUnitName(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_serialNumber(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_stateOrProvinceName(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_streetAddress(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_surname(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_title(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_userid(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X501();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X501", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X501(X501&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X501", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X501(X501 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X501, 0x10>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X501);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X501*, "Mono.Security.X509", "X501");
