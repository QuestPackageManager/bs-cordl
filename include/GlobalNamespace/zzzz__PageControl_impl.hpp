#pragma once
// IWYU pragma private; include "GlobalNamespace/PageControl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PageControl_def.hpp"
#include "GlobalNamespace/zzzz__PageControlElement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PageControl.SetPagesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageControl::*)(int32_t)>(&::GlobalNamespace::PageControl::SetPagesCount)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5966570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControl*>(), { "SetPagesCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControl.SetSelectedPageIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageControl::*)(int32_t)>(&::GlobalNamespace::PageControl::SetSelectedPageIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x596690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControl*>(), { "SetSelectedPageIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControl.SetVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageControl::*)(bool)>(&::GlobalNamespace::PageControl::SetVisible)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x596c770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControl*>(), { "SetVisible", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageControl::*)()>(&::GlobalNamespace::PageControl::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x596c7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::PageControl::__cordl_internal_get__content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____content;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::PageControl::__cordl_internal_get__content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____content;
}
constexpr void GlobalNamespace::PageControl::__cordl_internal_set__content(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____content = value;
}
constexpr float_t& GlobalNamespace::PageControl::__cordl_internal_get__spacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spacing;
}
constexpr float_t const& GlobalNamespace::PageControl::__cordl_internal_get__spacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spacing;
}
constexpr void GlobalNamespace::PageControl::__cordl_internal_set__spacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spacing = value;
}
constexpr ::UnityW<::GlobalNamespace::PageControlElement>& GlobalNamespace::PageControl::__cordl_internal_get__elementPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PageControlElement> const& GlobalNamespace::PageControl::__cordl_internal_get__elementPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementPrefab;
}
constexpr void GlobalNamespace::PageControl::__cordl_internal_set__elementPrefab(::UnityW<::GlobalNamespace::PageControlElement> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PageControlElement>>*& GlobalNamespace::PageControl::__cordl_internal_get__activeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeElements;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PageControlElement>>* const& GlobalNamespace::PageControl::__cordl_internal_get__activeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeElements;
}
constexpr void GlobalNamespace::PageControl::__cordl_internal_set__activeElements(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PageControlElement>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeElements = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PageControlElement>>*& GlobalNamespace::PageControl::__cordl_internal_get__inactiveElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveElements;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PageControlElement>>* const& GlobalNamespace::PageControl::__cordl_internal_get__inactiveElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveElements;
}
constexpr void GlobalNamespace::PageControl::__cordl_internal_set__inactiveElements(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PageControlElement>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inactiveElements = value;
}
constexpr int32_t& GlobalNamespace::PageControl::__cordl_internal_get__selectedPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPage;
}
constexpr int32_t const& GlobalNamespace::PageControl::__cordl_internal_get__selectedPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPage;
}
constexpr void GlobalNamespace::PageControl::__cordl_internal_set__selectedPage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedPage = value;
}
constexpr int32_t& GlobalNamespace::PageControl::__cordl_internal_get__pagesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pagesCount;
}
constexpr int32_t const& GlobalNamespace::PageControl::__cordl_internal_get__pagesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pagesCount;
}
constexpr void GlobalNamespace::PageControl::__cordl_internal_set__pagesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pagesCount = value;
}
inline void GlobalNamespace::PageControl::SetPagesCount(int32_t pagesCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControl*>(), { "SetPagesCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pagesCount);
}
inline void GlobalNamespace::PageControl::SetSelectedPageIndex(int32_t page) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControl*>(), { "SetSelectedPageIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, page);
}
inline void GlobalNamespace::PageControl::SetVisible(bool isVisible) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControl*>(), { "SetVisible", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isVisible);
}
inline void GlobalNamespace::PageControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PageControl* GlobalNamespace::PageControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PageControl*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PageControl::PageControl() {}
