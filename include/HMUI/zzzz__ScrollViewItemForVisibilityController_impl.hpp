#pragma once
// IWYU pragma private; include "HMUI/ScrollViewItemForVisibilityController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScrollViewItemForVisibilityController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HMUI::ScrollViewItemForVisibilityController.GetWorldCorners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollViewItemForVisibilityController::*)(::ArrayW<::UnityEngine::Vector3>)>(
    &::HMUI::ScrollViewItemForVisibilityController::GetWorldCorners)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x588bfe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollViewItemForVisibilityController*>(), { "GetWorldCorners", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollViewItemForVisibilityController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollViewItemForVisibilityController::*)()>(&::HMUI::ScrollViewItemForVisibilityController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588c04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollViewItemForVisibilityController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void HMUI::ScrollViewItemForVisibilityController::GetWorldCorners(::ArrayW<::UnityEngine::Vector3> fourCornersArray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollViewItemForVisibilityController*>(), { "GetWorldCorners", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fourCornersArray);
}
inline void HMUI::ScrollViewItemForVisibilityController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollViewItemForVisibilityController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ScrollViewItemForVisibilityController* HMUI::ScrollViewItemForVisibilityController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScrollViewItemForVisibilityController*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScrollViewItemForVisibilityController::ScrollViewItemForVisibilityController() {}
