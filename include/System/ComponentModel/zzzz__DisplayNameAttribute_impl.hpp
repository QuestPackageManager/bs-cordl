#pragma once
// IWYU pragma private; include "System\ComponentModel\DisplayNameAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DisplayNameAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DisplayNameAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DisplayNameAttribute::*)()>(&::System::ComponentModel::DisplayNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63b4984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DisplayNameAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DisplayNameAttribute::*)(::StringW)>(&::System::ComponentModel::DisplayNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b499c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DisplayNameAttribute.get_DisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DisplayNameAttribute::*)()>(&::System::ComponentModel::DisplayNameAttribute::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b49a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DisplayNameAttribute.get_DisplayNameValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DisplayNameAttribute::*)()>(&::System::ComponentModel::DisplayNameAttribute::get_DisplayNameValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b49ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { "get_DisplayNameValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DisplayNameAttribute.set_DisplayNameValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DisplayNameAttribute::*)(::StringW)>(&::System::ComponentModel::DisplayNameAttribute::set_DisplayNameValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b49b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { "set_DisplayNameValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DisplayNameAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DisplayNameAttribute::*)(::System::Object*)>(&::System::ComponentModel::DisplayNameAttribute::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63b49bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DisplayNameAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DisplayNameAttribute::*)()>(&::System::ComponentModel::DisplayNameAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x63b4a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DisplayNameAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DisplayNameAttribute::*)()>(&::System::ComponentModel::DisplayNameAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63b4ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::DisplayNameAttribute::__cordl_internal_get__DisplayNameValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisplayNameValue_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::DisplayNameAttribute::__cordl_internal_get__DisplayNameValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisplayNameValue_k__BackingField;
}
constexpr void System::ComponentModel::DisplayNameAttribute::__cordl_internal_set__DisplayNameValue_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DisplayNameValue_k__BackingField = value;
}
inline void System::ComponentModel::DisplayNameAttribute::setStaticF_Default(::System::ComponentModel::DisplayNameAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DisplayNameAttribute*, "Default", ::System::ComponentModel::DisplayNameAttribute*>(
      std::forward<::System::ComponentModel::DisplayNameAttribute*>(value));
}
inline ::System::ComponentModel::DisplayNameAttribute* System::ComponentModel::DisplayNameAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DisplayNameAttribute*, "Default", ::System::ComponentModel::DisplayNameAttribute*>();
}
inline void System::ComponentModel::DisplayNameAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::DisplayNameAttribute::_ctor(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName);
}
inline ::StringW System::ComponentModel::DisplayNameAttribute::get_DisplayName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::DisplayNameAttribute::get_DisplayNameValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { "get_DisplayNameValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::ComponentModel::DisplayNameAttribute::set_DisplayNameValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), { "set_DisplayNameValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::ComponentModel::DisplayNameAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DisplayNameAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::DisplayNameAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DisplayNameAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::DisplayNameAttribute* System::ComponentModel::DisplayNameAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DisplayNameAttribute*>());
}
inline ::System::ComponentModel::DisplayNameAttribute* System::ComponentModel::DisplayNameAttribute::New_ctor(::StringW displayName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DisplayNameAttribute*>(displayName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DisplayNameAttribute::DisplayNameAttribute() {}
