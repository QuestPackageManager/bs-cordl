#pragma once
// IWYU pragma private; include "GlobalNamespace\StartMiddleEndButtonsGroup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StartMiddleEndButtonsGroup_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartMiddleEndButtonsGroup.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMiddleEndButtonsGroup::*)()>(&::GlobalNamespace::StartMiddleEndButtonsGroup::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5922ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonsGroup*>(), { "SetLayoutHorizontal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMiddleEndButtonsGroup.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMiddleEndButtonsGroup::*)()>(&::GlobalNamespace::StartMiddleEndButtonsGroup::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5922fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonsGroup*>(), { "SetLayoutVertical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMiddleEndButtonsGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMiddleEndButtonsGroup::*)()>(&::GlobalNamespace::StartMiddleEndButtonsGroup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5922ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonsGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StartMiddleEndButtonsGroup::SetLayoutHorizontal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonsGroup*>(), { "SetLayoutHorizontal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StartMiddleEndButtonsGroup::SetLayoutVertical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonsGroup*>(), { "SetLayoutVertical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StartMiddleEndButtonsGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonsGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StartMiddleEndButtonsGroup* GlobalNamespace::StartMiddleEndButtonsGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StartMiddleEndButtonsGroup*>());
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr GlobalNamespace::StartMiddleEndButtonsGroup::operator ::UnityEngine::UI::ILayoutController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* GlobalNamespace::StartMiddleEndButtonsGroup::i___UnityEngine__UI__ILayoutController() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartMiddleEndButtonsGroup::StartMiddleEndButtonsGroup() {}
