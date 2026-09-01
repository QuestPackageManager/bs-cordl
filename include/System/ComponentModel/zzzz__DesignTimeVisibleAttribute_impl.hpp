#pragma once
// IWYU pragma private; include "System\ComponentModel\DesignTimeVisibleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DesignTimeVisibleAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DesignTimeVisibleAttribute::*)(bool)>(&::System::ComponentModel::DesignTimeVisibleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c0238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.get_Visible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignTimeVisibleAttribute::*)()>(&::System::ComponentModel::DesignTimeVisibleAttribute::get_Visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c0240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), { "get_Visible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignTimeVisibleAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::DesignTimeVisibleAttribute::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63c0248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DesignTimeVisibleAttribute::*)()>(&::System::ComponentModel::DesignTimeVisibleAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63c02e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignTimeVisibleAttribute::*)()>(&::System::ComponentModel::DesignTimeVisibleAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63c0368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::DesignTimeVisibleAttribute::__cordl_internal_get__Visible_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Visible_k__BackingField;
}
constexpr bool const& System::ComponentModel::DesignTimeVisibleAttribute::__cordl_internal_get__Visible_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Visible_k__BackingField;
}
constexpr void System::ComponentModel::DesignTimeVisibleAttribute::__cordl_internal_set__Visible_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Visible_k__BackingField = value;
}
inline void System::ComponentModel::DesignTimeVisibleAttribute::setStaticF_Yes(::System::ComponentModel::DesignTimeVisibleAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "Yes", ::System::ComponentModel::DesignTimeVisibleAttribute*>(
      std::forward<::System::ComponentModel::DesignTimeVisibleAttribute*>(value));
}
inline ::System::ComponentModel::DesignTimeVisibleAttribute* System::ComponentModel::DesignTimeVisibleAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "Yes", ::System::ComponentModel::DesignTimeVisibleAttribute*>();
}
inline void System::ComponentModel::DesignTimeVisibleAttribute::setStaticF_No(::System::ComponentModel::DesignTimeVisibleAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "No", ::System::ComponentModel::DesignTimeVisibleAttribute*>(
      std::forward<::System::ComponentModel::DesignTimeVisibleAttribute*>(value));
}
inline ::System::ComponentModel::DesignTimeVisibleAttribute* System::ComponentModel::DesignTimeVisibleAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "No", ::System::ComponentModel::DesignTimeVisibleAttribute*>();
}
inline void System::ComponentModel::DesignTimeVisibleAttribute::setStaticF_Default(::System::ComponentModel::DesignTimeVisibleAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "Default", ::System::ComponentModel::DesignTimeVisibleAttribute*>(
      std::forward<::System::ComponentModel::DesignTimeVisibleAttribute*>(value));
}
inline ::System::ComponentModel::DesignTimeVisibleAttribute* System::ComponentModel::DesignTimeVisibleAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "Default", ::System::ComponentModel::DesignTimeVisibleAttribute*>();
}
inline void System::ComponentModel::DesignTimeVisibleAttribute::_ctor(bool visible) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline bool System::ComponentModel::DesignTimeVisibleAttribute::get_Visible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), { "get_Visible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignTimeVisibleAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DesignTimeVisibleAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignTimeVisibleAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignTimeVisibleAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::DesignTimeVisibleAttribute* System::ComponentModel::DesignTimeVisibleAttribute::New_ctor(bool visible) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DesignTimeVisibleAttribute*>(visible));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DesignTimeVisibleAttribute::DesignTimeVisibleAttribute() {}
