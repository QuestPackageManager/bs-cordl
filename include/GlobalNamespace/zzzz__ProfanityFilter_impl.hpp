#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ProfanityFilter_def.hpp"
#include "GlobalNamespace/zzzz__ProfanityFilter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter__TrieNode.AddWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter__TrieNode::*)(::StringW, int32_t)>(
    &::GlobalNamespace::__ProfanityFilter__TrieNode::AddWord)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xec57c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(), "AddWord", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter__TrieNode.IsMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ProfanityFilter__TrieNode::*)(::StringW, int32_t)>(
    &::GlobalNamespace::__ProfanityFilter__TrieNode::IsMatch)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xec5cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(), "IsMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter__TrieNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter__TrieNode::*)()>(&::GlobalNamespace::__ProfanityFilter__TrieNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xec57b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>*& GlobalNamespace::__ProfanityFilter__TrieNode::__cordl_internal_get__children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>*> const&
GlobalNamespace::__ProfanityFilter__TrieNode::__cordl_internal_get__children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr void
GlobalNamespace::__ProfanityFilter__TrieNode::__cordl_internal_set__children(::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____children)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__ProfanityFilter__TrieNode::__cordl_internal_get__shortestWord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortestWord;
}
constexpr int32_t const& GlobalNamespace::__ProfanityFilter__TrieNode::__cordl_internal_get__shortestWord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortestWord;
}
constexpr void GlobalNamespace::__ProfanityFilter__TrieNode::__cordl_internal_set__shortestWord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shortestWord = value;
}
inline void GlobalNamespace::__ProfanityFilter__TrieNode::AddWord(::StringW word, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(), "AddWord", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, word, index);
}
inline bool GlobalNamespace::__ProfanityFilter__TrieNode::IsMatch(::StringW word, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(), "IsMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, word, index);
}
inline ::GlobalNamespace::__ProfanityFilter__TrieNode* GlobalNamespace::__ProfanityFilter__TrieNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ProfanityFilter__TrieNode*>());
}
inline void GlobalNamespace::__ProfanityFilter__TrieNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ProfanityFilter__TrieNode::__ProfanityFilter__TrieNode() {}
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)(int32_t)>(
    &::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xec5edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xec5f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xec5f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_Generic_IEnumerator_System_Char__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerator_System_Char__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xec6024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Char>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xec602c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xec606c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_Generic_IEnumerable_System_Char__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>* (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(
        &::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerable_System_Char__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xec60c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                    "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xec616c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::i___System__Collections__Generic__IEnumerable_1_char16_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::Collections::Generic::IEnumerator_1<char16_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::i___System__Collections__Generic__IEnumerator_1_char16_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr char16_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr char16_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_set___2__current(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr char16_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr char16_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_set_c(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr char16_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get___3__c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__c;
}
constexpr char16_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_get___3__c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__c;
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__cordl_internal_set___3__c(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__c = value;
}
inline ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>(__1__state));
}
inline void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline char16_t GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerator_System_Char__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Char>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerable_System_Char__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<char16_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__ProfanityFilter___GetLookalikeLetters_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProfanityFilter::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::ProfanityFilter::_ctor)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xec5470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter.IsProfane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ProfanityFilter::*)(::StringW)>(&::GlobalNamespace::ProfanityFilter::IsProfane)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xec5c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(), "IsProfane", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter.GetLookalikeLetters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>* (*)(char16_t)>(
    &::GlobalNamespace::ProfanityFilter::GetLookalikeLetters)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xec5e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(), "GetLookalikeLetters", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter.GetLeetEquivalent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&::GlobalNamespace::ProfanityFilter::GetLeetEquivalent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xec5f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(), "GetLeetEquivalent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__ProfanityFilter__TrieNode*& GlobalNamespace::ProfanityFilter::__cordl_internal_get__trie() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trie;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ProfanityFilter__TrieNode*> const& GlobalNamespace::ProfanityFilter::__cordl_internal_get__trie() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trie;
}
constexpr void GlobalNamespace::ProfanityFilter::__cordl_internal_set__trie(::GlobalNamespace::__ProfanityFilter__TrieNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trie)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ProfanityFilter* GlobalNamespace::ProfanityFilter::New_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* wordList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ProfanityFilter*>(wordList));
}
inline void GlobalNamespace::ProfanityFilter::_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* wordList) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, wordList);
}
inline bool GlobalNamespace::ProfanityFilter::IsProfane(::StringW word) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(), "IsProfane", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, word);
}
inline ::System::Collections::Generic::IEnumerable_1<char16_t>* GlobalNamespace::ProfanityFilter::GetLookalikeLetters(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(), "GetLookalikeLetters", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<char16_t>*, false>(nullptr, ___internal_method, c);
}
inline char16_t GlobalNamespace::ProfanityFilter::GetLeetEquivalent(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(), "GetLeetEquivalent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProfanityFilter::ProfanityFilter() {}
