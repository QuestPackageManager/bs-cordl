#pragma once
// IWYU pragma private; include "UnityEngine\ScriptableObject.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::ScriptableObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ScriptableObject::*)()>(&::UnityEngine::ScriptableObject::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6ae5ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScriptableObject.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (*)(::System::Type*)>(&::UnityEngine::ScriptableObject::CreateInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae5d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScriptableObject.CreateScriptableObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::ScriptableObject::CreateScriptableObject)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae5d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(), { "CreateScriptableObject", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScriptableObject.CreateScriptableObjectInstanceFromType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (*)(::System::Type*, bool)>(
    &::UnityEngine::ScriptableObject::CreateScriptableObjectInstanceFromType)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6ae5d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(), { "CreateScriptableObjectInstanceFromType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScriptableObject.CreateScriptableObjectInstanceFromType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Type*, bool)>(&::UnityEngine::ScriptableObject::CreateScriptableObjectInstanceFromType_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae5eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(),
                                                             { "CreateScriptableObjectInstanceFromType_Injected", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ScriptableObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::ScriptableObject::CreateInstance(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(nullptr, ___internal_method, type);
}
template <typename T> inline T UnityEngine::ScriptableObject::CreateInstance() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(), { "CreateInstance", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
inline void UnityEngine::ScriptableObject::CreateScriptableObject(::UnityEngine::ScriptableObject* self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(), { "CreateScriptableObject", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::ScriptableObject::CreateScriptableObjectInstanceFromType(::System::Type* type, bool applyDefaultsAndReset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(), { "CreateScriptableObjectInstanceFromType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(nullptr, ___internal_method, type, applyDefaultsAndReset);
}
inline ::System::IntPtr UnityEngine::ScriptableObject::CreateScriptableObjectInstanceFromType_Injected(::System::Type* type, bool applyDefaultsAndReset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptableObject*>(),
                                                           { "CreateScriptableObjectInstanceFromType_Injected", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, type, applyDefaultsAndReset);
}
inline ::UnityEngine::ScriptableObject* UnityEngine::ScriptableObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ScriptableObject*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ScriptableObject::ScriptableObject() {}
