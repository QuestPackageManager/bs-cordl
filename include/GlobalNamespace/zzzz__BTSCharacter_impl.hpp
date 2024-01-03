#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterMaterialSwitcher_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.get_characterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BTSCharacter::*)()>(&::GlobalNamespace::BTSCharacter::get_characterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221963c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_characterName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.get_materialPropertyBlockController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MaterialPropertyBlockController* (::GlobalNamespace::BTSCharacter::*)()>(
    &::GlobalNamespace::BTSCharacter::get_materialPropertyBlockController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(),
                                                                               "get_materialPropertyBlockController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.get_animator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animator* (::GlobalNamespace::BTSCharacter::*)()>(&::GlobalNamespace::BTSCharacter::get_animator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221964c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_animator",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.get_headTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::GlobalNamespace::BTSCharacter::*)()>(
    &::GlobalNamespace::BTSCharacter::get_headTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_headTransform",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.SetAlternativeAnimationAndMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacter::*)(::UnityEngine::AnimationClip*, bool)>(
    &::GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x221965c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "SetAlternativeAnimationAndMaterial", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacter::*)()>(&::GlobalNamespace::BTSCharacter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BTSCharacter::__get__characterName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterName;
}
constexpr ::StringW const& GlobalNamespace::BTSCharacter::__get__characterName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterName;
}
constexpr void GlobalNamespace::BTSCharacter::__set__characterName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____characterName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Animator*& GlobalNamespace::BTSCharacter::__get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& GlobalNamespace::BTSCharacter::__get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void GlobalNamespace::BTSCharacter::__set__animator(::UnityEngine::Animator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BTSCharacterMaterialSwitcher*& GlobalNamespace::BTSCharacter::__get__btsCharacterMaterialSwitcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterMaterialSwitcher;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterMaterialSwitcher*> const& GlobalNamespace::BTSCharacter::__get__btsCharacterMaterialSwitcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterMaterialSwitcher;
}
constexpr void GlobalNamespace::BTSCharacter::__set__btsCharacterMaterialSwitcher(::GlobalNamespace::BTSCharacterMaterialSwitcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____btsCharacterMaterialSwitcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController*& GlobalNamespace::BTSCharacter::__get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& GlobalNamespace::BTSCharacter::__get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::BTSCharacter::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::BTSCharacter::__get__headTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::BTSCharacter::__get__headTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr void GlobalNamespace::BTSCharacter::__set__headTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::BTSCharacter::get_characterName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_characterName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockController* GlobalNamespace::BTSCharacter::get_materialPropertyBlockController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(),
                                                                             "get_materialPropertyBlockController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MaterialPropertyBlockController*, false>(this, ___internal_method);
}
inline ::UnityEngine::Animator* GlobalNamespace::BTSCharacter::get_animator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_animator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animator*, false>(this, ___internal_method);
}
inline ::UnityEngine::Transform* GlobalNamespace::BTSCharacter::get_headTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_headTransform",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial(::UnityEngine::AnimationClip* animation, bool alternativeMaterialOn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "SetAlternativeAnimationAndMaterial", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animation, alternativeMaterialOn);
}
inline ::GlobalNamespace::BTSCharacter* GlobalNamespace::BTSCharacter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BTSCharacter*>());
}
inline void GlobalNamespace::BTSCharacter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacter::BTSCharacter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
