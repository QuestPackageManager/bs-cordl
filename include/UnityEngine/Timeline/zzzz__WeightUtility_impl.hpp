#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/WeightUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__WeightUtility_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::WeightUtility.NormalizeMixer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::WeightUtility::NormalizeMixer)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x681941c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::WeightUtility*>::get(),
                        "NormalizeMixer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Timeline::WeightUtility::NormalizeMixer(::UnityEngine::Playables::Playable  mixer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::WeightUtility*>::get(),
                        "NormalizeMixer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, mixer);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::WeightUtility::WeightUtility()   {
}
