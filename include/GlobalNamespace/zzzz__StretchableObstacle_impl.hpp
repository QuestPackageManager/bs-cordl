#pragma once
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__StretchableObstacle_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__ParametricBoxFakeGlowController_def.hpp"
#include "GlobalNamespace/zzzz__ParametricBoxFrameController_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.get_bounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::StretchableObstacle::*)()>(
    &::GlobalNamespace::StretchableObstacle::get_bounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25af794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(), "get_bounds",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.SetSizeAndColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)(float_t, float_t, float_t, ::UnityEngine::Color)>(
    &::GlobalNamespace::StretchableObstacle::SetSizeAndColor)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x25af7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(), "SetSizeAndColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)()>(&::GlobalNamespace::StretchableObstacle::OnValidate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25afbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(), "OnValidate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)()>(&::GlobalNamespace::StretchableObstacle::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x25afc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::StretchableObstacle::__cordl_internal_get__edgeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeSize;
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__edgeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeSize;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__edgeSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____edgeSize = value;
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__cordl_internal_get__coreOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coreOffset;
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__coreOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coreOffset;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__coreOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coreOffset = value;
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__cordl_internal_get__addColorMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addColorMultiplier;
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__addColorMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addColorMultiplier;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__addColorMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addColorMultiplier = value;
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleCoreLerpToWhiteFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreLerpToWhiteFactor;
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleCoreLerpToWhiteFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreLerpToWhiteFactor;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__obstacleCoreLerpToWhiteFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleCoreLerpToWhiteFactor = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StretchableObstacle::__cordl_internal_get__fakeGlowOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__fakeGlowOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowOffset;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__fakeGlowOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fakeGlowOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleCore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCore;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleCore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCore;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__obstacleCore(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleCore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>&
GlobalNamespace::StretchableObstacle::__cordl_internal_get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> const&
GlobalNamespace::StretchableObstacle::__cordl_internal_get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__materialPropertyBlockControllers(
    ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ParametricBoxFrameController>& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFrame;
}
constexpr ::UnityW<::GlobalNamespace::ParametricBoxFrameController> const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFrame;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__obstacleFrame(::UnityW<::GlobalNamespace::ParametricBoxFrameController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleFrame)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController>& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleFakeGlow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlow;
}
constexpr ::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleFakeGlow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlow;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__obstacleFakeGlow(::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleFakeGlow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::StretchableObstacle::__cordl_internal_get__bounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__bounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__bounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bounds = value;
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__uvScaleID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_uvScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__uvScaleID() {
  return ::cordl_internals::getStaticField<int32_t, "_uvScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__tintColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tintColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__tintColorID() {
  return ::cordl_internals::getStaticField<int32_t, "_tintColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__addColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_addColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__addColorID() {
  return ::cordl_internals::getStaticField<int32_t, "_addColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__mainColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_mainColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__mainColorID() {
  return ::cordl_internals::getStaticField<int32_t, "_mainColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>();
}
inline ::UnityEngine::Bounds GlobalNamespace::StretchableObstacle::get_bounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(), "get_bounds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method);
}
inline void GlobalNamespace::StretchableObstacle::SetSizeAndColor(float_t width, float_t height, float_t length, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(), "SetSizeAndColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, length, color);
}
inline void GlobalNamespace::StretchableObstacle::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(), "OnValidate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StretchableObstacle* GlobalNamespace::StretchableObstacle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StretchableObstacle*>());
}
inline void GlobalNamespace::StretchableObstacle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StretchableObstacle::StretchableObstacle() {}
