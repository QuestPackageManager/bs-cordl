#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__FloorAdjustViewController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::FloorAdjustViewController::DidActivate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x22e3fb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::Update)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x22e40c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e4300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController._DidActivate_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(
    &::GlobalNamespace::FloorAdjustViewController::_DidActivate_b__9_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22e4308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                                                                               "<DidActivate>b__9_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController._DidActivate_b__9_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(
    &::GlobalNamespace::FloorAdjustViewController::_DidActivate_b__9_1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22e4384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                                                                               "<DidActivate>b__9_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Vector3SO>& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__roomCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomCenter;
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__roomCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomCenter;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__roomCenter(::UnityW<::GlobalNamespace::Vector3SO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomCenter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__yIncButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yIncButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__yIncButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yIncButton;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__yIncButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____yIncButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__yDecButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yDecButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__yDecButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yDecButton;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__yDecButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____yDecButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__playerHeightText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__playerHeightText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightText;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__playerHeightText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeightText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__playerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeight;
}
constexpr float_t const& GlobalNamespace::FloorAdjustViewController::__cordl_internal_get__playerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeight;
}
constexpr void GlobalNamespace::FloorAdjustViewController::__cordl_internal_set__playerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeight = value;
}
inline void GlobalNamespace::FloorAdjustViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::FloorAdjustViewController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FloorAdjustViewController* GlobalNamespace::FloorAdjustViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloorAdjustViewController*>());
}
inline void GlobalNamespace::FloorAdjustViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloorAdjustViewController::_DidActivate_b__9_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                                                                             "<DidActivate>b__9_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloorAdjustViewController::_DidActivate_b__9_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                                                                             "<DidActivate>b__9_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloorAdjustViewController::FloorAdjustViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
