#pragma once
// IWYU pragma private; include "GlobalNamespace/AlphabetScrollInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollInfo_Data._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlphabetScrollInfo_Data::*)(char16_t, int32_t)>(
    &::GlobalNamespace::AlphabetScrollInfo_Data::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x563b200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo_Data*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr char16_t& GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_get_character() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___character;
}
constexpr char16_t const& GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_get_character() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___character;
}
constexpr void GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_set_character(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___character = value;
}
constexpr int32_t& GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_get_cellIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellIdx;
}
constexpr int32_t const& GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_get_cellIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellIdx;
}
constexpr void GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_set_cellIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellIdx = value;
}
inline void GlobalNamespace::AlphabetScrollInfo_Data::_ctor(char16_t character, int32_t cellIdx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo_Data*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, character, cellIdx);
}
inline ::GlobalNamespace::AlphabetScrollInfo_Data* GlobalNamespace::AlphabetScrollInfo_Data::New_ctor(char16_t character, int32_t cellIdx) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AlphabetScrollInfo_Data*>(character, cellIdx));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlphabetScrollInfo_Data::AlphabetScrollInfo_Data() {}
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlphabetScrollInfo::*)()>(&::GlobalNamespace::AlphabetScrollInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x563b1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AlphabetScrollInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AlphabetScrollInfo* GlobalNamespace::AlphabetScrollInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AlphabetScrollInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlphabetScrollInfo::AlphabetScrollInfo() {}
