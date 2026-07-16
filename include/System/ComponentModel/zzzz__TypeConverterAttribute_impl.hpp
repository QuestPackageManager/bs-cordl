#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeConverterAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__TypeConverterAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::TypeConverterAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeConverterAttribute::*)()>(&::System::ComponentModel::TypeConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63c3aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeConverterAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeConverterAttribute::*)(::System::Type*)>(&::System::ComponentModel::TypeConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63c3ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeConverterAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeConverterAttribute::*)(::StringW)>(&::System::ComponentModel::TypeConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c3af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeConverterAttribute.get_ConverterTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeConverterAttribute::*)()>(&::System::ComponentModel::TypeConverterAttribute::get_ConverterTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c3b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { "get_ConverterTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeConverterAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeConverterAttribute::*)(::System::Object*)>(&::System::ComponentModel::TypeConverterAttribute::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63c3b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { ::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeConverterAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::TypeConverterAttribute::*)()>(&::System::ComponentModel::TypeConverterAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63c3b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { ::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::TypeConverterAttribute::__cordl_internal_get__ConverterTypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterTypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::TypeConverterAttribute::__cordl_internal_get__ConverterTypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterTypeName_k__BackingField;
}
constexpr void System::ComponentModel::TypeConverterAttribute::__cordl_internal_set__ConverterTypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConverterTypeName_k__BackingField = value;
}
inline void System::ComponentModel::TypeConverterAttribute::setStaticF_Default(::System::ComponentModel::TypeConverterAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::TypeConverterAttribute*, "Default", ::System::ComponentModel::TypeConverterAttribute*>(
      std::forward<::System::ComponentModel::TypeConverterAttribute*>(value));
}
inline ::System::ComponentModel::TypeConverterAttribute* System::ComponentModel::TypeConverterAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::TypeConverterAttribute*, "Default", ::System::ComponentModel::TypeConverterAttribute*>();
}
inline void System::ComponentModel::TypeConverterAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::TypeConverterAttribute::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::ComponentModel::TypeConverterAttribute::_ctor(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName);
}
inline ::StringW System::ComponentModel::TypeConverterAttribute::get_ConverterTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), { "get_ConverterTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ComponentModel::TypeConverterAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::TypeConverterAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeConverterAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverterAttribute* System::ComponentModel::TypeConverterAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeConverterAttribute*>());
}
inline ::System::ComponentModel::TypeConverterAttribute* System::ComponentModel::TypeConverterAttribute::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeConverterAttribute*>(type));
}
inline ::System::ComponentModel::TypeConverterAttribute* System::ComponentModel::TypeConverterAttribute::New_ctor(::StringW typeName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeConverterAttribute*>(typeName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeConverterAttribute::TypeConverterAttribute() {}
