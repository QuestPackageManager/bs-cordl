#pragma once
#include "Oculus/Platform/zzzz__AchievementType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinition_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AchievementDefinition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AchievementDefinition::*)(void*)>(
    &::Oculus::Platform::Models::AchievementDefinition::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2703740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementDefinition*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::Oculus::Platform::Models::AchievementDefinition* Oculus::Platform::Models::AchievementDefinition::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AchievementDefinition*>(o));
}
inline void Oculus::Platform::Models::AchievementDefinition::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementDefinition*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AchievementDefinition::AchievementDefinition() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
