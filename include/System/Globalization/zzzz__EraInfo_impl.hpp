#pragma once
// IWYU pragma private; include "System/Globalization/EraInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__EraInfo_def.hpp"
//  Writing Method size for method: ::System::Globalization::EraInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::EraInfo::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Globalization::EraInfo::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3d9ec84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EraInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EraInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Globalization::EraInfo::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::StringW, ::StringW, ::StringW)>(&::System::Globalization::EraInfo::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3d9ed68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EraInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Globalization::EraInfo::__cordl_internal_get_era() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___era;
}
constexpr int32_t const& System::Globalization::EraInfo::__cordl_internal_get_era() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___era;
}
constexpr void System::Globalization::EraInfo::__cordl_internal_set_era(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___era = value;
}
constexpr int64_t& System::Globalization::EraInfo::__cordl_internal_get_ticks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ticks;
}
constexpr int64_t const& System::Globalization::EraInfo::__cordl_internal_get_ticks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ticks;
}
constexpr void System::Globalization::EraInfo::__cordl_internal_set_ticks(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ticks = value;
}
constexpr int32_t& System::Globalization::EraInfo::__cordl_internal_get_yearOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yearOffset;
}
constexpr int32_t const& System::Globalization::EraInfo::__cordl_internal_get_yearOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yearOffset;
}
constexpr void System::Globalization::EraInfo::__cordl_internal_set_yearOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yearOffset = value;
}
constexpr int32_t& System::Globalization::EraInfo::__cordl_internal_get_minEraYear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minEraYear;
}
constexpr int32_t const& System::Globalization::EraInfo::__cordl_internal_get_minEraYear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minEraYear;
}
constexpr void System::Globalization::EraInfo::__cordl_internal_set_minEraYear(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minEraYear = value;
}
constexpr int32_t& System::Globalization::EraInfo::__cordl_internal_get_maxEraYear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxEraYear;
}
constexpr int32_t const& System::Globalization::EraInfo::__cordl_internal_get_maxEraYear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxEraYear;
}
constexpr void System::Globalization::EraInfo::__cordl_internal_set_maxEraYear(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxEraYear = value;
}
constexpr ::StringW& System::Globalization::EraInfo::__cordl_internal_get_eraName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eraName;
}
constexpr ::StringW const& System::Globalization::EraInfo::__cordl_internal_get_eraName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eraName;
}
constexpr void System::Globalization::EraInfo::__cordl_internal_set_eraName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eraName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::EraInfo::__cordl_internal_get_abbrevEraName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___abbrevEraName;
}
constexpr ::StringW const& System::Globalization::EraInfo::__cordl_internal_get_abbrevEraName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___abbrevEraName;
}
constexpr void System::Globalization::EraInfo::__cordl_internal_set_abbrevEraName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___abbrevEraName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::EraInfo::__cordl_internal_get_englishEraName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___englishEraName;
}
constexpr ::StringW const& System::Globalization::EraInfo::__cordl_internal_get_englishEraName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___englishEraName;
}
constexpr void System::Globalization::EraInfo::__cordl_internal_set_englishEraName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___englishEraName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Globalization::EraInfo::_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EraInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear);
}
inline void System::Globalization::EraInfo::_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear, ::StringW eraName,
                                                  ::StringW abbrevEraName, ::StringW englishEraName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EraInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear, eraName, abbrevEraName, englishEraName);
}
inline ::System::Globalization::EraInfo* System::Globalization::EraInfo::New_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear,
                                                                                  int32_t maxEraYear) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Globalization::EraInfo*>(era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear));
}
inline ::System::Globalization::EraInfo* System::Globalization::EraInfo::New_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear,
                                                                                  int32_t maxEraYear, ::StringW eraName, ::StringW abbrevEraName, ::StringW englishEraName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Globalization::EraInfo*>(era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear, eraName, abbrevEraName, englishEraName));
}
// Ctor Parameters []
constexpr ::System::Globalization::EraInfo::EraInfo() {}
