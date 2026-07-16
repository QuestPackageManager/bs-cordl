#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerationCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6cdb0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationCallback::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cdb1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::MeshGenerationCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationCallback::Invoke(Il2CppObject* meshGenerationContext, ::System::Object* userData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshGenerationContext, userData);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerationCallback* UnityEngine::UIElements::UIR::MeshGenerationCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback::MeshGenerationCallback() {}
