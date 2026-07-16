#pragma once
// IWYU pragma private; include "System/ComponentModel/BrowsableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__BrowsableAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BrowsableAttribute::*)(bool)>(&::System::ComponentModel::BrowsableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ae174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute.get_Browsable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BrowsableAttribute::*)()>(&::System::ComponentModel::BrowsableAttribute::get_Browsable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ae17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), { "get_Browsable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BrowsableAttribute::*)(::System::Object*)>(&::System::ComponentModel::BrowsableAttribute::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x63ae184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), { ::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::BrowsableAttribute::*)()>(&::System::ComponentModel::BrowsableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63ae264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), { ::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BrowsableAttribute::*)()>(&::System::ComponentModel::BrowsableAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63ae290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), { ::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::BrowsableAttribute::__cordl_internal_get__Browsable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Browsable_k__BackingField;
}
constexpr bool const& System::ComponentModel::BrowsableAttribute::__cordl_internal_get__Browsable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Browsable_k__BackingField;
}
constexpr void System::ComponentModel::BrowsableAttribute::__cordl_internal_set__Browsable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Browsable_k__BackingField = value;
}
inline void System::ComponentModel::BrowsableAttribute::setStaticF_Yes(::System::ComponentModel::BrowsableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::BrowsableAttribute*, "Yes", ::System::ComponentModel::BrowsableAttribute*>(
      std::forward<::System::ComponentModel::BrowsableAttribute*>(value));
}
inline ::System::ComponentModel::BrowsableAttribute* System::ComponentModel::BrowsableAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::BrowsableAttribute*, "Yes", ::System::ComponentModel::BrowsableAttribute*>();
}
inline void System::ComponentModel::BrowsableAttribute::setStaticF_No(::System::ComponentModel::BrowsableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::BrowsableAttribute*, "No", ::System::ComponentModel::BrowsableAttribute*>(
      std::forward<::System::ComponentModel::BrowsableAttribute*>(value));
}
inline ::System::ComponentModel::BrowsableAttribute* System::ComponentModel::BrowsableAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::BrowsableAttribute*, "No", ::System::ComponentModel::BrowsableAttribute*>();
}
inline void System::ComponentModel::BrowsableAttribute::setStaticF_Default(::System::ComponentModel::BrowsableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::BrowsableAttribute*, "Default", ::System::ComponentModel::BrowsableAttribute*>(
      std::forward<::System::ComponentModel::BrowsableAttribute*>(value));
}
inline ::System::ComponentModel::BrowsableAttribute* System::ComponentModel::BrowsableAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::BrowsableAttribute*, "Default", ::System::ComponentModel::BrowsableAttribute*>();
}
inline void System::ComponentModel::BrowsableAttribute::_ctor(bool browsable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, browsable);
}
inline bool System::ComponentModel::BrowsableAttribute::get_Browsable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), { "get_Browsable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::BrowsableAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::BrowsableAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::BrowsableAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::BrowsableAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::BrowsableAttribute* System::ComponentModel::BrowsableAttribute::New_ctor(bool browsable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::BrowsableAttribute*>(browsable));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::BrowsableAttribute::BrowsableAttribute() {}
