#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfileSaveData.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfileSaveData::*)(
    bool, ::BeatSaber::GameSettings::Controller, ::BeatSaber::GameSettings::Controller)>(&::BeatSaber::GameSettings::ControllerProfileSaveData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x31939c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::Controller>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::Controller>::get() })));
    return ___internal_method;
  }
};
constexpr bool& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_alternativeHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternativeHandling;
}
constexpr bool const& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_alternativeHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternativeHandling;
}
constexpr void BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_set_alternativeHandling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alternativeHandling = value;
}
constexpr ::BeatSaber::GameSettings::Controller& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_leftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftController;
}
constexpr ::BeatSaber::GameSettings::Controller const& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_leftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftController;
}
constexpr void BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_set_leftController(::BeatSaber::GameSettings::Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftController = value;
}
constexpr ::BeatSaber::GameSettings::Controller& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_rightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightController;
}
constexpr ::BeatSaber::GameSettings::Controller const& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_rightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightController;
}
constexpr void BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_set_rightController(::BeatSaber::GameSettings::Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightController = value;
}
inline void BeatSaber::GameSettings::ControllerProfileSaveData::_ctor(bool alternativeHandling, ::BeatSaber::GameSettings::Controller leftController,
                                                                      ::BeatSaber::GameSettings::Controller rightController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::Controller>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alternativeHandling, leftController, rightController);
}
inline ::BeatSaber::GameSettings::ControllerProfileSaveData*
BeatSaber::GameSettings::ControllerProfileSaveData::New_ctor(bool alternativeHandling, ::BeatSaber::GameSettings::Controller leftController, ::BeatSaber::GameSettings::Controller rightController) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::ControllerProfileSaveData*>(alternativeHandling, leftController, rightController));
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfileSaveData::ControllerProfileSaveData() {}
