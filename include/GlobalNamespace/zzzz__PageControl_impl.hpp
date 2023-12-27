#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PageControl_def.hpp"
#include "GlobalNamespace/zzzz__PageControlElement_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PageControl.SetPagesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControl::*)(int32_t)>(&::GlobalNamespace::PageControl::SetPagesCount)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x22e79a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl*>::get(), "SetPagesCount", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControl.SetSelectedPageIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControl::*)(int32_t)>(&::GlobalNamespace::PageControl::SetSelectedPageIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x22e7dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl*>::get(), "SetSelectedPageIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControl.SetVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControl::*)(bool)>(&::GlobalNamespace::PageControl::SetVisible)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22e7ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl*>::get(), "SetVisible", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControl::*)()>(&::GlobalNamespace::PageControl::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22e7ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::PageControl::__get__content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____content;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::PageControl::__get__content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____content;
}
constexpr void GlobalNamespace::PageControl::__set__content(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PageControl::__get__spacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spacing;
}
constexpr float_t const& GlobalNamespace::PageControl::__get__spacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spacing;
}
constexpr void GlobalNamespace::PageControl::__set__spacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____spacing = value;
}
constexpr ::GlobalNamespace::PageControlElement*& GlobalNamespace::PageControl::__get__elementPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____elementPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PageControlElement*> const& GlobalNamespace::PageControl::__get__elementPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____elementPrefab;
}
constexpr void GlobalNamespace::PageControl::__set__elementPrefab(::GlobalNamespace::PageControlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement*>*& GlobalNamespace::PageControl::__get__activeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____activeElements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement*>*> const& GlobalNamespace::PageControl::__get__activeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____activeElements;
}
constexpr void GlobalNamespace::PageControl::__set__activeElements(::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement*>*& GlobalNamespace::PageControl::__get__inactiveElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inactiveElements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement*>*> const& GlobalNamespace::PageControl::__get__inactiveElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inactiveElements;
}
constexpr void GlobalNamespace::PageControl::__set__inactiveElements(::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inactiveElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PageControl::__get__selectedPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____selectedPage;
}
constexpr int32_t const& GlobalNamespace::PageControl::__get__selectedPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____selectedPage;
}
constexpr void GlobalNamespace::PageControl::__set__selectedPage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____selectedPage = value;
}
constexpr int32_t& GlobalNamespace::PageControl::__get__pagesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pagesCount;
}
constexpr int32_t const& GlobalNamespace::PageControl::__get__pagesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pagesCount;
}
constexpr void GlobalNamespace::PageControl::__set__pagesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____pagesCount = value;
}
inline void GlobalNamespace::PageControl::SetPagesCount(int32_t pagesCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl*>::get(), "SetPagesCount", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pagesCount);
}
inline void GlobalNamespace::PageControl::SetSelectedPageIndex(int32_t page) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl*>::get(), "SetSelectedPageIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, page);
}
inline void GlobalNamespace::PageControl::SetVisible(bool isVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl*>::get(), "SetVisible", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isVisible);
}
inline ::GlobalNamespace::PageControl* GlobalNamespace::PageControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PageControl*>());
}
inline void GlobalNamespace::PageControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PageControl::PageControl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
