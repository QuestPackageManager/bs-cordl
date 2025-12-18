#pragma once
// IWYU pragma private; include "System/ByteMatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ByteMatcher_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__TermInfoStrings_def.hpp"
//  Writing Method size for method: ::System::ByteMatcher.AddMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ByteMatcher::*)(::System::TermInfoStrings, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::ByteMatcher::AddMapping)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5aed060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), "AddMapping", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoStrings>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher.Sort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ByteMatcher::*)()>(&::System::ByteMatcher::Sort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aed164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), "Sort",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher.StartsWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ByteMatcher::*)(int32_t)>(&::System::ByteMatcher::StartsWith)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5aea9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), "StartsWith", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher.Match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::TermInfoStrings (::System::ByteMatcher::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ByRef<int32_t>)>(&::System::ByteMatcher::Match)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5aeaa10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), "Match", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ByteMatcher::*)()>(&::System::ByteMatcher::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5aecf98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::ByteMatcher::__cordl_internal_get_map() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___map;
}
constexpr ::System::Collections::Hashtable* const& System::ByteMatcher::__cordl_internal_get_map() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___map;
}
constexpr void System::ByteMatcher::__cordl_internal_set_map(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___map)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::ByteMatcher::__cordl_internal_get_starts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___starts;
}
constexpr ::System::Collections::Hashtable* const& System::ByteMatcher::__cordl_internal_get_starts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___starts;
}
constexpr void System::ByteMatcher::__cordl_internal_set_starts(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___starts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ByteMatcher::AddMapping(::System::TermInfoStrings key, ::ArrayW<uint8_t, ::Array<uint8_t>*> val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), "AddMapping", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoStrings>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, val);
}
inline void System::ByteMatcher::Sort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), "Sort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::ByteMatcher::StartsWith(int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), "StartsWith", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline ::System::TermInfoStrings System::ByteMatcher::Match(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t offset, int32_t length, ::ByRef<int32_t> used) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), "Match", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TermInfoStrings, false>(this, ___internal_method, buffer, offset, length, used);
}
inline void System::ByteMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ByteMatcher* System::ByteMatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ByteMatcher*>());
}
// Ctor Parameters []
constexpr ::System::ByteMatcher::ByteMatcher() {}
