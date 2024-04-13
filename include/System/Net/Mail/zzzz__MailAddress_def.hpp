#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MailAddress)
namespace System::Net::Mime {
class EncodedStreamFactory;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Mail {
class MailAddress;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::MailAddress);
// Type: System.Net.Mail::MailAddress
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Mail {
// Is value type: false
// CS Name: ::System.Net.Mail::MailAddress*
class CORDL_TYPE MailAddress : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Address))::StringW Address;

  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  __declspec(property(get = get_SmtpAddress))::StringW SmtpAddress;

  /// @brief Field _displayName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName, put = __cordl_internal_set__displayName))::StringW _displayName;

  /// @brief Field _displayNameEncoding, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__displayNameEncoding, put = __cordl_internal_set__displayNameEncoding))::System::Text::Encoding* _displayNameEncoding;

  /// @brief Field _host, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__host, put = __cordl_internal_set__host))::StringW _host;

  /// @brief Field _userName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName))::StringW _userName;

  /// @brief Field s_encoderFactory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_encoderFactory, put = setStaticF_s_encoderFactory))::System::Net::Mime::EncodedStreamFactory* s_encoderFactory;

  /// @brief Method Equals, addr 0x2e33098, size 0x64, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x2e330fc, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Mail::MailAddress* New_ctor(::StringW address);

  static inline ::System::Net::Mail::MailAddress* New_ctor(::StringW address, ::StringW displayName, ::System::Text::Encoding* displayNameEncoding);

  static inline ::System::Net::Mail::MailAddress* New_ctor(::StringW displayName, ::StringW userName, ::StringW domain);

  /// @brief Method ToString, addr 0x2e32ff4, size 0xa4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__displayName() const;

  constexpr ::StringW& __cordl_internal_get__displayName();

  constexpr ::System::Text::Encoding*& __cordl_internal_get__displayNameEncoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __cordl_internal_get__displayNameEncoding() const;

  constexpr ::StringW const& __cordl_internal_get__host() const;

  constexpr ::StringW& __cordl_internal_get__host();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr void __cordl_internal_set__displayName(::StringW value);

  constexpr void __cordl_internal_set__displayNameEncoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set__host(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  /// @brief Method .ctor, addr 0x2e32cd0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW address);

  /// @brief Method .ctor, addr 0x2e32cdc, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::StringW address, ::StringW displayName, ::System::Text::Encoding* displayNameEncoding);

  /// @brief Method .ctor, addr 0x2e323bc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW userName, ::StringW domain);

  static inline ::System::Net::Mime::EncodedStreamFactory* getStaticF_s_encoderFactory();

  /// @brief Method get_Address, addr 0x2e32f30, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW get_Address();

  /// @brief Method get_DisplayName, addr 0x2e32f28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_SmtpAddress, addr 0x2e32f7c, size 0x78, virtual false, abstract: false, final false
  inline ::StringW get_SmtpAddress();

  static inline void setStaticF_s_encoderFactory(::System::Net::Mime::EncodedStreamFactory* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MailAddress();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MailAddress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MailAddress(MailAddress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MailAddress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MailAddress(MailAddress const&) = delete;

  /// @brief Field _displayNameEncoding, offset: 0x10, size: 0x8, def value: None
  ::System::Text::Encoding* ____displayNameEncoding;

  /// @brief Field _displayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____displayName;

  /// @brief Field _userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _host, offset: 0x28, size: 0x8, def value: None
  ::StringW ____host;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::MailAddress, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::Mail::MailAddress, ____displayNameEncoding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Mail::MailAddress, ____displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Mail::MailAddress, ____userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Mail::MailAddress, ____host) == 0x28, "Offset mismatch!");

} // namespace System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::MailAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::MailAddress*, "System.Net.Mail", "MailAddress");
