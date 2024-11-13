#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolConfigViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigViewController_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolConfigViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::RecordingToolConfigViewController::DidActivate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3bbcdb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolConfigViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolConfigViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolConfigViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolConfigViewController::*)()>(
    &::GlobalNamespace::RecordingToolConfigViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bbce44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolConfigViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextPageScrollView>& GlobalNamespace::RecordingToolConfigViewController::__cordl_internal_get__textPageScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr ::UnityW<::HMUI::TextPageScrollView> const& GlobalNamespace::RecordingToolConfigViewController::__cordl_internal_get__textPageScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr void GlobalNamespace::RecordingToolConfigViewController::__cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textPageScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingToolManager*& GlobalNamespace::RecordingToolConfigViewController::__cordl_internal_get__recordingToolManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolManager*> const& GlobalNamespace::RecordingToolConfigViewController::__cordl_internal_get__recordingToolManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolManager;
}
constexpr void GlobalNamespace::RecordingToolConfigViewController::__cordl_internal_set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingToolManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RecordingToolConfigViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolConfigViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::RecordingToolConfigViewController* GlobalNamespace::RecordingToolConfigViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecordingToolConfigViewController*>());
}
inline void GlobalNamespace::RecordingToolConfigViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolConfigViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolConfigViewController::RecordingToolConfigViewController() {}
