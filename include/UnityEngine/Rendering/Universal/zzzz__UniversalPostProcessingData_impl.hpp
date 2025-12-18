#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalPostProcessingData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalPostProcessingData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalPostProcessingData.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalPostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalPostProcessingData::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66be8b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalPostProcessingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalPostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalPostProcessingData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66be8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_isEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_isEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_isEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEnabled = value;
}
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_gradingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gradingMode;
}
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_gradingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gradingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_gradingMode(::UnityEngine::Rendering::Universal::ColorGradingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gradingMode = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_lutSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutSize;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_lutSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutSize;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_lutSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lutSize = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_useFastSRGBLinearConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFastSRGBLinearConversion;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_useFastSRGBLinearConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFastSRGBLinearConversion;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_useFastSRGBLinearConversion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useFastSRGBLinearConversion = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_supportScreenSpaceLensFlare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportScreenSpaceLensFlare;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_supportScreenSpaceLensFlare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportScreenSpaceLensFlare;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_supportScreenSpaceLensFlare(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportScreenSpaceLensFlare = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_supportDataDrivenLensFlare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportDataDrivenLensFlare;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_supportDataDrivenLensFlare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportDataDrivenLensFlare;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_supportDataDrivenLensFlare(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportDataDrivenLensFlare = value;
}
inline void UnityEngine::Rendering::Universal::UniversalPostProcessingData::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalPostProcessingData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* UnityEngine::Rendering::Universal::UniversalPostProcessingData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalPostProcessingData::UniversalPostProcessingData() {}
