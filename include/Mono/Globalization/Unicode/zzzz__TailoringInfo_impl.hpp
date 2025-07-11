#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/TailoringInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__TailoringInfo_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::TailoringInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::TailoringInfo::*)(int32_t, int32_t, int32_t, bool)>(
    &::Mono::Globalization::Unicode::TailoringInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3c582d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::TailoringInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_get_LCID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LCID;
}
constexpr int32_t const& Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_get_LCID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LCID;
}
constexpr void Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_set_LCID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LCID = value;
}
constexpr int32_t& Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_get_TailoringIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TailoringIndex;
}
constexpr int32_t const& Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_get_TailoringIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TailoringIndex;
}
constexpr void Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_set_TailoringIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TailoringIndex = value;
}
constexpr int32_t& Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_get_TailoringCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TailoringCount;
}
constexpr int32_t const& Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_get_TailoringCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TailoringCount;
}
constexpr void Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_set_TailoringCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TailoringCount = value;
}
constexpr bool& Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_get_FrenchSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FrenchSort;
}
constexpr bool const& Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_get_FrenchSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FrenchSort;
}
constexpr void Mono::Globalization::Unicode::TailoringInfo::__cordl_internal_set_FrenchSort(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FrenchSort = value;
}
inline void Mono::Globalization::Unicode::TailoringInfo::_ctor(int32_t lcid, int32_t tailoringIndex, int32_t tailoringCount, bool frenchSort) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::TailoringInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lcid, tailoringIndex, tailoringCount, frenchSort);
}
inline ::Mono::Globalization::Unicode::TailoringInfo* Mono::Globalization::Unicode::TailoringInfo::New_ctor(int32_t lcid, int32_t tailoringIndex, int32_t tailoringCount, bool frenchSort) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Globalization::Unicode::TailoringInfo*>(lcid, tailoringIndex, tailoringCount, frenchSort));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::TailoringInfo::TailoringInfo() {}
