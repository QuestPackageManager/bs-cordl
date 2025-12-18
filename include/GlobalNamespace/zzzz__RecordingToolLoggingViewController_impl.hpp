#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolLoggingViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolLoggingViewController_def.hpp"
#include "GlobalNamespace/zzzz__ListLogger_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolLoggingViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolLoggingViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::RecordingToolLoggingViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57354a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolLoggingViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolLoggingViewController::*)()>(
    &::GlobalNamespace::RecordingToolLoggingViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5735550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textPageScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____listLogger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RecordingToolLoggingViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::RecordingToolLoggingViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolLoggingViewController* GlobalNamespace::RecordingToolLoggingViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecordingToolLoggingViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolLoggingViewController::RecordingToolLoggingViewController() {}
