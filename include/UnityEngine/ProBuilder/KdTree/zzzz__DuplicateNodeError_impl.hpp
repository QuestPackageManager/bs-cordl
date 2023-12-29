#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__DuplicateNodeError_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::*)()>(
    &::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29ab6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError* UnityEngine::ProBuilder::KdTree::DuplicateNodeError::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*>());
}
inline void UnityEngine::ProBuilder::KdTree::DuplicateNodeError::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::DuplicateNodeError() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
