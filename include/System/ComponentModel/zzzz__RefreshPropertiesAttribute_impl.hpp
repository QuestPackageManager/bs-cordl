#pragma once
// IWYU pragma private; include "System/ComponentModel/RefreshPropertiesAttribute.hpp"
#include "System/ComponentModel/zzzz__RefreshProperties_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__RefreshPropertiesAttribute_def.hpp"
#include "System/ComponentModel/zzzz__RefreshProperties_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::RefreshPropertiesAttribute::*)(::System::ComponentModel::RefreshProperties)>(
    &::System::ComponentModel::RefreshPropertiesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e5610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::RefreshProperties>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute.get_RefreshProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::RefreshProperties (::System::ComponentModel::RefreshPropertiesAttribute::*)()>(
    &::System::ComponentModel::RefreshPropertiesAttribute::get_RefreshProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e5618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(), { "get_RefreshProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::RefreshPropertiesAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::RefreshPropertiesAttribute::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x63e5620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::RefreshPropertiesAttribute::*)()>(&::System::ComponentModel::RefreshPropertiesAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e569c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::RefreshPropertiesAttribute::*)()>(&::System::ComponentModel::RefreshPropertiesAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63e56a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::RefreshProperties& System::ComponentModel::RefreshPropertiesAttribute::__cordl_internal_get_refresh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refresh;
}
constexpr ::System::ComponentModel::RefreshProperties const& System::ComponentModel::RefreshPropertiesAttribute::__cordl_internal_get_refresh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refresh;
}
constexpr void System::ComponentModel::RefreshPropertiesAttribute::__cordl_internal_set_refresh(::System::ComponentModel::RefreshProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refresh = value;
}
inline void System::ComponentModel::RefreshPropertiesAttribute::setStaticF_All(::System::ComponentModel::RefreshPropertiesAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "All", ::System::ComponentModel::RefreshPropertiesAttribute*>(
      std::forward<::System::ComponentModel::RefreshPropertiesAttribute*>(value));
}
inline ::System::ComponentModel::RefreshPropertiesAttribute* System::ComponentModel::RefreshPropertiesAttribute::getStaticF_All() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "All", ::System::ComponentModel::RefreshPropertiesAttribute*>();
}
inline void System::ComponentModel::RefreshPropertiesAttribute::setStaticF_Repaint(::System::ComponentModel::RefreshPropertiesAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "Repaint", ::System::ComponentModel::RefreshPropertiesAttribute*>(
      std::forward<::System::ComponentModel::RefreshPropertiesAttribute*>(value));
}
inline ::System::ComponentModel::RefreshPropertiesAttribute* System::ComponentModel::RefreshPropertiesAttribute::getStaticF_Repaint() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "Repaint", ::System::ComponentModel::RefreshPropertiesAttribute*>();
}
inline void System::ComponentModel::RefreshPropertiesAttribute::setStaticF_Default(::System::ComponentModel::RefreshPropertiesAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "Default", ::System::ComponentModel::RefreshPropertiesAttribute*>(
      std::forward<::System::ComponentModel::RefreshPropertiesAttribute*>(value));
}
inline ::System::ComponentModel::RefreshPropertiesAttribute* System::ComponentModel::RefreshPropertiesAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "Default", ::System::ComponentModel::RefreshPropertiesAttribute*>();
}
inline void System::ComponentModel::RefreshPropertiesAttribute::_ctor(::System::ComponentModel::RefreshProperties refresh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::RefreshProperties>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refresh);
}
inline ::System::ComponentModel::RefreshProperties System::ComponentModel::RefreshPropertiesAttribute::get_RefreshProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(), { "get_RefreshProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::RefreshProperties>(this, ___internal_method);
}
inline bool System::ComponentModel::RefreshPropertiesAttribute::Equals(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::ComponentModel::RefreshPropertiesAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::RefreshPropertiesAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::RefreshPropertiesAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::RefreshPropertiesAttribute* System::ComponentModel::RefreshPropertiesAttribute::New_ctor(::System::ComponentModel::RefreshProperties refresh) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::RefreshPropertiesAttribute*>(refresh));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::RefreshPropertiesAttribute::RefreshPropertiesAttribute() {}
