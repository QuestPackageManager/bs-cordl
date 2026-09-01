#pragma once
// IWYU pragma private; include "GlobalNamespace\RecordingToolLoggingViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolLoggingViewController_def.hpp"
#include "GlobalNamespace/zzzz__ListLogger_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolLoggingViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolLoggingViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::RecordingToolLoggingViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a1d600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolLoggingViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RecordingToolLoggingViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolLoggingViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolLoggingViewController::*)()>(&::GlobalNamespace::RecordingToolLoggingViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1d6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolLoggingViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextPageScrollView>& GlobalNamespace::RecordingToolLoggingViewController::__cordl_internal_get__textPageScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr ::UnityW<::HMUI::TextPageScrollView> const& GlobalNamespace::RecordingToolLoggingViewController::__cordl_internal_get__textPageScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr void GlobalNamespace::RecordingToolLoggingViewController::__cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textPageScrollView = value;
}
constexpr ::GlobalNamespace::ListLogger*& GlobalNamespace::RecordingToolLoggingViewController::__cordl_internal_get__listLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listLogger;
}
constexpr ::GlobalNamespace::ListLogger* const& GlobalNamespace::RecordingToolLoggingViewController::__cordl_internal_get__listLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listLogger;
}
constexpr void GlobalNamespace::RecordingToolLoggingViewController::__cordl_internal_set__listLogger(::GlobalNamespace::ListLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____listLogger = value;
}
inline void GlobalNamespace::RecordingToolLoggingViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RecordingToolLoggingViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::RecordingToolLoggingViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolLoggingViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolLoggingViewController* GlobalNamespace::RecordingToolLoggingViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolLoggingViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolLoggingViewController::RecordingToolLoggingViewController() {}
