#pragma once
// IWYU pragma private; include "System/ObsoleteAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__ObsoleteAttribute_def.hpp"
//  Writing Method size for method: ::System::ObsoleteAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ObsoleteAttribute::*)()>(&::System::ObsoleteAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c557e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ObsoleteAttribute::*)(::StringW)>(&::System::ObsoleteAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c557f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ObsoleteAttribute::*)(::StringW, bool)>(&::System::ObsoleteAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c55800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ObsoleteAttribute::*)()>(&::System::ObsoleteAttribute::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5580c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { "get_Message", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObsoleteAttribute.get_IsError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ObsoleteAttribute::*)()>(&::System::ObsoleteAttribute::get_IsError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c55814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { "get_IsError", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ObsoleteAttribute::__cordl_internal_get__message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr ::StringW const& System::ObsoleteAttribute::__cordl_internal_get__message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr void System::ObsoleteAttribute::__cordl_internal_set__message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____message = value;
}
constexpr bool& System::ObsoleteAttribute::__cordl_internal_get__error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error;
}
constexpr bool const& System::ObsoleteAttribute::__cordl_internal_get__error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error;
}
constexpr void System::ObsoleteAttribute::__cordl_internal_set__error(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____error = value;
}
inline void System::ObsoleteAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ObsoleteAttribute::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::ObsoleteAttribute::_ctor(::StringW message, bool error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, error);
}
inline ::StringW System::ObsoleteAttribute::get_Message() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { "get_Message", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ObsoleteAttribute::get_IsError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObsoleteAttribute*>(), { "get_IsError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ObsoleteAttribute* System::ObsoleteAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ObsoleteAttribute*>());
}
inline ::System::ObsoleteAttribute* System::ObsoleteAttribute::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ObsoleteAttribute*>(message));
}
inline ::System::ObsoleteAttribute* System::ObsoleteAttribute::New_ctor(::StringW message, bool error) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ObsoleteAttribute*>(message, error));
}
// Ctor Parameters []
constexpr ::System::ObsoleteAttribute::ObsoleteAttribute() {}
