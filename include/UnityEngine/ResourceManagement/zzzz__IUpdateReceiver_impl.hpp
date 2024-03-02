#pragma once
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::IUpdateReceiver.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::IUpdateReceiver::*)(float_t)>(
    &::UnityEngine::ResourceManagement::IUpdateReceiver::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::IUpdateReceiver::Update(float_t unscaledDeltaTime) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unscaledDeltaTime);
}
