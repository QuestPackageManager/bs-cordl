#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingStats._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingStats::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingStats::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25b5b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingStats*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr uint32_t& Oculus::Platform::Models::MatchmakingStats::__get_DrawCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DrawCount;
}
constexpr uint32_t const& Oculus::Platform::Models::MatchmakingStats::__get_DrawCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DrawCount;
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_DrawCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DrawCount = value;
}
constexpr uint32_t& Oculus::Platform::Models::MatchmakingStats::__get_LossCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LossCount;
}
constexpr uint32_t const& Oculus::Platform::Models::MatchmakingStats::__get_LossCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LossCount;
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_LossCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LossCount = value;
}
constexpr uint32_t& Oculus::Platform::Models::MatchmakingStats::__get_SkillLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SkillLevel;
}
constexpr uint32_t const& Oculus::Platform::Models::MatchmakingStats::__get_SkillLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SkillLevel;
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_SkillLevel(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SkillLevel = value;
}
constexpr double_t& Oculus::Platform::Models::MatchmakingStats::__get_SkillMean() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SkillMean;
}
constexpr double_t const& Oculus::Platform::Models::MatchmakingStats::__get_SkillMean() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SkillMean;
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_SkillMean(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SkillMean = value;
}
constexpr double_t& Oculus::Platform::Models::MatchmakingStats::__get_SkillStandardDeviation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SkillStandardDeviation;
}
constexpr double_t const& Oculus::Platform::Models::MatchmakingStats::__get_SkillStandardDeviation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SkillStandardDeviation;
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_SkillStandardDeviation(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SkillStandardDeviation = value;
}
constexpr uint32_t& Oculus::Platform::Models::MatchmakingStats::__get_WinCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WinCount;
}
constexpr uint32_t const& Oculus::Platform::Models::MatchmakingStats::__get_WinCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WinCount;
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_WinCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___WinCount = value;
}
inline ::Oculus::Platform::Models::MatchmakingStats* Oculus::Platform::Models::MatchmakingStats::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::MatchmakingStats*>(o));
}
inline void Oculus::Platform::Models::MatchmakingStats::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingStats*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingStats::MatchmakingStats() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
