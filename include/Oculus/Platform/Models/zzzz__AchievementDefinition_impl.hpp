#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\AchievementDefinition.hpp"
#include "Oculus/Platform/zzzz__AchievementType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinition_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AchievementDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::AchievementDefinition::*)(::System::IntPtr)>(&::Oculus::Platform::Models::AchievementDefinition::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ded60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AchievementDefinition*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::AchievementType& Oculus::Platform::Models::AchievementDefinition::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::Oculus::Platform::AchievementType const& Oculus::Platform::Models::AchievementDefinition::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Oculus::Platform::Models::AchievementDefinition::__cordl_internal_set_Type(::Oculus::Platform::AchievementType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::StringW& Oculus::Platform::Models::AchievementDefinition::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Oculus::Platform::Models::AchievementDefinition::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Oculus::Platform::Models::AchievementDefinition::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr uint32_t& Oculus::Platform::Models::AchievementDefinition::__cordl_internal_get_BitfieldLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BitfieldLength;
}
constexpr uint32_t const& Oculus::Platform::Models::AchievementDefinition::__cordl_internal_get_BitfieldLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BitfieldLength;
}
constexpr void Oculus::Platform::Models::AchievementDefinition::__cordl_internal_set_BitfieldLength(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BitfieldLength = value;
}
constexpr uint64_t& Oculus::Platform::Models::AchievementDefinition::__cordl_internal_get_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr uint64_t const& Oculus::Platform::Models::AchievementDefinition::__cordl_internal_get_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr void Oculus::Platform::Models::AchievementDefinition::__cordl_internal_set_Target(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Target = value;
}
inline void Oculus::Platform::Models::AchievementDefinition::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AchievementDefinition*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AchievementDefinition* Oculus::Platform::Models::AchievementDefinition::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::AchievementDefinition*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AchievementDefinition::AchievementDefinition() {}
