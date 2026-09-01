#pragma once
// IWYU pragma private; include "System\ComponentModel\DesignerSerializationVisibilityAttribute.hpp"
#include "System/ComponentModel/zzzz__DesignerSerializationVisibility_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DesignerSerializationVisibilityAttribute_def.hpp"
#include "System/ComponentModel/zzzz__DesignerSerializationVisibility_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DesignerSerializationVisibilityAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DesignerSerializationVisibilityAttribute::*)(::System::ComponentModel::DesignerSerializationVisibility)>(
    &::System::ComponentModel::DesignerSerializationVisibilityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b4794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::DesignerSerializationVisibility>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerSerializationVisibilityAttribute.get_Visibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::DesignerSerializationVisibility (::System::ComponentModel::DesignerSerializationVisibilityAttribute::*)()>(
    &::System::ComponentModel::DesignerSerializationVisibilityAttribute::get_Visibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b479c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(), { "get_Visibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerSerializationVisibilityAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignerSerializationVisibilityAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::DesignerSerializationVisibilityAttribute::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x63b47a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerSerializationVisibilityAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DesignerSerializationVisibilityAttribute::*)()>(
    &::System::ComponentModel::DesignerSerializationVisibilityAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b487c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerSerializationVisibilityAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignerSerializationVisibilityAttribute::*)()>(
    &::System::ComponentModel::DesignerSerializationVisibilityAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63b4884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::DesignerSerializationVisibility& System::ComponentModel::DesignerSerializationVisibilityAttribute::__cordl_internal_get__Visibility_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Visibility_k__BackingField;
}
constexpr ::System::ComponentModel::DesignerSerializationVisibility const& System::ComponentModel::DesignerSerializationVisibilityAttribute::__cordl_internal_get__Visibility_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Visibility_k__BackingField;
}
constexpr void System::ComponentModel::DesignerSerializationVisibilityAttribute::__cordl_internal_set__Visibility_k__BackingField(::System::ComponentModel::DesignerSerializationVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Visibility_k__BackingField = value;
}
inline void System::ComponentModel::DesignerSerializationVisibilityAttribute::setStaticF_Content(::System::ComponentModel::DesignerSerializationVisibilityAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "Content", ::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(
      std::forward<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(value));
}
inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* System::ComponentModel::DesignerSerializationVisibilityAttribute::getStaticF_Content() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "Content", ::System::ComponentModel::DesignerSerializationVisibilityAttribute*>();
}
inline void System::ComponentModel::DesignerSerializationVisibilityAttribute::setStaticF_Hidden(::System::ComponentModel::DesignerSerializationVisibilityAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "Hidden", ::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(
      std::forward<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(value));
}
inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* System::ComponentModel::DesignerSerializationVisibilityAttribute::getStaticF_Hidden() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "Hidden", ::System::ComponentModel::DesignerSerializationVisibilityAttribute*>();
}
inline void System::ComponentModel::DesignerSerializationVisibilityAttribute::setStaticF_Visible(::System::ComponentModel::DesignerSerializationVisibilityAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "Visible", ::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(
      std::forward<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(value));
}
inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* System::ComponentModel::DesignerSerializationVisibilityAttribute::getStaticF_Visible() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "Visible", ::System::ComponentModel::DesignerSerializationVisibilityAttribute*>();
}
inline void System::ComponentModel::DesignerSerializationVisibilityAttribute::setStaticF_Default(::System::ComponentModel::DesignerSerializationVisibilityAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "Default", ::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(
      std::forward<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(value));
}
inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* System::ComponentModel::DesignerSerializationVisibilityAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "Default", ::System::ComponentModel::DesignerSerializationVisibilityAttribute*>();
}
inline void System::ComponentModel::DesignerSerializationVisibilityAttribute::_ctor(::System::ComponentModel::DesignerSerializationVisibility visibility) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::DesignerSerializationVisibility>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visibility);
}
inline ::System::ComponentModel::DesignerSerializationVisibility System::ComponentModel::DesignerSerializationVisibilityAttribute::get_Visibility() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(), { "get_Visibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::DesignerSerializationVisibility>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignerSerializationVisibilityAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DesignerSerializationVisibilityAttribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignerSerializationVisibilityAttribute::IsDefaultAttribute() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute*
System::ComponentModel::DesignerSerializationVisibilityAttribute::New_ctor(::System::ComponentModel::DesignerSerializationVisibility visibility) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DesignerSerializationVisibilityAttribute*>(visibility));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DesignerSerializationVisibilityAttribute::DesignerSerializationVisibilityAttribute() {}
