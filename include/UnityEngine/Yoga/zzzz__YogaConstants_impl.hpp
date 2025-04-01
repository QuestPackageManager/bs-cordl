#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Yoga/zzzz__YogaConstants_def.hpp"
//  Writing Method size for method: ::UnityEngine::Yoga::YogaConstants.IsUndefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&::UnityEngine::Yoga::YogaConstants::IsUndefined)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4966828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::YogaConstants*>::get(), "IsUndefined", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Yoga::YogaConstants::IsUndefined(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::YogaConstants*>::get(), "IsUndefined",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaConstants::YogaConstants() {}
