#pragma once
// IWYU pragma private; include "GlobalNamespace/SpectrogramMultiplierFloatFxEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__SpectrogramMultiplierFloatFxEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__SpectrogramRowPropertyAnimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3b89cb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3b89d34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::*)()>(
    &::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b89db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator>& GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::__cordl_internal_get__spectrogram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogram;
}
constexpr ::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator> const& GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::__cordl_internal_get__spectrogram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogram;
}
constexpr void GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::__cordl_internal_set__spectrogram(::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spectrogram)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget* GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::SpectrogramMultiplierFloatFxEffectTarget() {}
