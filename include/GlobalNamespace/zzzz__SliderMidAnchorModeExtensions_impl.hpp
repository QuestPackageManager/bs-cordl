#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorModeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderMidAnchorModeExtensions.OppositeDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderMidAnchorMode (*)(::GlobalNamespace::SliderMidAnchorMode)>(
    &::GlobalNamespace::SliderMidAnchorModeExtensions::OppositeDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe01c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMidAnchorModeExtensions*>::get(), "OppositeDirection", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::SliderMidAnchorMode GlobalNamespace::SliderMidAnchorModeExtensions::OppositeDirection(::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMidAnchorModeExtensions*>::get(), "OppositeDirection", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMidAnchorMode, false>(nullptr, ___internal_method, sliderMidAnchorMode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderMidAnchorModeExtensions::SliderMidAnchorModeExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
