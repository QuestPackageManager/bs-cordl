#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnHeaderColumnSortIndicator.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnSortIndicator_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator.set_sortOrderLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::*)(::StringW)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::set_sortOrderLabel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x49ec18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get(), "set_sortOrderLabel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x49ec1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::__cordl_internal_get_m_IndexLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexLabel;
}
constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::__cordl_internal_get_m_IndexLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexLabel;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::__cordl_internal_set_m_IndexLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::setStaticF_arrowUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arrowUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::getStaticF_arrowUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arrowUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::setStaticF_indexLabelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "indexLabelUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::getStaticF_indexLabelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "indexLabelUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::set_sortOrderLabel(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get(), "set_sortOrderLabel",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::MultiColumnHeaderColumnSortIndicator() {}
