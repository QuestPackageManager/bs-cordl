#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayAdditionalInformation.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayAdditionalInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayAdditionalInformation::*)(
    ::StringW, bool, bool, ::GlobalNamespace::PlaymodeOptions, ::StringW)>(&::GlobalNamespace::GameplayAdditionalInformation::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x360f9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayAdditionalInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlaymodeOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr ::StringW const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_useTestNoteCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useTestNoteCutSoundEffects;
}
constexpr bool const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_useTestNoteCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useTestNoteCutSoundEffects;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_useTestNoteCutSoundEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useTestNoteCutSoundEffects = value;
}
constexpr bool& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_startPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr bool const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_startPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_startPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPaused = value;
}
constexpr ::GlobalNamespace::PlaymodeOptions& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_playmodeOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playmodeOptions;
}
constexpr ::GlobalNamespace::PlaymodeOptions const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_playmodeOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playmodeOptions;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_playmodeOptions(::GlobalNamespace::PlaymodeOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playmodeOptions = value;
}
constexpr ::StringW& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_recordingRelativePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingRelativePath;
}
constexpr ::StringW const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_recordingRelativePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingRelativePath;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_recordingRelativePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recordingRelativePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameplayAdditionalInformation::_ctor(::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused, ::GlobalNamespace::PlaymodeOptions playmodeOptions,
                                                                  ::StringW recordingRelativePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayAdditionalInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlaymodeOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, backButtonText, useTestNoteCutSoundEffects, startPaused, playmodeOptions, recordingRelativePath);
}
inline ::GlobalNamespace::GameplayAdditionalInformation* GlobalNamespace::GameplayAdditionalInformation::New_ctor(::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused,
                                                                                                                  ::GlobalNamespace::PlaymodeOptions playmodeOptions, ::StringW recordingRelativePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameplayAdditionalInformation*>(backButtonText, useTestNoteCutSoundEffects, startPaused, playmodeOptions, recordingRelativePath));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayAdditionalInformation::GameplayAdditionalInformation() {}
