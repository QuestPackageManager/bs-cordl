#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnHeaderColumnResizeHandle.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnResizeHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle.get_dragArea
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::get_dragArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4972448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get(),
                                                 "get_dragArea", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x496d52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::__cordl_internal_get__dragArea_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragArea_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const&
UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::__cordl_internal_get__dragArea_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragArea_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::__cordl_internal_set__dragArea_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dragArea_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::setStaticF_dragAreaUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "dragAreaUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::getStaticF_dragAreaUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "dragAreaUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::get_dragArea() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get(), "get_dragArea",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>());
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::MultiColumnHeaderColumnResizeHandle() {}
