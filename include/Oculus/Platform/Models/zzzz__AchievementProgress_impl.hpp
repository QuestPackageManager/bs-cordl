#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\AchievementProgress.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgress_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AchievementProgress._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::AchievementProgress::*)(::System::IntPtr)>(&::Oculus::Platform::Models::AchievementProgress::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ded69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AchievementProgress*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
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
  this->___Bitfield = value;
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
  this->___Name = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AchievementProgress*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AchievementProgress* Oculus::Platform::Models::AchievementProgress::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::AchievementProgress*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AchievementProgress::AchievementProgress() {}
