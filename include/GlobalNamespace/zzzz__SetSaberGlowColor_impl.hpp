#pragma once
#include "GlobalNamespace/zzzz__SaberType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetSaberGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberGlowColor_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::*)()>(
    &::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24929c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::__cordl_internal_get_tintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::__cordl_internal_get_tintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColor;
}
constexpr void GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::__cordl_internal_set_tintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tintColor = value;
}
constexpr ::StringW& GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::__cordl_internal_get_property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr ::StringW const& GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::__cordl_internal_get_property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr void GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::__cordl_internal_set_property(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___property)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair* GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>());
}
inline void GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair::__SetSaberGlowColor__PropertyTintColorPair() {}
//  Writing Method size for method: ::GlobalNamespace::SetSaberGlowColor.set_saberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberGlowColor::*)(::GlobalNamespace::SaberType)>(
    &::GlobalNamespace::SetSaberGlowColor::set_saberType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2492254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberGlowColor*>::get(), "set_saberType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberGlowColor.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberGlowColor::*)()>(&::GlobalNamespace::SetSaberGlowColor::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x249293c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberGlowColor*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberGlowColor.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberGlowColor::*)()>(&::GlobalNamespace::SetSaberGlowColor::SetColors)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2492824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberGlowColor*>::get(), "SetColors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberGlowColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberGlowColor::*)()>(&::GlobalNamespace::SetSaberGlowColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24929bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberGlowColor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__saberTypeObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTypeObject;
}
constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__saberTypeObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTypeObject;
}
constexpr void GlobalNamespace::SetSaberGlowColor::__cordl_internal_set__saberTypeObject(::UnityW<::GlobalNamespace::SaberTypeObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberTypeObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::SetSaberGlowColor::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>*>&
GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__propertyTintColorPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyTintColorPairs;
}
constexpr ::ArrayW<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>*> const&
GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__propertyTintColorPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyTintColorPairs;
}
constexpr void GlobalNamespace::SetSaberGlowColor::__cordl_internal_set__propertyTintColorPairs(
    ::ArrayW<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyTintColorPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SetSaberGlowColor::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__materialPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlock;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__materialPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlock;
}
constexpr void GlobalNamespace::SetSaberGlowColor::__cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__saberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::SetSaberGlowColor::__cordl_internal_get__saberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr void GlobalNamespace::SetSaberGlowColor::__cordl_internal_set__saberType(::GlobalNamespace::SaberType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberType = value;
}
inline void GlobalNamespace::SetSaberGlowColor::set_saberType(::GlobalNamespace::SaberType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberGlowColor*>::get(), "set_saberType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SetSaberGlowColor::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberGlowColor*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SetSaberGlowColor::SetColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberGlowColor*>::get(), "SetColors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SetSaberGlowColor* GlobalNamespace::SetSaberGlowColor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SetSaberGlowColor*>());
}
inline void GlobalNamespace::SetSaberGlowColor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberGlowColor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetSaberGlowColor::SetSaberGlowColor() {}
