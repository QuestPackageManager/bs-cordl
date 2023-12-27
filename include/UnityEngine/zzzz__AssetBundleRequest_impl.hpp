#pragma once
#include "UnityEngine/zzzz__ResourceRequest_impl.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::AssetBundleRequest::*)()>(&::UnityEngine::AssetBundleRequest::GetResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c99e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleRequest*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.get_asset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::AssetBundleRequest::*)()>(&::UnityEngine::AssetBundleRequest::get_asset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c99ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleRequest*>::get(), "get_asset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.get_allAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> (::UnityEngine::AssetBundleRequest::*)()>(
    &::UnityEngine::AssetBundleRequest::get_allAssets)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c99edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleRequest*>::get(), "get_allAssets",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AssetBundleRequest::*)()>(&::UnityEngine::AssetBundleRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c99f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleRequest*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Object* UnityEngine::AssetBundleRequest::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleRequest*>::get(), "GetResult",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(this, ___internal_method);
}
inline ::UnityEngine::Object* UnityEngine::AssetBundleRequest::get_asset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleRequest*>::get(), "get_asset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> UnityEngine::AssetBundleRequest::get_allAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleRequest*>::get(), "get_allAssets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundleRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AssetBundleRequest*>());
}
inline void UnityEngine::AssetBundleRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleRequest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleRequest::AssetBundleRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
