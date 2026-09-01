#pragma once
// IWYU pragma private; include "UnityEngine\Internal\DefaultValueAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Internal/zzzz__DefaultValueAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Internal::DefaultValueAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Internal::DefaultValueAttribute::*)(::StringW)>(&::UnityEngine::Internal::DefaultValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b039c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::DefaultValueAttribute.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Internal::DefaultValueAttribute::*)()>(&::UnityEngine::Internal::DefaultValueAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b039cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::DefaultValueAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Internal::DefaultValueAttribute::*)(::System::Object*)>(&::UnityEngine::Internal::DefaultValueAttribute::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b039d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), { ::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::DefaultValueAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Internal::DefaultValueAttribute::*)()>(&::UnityEngine::Internal::DefaultValueAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b03a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), { ::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& UnityEngine::Internal::DefaultValueAttribute::__cordl_internal_get_DefaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultValue;
}
constexpr ::System::Object* const& UnityEngine::Internal::DefaultValueAttribute::__cordl_internal_get_DefaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultValue;
}
constexpr void UnityEngine::Internal::DefaultValueAttribute::__cordl_internal_set_DefaultValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DefaultValue = value;
}
inline void UnityEngine::Internal::DefaultValueAttribute::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::Internal::DefaultValueAttribute::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool UnityEngine::Internal::DefaultValueAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Internal::DefaultValueAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Internal::DefaultValueAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Internal::DefaultValueAttribute* UnityEngine::Internal::DefaultValueAttribute::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Internal::DefaultValueAttribute*>(value));
}
// Ctor Parameters []
constexpr ::UnityEngine::Internal::DefaultValueAttribute::DefaultValueAttribute() {}
