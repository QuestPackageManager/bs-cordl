#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HaltonSequence.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HaltonSequence_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::HaltonSequence.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::HaltonSequence::Get)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x660e208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HaltonSequence*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Rendering::HaltonSequence::Get(int32_t index, int32_t radix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HaltonSequence*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, index, radix);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HaltonSequence::HaltonSequence() {}
