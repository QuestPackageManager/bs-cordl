#pragma once
// IWYU pragma private; include "GlobalNamespace/ProfanityFilter.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter_TrieNode.AddWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfanityFilter_TrieNode::*)(::StringW, int32_t)>(&::GlobalNamespace::ProfanityFilter_TrieNode::AddWord)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x333da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter_TrieNode*>(), { "AddWord", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter_TrieNode.IsMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProfanityFilter_TrieNode::*)(::StringW, int32_t)>(&::GlobalNamespace::ProfanityFilter_TrieNode::IsMatch)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x333df98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter_TrieNode*>(), { "IsMatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter_TrieNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfanityFilter_TrieNode::*)()>(&::GlobalNamespace::ProfanityFilter_TrieNode::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x333da6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter_TrieNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::ProfanityFilter_TrieNode*>*& GlobalNamespace::ProfanityFilter_TrieNode::__cordl_internal_get__children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::ProfanityFilter_TrieNode*>* const&
GlobalNamespace::ProfanityFilter_TrieNode::__cordl_internal_get__children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr void GlobalNamespace::ProfanityFilter_TrieNode::__cordl_internal_set__children(::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::ProfanityFilter_TrieNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____children = value;
}
constexpr int32_t& GlobalNamespace::ProfanityFilter_TrieNode::__cordl_internal_get__shortestWord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortestWord;
}
constexpr int32_t const& GlobalNamespace::ProfanityFilter_TrieNode::__cordl_internal_get__shortestWord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortestWord;
}
constexpr void GlobalNamespace::ProfanityFilter_TrieNode::__cordl_internal_set__shortestWord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shortestWord = value;
}
inline void GlobalNamespace::ProfanityFilter_TrieNode::AddWord(::StringW word, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter_TrieNode*>(), { "AddWord", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, word, index);
}
inline bool GlobalNamespace::ProfanityFilter_TrieNode::IsMatch(::StringW word, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter_TrieNode*>(), { "IsMatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, word, index);
}
inline void GlobalNamespace::ProfanityFilter_TrieNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter_TrieNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProfanityFilter_TrieNode* GlobalNamespace::ProfanityFilter_TrieNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProfanityFilter_TrieNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProfanityFilter_TrieNode::ProfanityFilter_TrieNode() {}
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::*)(int32_t)>(
    &::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x333e124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333e168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x333e16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4.System_Collections_Generic_IEnumerator_System_Char__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerator_System_Char__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x333e204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Char>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x333e20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x333e244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4.System_Collections_Generic_IEnumerable_System_Char__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>* (::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerable_System_Char__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x333e268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::*)()>(
    &::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333e300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr char16_t& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr char16_t const& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_set___2__current(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr char16_t& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr char16_t const& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_set_c(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr char16_t& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get___3__c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__c;
}
constexpr char16_t const& GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_get___3__c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__c;
}
constexpr void GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::__cordl_internal_set___3__c(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__c = value;
}
inline void GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline char16_t GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerator_System_Char__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Char>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerable_System_Char__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<char16_t>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4* GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::operator ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::i___System__Collections__Generic__IEnumerable_1_char16_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::operator ::System::Collections::Generic::IEnumerator_1<char16_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::i___System__Collections__Generic__IEnumerator_1_char16_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4::ProfanityFilter__GetLookalikeLetters_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfanityFilter::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::ProfanityFilter::_ctor)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x333d770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter.IsProfane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProfanityFilter::*)(::StringW)>(&::GlobalNamespace::ProfanityFilter::IsProfane)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x333df30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter*>(), { "IsProfane", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter.GetLookalikeLetters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>* (*)(char16_t)>(&::GlobalNamespace::ProfanityFilter::GetLookalikeLetters)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x333e0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter*>(), { "GetLookalikeLetters", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter.GetLeetEquivalent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::GlobalNamespace::ProfanityFilter::GetLeetEquivalent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x333e144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter*>(), { "GetLeetEquivalent", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProfanityFilter_TrieNode*& GlobalNamespace::ProfanityFilter::__cordl_internal_get__trie() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trie;
}
constexpr ::GlobalNamespace::ProfanityFilter_TrieNode* const& GlobalNamespace::ProfanityFilter::__cordl_internal_get__trie() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trie;
}
constexpr void GlobalNamespace::ProfanityFilter::__cordl_internal_set__trie(::GlobalNamespace::ProfanityFilter_TrieNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trie = value;
}
inline void GlobalNamespace::ProfanityFilter::_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* wordList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordList);
}
inline bool GlobalNamespace::ProfanityFilter::IsProfane(::StringW word) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter*>(), { "IsProfane", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, word);
}
inline ::System::Collections::Generic::IEnumerable_1<char16_t>* GlobalNamespace::ProfanityFilter::GetLookalikeLetters(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter*>(), { "GetLookalikeLetters", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<char16_t>*>(nullptr, ___internal_method, c);
}
inline char16_t GlobalNamespace::ProfanityFilter::GetLeetEquivalent(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfanityFilter*>(), { "GetLeetEquivalent", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline ::GlobalNamespace::ProfanityFilter* GlobalNamespace::ProfanityFilter::New_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* wordList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProfanityFilter*>(wordList));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProfanityFilter::ProfanityFilter() {}
