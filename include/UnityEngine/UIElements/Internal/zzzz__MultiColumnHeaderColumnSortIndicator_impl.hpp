#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnHeaderColumnSortIndicator.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnSortIndicator_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator.set_sortOrderLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::*)(::StringW)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::set_sortOrderLabel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d26a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>(),
                                                                                           { "set_sortOrderLabel", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6d26a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>(), { ".ctor", {}, {} })));
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
  this->___m_IndexLabel = value;
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::setStaticF_arrowUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arrowUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::getStaticF_arrowUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arrowUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::setStaticF_indexLabelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "indexLabelUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::getStaticF_indexLabelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "indexLabelUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::set_sortOrderLabel(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>(), { "set_sortOrderLabel", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator::MultiColumnHeaderColumnSortIndicator() {}
