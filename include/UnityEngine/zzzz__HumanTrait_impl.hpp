#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HumanTrait_def.hpp"
//  Writing Method size for method: ::UnityEngine::HumanTrait.GetBoneIndexFromMono
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::HumanTrait::GetBoneIndexFromMono)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x31bcb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HumanTrait*>::get(), "GetBoneIndexFromMono", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::HumanTrait::GetBoneIndexFromMono(int32_t humanId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HumanTrait*>::get(), "GetBoneIndexFromMono",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, humanId);
}
// Ctor Parameters []
constexpr ::UnityEngine::HumanTrait::HumanTrait() {}
