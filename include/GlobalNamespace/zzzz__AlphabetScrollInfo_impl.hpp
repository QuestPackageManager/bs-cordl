#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AlphabetScrollInfo__Data._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AlphabetScrollInfo__Data::*)(char16_t, int32_t)>(
    &::GlobalNamespace::__AlphabetScrollInfo__Data::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23dbe94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AlphabetScrollInfo__Data*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr char16_t& GlobalNamespace::__AlphabetScrollInfo__Data::__cordl_internal_get_character() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___character;
}
constexpr char16_t const& GlobalNamespace::__AlphabetScrollInfo__Data::__cordl_internal_get_character() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___character;
}
constexpr void GlobalNamespace::__AlphabetScrollInfo__Data::__cordl_internal_set_character(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___character = value;
}
constexpr int32_t& GlobalNamespace::__AlphabetScrollInfo__Data::__cordl_internal_get_cellIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellIdx;
}
constexpr int32_t const& GlobalNamespace::__AlphabetScrollInfo__Data::__cordl_internal_get_cellIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellIdx;
}
constexpr void GlobalNamespace::__AlphabetScrollInfo__Data::__cordl_internal_set_cellIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellIdx = value;
}
inline ::GlobalNamespace::__AlphabetScrollInfo__Data* GlobalNamespace::__AlphabetScrollInfo__Data::New_ctor(char16_t character, int32_t cellIdx) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AlphabetScrollInfo__Data*>(character, cellIdx));
}
inline void GlobalNamespace::__AlphabetScrollInfo__Data::_ctor(char16_t character, int32_t cellIdx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AlphabetScrollInfo__Data*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, character, cellIdx);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AlphabetScrollInfo__Data::__AlphabetScrollInfo__Data() {}
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlphabetScrollInfo::*)()>(&::GlobalNamespace::AlphabetScrollInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dbe8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::AlphabetScrollInfo* GlobalNamespace::AlphabetScrollInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AlphabetScrollInfo*>());
}
inline void GlobalNamespace::AlphabetScrollInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlphabetScrollInfo::AlphabetScrollInfo() {}
