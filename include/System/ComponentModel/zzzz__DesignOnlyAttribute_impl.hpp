#pragma once
// IWYU pragma private; include "System\ComponentModel\DesignOnlyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DesignOnlyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DesignOnlyAttribute::*)(bool)>(&::System::ComponentModel::DesignOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b42e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute.get_IsDesignOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignOnlyAttribute::*)()>(&::System::ComponentModel::DesignOnlyAttribute::get_IsDesignOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b42f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), { "get_IsDesignOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignOnlyAttribute::*)(::System::Object*)>(&::System::ComponentModel::DesignOnlyAttribute::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x63b42f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DesignOnlyAttribute::*)()>(&::System::ComponentModel::DesignOnlyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63b43d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignOnlyAttribute::*)()>(&::System::ComponentModel::DesignOnlyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63b4404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::DesignOnlyAttribute::__cordl_internal_get__IsDesignOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDesignOnly_k__BackingField;
}
constexpr bool const& System::ComponentModel::DesignOnlyAttribute::__cordl_internal_get__IsDesignOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDesignOnly_k__BackingField;
}
constexpr void System::ComponentModel::DesignOnlyAttribute::__cordl_internal_set__IsDesignOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDesignOnly_k__BackingField = value;
}
inline void System::ComponentModel::DesignOnlyAttribute::setStaticF_Yes(::System::ComponentModel::DesignOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignOnlyAttribute*, "Yes", ::System::ComponentModel::DesignOnlyAttribute*>(
      std::forward<::System::ComponentModel::DesignOnlyAttribute*>(value));
}
inline ::System::ComponentModel::DesignOnlyAttribute* System::ComponentModel::DesignOnlyAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignOnlyAttribute*, "Yes", ::System::ComponentModel::DesignOnlyAttribute*>();
}
inline void System::ComponentModel::DesignOnlyAttribute::setStaticF_No(::System::ComponentModel::DesignOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignOnlyAttribute*, "No", ::System::ComponentModel::DesignOnlyAttribute*>(
      std::forward<::System::ComponentModel::DesignOnlyAttribute*>(value));
}
inline ::System::ComponentModel::DesignOnlyAttribute* System::ComponentModel::DesignOnlyAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignOnlyAttribute*, "No", ::System::ComponentModel::DesignOnlyAttribute*>();
}
inline void System::ComponentModel::DesignOnlyAttribute::setStaticF_Default(::System::ComponentModel::DesignOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignOnlyAttribute*, "Default", ::System::ComponentModel::DesignOnlyAttribute*>(
      std::forward<::System::ComponentModel::DesignOnlyAttribute*>(value));
}
inline ::System::ComponentModel::DesignOnlyAttribute* System::ComponentModel::DesignOnlyAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignOnlyAttribute*, "Default", ::System::ComponentModel::DesignOnlyAttribute*>();
}
inline void System::ComponentModel::DesignOnlyAttribute::_ctor(bool isDesignOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDesignOnly);
}
inline bool System::ComponentModel::DesignOnlyAttribute::get_IsDesignOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), { "get_IsDesignOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignOnlyAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DesignOnlyAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignOnlyAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignOnlyAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::DesignOnlyAttribute* System::ComponentModel::DesignOnlyAttribute::New_ctor(bool isDesignOnly) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DesignOnlyAttribute*>(isDesignOnly));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DesignOnlyAttribute::DesignOnlyAttribute() {}
