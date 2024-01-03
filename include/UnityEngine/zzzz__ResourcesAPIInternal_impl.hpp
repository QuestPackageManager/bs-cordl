#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ResourcesAPIInternal_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.FindObjectsOfTypeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> (*)(::System::Type*)>(
    &::UnityEngine::ResourcesAPIInternal::FindObjectsOfTypeAll)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cde084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "FindObjectsOfTypeAll",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.FindShaderByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader* (*)(::StringW)>(&::UnityEngine::ResourcesAPIInternal::FindShaderByName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cde0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "FindShaderByName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::StringW, ::System::Type*)>(&::UnityEngine::ResourcesAPIInternal::Load)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cde0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "Load", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.LoadAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> (*)(::StringW, ::System::Type*)>(
    &::UnityEngine::ResourcesAPIInternal::LoadAll)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cde140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "LoadAll", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.LoadAsyncInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceRequest* (*)(::StringW, ::System::Type*)>(
    &::UnityEngine::ResourcesAPIInternal::LoadAsyncInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cde184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "LoadAsyncInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.UnloadAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::ResourcesAPIInternal::UnloadAsset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cde1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "UnloadAsset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> UnityEngine::ResourcesAPIInternal::FindObjectsOfTypeAll(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "FindObjectsOfTypeAll", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>, false>(nullptr, ___internal_method, type);
}
inline ::UnityEngine::Shader* UnityEngine::ResourcesAPIInternal::FindShaderByName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "FindShaderByName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Shader*, false>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Object* UnityEngine::ResourcesAPIInternal::Load(::StringW path, ::System::Type* systemTypeInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "Load", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(nullptr, ___internal_method, path, systemTypeInstance);
}
inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> UnityEngine::ResourcesAPIInternal::LoadAll(::StringW path, ::System::Type* systemTypeInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "LoadAll", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>, false>(nullptr, ___internal_method, path, systemTypeInstance);
}
inline ::UnityEngine::ResourceRequest* UnityEngine::ResourcesAPIInternal::LoadAsyncInternal(::StringW path, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "LoadAsyncInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceRequest*, false>(nullptr, ___internal_method, path, type);
}
inline void UnityEngine::ResourcesAPIInternal::UnloadAsset(::UnityEngine::Object* assetToUnload) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(), "UnloadAsset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, assetToUnload);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourcesAPIInternal::ResourcesAPIInternal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
