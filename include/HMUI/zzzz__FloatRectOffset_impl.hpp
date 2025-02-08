#pragma once
// IWYU pragma private; include "HMUI/FloatRectOffset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__FloatRectOffset_def.hpp"
//  Writing Method size for method: ::HMUI::FloatRectOffset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FloatRectOffset::*)()>(&::HMUI::FloatRectOffset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f43ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FloatRectOffset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::FloatRectOffset::__cordl_internal_get_left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
constexpr float_t const& HMUI::FloatRectOffset::__cordl_internal_get_left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
constexpr void HMUI::FloatRectOffset::__cordl_internal_set_left(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___left = value;
}
constexpr float_t& HMUI::FloatRectOffset::__cordl_internal_get_right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr float_t const& HMUI::FloatRectOffset::__cordl_internal_get_right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr void HMUI::FloatRectOffset::__cordl_internal_set_right(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___right = value;
}
constexpr float_t& HMUI::FloatRectOffset::__cordl_internal_get_top() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr float_t const& HMUI::FloatRectOffset::__cordl_internal_get_top() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr void HMUI::FloatRectOffset::__cordl_internal_set_top(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___top = value;
}
constexpr float_t& HMUI::FloatRectOffset::__cordl_internal_get_bottom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottom;
}
constexpr float_t const& HMUI::FloatRectOffset::__cordl_internal_get_bottom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottom;
}
constexpr void HMUI::FloatRectOffset::__cordl_internal_set_bottom(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottom = value;
}
inline void HMUI::FloatRectOffset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FloatRectOffset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::FloatRectOffset* HMUI::FloatRectOffset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::FloatRectOffset*>());
}
// Ctor Parameters []
constexpr ::HMUI::FloatRectOffset::FloatRectOffset() {}
