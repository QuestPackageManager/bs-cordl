#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCacheProtocol_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCacheProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Cache::RequestCacheProtocol::*)(::System::Object*, ::System::Object*)>(
    &::System::Net::Cache::RequestCacheProtocol::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29f5fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Net::Cache::RequestCacheProtocol* System::Net::Cache::RequestCacheProtocol::New_ctor(::System::Object* arg1, ::System::Object* arg2) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Cache::RequestCacheProtocol*>(arg1, arg2));
}
inline void System::Net::Cache::RequestCacheProtocol::_ctor(::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg1, arg2);
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCacheProtocol::RequestCacheProtocol() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
