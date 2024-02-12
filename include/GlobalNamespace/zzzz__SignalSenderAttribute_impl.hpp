#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__SignalSenderAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SignalSenderAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalSenderAttribute::*)()>(&::GlobalNamespace::SignalSenderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21894d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalSenderAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::SignalSenderAttribute* GlobalNamespace::SignalSenderAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SignalSenderAttribute*>());
}
inline void GlobalNamespace::SignalSenderAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalSenderAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SignalSenderAttribute::SignalSenderAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
