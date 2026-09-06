#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LookDev/IDataProvider.hpp"
#include "UnityEngine/Rendering/LookDev/zzzz__IDataProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Rendering/LookDev/zzzz__Sky_def.hpp"
#include "UnityEngine/Rendering/LookDev/zzzz__StageRuntimeInterface_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::IDataProvider.FirstInitScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LookDev::IDataProvider::*)(::UnityEngine::Rendering::LookDev::StageRuntimeInterface*)>(
    &::UnityEngine::Rendering::LookDev::IDataProvider::FirstInitScene)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::IDataProvider.UpdateSky
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LookDev::IDataProvider::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::LookDev::Sky, ::UnityEngine::Rendering::LookDev::StageRuntimeInterface*)>(&::UnityEngine::Rendering::LookDev::IDataProvider::UpdateSky)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::IDataProvider.get_supportedDebugModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::Rendering::LookDev::IDataProvider::*)()>(
    &::UnityEngine::Rendering::LookDev::IDataProvider::get_supportedDebugModes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::IDataProvider.UpdateDebugMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LookDev::IDataProvider::*)(int32_t)>(&::UnityEngine::Rendering::LookDev::IDataProvider::UpdateDebugMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::IDataProvider.GetShadowMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LookDev::IDataProvider::*)(
    ::by_ref<::UnityEngine::RenderTexture*>, ::UnityEngine::Rendering::LookDev::StageRuntimeInterface*)>(&::UnityEngine::Rendering::LookDev::IDataProvider::GetShadowMask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::IDataProvider.OnBeginRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LookDev::IDataProvider::*)(::UnityEngine::Rendering::LookDev::StageRuntimeInterface*)>(
    &::UnityEngine::Rendering::LookDev::IDataProvider::OnBeginRendering)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::IDataProvider.OnEndRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LookDev::IDataProvider::*)(::UnityEngine::Rendering::LookDev::StageRuntimeInterface*)>(
    &::UnityEngine::Rendering::LookDev::IDataProvider::OnEndRendering)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::IDataProvider.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LookDev::IDataProvider::*)(::UnityEngine::Rendering::LookDev::StageRuntimeInterface*)>(
    &::UnityEngine::Rendering::LookDev::IDataProvider::Cleanup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 7 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::LookDev::IDataProvider::FirstInitScene(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage);
}
inline void UnityEngine::Rendering::LookDev::IDataProvider::UpdateSky(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::LookDev::Sky sky,
                                                                      ::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, sky, stage);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::Rendering::LookDev::IDataProvider::get_supportedDebugModes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LookDev::IDataProvider::UpdateDebugMode(int32_t debugIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugIndex);
}
inline void UnityEngine::Rendering::LookDev::IDataProvider::GetShadowMask(::by_ref<::UnityEngine::RenderTexture*> output, ::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, stage);
}
inline void UnityEngine::Rendering::LookDev::IDataProvider::OnBeginRendering(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage);
}
inline void UnityEngine::Rendering::LookDev::IDataProvider::OnEndRendering(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage);
}
inline void UnityEngine::Rendering::LookDev::IDataProvider::Cleanup(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* SRI) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LookDev::IDataProvider*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, SRI);
}
