#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CutoutEffect_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect.get_useRandomCutoutOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CutoutEffect::*)()>(&::GlobalNamespace::CutoutEffect::get_useRandomCutoutOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2396bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(),
                                                                               "get_useRandomCutoutOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CutoutEffect::*)()>(&::GlobalNamespace::CutoutEffect::Start)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2396bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect.SetCutout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CutoutEffect::*)(float_t)>(&::GlobalNamespace::CutoutEffect::SetCutout)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2396968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(), "SetCutout", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect.SetCutout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CutoutEffect::*)(float_t, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::CutoutEffect::SetCutout)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2396c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(), "SetCutout", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutoutEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CutoutEffect::*)()>(&::GlobalNamespace::CutoutEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2396d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MaterialPropertyBlockController*& GlobalNamespace::CutoutEffect::__get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& GlobalNamespace::CutoutEffect::__get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::CutoutEffect::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::CutoutEffect::__get__useRandomCutoutOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useRandomCutoutOffset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::CutoutEffect::__get__useRandomCutoutOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useRandomCutoutOffset;
}
constexpr void GlobalNamespace::CutoutEffect::__set__useRandomCutoutOffset(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____useRandomCutoutOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CutoutEffect::__get__cutoutOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutoutOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CutoutEffect::__get__cutoutOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutoutOffset;
}
constexpr void GlobalNamespace::CutoutEffect::__set__cutoutOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutoutOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CutoutEffect::__get__randomNoiseTexOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomNoiseTexOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CutoutEffect::__get__randomNoiseTexOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomNoiseTexOffset;
}
constexpr void GlobalNamespace::CutoutEffect::__set__randomNoiseTexOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomNoiseTexOffset = value;
}
constexpr float_t& GlobalNamespace::CutoutEffect::__get__cutout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutout;
}
constexpr float_t const& GlobalNamespace::CutoutEffect::__get__cutout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutout;
}
constexpr void GlobalNamespace::CutoutEffect::__set__cutout(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutout = value;
}
inline void GlobalNamespace::CutoutEffect::setStaticF__cutoutPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cutoutPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CutoutEffect::getStaticF__cutoutPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "_cutoutPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get>();
}
inline void GlobalNamespace::CutoutEffect::setStaticF__cutoutTexOffsetPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cutoutTexOffsetPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CutoutEffect::getStaticF__cutoutTexOffsetPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "_cutoutTexOffsetPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get>();
}
inline bool GlobalNamespace::CutoutEffect::get_useRandomCutoutOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(),
                                                                             "get_useRandomCutoutOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::CutoutEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CutoutEffect::SetCutout(float_t cutout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(), "SetCutout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutout);
}
inline void GlobalNamespace::CutoutEffect::SetCutout(float_t cutout, ::UnityEngine::Vector3 cutoutOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(), "SetCutout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutout, cutoutOffset);
}
inline ::GlobalNamespace::CutoutEffect* GlobalNamespace::CutoutEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CutoutEffect*>());
}
inline void GlobalNamespace::CutoutEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CutoutEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CutoutEffect::CutoutEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
