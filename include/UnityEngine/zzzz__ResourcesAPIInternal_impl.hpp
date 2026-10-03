#pragma once
// IWYU pragma private; include "UnityEngine/ResourcesAPIInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ResourcesAPIInternal_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.FindObjectsOfTypeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*)>(&::UnityEngine::ResourcesAPIInternal::FindObjectsOfTypeAll)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f32c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "FindObjectsOfTypeAll", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.FindShaderByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (*)(::StringW)>(&::UnityEngine::ResourcesAPIInternal::FindShaderByName)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6f32cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "FindShaderByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::StringW, ::System::Type*)>(&::UnityEngine::ResourcesAPIInternal::Load)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6f32f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "Load", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.LoadAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::StringW, ::System::Type*)>(&::UnityEngine::ResourcesAPIInternal::LoadAll)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6f33240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "LoadAll", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.UnloadAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::ResourcesAPIInternal::UnloadAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f3340c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "UnloadAsset", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.FindShaderByName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::ResourcesAPIInternal::FindShaderByName_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f32f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(),
                                                             { "FindShaderByName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.Load_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Type*)>(
    &::UnityEngine::ResourcesAPIInternal::Load_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f331fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(),
                                                             { "Load_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.LoadAll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Type*)>(
    &::UnityEngine::ResourcesAPIInternal::LoadAll_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f333c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(),
                                                { "LoadAll_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.UnloadAsset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ResourcesAPIInternal::UnloadAsset_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f3348c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "UnloadAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::ResourcesAPIInternal::FindObjectsOfTypeAll(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "FindObjectsOfTypeAll", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::ResourcesAPIInternal::FindShaderByName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "FindShaderByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::ResourcesAPIInternal::Load(::StringW path, /* [NotNull] */ ::System::Type* systemTypeInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "Load", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, path, systemTypeInstance);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::ResourcesAPIInternal::LoadAll(/* [NotNull] */ ::StringW path, /* [NotNull] */ ::System::Type* systemTypeInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "LoadAll", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, path, systemTypeInstance);
}
inline void UnityEngine::ResourcesAPIInternal::UnloadAsset(::UnityEngine::Object* assetToUnload) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "UnloadAsset", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assetToUnload);
}
inline ::System::IntPtr UnityEngine::ResourcesAPIInternal::FindShaderByName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "FindShaderByName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name);
}
inline ::System::IntPtr UnityEngine::ResourcesAPIInternal::Load_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, ::System::Type* systemTypeInstance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(),
                                                           { "Load_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, path, systemTypeInstance);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::ResourcesAPIInternal::LoadAll_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, ::System::Type* systemTypeInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(),
                                              { "LoadAll_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, path, systemTypeInstance);
}
inline void UnityEngine::ResourcesAPIInternal::UnloadAsset_Injected(::System::IntPtr assetToUnload) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourcesAPIInternal*>(), { "UnloadAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assetToUnload);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourcesAPIInternal::ResourcesAPIInternal() {}
