#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSimultaneousHandsAndControllersSample.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSimultaneousHandsAndControllersSample_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSimultaneousHandsAndControllersSample.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSimultaneousHandsAndControllersSample::*)()>(
    &::GlobalNamespace::OVRSimultaneousHandsAndControllersSample::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d23038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSimultaneousHandsAndControllersSample.EnableSimultaneousHandsAndControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSimultaneousHandsAndControllersSample::*)()>(
    &::GlobalNamespace::OVRSimultaneousHandsAndControllersSample::EnableSimultaneousHandsAndControllers)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d23138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*>::get(),
                                                 "EnableSimultaneousHandsAndControllers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSimultaneousHandsAndControllersSample.DisableSimultaneousHandsAndControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSimultaneousHandsAndControllersSample::*)()>(
    &::GlobalNamespace::OVRSimultaneousHandsAndControllersSample::DisableSimultaneousHandsAndControllers)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d231bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*>::get(),
                                                 "DisableSimultaneousHandsAndControllers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSimultaneousHandsAndControllersSample._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSimultaneousHandsAndControllersSample::*)()>(
    &::GlobalNamespace::OVRSimultaneousHandsAndControllersSample::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d23240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OVRSimultaneousHandsAndControllersSample::__cordl_internal_get_enableButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OVRSimultaneousHandsAndControllersSample::__cordl_internal_get_enableButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableButton;
}
constexpr void GlobalNamespace::OVRSimultaneousHandsAndControllersSample::__cordl_internal_set_enableButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enableButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OVRSimultaneousHandsAndControllersSample::__cordl_internal_get_disableButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OVRSimultaneousHandsAndControllersSample::__cordl_internal_get_disableButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableButton;
}
constexpr void GlobalNamespace::OVRSimultaneousHandsAndControllersSample::__cordl_internal_set_disableButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___disableButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::OVRSimultaneousHandsAndControllersSample::__cordl_internal_get_displayText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::OVRSimultaneousHandsAndControllersSample::__cordl_internal_get_displayText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayText;
}
constexpr void GlobalNamespace::OVRSimultaneousHandsAndControllersSample::__cordl_internal_set_displayText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRSimultaneousHandsAndControllersSample::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSimultaneousHandsAndControllersSample::EnableSimultaneousHandsAndControllers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*>::get(),
                                               "EnableSimultaneousHandsAndControllers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSimultaneousHandsAndControllersSample::DisableSimultaneousHandsAndControllers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*>::get(),
                                               "DisableSimultaneousHandsAndControllers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSimultaneousHandsAndControllersSample::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSimultaneousHandsAndControllersSample* GlobalNamespace::OVRSimultaneousHandsAndControllersSample::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSimultaneousHandsAndControllersSample*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSimultaneousHandsAndControllersSample::OVRSimultaneousHandsAndControllersSample() {}
