#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\GlobalIllumination\Lightmapping.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__Lightmapping_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightDataGI_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__Lightmapping_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b303b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate::*)(
    ::ArrayW<::UnityEngine::Light*>, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>)>(
    &::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b30430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate::Invoke(
    ::ArrayW<::UnityEngine::Light*> requests, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requests, lightsOutput);
}
inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*
UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate::Lightmapping_RequestLightsDelegate() {}
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::*)()>(
    &::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b30498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c.__cctor_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::*)(
    ::ArrayW<::UnityEngine::Light*>, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>)>(
    &::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::__cctor_b__7_0)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x6b3049c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*>(),
                                                             { "<.cctor>b__7_0",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Light*>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::setStaticF___9(::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*, "<>9", ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*>(
      std::forward<::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*>(value));
}
inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c* UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*, "<>9", ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*>();
}
inline void UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::__cctor_b__7_0(::ArrayW<::UnityEngine::Light*> requests,
                                                                                ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*>(),
                                                           { "<.cctor>b__7_0",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Light*>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requests, lightsOutput);
}
inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c* UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::Lightmapping___c() {}
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping.SetDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*)>(
    &::UnityEngine::Experimental::GlobalIllumination::Lightmapping::SetDelegate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b300f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(),
                                                             { "SetDelegate", {}, { ::i2c::type_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping.GetDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* (*)()>(
    &::UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetDelegate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b30174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(), { "GetDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping.ResetDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Experimental::GlobalIllumination::Lightmapping::ResetDelegate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b301d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(), { "ResetDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping.RequestLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Light*>, ::System::IntPtr, int32_t)>(
    &::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLights)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b30230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(),
                                                { "RequestLights", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Light*>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::GlobalIllumination::Lightmapping::setStaticF_s_DefaultDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*, "s_DefaultDelegate",
                                    ::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(
      std::forward<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(value));
}
inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* UnityEngine::Experimental::GlobalIllumination::Lightmapping::getStaticF_s_DefaultDelegate() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*, "s_DefaultDelegate",
                                           ::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>();
}
inline void
UnityEngine::Experimental::GlobalIllumination::Lightmapping::setStaticF_s_RequestLightsDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*, "s_RequestLightsDelegate",
                                    ::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(
      std::forward<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(value));
}
inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* UnityEngine::Experimental::GlobalIllumination::Lightmapping::getStaticF_s_RequestLightsDelegate() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*, "s_RequestLightsDelegate",
                                           ::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>();
}
inline void UnityEngine::Experimental::GlobalIllumination::Lightmapping::SetDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* del) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(),
                                                           { "SetDelegate", {}, { ::i2c::type_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, del);
}
inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(), { "GetDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::GlobalIllumination::Lightmapping::ResetDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(), { "ResetDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLights(::ArrayW<::UnityEngine::Light*> lights, ::System::IntPtr outLightsPtr, int32_t outLightsCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Lightmapping*>(),
                                              { "RequestLights", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Light*>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lights, outLightsPtr, outLightsCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::Lightmapping() {}
