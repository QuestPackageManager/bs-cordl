#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/CollabOperationAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__CollabOperationAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::CollabOperationAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::CollabOperationAnalytic::*)()>(
    &::UnityEditor::Analytics::CollabOperationAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bf06a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::CollabOperationAnalytic*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::CollabOperationAnalytic.CreateCollabOperationAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::CollabOperationAnalytic* (*)()>(
    &::UnityEditor::Analytics::CollabOperationAnalytic::CreateCollabOperationAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf0718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::CollabOperationAnalytic*>::get(),
                                                                               "CreateCollabOperationAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_category() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr ::StringW const& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_category() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr void UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_set_category(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___category)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_operation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr ::StringW const& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_operation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr void UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_set_operation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___operation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::StringW const& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_set_result(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_start_ts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start_ts;
}
constexpr int64_t const& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_start_ts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start_ts;
}
constexpr void UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_set_start_ts(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___start_ts = value;
}
constexpr int64_t& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr int64_t const& UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void UnityEditor::Analytics::CollabOperationAnalytic::__cordl_internal_set_duration(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
inline void UnityEditor::Analytics::CollabOperationAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::CollabOperationAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::CollabOperationAnalytic* UnityEditor::Analytics::CollabOperationAnalytic::CreateCollabOperationAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::CollabOperationAnalytic*>::get(),
                                                                             "CreateCollabOperationAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::CollabOperationAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::CollabOperationAnalytic* UnityEditor::Analytics::CollabOperationAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::CollabOperationAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::CollabOperationAnalytic::CollabOperationAnalytic() {}
