#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgress_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AchievementProgress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AchievementProgress::*)(void*)>(
    &::Oculus::Platform::Models::AchievementProgress::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2703a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementProgress*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::AchievementProgress::__get_Bitfield() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bitfield;
}
constexpr ::StringW const& Oculus::Platform::Models::AchievementProgress::__get_Bitfield() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bitfield;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__set_Bitfield(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Bitfield)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Oculus::Platform::Models::AchievementProgress::__get_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr uint64_t const& Oculus::Platform::Models::AchievementProgress::__get_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__set_Count(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Count = value;
}
constexpr bool& Oculus::Platform::Models::AchievementProgress::__get_IsUnlocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsUnlocked;
}
constexpr bool const& Oculus::Platform::Models::AchievementProgress::__get_IsUnlocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsUnlocked;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__set_IsUnlocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsUnlocked = value;
}
constexpr ::StringW& Oculus::Platform::Models::AchievementProgress::__get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Oculus::Platform::Models::AchievementProgress::__get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Oculus::Platform::Models::AchievementProgress::__get_UnlockTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnlockTime;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::AchievementProgress::__get_UnlockTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnlockTime;
}
constexpr void Oculus::Platform::Models::AchievementProgress::__set_UnlockTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UnlockTime = value;
}
inline ::Oculus::Platform::Models::AchievementProgress* Oculus::Platform::Models::AchievementProgress::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AchievementProgress*>(o));
}
inline void Oculus::Platform::Models::AchievementProgress::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementProgress*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AchievementProgress::AchievementProgress() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
