#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__AutoWebProxyScriptEngine_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.GetProxies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Net::AutoWebProxyScriptEngine::*)(::System::Uri*, ByRef<::System::Collections::Generic::IList_1<::StringW>*>)>(&::System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29bcd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AutoWebProxyScriptEngine*>::get(), "GetProxies", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::IList_1<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.GetProxies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::AutoWebProxyScriptEngine::*)(
    ::System::Uri*, ByRef<::System::Collections::Generic::IList_1<::StringW>*>, ByRef<int32_t>)>(&::System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29bcd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AutoWebProxyScriptEngine*>::get(), "GetProxies", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::IList_1<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline bool System::Net::AutoWebProxyScriptEngine::GetProxies(::System::Uri* destination, ByRef<::System::Collections::Generic::IList_1<::StringW>*> proxyList) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AutoWebProxyScriptEngine*>::get(), "GetProxies", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::IList_1<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destination, proxyList);
}
inline bool System::Net::AutoWebProxyScriptEngine::GetProxies(::System::Uri* destination, ByRef<::System::Collections::Generic::IList_1<::StringW>*> proxyList, ByRef<int32_t> syncStatus) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AutoWebProxyScriptEngine*>::get(), "GetProxies", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::IList_1<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destination, proxyList, syncStatus);
}
// Ctor Parameters []
constexpr ::System::Net::AutoWebProxyScriptEngine::AutoWebProxyScriptEngine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
