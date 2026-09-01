#pragma once
// IWYU pragma private; include "System\ComponentModel\ReadOnlyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ReadOnlyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReadOnlyAttribute::*)(bool)>(&::System::ComponentModel::ReadOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b4d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReadOnlyAttribute::*)()>(&::System::ComponentModel::ReadOnlyAttribute::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b4d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReadOnlyAttribute::*)(::System::Object*)>(&::System::ComponentModel::ReadOnlyAttribute::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x63b4d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), { ::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ReadOnlyAttribute::*)()>(&::System::ComponentModel::ReadOnlyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b4e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), { ::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReadOnlyAttribute::*)()>(&::System::ComponentModel::ReadOnlyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63b4e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), { ::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::ReadOnlyAttribute::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& System::ComponentModel::ReadOnlyAttribute::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void System::ComponentModel::ReadOnlyAttribute::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline void System::ComponentModel::ReadOnlyAttribute::setStaticF_Yes(::System::ComponentModel::ReadOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ReadOnlyAttribute*, "Yes", ::System::ComponentModel::ReadOnlyAttribute*>(
      std::forward<::System::ComponentModel::ReadOnlyAttribute*>(value));
}
inline ::System::ComponentModel::ReadOnlyAttribute* System::ComponentModel::ReadOnlyAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ReadOnlyAttribute*, "Yes", ::System::ComponentModel::ReadOnlyAttribute*>();
}
inline void System::ComponentModel::ReadOnlyAttribute::setStaticF_No(::System::ComponentModel::ReadOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ReadOnlyAttribute*, "No", ::System::ComponentModel::ReadOnlyAttribute*>(
      std::forward<::System::ComponentModel::ReadOnlyAttribute*>(value));
}
inline ::System::ComponentModel::ReadOnlyAttribute* System::ComponentModel::ReadOnlyAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ReadOnlyAttribute*, "No", ::System::ComponentModel::ReadOnlyAttribute*>();
}
inline void System::ComponentModel::ReadOnlyAttribute::setStaticF_Default(::System::ComponentModel::ReadOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ReadOnlyAttribute*, "Default", ::System::ComponentModel::ReadOnlyAttribute*>(
      std::forward<::System::ComponentModel::ReadOnlyAttribute*>(value));
}
inline ::System::ComponentModel::ReadOnlyAttribute* System::ComponentModel::ReadOnlyAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ReadOnlyAttribute*, "Default", ::System::ComponentModel::ReadOnlyAttribute*>();
}
inline void System::ComponentModel::ReadOnlyAttribute::_ctor(bool isReadOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isReadOnly);
}
inline bool System::ComponentModel::ReadOnlyAttribute::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::ReadOnlyAttribute::Equals(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::ComponentModel::ReadOnlyAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::ReadOnlyAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReadOnlyAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::ReadOnlyAttribute* System::ComponentModel::ReadOnlyAttribute::New_ctor(bool isReadOnly) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReadOnlyAttribute*>(isReadOnly));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReadOnlyAttribute::ReadOnlyAttribute() {}
