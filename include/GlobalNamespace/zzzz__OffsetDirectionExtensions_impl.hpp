#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OffsetDirectionExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OffsetDirectionExtensions.OppositeDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OffsetDirection (*)(::GlobalNamespace::OffsetDirection)>(
    &::GlobalNamespace::OffsetDirectionExtensions::OppositeDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe01580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetDirectionExtensions*>::get(), "OppositeDirection", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirectionExtensions::OppositeDirection(::GlobalNamespace::OffsetDirection offsetDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetDirectionExtensions*>::get(), "OppositeDirection", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OffsetDirection, false>(nullptr, ___internal_method, offsetDirection);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OffsetDirectionExtensions::OffsetDirectionExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
