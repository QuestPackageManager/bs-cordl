#pragma once
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::BGNet::Core::ITimeProvider.GetTimeMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::BGNet::Core::ITimeProvider::*)()>(&::BGNet::Core::ITimeProvider::GetTimeMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::ITimeProvider.GetTicks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::BGNet::Core::ITimeProvider::*)()>(&::BGNet::Core::ITimeProvider::GetTicks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider*>::get(), 1));
    return ___internal_method;
  }
};
inline int64_t BGNet::Core::ITimeProvider::GetTimeMs() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t BGNet::Core::ITimeProvider::GetTicks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
