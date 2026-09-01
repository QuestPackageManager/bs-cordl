#pragma once
// IWYU pragma private; include "UnityEngine\LowLevel\PlayerLoopSystem.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b01454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::*)()>(&::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b014bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction::PlayerLoopSystem_UpdateFunction() {}
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoopSystem.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevel::PlayerLoopSystem::*)()>(&::UnityEngine::LowLevel::PlayerLoopSystem::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b01438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoopSystem>(), { ::i2c::class_of<::UnityEngine::LowLevel::PlayerLoopSystem>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::LowLevel::PlayerLoopSystem::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevel::PlayerLoopSystem>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "subSystemList", ty: "::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "updateDelegate", ty: "::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "updateFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "loopConditionFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem::PlayerLoopSystem(::System::Type* type, ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> subSystemList,
                                                                      ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate, ::System::IntPtr updateFunction,
                                                                      ::System::IntPtr loopConditionFunction) noexcept {
  this->type = type;
  this->subSystemList = subSystemList;
  this->updateDelegate = updateDelegate;
  this->updateFunction = updateFunction;
  this->loopConditionFunction = loopConditionFunction;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem::PlayerLoopSystem() {}
