#pragma once
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__PresetsSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__IntSO_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PresetsSettingsController::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::GlobalNamespace::PresetsSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22ab000;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)(int32_t)>(
    &::GlobalNamespace::PresetsSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22ab0d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PresetsSettingsController::*)(int32_t)>(
    &::GlobalNamespace::PresetsSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22ab130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)()>(&::GlobalNamespace::PresetsSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ab180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::PresetsSettingsController::__get__settingsValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsValue;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::PresetsSettingsController::__get__settingsValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsValue;
}
constexpr void GlobalNamespace::PresetsSettingsController::__set__settingsValue(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NamedPresetsSO*& GlobalNamespace::PresetsSettingsController::__get__presets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedPresetsSO*> const& GlobalNamespace::PresetsSettingsController::__get__presets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr void GlobalNamespace::PresetsSettingsController::__set__presets(::GlobalNamespace::NamedPresetsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____presets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PresetsSettingsController::__get__limitNumberOfElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitNumberOfElements;
}
constexpr bool const& GlobalNamespace::PresetsSettingsController::__get__limitNumberOfElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitNumberOfElements;
}
constexpr void GlobalNamespace::PresetsSettingsController::__set__limitNumberOfElements(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____limitNumberOfElements = value;
}
constexpr int32_t& GlobalNamespace::PresetsSettingsController::__get__numberOfElementsLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElementsLimit;
}
constexpr int32_t const& GlobalNamespace::PresetsSettingsController::__get__numberOfElementsLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElementsLimit;
}
constexpr void GlobalNamespace::PresetsSettingsController::__set__numberOfElementsLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfElementsLimit = value;
}
inline bool GlobalNamespace::PresetsSettingsController::GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::PresetsSettingsController::ApplyValue(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::PresetsSettingsController::TextForValue(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::PresetsSettingsController* GlobalNamespace::PresetsSettingsController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PresetsSettingsController*>());
}
inline void GlobalNamespace::PresetsSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PresetsSettingsController::PresetsSettingsController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
