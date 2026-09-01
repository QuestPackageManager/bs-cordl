#pragma once
// IWYU pragma private; include "System\ComponentModel\DefaultPropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DefaultPropertyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DefaultPropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DefaultPropertyAttribute::*)(::StringW)>(&::System::ComponentModel::DefaultPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bfc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultPropertyAttribute.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DefaultPropertyAttribute::*)()>(&::System::ComponentModel::DefaultPropertyAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bfc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultPropertyAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DefaultPropertyAttribute::*)(::System::Object*)>(&::System::ComponentModel::DefaultPropertyAttribute::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63bfc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultPropertyAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DefaultPropertyAttribute::*)()>(&::System::ComponentModel::DefaultPropertyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bfd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::DefaultPropertyAttribute::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::DefaultPropertyAttribute::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::ComponentModel::DefaultPropertyAttribute::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
inline void System::ComponentModel::DefaultPropertyAttribute::setStaticF_Default(::System::ComponentModel::DefaultPropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DefaultPropertyAttribute*, "Default", ::System::ComponentModel::DefaultPropertyAttribute*>(
      std::forward<::System::ComponentModel::DefaultPropertyAttribute*>(value));
}
inline ::System::ComponentModel::DefaultPropertyAttribute* System::ComponentModel::DefaultPropertyAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DefaultPropertyAttribute*, "Default", ::System::ComponentModel::DefaultPropertyAttribute*>();
}
inline void System::ComponentModel::DefaultPropertyAttribute::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW System::ComponentModel::DefaultPropertyAttribute::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ComponentModel::DefaultPropertyAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DefaultPropertyAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DefaultPropertyAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::DefaultPropertyAttribute* System::ComponentModel::DefaultPropertyAttribute::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DefaultPropertyAttribute*>(name));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DefaultPropertyAttribute::DefaultPropertyAttribute() {}
