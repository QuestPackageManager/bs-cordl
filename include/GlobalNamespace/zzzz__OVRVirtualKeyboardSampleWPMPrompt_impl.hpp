#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRVirtualKeyboardSampleWPMPrompt.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardSampleWPMPrompt_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt::*)()>(&::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5eefe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt::*)()>(&::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5eefee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt* GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt::OVRVirtualKeyboardSampleWPMPrompt() {}
