#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Yoga/zzzz__MeasureOutput_def.hpp"
#include "UnityEngine/Yoga/zzzz__YogaSize_def.hpp"
//  Writing Method size for method: ::UnityEngine::Yoga::MeasureOutput.Make
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Yoga::YogaSize (*)(float_t, float_t)>(&::UnityEngine::Yoga::MeasureOutput::Make)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35f8cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::MeasureOutput*>::get(), "Make", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Yoga::YogaSize UnityEngine::Yoga::MeasureOutput::Make(float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::MeasureOutput*>::get(), "Make", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Yoga::YogaSize, false>(nullptr, ___internal_method, width, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::MeasureOutput::MeasureOutput() {}
