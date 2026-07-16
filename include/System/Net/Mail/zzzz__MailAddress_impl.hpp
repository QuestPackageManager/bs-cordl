#pragma once
// IWYU pragma private; include "System/Net/Mail/MailAddress.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mail/zzzz__MailAddress_def.hpp"
#include "System/Net/Mime/zzzz__EncodedStreamFactory_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Mail::MailAddress._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Mail::MailAddress::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::Mail::MailAddress::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6369b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Mail::MailAddress::*)(::StringW)>(&::System::Net::Mail::MailAddress::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x636a408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Mail::MailAddress::*)(::StringW, ::StringW, ::System::Text::Encoding*)>(&::System::Net::Mail::MailAddress::_ctor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x636a414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.get_DisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636a638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { "get_DisplayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.get_Address
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::get_Address)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x636a640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { "get_Address", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.get_SmtpAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::get_SmtpAddress)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x636a690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { "get_SmtpAddress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x636a708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { ::i2c::class_of<::System::Net::Mail::MailAddress*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Mail::MailAddress::*)(::System::Object*)>(&::System::Net::Mail::MailAddress::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x636a7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { ::i2c::class_of<::System::Net::Mail::MailAddress*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x636a808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { ::i2c::class_of<::System::Net::Mail::MailAddress*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Text::Encoding*& System::Net::Mail::MailAddress::__cordl_internal_get__displayNameEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayNameEncoding;
}
constexpr ::System::Text::Encoding* const& System::Net::Mail::MailAddress::__cordl_internal_get__displayNameEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayNameEncoding;
}
constexpr void System::Net::Mail::MailAddress::__cordl_internal_set__displayNameEncoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayNameEncoding = value;
}
constexpr ::StringW& System::Net::Mail::MailAddress::__cordl_internal_get__displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr ::StringW const& System::Net::Mail::MailAddress::__cordl_internal_get__displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr void System::Net::Mail::MailAddress::__cordl_internal_set__displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName = value;
}
constexpr ::StringW& System::Net::Mail::MailAddress::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& System::Net::Mail::MailAddress::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void System::Net::Mail::MailAddress::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userName = value;
}
constexpr ::StringW& System::Net::Mail::MailAddress::__cordl_internal_get__host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr ::StringW const& System::Net::Mail::MailAddress::__cordl_internal_get__host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr void System::Net::Mail::MailAddress::__cordl_internal_set__host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____host = value;
}
inline void System::Net::Mail::MailAddress::setStaticF_s_encoderFactory(::System::Net::Mime::EncodedStreamFactory* value) {
  ::cordl_internals::setStaticField<::System::Net::Mime::EncodedStreamFactory*, "s_encoderFactory", ::System::Net::Mail::MailAddress*>(std::forward<::System::Net::Mime::EncodedStreamFactory*>(value));
}
inline ::System::Net::Mime::EncodedStreamFactory* System::Net::Mail::MailAddress::getStaticF_s_encoderFactory() {
  return ::cordl_internals::getStaticField<::System::Net::Mime::EncodedStreamFactory*, "s_encoderFactory", ::System::Net::Mail::MailAddress*>();
}
inline void System::Net::Mail::MailAddress::_ctor(::StringW displayName, ::StringW userName, ::StringW domain) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, userName, domain);
}
inline void System::Net::Mail::MailAddress::_ctor(::StringW address) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void System::Net::Mail::MailAddress::_ctor(::StringW address, ::StringW displayName, ::System::Text::Encoding* displayNameEncoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, displayName, displayNameEncoding);
}
inline ::StringW System::Net::Mail::MailAddress::get_DisplayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { "get_DisplayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::Mail::MailAddress::get_Address() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { "get_Address", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::Mail::MailAddress::get_SmtpAddress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddress*>(), { "get_SmtpAddress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::Mail::MailAddress::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Mail::MailAddress*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::Mail::MailAddress::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Mail::MailAddress*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Net::Mail::MailAddress::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Mail::MailAddress*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Net::Mail::MailAddress* System::Net::Mail::MailAddress::New_ctor(::StringW displayName, ::StringW userName, ::StringW domain) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Mail::MailAddress*>(displayName, userName, domain));
}
inline ::System::Net::Mail::MailAddress* System::Net::Mail::MailAddress::New_ctor(::StringW address) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Mail::MailAddress*>(address));
}
inline ::System::Net::Mail::MailAddress* System::Net::Mail::MailAddress::New_ctor(::StringW address, ::StringW displayName, ::System::Text::Encoding* displayNameEncoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Mail::MailAddress*>(address, displayName, displayNameEncoding));
}
// Ctor Parameters []
constexpr ::System::Net::Mail::MailAddress::MailAddress() {}
