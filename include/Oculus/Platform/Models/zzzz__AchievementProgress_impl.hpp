#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AchievementProgress.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgress_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AchievementProgress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AchievementProgress::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::AchievementProgress::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3f9c744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementProgress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_Bitfield() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bitfield;
}
constexpr ::StringW const& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_Bitfield() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bitfield;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__cordl_internal_set_Bitfield(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Bitfield)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr uint64_t const& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__cordl_internal_set_Count(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Count = value;
}
constexpr bool& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_IsUnlocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsUnlocked;
}
constexpr bool const& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_IsUnlocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsUnlocked;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__cordl_internal_set_IsUnlocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsUnlocked = value;
}
constexpr ::StringW& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_UnlockTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnlockTime;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::AchievementProgress::__cordl_internal_get_UnlockTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnlockTime;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__cordl_internal_set_UnlockTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UnlockTime = value;
}
inline void Oculus::Platform::Models::AchievementProgress::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementProgress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AchievementProgress* Oculus::Platform::Models::AchievementProgress::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AchievementProgress*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AchievementProgress::AchievementProgress() {}
