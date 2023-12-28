#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VisualEffectsController_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VisualEffectsController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VisualEffectsController::*)()>(&::GlobalNamespace::VisualEffectsController::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x280c690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualEffectsController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VisualEffectsController::*)()>(&::GlobalNamespace::VisualEffectsController::OnDestroy)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x280c7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualEffectsController.OnPreRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VisualEffectsController::*)()>(&::GlobalNamespace::VisualEffectsController::OnPreRender)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x280c8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(),
                                                                               "OnPreRender", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualEffectsController.HandleDepthTextureEnabledDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VisualEffectsController::*)()>(
    &::GlobalNamespace::VisualEffectsController::HandleDepthTextureEnabledDidChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x280c764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(),
                                                                               "HandleDepthTextureEnabledDidChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualEffectsController.SetShaderKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VisualEffectsController::*)(::StringW, bool)>(
    &::GlobalNamespace::VisualEffectsController::SetShaderKeyword)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x280c93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(), "SetShaderKeyword", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualEffectsController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VisualEffectsController::*)()>(&::GlobalNamespace::VisualEffectsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280c950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::VisualEffectsController::__get__depthTextureEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthTextureEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::VisualEffectsController::__get__depthTextureEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthTextureEnabled;
}
constexpr void GlobalNamespace::VisualEffectsController::__set__depthTextureEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____depthTextureEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Camera*& GlobalNamespace::VisualEffectsController::__get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::VisualEffectsController::__get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::VisualEffectsController::__set__camera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::VisualEffectsController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VisualEffectsController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VisualEffectsController::OnPreRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(), "OnPreRender",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VisualEffectsController::HandleDepthTextureEnabledDidChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(),
                                                                             "HandleDepthTextureEnabledDidChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VisualEffectsController::SetShaderKeyword(::StringW keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(), "SetShaderKeyword", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword, value);
}
inline ::GlobalNamespace::VisualEffectsController* GlobalNamespace::VisualEffectsController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VisualEffectsController*>());
}
inline void GlobalNamespace::VisualEffectsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VisualEffectsController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectsController::VisualEffectsController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
