#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ChannelMixer.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ChannelMixer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ChannelMixer.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ChannelMixer::*)()>(
    &::UnityEngine::Rendering::Universal::ChannelMixer::IsActive)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x66c55d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ChannelMixer*>::get(),
                                                                               "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ChannelMixer.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ChannelMixer::*)()>(
    &::UnityEngine::Rendering::Universal::ChannelMixer::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c572c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ChannelMixer*>::get(),
                                                                               "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ChannelMixer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ChannelMixer::*)()>(
    &::UnityEngine::Rendering::Universal::ChannelMixer::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x66c5734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ChannelMixer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_redOutRedIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redOutRedIn;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_redOutRedIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redOutRedIn;
}
constexpr void UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_set_redOutRedIn(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___redOutRedIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_redOutGreenIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redOutGreenIn;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_redOutGreenIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redOutGreenIn;
}
constexpr void UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_set_redOutGreenIn(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___redOutGreenIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_redOutBlueIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redOutBlueIn;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_redOutBlueIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redOutBlueIn;
}
constexpr void UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_set_redOutBlueIn(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___redOutBlueIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_greenOutRedIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___greenOutRedIn;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_greenOutRedIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___greenOutRedIn;
}
constexpr void UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_set_greenOutRedIn(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___greenOutRedIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_greenOutGreenIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___greenOutGreenIn;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_greenOutGreenIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___greenOutGreenIn;
}
constexpr void UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_set_greenOutGreenIn(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___greenOutGreenIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_greenOutBlueIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___greenOutBlueIn;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_greenOutBlueIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___greenOutBlueIn;
}
constexpr void UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_set_greenOutBlueIn(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___greenOutBlueIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_blueOutRedIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueOutRedIn;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_blueOutRedIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueOutRedIn;
}
constexpr void UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_set_blueOutRedIn(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blueOutRedIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_blueOutGreenIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueOutGreenIn;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_blueOutGreenIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueOutGreenIn;
}
constexpr void UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_set_blueOutGreenIn(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blueOutGreenIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_blueOutBlueIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueOutBlueIn;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_get_blueOutBlueIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueOutBlueIn;
}
constexpr void UnityEngine::Rendering::Universal::ChannelMixer::__cordl_internal_set_blueOutBlueIn(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blueOutBlueIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::ChannelMixer::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ChannelMixer*>::get(),
                                                                             "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ChannelMixer::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ChannelMixer*>::get(),
                                                                             "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ChannelMixer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ChannelMixer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ChannelMixer* UnityEngine::Rendering::Universal::ChannelMixer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ChannelMixer*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::ChannelMixer::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::ChannelMixer::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ChannelMixer::ChannelMixer() {}
