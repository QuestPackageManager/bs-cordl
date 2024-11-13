#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewItemWrapper.hpp"
#include "UnityEngine/UIElements/zzzz__TreeItem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewItemWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeItem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewItemWrapper.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::TreeViewItemWrapper::*)()>(
    &::UnityEngine::UIElements::TreeViewItemWrapper::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a79f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemWrapper>::get(), "get_id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewItemWrapper.get_childrenIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::UIElements::TreeViewItemWrapper::*)()>(
    &::UnityEngine::UIElements::TreeViewItemWrapper::get_childrenIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a7a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemWrapper>::get(),
                                                                               "get_childrenIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewItemWrapper.get_hasChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TreeViewItemWrapper::*)()>(
    &::UnityEngine::UIElements::TreeViewItemWrapper::get_hasChildren)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x49a7a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemWrapper>::get(),
                                                                               "get_hasChildren", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewItemWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TreeViewItemWrapper::*)(::UnityEngine::UIElements::TreeItem, int32_t)>(
    &::UnityEngine::UIElements::TreeViewItemWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x49a7a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemWrapper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TreeItem>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::UIElements::TreeViewItemWrapper::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemWrapper>::get(), "get_id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::UIElements::TreeViewItemWrapper::get_childrenIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemWrapper>::get(),
                                                                             "get_childrenIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TreeViewItemWrapper::get_hasChildren() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemWrapper>::get(),
                                                                             "get_hasChildren", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TreeViewItemWrapper::_ctor(::UnityEngine::UIElements::TreeItem item, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewItemWrapper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TreeItem>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, depth);
}
// Ctor Parameters [CppParam { name: "item", ty: "::UnityEngine::UIElements::TreeItem", modifiers: "", def_value: Some("{}") }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::UIElements::TreeViewItemWrapper::TreeViewItemWrapper(::UnityEngine::UIElements::TreeItem item, int32_t depth) noexcept {
  this->item = item;
  this->depth = depth;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TreeViewItemWrapper::TreeViewItemWrapper() {}
