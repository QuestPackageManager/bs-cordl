#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionTestMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTestMethods_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionTestMethods.GetBatchLayerMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::Rendering::OcclusionTest)>(&::UnityEngine::Rendering::OcclusionTestMethods::GetBatchLayerMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x665fb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionTestMethods*>::get(),
                        "GetBatchLayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionTest>::get()}
                    )));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::OcclusionTestMethods::GetBatchLayerMask(::UnityEngine::Rendering::OcclusionTest  occlusionTest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionTestMethods*>::get(),
                        "GetBatchLayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionTest>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, occlusionTest);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionTestMethods::OcclusionTestMethods()   {
}
