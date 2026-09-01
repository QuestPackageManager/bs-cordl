#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeVolumeDebugColorPreferences.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeDebugColorPreferences_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::*)()>(&::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6791c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_GetDetailSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Color>*, "GetDetailSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(
      std::forward<::System::Func_1<::UnityEngine::Color>*>(value));
}
inline ::System::Func_1<::UnityEngine::Color>* UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_GetDetailSubdivisionColor() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Color>*, "GetDetailSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_GetMediumSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Color>*, "GetMediumSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(
      std::forward<::System::Func_1<::UnityEngine::Color>*>(value));
}
inline ::System::Func_1<::UnityEngine::Color>* UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_GetMediumSubdivisionColor() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Color>*, "GetMediumSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_GetLowSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Color>*, "GetLowSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(
      std::forward<::System::Func_1<::UnityEngine::Color>*>(value));
}
inline ::System::Func_1<::UnityEngine::Color>* UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_GetLowSubdivisionColor() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Color>*, "GetLowSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_GetVeryLowSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Color>*, "GetVeryLowSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(
      std::forward<::System::Func_1<::UnityEngine::Color>*>(value));
}
inline ::System::Func_1<::UnityEngine::Color>* UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_GetVeryLowSubdivisionColor() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Color>*, "GetVeryLowSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_GetSparseSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Color>*, "GetSparseSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(
      std::forward<::System::Func_1<::UnityEngine::Color>*>(value));
}
inline ::System::Func_1<::UnityEngine::Color>* UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_GetSparseSubdivisionColor() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Color>*, "GetSparseSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_GetSparsestSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Color>*, "GetSparsestSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(
      std::forward<::System::Func_1<::UnityEngine::Color>*>(value));
}
inline ::System::Func_1<::UnityEngine::Color>* UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_GetSparsestSubdivisionColor() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Color>*, "GetSparsestSubdivisionColor", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_s_DetailSubdivision(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_DetailSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_s_DetailSubdivision() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_DetailSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_s_MediumSubdivision(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_MediumSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_s_MediumSubdivision() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_MediumSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_s_LowSubdivision(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_LowSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_s_LowSubdivision() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_LowSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_s_VeryLowSubdivision(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_VeryLowSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_s_VeryLowSubdivision() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_VeryLowSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_s_SparseSubdivision(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_SparseSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_s_SparseSubdivision() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_SparseSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::setStaticF_s_SparsestSubdivision(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_SparsestSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::getStaticF_s_SparsestSubdivision() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_SparsestSubdivision", ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>();
}
inline void UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences* UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences::ProbeVolumeDebugColorPreferences() {}
