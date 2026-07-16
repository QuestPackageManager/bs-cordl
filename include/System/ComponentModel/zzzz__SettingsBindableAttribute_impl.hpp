#pragma once
// IWYU pragma private; include "System/ComponentModel/SettingsBindableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__SettingsBindableAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::SettingsBindableAttribute::*)(bool)>(&::System::ComponentModel::SettingsBindableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c30e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute.get_Bindable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::SettingsBindableAttribute::*)()>(&::System::ComponentModel::SettingsBindableAttribute::get_Bindable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c30ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(), { "get_Bindable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::SettingsBindableAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::SettingsBindableAttribute::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63c30f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::SettingsBindableAttribute::*)()>(&::System::ComponentModel::SettingsBindableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63c318c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(), 2 }));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::SettingsBindableAttribute::__cordl_internal_get__Bindable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bindable_k__BackingField;
}
constexpr bool const& System::ComponentModel::SettingsBindableAttribute::__cordl_internal_get__Bindable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bindable_k__BackingField;
}
constexpr void System::ComponentModel::SettingsBindableAttribute::__cordl_internal_set__Bindable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Bindable_k__BackingField = value;
}
inline void System::ComponentModel::SettingsBindableAttribute::setStaticF_Yes(::System::ComponentModel::SettingsBindableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::SettingsBindableAttribute*, "Yes", ::System::ComponentModel::SettingsBindableAttribute*>(
      std::forward<::System::ComponentModel::SettingsBindableAttribute*>(value));
}
inline ::System::ComponentModel::SettingsBindableAttribute* System::ComponentModel::SettingsBindableAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::SettingsBindableAttribute*, "Yes", ::System::ComponentModel::SettingsBindableAttribute*>();
}
inline void System::ComponentModel::SettingsBindableAttribute::setStaticF_No(::System::ComponentModel::SettingsBindableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::SettingsBindableAttribute*, "No", ::System::ComponentModel::SettingsBindableAttribute*>(
      std::forward<::System::ComponentModel::SettingsBindableAttribute*>(value));
}
inline ::System::ComponentModel::SettingsBindableAttribute* System::ComponentModel::SettingsBindableAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::SettingsBindableAttribute*, "No", ::System::ComponentModel::SettingsBindableAttribute*>();
}
inline void System::ComponentModel::SettingsBindableAttribute::_ctor(bool bindable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindable);
}
inline bool System::ComponentModel::SettingsBindableAttribute::get_Bindable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(), { "get_Bindable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::SettingsBindableAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::SettingsBindableAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::SettingsBindableAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::SettingsBindableAttribute* System::ComponentModel::SettingsBindableAttribute::New_ctor(bool bindable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::SettingsBindableAttribute*>(bindable));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::SettingsBindableAttribute::SettingsBindableAttribute() {}
