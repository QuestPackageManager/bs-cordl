#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/PlatformInitParams.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformLogger_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IProductDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IRichPresenceDefinition_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformInitParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::PlatformInitParams::*)()>(
    &::OculusStudios::Platform::Core::PlatformInitParams::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d80894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformInitParams*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint64_t& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_appId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appId;
}
constexpr uint64_t const& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_appId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appId;
}
constexpr void OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_set_appId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appId = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>*&
OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_destinationDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationDefinitions;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* const&
OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_destinationDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationDefinitions;
}
constexpr void OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_set_destinationDefinitions(
    ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IProductDefinition*>*&
OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_productDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productDefinitions;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IProductDefinition*>* const&
OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_productDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productDefinitions;
}
constexpr void OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_set_productDefinitions(
    ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IProductDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___productDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_achievementIdDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementIdDefinitions;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_achievementIdDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementIdDefinitions;
}
constexpr void OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_set_achievementIdDefinitions(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___achievementIdDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_graphApiUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphApiUrl;
}
constexpr ::StringW const& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_graphApiUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphApiUrl;
}
constexpr void OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_set_graphApiUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___graphApiUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<uint64_t>& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_graphAppId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphAppId;
}
constexpr ::System::Nullable_1<uint64_t> const& OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_get_graphAppId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphAppId;
}
constexpr void OculusStudios::Platform::Core::PlatformInitParams::__cordl_internal_set_graphAppId(::System::Nullable_1<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graphAppId = value;
}
inline void OculusStudios::Platform::Core::PlatformInitParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformInitParams*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::PlatformInitParams* OculusStudios::Platform::Core::PlatformInitParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::PlatformInitParams*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::PlatformInitParams::PlatformInitParams() {}
