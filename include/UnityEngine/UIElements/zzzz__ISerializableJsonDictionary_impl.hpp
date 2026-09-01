#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ISerializableJsonDictionary.hpp"
#include "UnityEngine/UIElements/zzzz__ISerializableJsonDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ISerializableJsonDictionary.Overwrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ISerializableJsonDictionary::*)(::System::Object*, ::StringW)>(
    &::UnityEngine::UIElements::ISerializableJsonDictionary::Overwrite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ISerializableJsonDictionary*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ISerializableJsonDictionary*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ISerializableJsonDictionary.ContainsKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ISerializableJsonDictionary::*)(::StringW)>(
    &::UnityEngine::UIElements::ISerializableJsonDictionary::ContainsKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ISerializableJsonDictionary*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ISerializableJsonDictionary*>(), 3 }));
    return ___internal_method;
  }
};
template <typename T> inline void UnityEngine::UIElements::ISerializableJsonDictionary::Set(::StringW key, T value) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ISerializableJsonDictionary*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename T> inline T UnityEngine::UIElements::ISerializableJsonDictionary::Get(::StringW key) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ISerializableJsonDictionary*>(), 1 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, key);
}
inline void UnityEngine::UIElements::ISerializableJsonDictionary::Overwrite(::System::Object* obj, ::StringW key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ISerializableJsonDictionary*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, key);
}
inline bool UnityEngine::UIElements::ISerializableJsonDictionary::ContainsKey(::StringW key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ISerializableJsonDictionary*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
