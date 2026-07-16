#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonArrayAttribute.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonArrayAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonArrayAttribute.get_AllowNullItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonArrayAttribute::*)()>(&::Newtonsoft::Json::JsonArrayAttribute::get_AllowNullItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd0f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { "get_AllowNullItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonArrayAttribute.set_AllowNullItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonArrayAttribute::*)(bool)>(&::Newtonsoft::Json::JsonArrayAttribute::set_AllowNullItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd0f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { "set_AllowNullItems", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonArrayAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonArrayAttribute::*)()>(&::Newtonsoft::Json::JsonArrayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd0f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonArrayAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonArrayAttribute::*)(bool)>(&::Newtonsoft::Json::JsonArrayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd0f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonArrayAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonArrayAttribute::*)(::StringW)>(&::Newtonsoft::Json::JsonArrayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd0f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::JsonArrayAttribute::__cordl_internal_get__allowNullItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowNullItems;
}
constexpr bool const& Newtonsoft::Json::JsonArrayAttribute::__cordl_internal_get__allowNullItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowNullItems;
}
constexpr void Newtonsoft::Json::JsonArrayAttribute::__cordl_internal_set__allowNullItems(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowNullItems = value;
}
inline bool Newtonsoft::Json::JsonArrayAttribute::get_AllowNullItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { "get_AllowNullItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonArrayAttribute::set_AllowNullItems(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { "set_AllowNullItems", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonArrayAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonArrayAttribute::_ctor(bool allowNullItems) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowNullItems);
}
inline void Newtonsoft::Json::JsonArrayAttribute::_ctor(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonArrayAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::Newtonsoft::Json::JsonArrayAttribute* Newtonsoft::Json::JsonArrayAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonArrayAttribute*>());
}
inline ::Newtonsoft::Json::JsonArrayAttribute* Newtonsoft::Json::JsonArrayAttribute::New_ctor(bool allowNullItems) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonArrayAttribute*>(allowNullItems));
}
inline ::Newtonsoft::Json::JsonArrayAttribute* Newtonsoft::Json::JsonArrayAttribute::New_ctor(::StringW id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonArrayAttribute*>(id));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonArrayAttribute::JsonArrayAttribute() {}
