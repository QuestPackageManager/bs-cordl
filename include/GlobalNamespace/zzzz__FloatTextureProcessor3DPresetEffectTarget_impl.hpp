#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatTextureProcessor3DPresetEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__FloatTextureProcessor3DPresetEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e3094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e31c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget.SetFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::*)(float_t)>(
    &::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::SetFloat)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57e3098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(), "SetFloat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::*)()>(
    &::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e31cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D>& GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::__cordl_internal_get__textureProcessor3D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureProcessor3D;
}
constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D> const& GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::__cordl_internal_get__textureProcessor3D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureProcessor3D;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::__cordl_internal_set__textureProcessor3D(::UnityW<::GlobalNamespace::TextureProcessor3D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textureProcessor3D)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::__cordl_internal_get__valueBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::__cordl_internal_get__valueBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::__cordl_internal_set__valueBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueBounds = value;
}
inline void GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::SetFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(), "SetFloat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget* GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget::FloatTextureProcessor3DPresetEffectTarget() {}
