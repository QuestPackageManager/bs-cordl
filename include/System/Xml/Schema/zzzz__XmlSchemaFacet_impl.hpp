#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaFacet.hpp"
#include "System/Xml/Schema/zzzz__FacetType_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
#include "System/Xml/Schema/zzzz__FacetType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaFacet.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaFacet::*)()>(&::System::Xml::Schema::XmlSchemaFacet::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622bd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaFacet.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaFacet::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaFacet::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622bd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaFacet.get_IsFixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaFacet::*)()>(&::System::Xml::Schema::XmlSchemaFacet::get_IsFixed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622bda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaFacet.set_IsFixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaFacet::*)(bool)>(&::System::Xml::Schema::XmlSchemaFacet::set_IsFixed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x622bdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaFacet.get_FacetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::FacetType (::System::Xml::Schema::XmlSchemaFacet::*)()>(&::System::Xml::Schema::XmlSchemaFacet::get_FacetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622be70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { "get_FacetType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaFacet.set_FacetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaFacet::*)(::System::Xml::Schema::FacetType)>(&::System::Xml::Schema::XmlSchemaFacet::set_FacetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622be78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { "set_FacetType", {}, { ::i2c::type_of<::System::Xml::Schema::FacetType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaFacet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaFacet::*)()>(&::System::Xml::Schema::XmlSchemaFacet::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x622be80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaFacet::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaFacet::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Xml::Schema::XmlSchemaFacet::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaFacet::__cordl_internal_get_isFixed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFixed;
}
constexpr bool const& System::Xml::Schema::XmlSchemaFacet::__cordl_internal_get_isFixed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFixed;
}
constexpr void System::Xml::Schema::XmlSchemaFacet::__cordl_internal_set_isFixed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isFixed = value;
}
constexpr ::System::Xml::Schema::FacetType& System::Xml::Schema::XmlSchemaFacet::__cordl_internal_get_facetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facetType;
}
constexpr ::System::Xml::Schema::FacetType const& System::Xml::Schema::XmlSchemaFacet::__cordl_internal_get_facetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facetType;
}
constexpr void System::Xml::Schema::XmlSchemaFacet::__cordl_internal_set_facetType(::System::Xml::Schema::FacetType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___facetType = value;
}
inline ::StringW System::Xml::Schema::XmlSchemaFacet::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaFacet::set_Value(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlSchemaFacet::get_IsFixed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaFacet::set_IsFixed(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::FacetType System::Xml::Schema::XmlSchemaFacet::get_FacetType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { "get_FacetType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::FacetType>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaFacet::set_FacetType(::System::Xml::Schema::FacetType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { "set_FacetType", {}, { ::i2c::type_of<::System::Xml::Schema::FacetType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaFacet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaFacet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaFacet* System::Xml::Schema::XmlSchemaFacet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaFacet*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaFacet::XmlSchemaFacet() {}
