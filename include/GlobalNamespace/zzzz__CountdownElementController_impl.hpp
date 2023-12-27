#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountdownElementController_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CountdownElementController.SetTextAndRunAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownElementController::*)(::StringW)>(
    &::GlobalNamespace::CountdownElementController::SetTextAndRunAnimation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22a3148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownElementController*>::get(), "SetTextAndRunAnimation",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownElementController.StopAndHide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownElementController::*)()>(
    &::GlobalNamespace::CountdownElementController::StopAndHide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22a32a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownElementController*>::get(),
                                                                               "StopAndHide", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownElementController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownElementController::*)()>(&::GlobalNamespace::CountdownElementController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a3428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownElementController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::CountdownElementController::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::CountdownElementController::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::CountdownElementController::__set__text(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Animation*& GlobalNamespace::CountdownElementController::__get__animation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____animation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> const& GlobalNamespace::CountdownElementController::__get__animation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____animation;
}
constexpr void GlobalNamespace::CountdownElementController::__set__animation(::UnityEngine::Animation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CountdownElementController::SetTextAndRunAnimation(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownElementController*>::get(), "SetTextAndRunAnimation",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void GlobalNamespace::CountdownElementController::StopAndHide() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownElementController*>::get(),
                                                                             "StopAndHide", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CountdownElementController* GlobalNamespace::CountdownElementController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CountdownElementController*>());
}
inline void GlobalNamespace::CountdownElementController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownElementController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountdownElementController::CountdownElementController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
