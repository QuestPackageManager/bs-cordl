#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ToggleableCanvasGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)()>(&::GlobalNamespace::ToggleableCanvasGroup::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2116b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)()>(&::GlobalNamespace::ToggleableCanvasGroup::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2116c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup.HandleToggleValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)(bool)>(
    &::GlobalNamespace::ToggleableCanvasGroup::HandleToggleValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2116cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), "HandleToggleValueChanged",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup.SetCanvasGroupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)(bool)>(
    &::GlobalNamespace::ToggleableCanvasGroup::SetCanvasGroupData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2116be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), "SetCanvasGroupData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)()>(&::GlobalNamespace::ToggleableCanvasGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2116cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::ToggleableCanvasGroup::__get__canvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::ToggleableCanvasGroup::__get__canvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr void GlobalNamespace::ToggleableCanvasGroup::__set__canvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::ToggleableCanvasGroup::__get__toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::ToggleableCanvasGroup::__get__toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr void GlobalNamespace::ToggleableCanvasGroup::__set__toggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ToggleableCanvasGroup::__get__invertToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invertToggle;
}
constexpr bool const& GlobalNamespace::ToggleableCanvasGroup::__get__invertToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invertToggle;
}
constexpr void GlobalNamespace::ToggleableCanvasGroup::__set__invertToggle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invertToggle = value;
}
inline void GlobalNamespace::ToggleableCanvasGroup::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ToggleableCanvasGroup::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ToggleableCanvasGroup::HandleToggleValueChanged(bool isOn) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), "HandleToggleValueChanged",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::ToggleableCanvasGroup::SetCanvasGroupData(bool isOn) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), "SetCanvasGroupData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isOn);
}
inline ::GlobalNamespace::ToggleableCanvasGroup* GlobalNamespace::ToggleableCanvasGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ToggleableCanvasGroup*>());
}
inline void GlobalNamespace::ToggleableCanvasGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ToggleableCanvasGroup::ToggleableCanvasGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
