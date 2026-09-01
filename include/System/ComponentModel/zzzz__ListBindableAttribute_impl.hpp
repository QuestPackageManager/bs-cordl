#pragma once
// IWYU pragma private; include "System\ComponentModel\ListBindableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ListBindableAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ListBindableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListBindableAttribute::*)(bool)>(&::System::ComponentModel::ListBindableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c2b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListBindableAttribute.get_ListBindable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ListBindableAttribute::*)()>(&::System::ComponentModel::ListBindableAttribute::get_ListBindable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c2b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), { "get_ListBindable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListBindableAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ListBindableAttribute::*)(::System::Object*)>(&::System::ComponentModel::ListBindableAttribute::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63c2b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), { ::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListBindableAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ListBindableAttribute::*)()>(&::System::ComponentModel::ListBindableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c2c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), { ::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListBindableAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ListBindableAttribute::*)()>(&::System::ComponentModel::ListBindableAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63c2c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), { ::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::ListBindableAttribute::__cordl_internal_get__isDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDefault;
}
constexpr bool const& System::ComponentModel::ListBindableAttribute::__cordl_internal_get__isDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDefault;
}
constexpr void System::ComponentModel::ListBindableAttribute::__cordl_internal_set__isDefault(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDefault = value;
}
constexpr bool& System::ComponentModel::ListBindableAttribute::__cordl_internal_get__ListBindable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ListBindable_k__BackingField;
}
constexpr bool const& System::ComponentModel::ListBindableAttribute::__cordl_internal_get__ListBindable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ListBindable_k__BackingField;
}
constexpr void System::ComponentModel::ListBindableAttribute::__cordl_internal_set__ListBindable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ListBindable_k__BackingField = value;
}
inline void System::ComponentModel::ListBindableAttribute::setStaticF_Yes(::System::ComponentModel::ListBindableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ListBindableAttribute*, "Yes", ::System::ComponentModel::ListBindableAttribute*>(
      std::forward<::System::ComponentModel::ListBindableAttribute*>(value));
}
inline ::System::ComponentModel::ListBindableAttribute* System::ComponentModel::ListBindableAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ListBindableAttribute*, "Yes", ::System::ComponentModel::ListBindableAttribute*>();
}
inline void System::ComponentModel::ListBindableAttribute::setStaticF_No(::System::ComponentModel::ListBindableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ListBindableAttribute*, "No", ::System::ComponentModel::ListBindableAttribute*>(
      std::forward<::System::ComponentModel::ListBindableAttribute*>(value));
}
inline ::System::ComponentModel::ListBindableAttribute* System::ComponentModel::ListBindableAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ListBindableAttribute*, "No", ::System::ComponentModel::ListBindableAttribute*>();
}
inline void System::ComponentModel::ListBindableAttribute::setStaticF_Default(::System::ComponentModel::ListBindableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ListBindableAttribute*, "Default", ::System::ComponentModel::ListBindableAttribute*>(
      std::forward<::System::ComponentModel::ListBindableAttribute*>(value));
}
inline ::System::ComponentModel::ListBindableAttribute* System::ComponentModel::ListBindableAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ListBindableAttribute*, "Default", ::System::ComponentModel::ListBindableAttribute*>();
}
inline void System::ComponentModel::ListBindableAttribute::_ctor(bool listBindable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listBindable);
}
inline bool System::ComponentModel::ListBindableAttribute::get_ListBindable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), { "get_ListBindable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::ListBindableAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::ListBindableAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::ListBindableAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ListBindableAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::ListBindableAttribute* System::ComponentModel::ListBindableAttribute::New_ctor(bool listBindable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ListBindableAttribute*>(listBindable));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ListBindableAttribute::ListBindableAttribute() {}
