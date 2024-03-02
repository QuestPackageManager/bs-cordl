#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDraggerExtension_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDraggerExtension.GetRecycledItemFromIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::ReusableCollectionItem* (*)(::UnityEngine::UIElements::BaseVerticalCollectionView*, int32_t)>(
        &::UnityEngine::UIElements::ListViewDraggerExtension::GetRecycledItemFromIndex)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2f18094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDraggerExtension*>::get(), "GetRecycledItemFromIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::ReusableCollectionItem* UnityEngine::UIElements::ListViewDraggerExtension::GetRecycledItemFromIndex(::UnityEngine::UIElements::BaseVerticalCollectionView* listView,
                                                                                                                                      int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDraggerExtension*>::get(), "GetRecycledItemFromIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ReusableCollectionItem*, false>(nullptr, ___internal_method, listView, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewDraggerExtension::ListViewDraggerExtension() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
