#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputProcessor_CachingPolicy::InputProcessor_CachingPolicy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputProcessor_CachingPolicy::InputProcessor_CachingPolicy() {}
constexpr ::UnityEngine::InputSystem::InputProcessor_CachingPolicy UnityEngine::InputSystem::InputProcessor_CachingPolicy::CacheResult{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::InputProcessor_CachingPolicy UnityEngine::InputSystem::InputProcessor_CachingPolicy::EvaluateOnEveryRead{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.ProcessAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputProcessor::*)(::System::Object*, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputProcessor::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputProcessor::*)(void*, int32_t, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputProcessor::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.GetValueTypeFromType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::UnityEngine::InputSystem::InputProcessor::GetValueTypeFromType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x651973c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), { "GetValueTypeFromType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.get_cachingPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputProcessor_CachingPolicy (::UnityEngine::InputSystem::InputProcessor::*)()>(
    &::UnityEngine::InputSystem::InputProcessor::get_cachingPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6519810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputProcessor::*)()>(&::UnityEngine::InputSystem::InputProcessor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6519818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputProcessor::setStaticF_s_Processors(::UnityEngine::InputSystem::Utilities::TypeTable value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Processors", ::UnityEngine::InputSystem::InputProcessor*>(
      std::forward<::UnityEngine::InputSystem::Utilities::TypeTable>(value));
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputProcessor::getStaticF_s_Processors() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Processors", ::UnityEngine::InputSystem::InputProcessor*>();
}
inline ::System::Object* UnityEngine::InputSystem::InputProcessor::ProcessAsObject(::System::Object* value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, control);
}
inline void UnityEngine::InputSystem::InputProcessor::Process(void* buffer, int32_t bufferSize, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferSize, control);
}
inline ::System::Type* UnityEngine::InputSystem::InputProcessor::GetValueTypeFromType(::System::Type* processorType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), { "GetValueTypeFromType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, processorType);
}
inline ::UnityEngine::InputSystem::InputProcessor_CachingPolicy UnityEngine::InputSystem::InputProcessor::get_cachingPolicy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputProcessor_CachingPolicy>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputProcessor* UnityEngine::InputSystem::InputProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputProcessor::InputProcessor() {}
