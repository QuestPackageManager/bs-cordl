#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Utils_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Utils.ToDisplayText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Utils::ToDisplayText)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5a541c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Utils*>(),
                                                                                           { "ToDisplayText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Utils.LerpPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Utils::LerpPosition)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a4bef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Utils*>(),
                                                { "LerpPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Utils.ClampText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Utils::ClampText)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a4ca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Utils*>(), { "ClampText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::Utils::ToDisplayText(::StringW input, int32_t characterLimit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Utils*>(), { "ToDisplayText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input, characterLimit);
}
inline ::UnityEngine::Vector3 Meta::XR::ImmersiveDebugger::UserInterface::Utils::LerpPosition(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, float_t lerpSpeed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Utils*>(),
                                                           { "LerpPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, current, target, lerpSpeed);
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::Utils::ClampText(::StringW text, int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Utils*>(), { "ClampText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text, limit);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Utils::Utils() {}
