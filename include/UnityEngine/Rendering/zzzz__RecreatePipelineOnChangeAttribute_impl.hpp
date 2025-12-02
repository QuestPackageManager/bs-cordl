#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RecreatePipelineOnChangeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RecreatePipelineOnChangeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::*)()>(
    &::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d758c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute* UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RecreatePipelineOnChangeAttribute::RecreatePipelineOnChangeAttribute() {}
