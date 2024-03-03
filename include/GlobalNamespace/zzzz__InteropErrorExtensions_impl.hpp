#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__InteropErrorExtensions_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InteropErrorExtensions.Info
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__Interop__ErrorInfo (*)(::GlobalNamespace::__Interop__Error)>(
    &::GlobalNamespace::InteropErrorExtensions::Info)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25028d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteropErrorExtensions*>::get(), "Info", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__Error>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__Interop__ErrorInfo GlobalNamespace::InteropErrorExtensions::Info(::GlobalNamespace::__Interop__Error error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteropErrorExtensions*>::get(), "Info", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__Error>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Interop__ErrorInfo, false>(nullptr, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InteropErrorExtensions::InteropErrorExtensions() {}
