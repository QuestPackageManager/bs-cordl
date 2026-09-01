#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\HttpHeaders.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderValueCollection_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders_HeaderBucket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders_HeaderBucket::*)(::System::Object*, ::System::Func_2<::System::Object*, ::StringW>*)>(
    &::System::Net::Http::Headers::HttpHeaders_HeaderBucket::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e9c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<::System::Object*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders_HeaderBucket.get_HasStringValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpHeaders_HeaderBucket::*)()>(
    &::System::Net::Http::Headers::HttpHeaders_HeaderBucket::get_HasStringValues)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60ea4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(), { "get_HasStringValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders_HeaderBucket.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::System::Net::Http::Headers::HttpHeaders_HeaderBucket::*)()>(
    &::System::Net::Http::Headers::HttpHeaders_HeaderBucket::get_Values)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e9c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders_HeaderBucket.set_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders_HeaderBucket::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::System::Net::Http::Headers::HttpHeaders_HeaderBucket::set_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ea530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(),
                                                                                           { "set_Values", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders_HeaderBucket.ParsedToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::HttpHeaders_HeaderBucket::*)()>(
    &::System::Net::Http::Headers::HttpHeaders_HeaderBucket::ParsedToString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60ea498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(), { "ParsedToString", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Net::Http::Headers::HttpHeaders_HeaderBucket::__cordl_internal_get_Parsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parsed;
}
constexpr ::System::Object* const& System::Net::Http::Headers::HttpHeaders_HeaderBucket::__cordl_internal_get_Parsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parsed;
}
constexpr void System::Net::Http::Headers::HttpHeaders_HeaderBucket::__cordl_internal_set_Parsed(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Parsed = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Net::Http::Headers::HttpHeaders_HeaderBucket::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Net::Http::Headers::HttpHeaders_HeaderBucket::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr void System::Net::Http::Headers::HttpHeaders_HeaderBucket::__cordl_internal_set_values(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___values = value;
}
constexpr ::System::Func_2<::System::Object*, ::StringW>*& System::Net::Http::Headers::HttpHeaders_HeaderBucket::__cordl_internal_get_CustomToString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomToString;
}
constexpr ::System::Func_2<::System::Object*, ::StringW>* const& System::Net::Http::Headers::HttpHeaders_HeaderBucket::__cordl_internal_get_CustomToString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomToString;
}
constexpr void System::Net::Http::Headers::HttpHeaders_HeaderBucket::__cordl_internal_set_CustomToString(::System::Func_2<::System::Object*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CustomToString = value;
}
inline void System::Net::Http::Headers::HttpHeaders_HeaderBucket::_ctor(::System::Object* parsed, ::System::Func_2<::System::Object*, ::StringW>* converter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<::System::Object*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parsed, converter);
}
inline bool System::Net::Http::Headers::HttpHeaders_HeaderBucket::get_HasStringValues() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(), { "get_HasStringValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::HttpHeaders_HeaderBucket::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpHeaders_HeaderBucket::set_Values(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(),
                                                                                         { "set_Values", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::Http::Headers::HttpHeaders_HeaderBucket::ParsedToString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(), { "ParsedToString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::HttpHeaders_HeaderBucket* System::Net::Http::Headers::HttpHeaders_HeaderBucket::New_ctor(::System::Object* parsed,
                                                                                                                              ::System::Func_2<::System::Object*, ::StringW>* converter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(parsed, converter));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpHeaders_HeaderBucket::HttpHeaders_HeaderBucket() {}
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::*)(int32_t)>(
    &::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e9eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::*)()>(
    &::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60ea538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::*)()>(
    &::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x60ea594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::*)()>(
    &::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__m__Finally1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60ea900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> (
    ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::*)()>(
    &::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::
        System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60ea948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(),
            { "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Collections.Generic.IEnumerable<System.String>>>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::*)()>(
    &::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60ea954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::*)()>(
    &::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60ea98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>&
System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> const&
System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_set___2__current(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::System::Net::Http::Headers::HttpHeaders*& System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::System::Net::Http::Headers::HttpHeaders* const& System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_set___4__this(::System::Net::Http::Headers::HttpHeaders* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>&
System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*> const&
System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::
    System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(),
          { "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Collections.Generic.IEnumerable<System.String>>>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19* System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
constexpr System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*
System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::
    i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Collections__Generic__IEnumerable_1___StringW____() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19::HttpHeaders__GetEnumerator_d__19() {}
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders::*)()>(&::System::Net::Http::Headers::HttpHeaders::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x60e9284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders::*)(::System::Net::Http::Headers::HttpHeaderKind)>(
    &::System::Net::Http::Headers::HttpHeaders::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60e7014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpHeaderKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders::*)(::StringW, ::StringW)>(&::System::Net::Http::Headers::HttpHeaders::Add)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60e9394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpHeaders::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::System::Net::Http::Headers::HttpHeaders::Add)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60e9430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                             { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.AddInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpHeaders::*)(
    ::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Net::Http::Headers::HeaderInfo*, bool)>(&::System::Net::Http::Headers::HttpHeaders::AddInternal)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x60e9618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                                                           { "AddInternal",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(),
                                                                                               ::i2c::type_of<::System::Net::Http::Headers::HeaderInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.TryAddWithoutValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpHeaders::*)(::StringW, ::StringW)>(
    &::System::Net::Http::Headers::HttpHeaders::TryAddWithoutValidation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60e9cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                                                           { "TryAddWithoutValidation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.TryAddWithoutValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpHeaders::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::System::Net::Http::Headers::HttpHeaders::TryAddWithoutValidation)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60d847c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                { "TryAddWithoutValidation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.CheckName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::HeaderInfo* (::System::Net::Http::Headers::HttpHeaders::*)(::StringW)>(
    &::System::Net::Http::Headers::HttpHeaders::CheckName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60e94b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "CheckName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.TryCheckName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpHeaders::*)(::StringW, ::by_ref<::System::Net::Http::Headers::HeaderInfo*>)>(
    &::System::Net::Http::Headers::HttpHeaders::TryCheckName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60e9d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                             { "TryCheckName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::HeaderInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>* (
        ::System::Net::Http::Headers::HttpHeaders::*)()>(&::System::Net::Http::Headers::HttpHeaders::GetEnumerator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60d7ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::Http::Headers::HttpHeaders::*)()>(
    &::System::Net::Http::Headers::HttpHeaders::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e9eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpHeaders::*)(::StringW)>(&::System::Net::Http::Headers::HttpHeaders::Remove)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60e9ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.GetSingleHeaderString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::System::Net::Http::Headers::HttpHeaders::GetSingleHeaderString)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x60da804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                { "GetSingleHeaderString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::HttpHeaders::*)()>(&::System::Net::Http::Headers::HttpHeaders::ToString)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x60e9f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { ::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.GetAllHeaderValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::System::Net::Http::Headers::HttpHeaders::*)(::System::Net::Http::Headers::HttpHeaders_HeaderBucket*, ::System::Net::Http::Headers::HeaderInfo*)>(
    &::System::Net::Http::Headers::HttpHeaders::GetAllHeaderValues)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x60ea2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                            { "GetAllHeaderValues", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(), ::i2c::type_of<::System::Net::Http::Headers::HeaderInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpHeaders.GetKnownHeaderKind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::HttpHeaderKind (*)(::StringW)>(&::System::Net::Http::Headers::HttpHeaders::GetKnownHeaderKind)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x60da6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "GetKnownHeaderKind", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>*& System::Net::Http::Headers::HttpHeaders::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>* const&
System::Net::Http::Headers::HttpHeaders::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void
System::Net::Http::Headers::HttpHeaders::__cordl_internal_set_headers(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headers = value;
}
constexpr ::System::Net::Http::Headers::HttpHeaderKind& System::Net::Http::Headers::HttpHeaders::__cordl_internal_get_HeaderKind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderKind;
}
constexpr ::System::Net::Http::Headers::HttpHeaderKind const& System::Net::Http::Headers::HttpHeaders::__cordl_internal_get_HeaderKind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderKind;
}
constexpr void System::Net::Http::Headers::HttpHeaders::__cordl_internal_set_HeaderKind(::System::Net::Http::Headers::HttpHeaderKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HeaderKind = value;
}
constexpr ::System::Nullable_1<bool>& System::Net::Http::Headers::HttpHeaders::__cordl_internal_get_connectionclose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionclose;
}
constexpr ::System::Nullable_1<bool> const& System::Net::Http::Headers::HttpHeaders::__cordl_internal_get_connectionclose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionclose;
}
constexpr void System::Net::Http::Headers::HttpHeaders::__cordl_internal_set_connectionclose(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionclose = value;
}
constexpr ::System::Nullable_1<bool>& System::Net::Http::Headers::HttpHeaders::__cordl_internal_get_transferEncodingChunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transferEncodingChunked;
}
constexpr ::System::Nullable_1<bool> const& System::Net::Http::Headers::HttpHeaders::__cordl_internal_get_transferEncodingChunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transferEncodingChunked;
}
constexpr void System::Net::Http::Headers::HttpHeaders::__cordl_internal_set_transferEncodingChunked(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transferEncodingChunked = value;
}
inline void System::Net::Http::Headers::HttpHeaders::setStaticF_known_headers(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>*, "known_headers", ::System::Net::Http::Headers::HttpHeaders*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>* System::Net::Http::Headers::HttpHeaders::getStaticF_known_headers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>*, "known_headers",
                                           ::System::Net::Http::Headers::HttpHeaders*>();
}
inline void System::Net::Http::Headers::HttpHeaders::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpHeaders::_ctor(::System::Net::Http::Headers::HttpHeaderKind headerKind) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpHeaderKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerKind);
}
inline void System::Net::Http::Headers::HttpHeaders::Add(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Net::Http::Headers::HttpHeaders::Add(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                           { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values);
}
inline bool System::Net::Http::Headers::HttpHeaders::AddInternal(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW>* values, ::System::Net::Http::Headers::HeaderInfo* headerInfo,
                                                                 bool ignoreInvalid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                                                         { "AddInternal",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(),
                                                                                             ::i2c::type_of<::System::Net::Http::Headers::HeaderInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, values, headerInfo, ignoreInvalid);
}
inline bool System::Net::Http::Headers::HttpHeaders::TryAddWithoutValidation(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                                                         { "TryAddWithoutValidation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, value);
}
inline bool System::Net::Http::Headers::HttpHeaders::TryAddWithoutValidation(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                              { "TryAddWithoutValidation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, values);
}
inline ::System::Net::Http::Headers::HeaderInfo* System::Net::Http::Headers::HttpHeaders::CheckName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "CheckName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HeaderInfo*>(this, ___internal_method, name);
}
inline bool System::Net::Http::Headers::HttpHeaders::TryCheckName(::StringW name, ::by_ref<::System::Net::Http::Headers::HeaderInfo*> headerInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                           { "TryCheckName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::HeaderInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, headerInfo);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*
System::Net::Http::Headers::HttpHeaders::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::Http::Headers::HttpHeaders::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::HttpHeaders::Remove(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::StringW System::Net::Http::Headers::HttpHeaders::GetSingleHeaderString(::StringW key, ::System::Collections::Generic::IEnumerable_1<::StringW>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                              { "GetSingleHeaderString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key, values);
}
inline ::StringW System::Net::Http::Headers::HttpHeaders::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline void System::Net::Http::Headers::HttpHeaders::AddOrRemove(::StringW name, T value, ::System::Func_2<::System::Object*, ::StringW>* converter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                          { "AddOrRemove", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Func_2<::System::Object*, ::StringW>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, converter);
}
template <typename T> inline void System::Net::Http::Headers::HttpHeaders::AddOrRemove(::StringW name, ::System::Nullable_1<T> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                                                           { "AddOrRemove", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
template <typename T> inline void System::Net::Http::Headers::HttpHeaders::AddOrRemove(::StringW name, ::System::Nullable_1<T> value, ::System::Func_2<::System::Object*, ::StringW>* converter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
          { "AddOrRemove", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<T>>(), ::i2c::type_of<::System::Func_2<::System::Object*, ::StringW>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, converter);
}
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::HttpHeaders::GetAllHeaderValues(::System::Net::Http::Headers::HttpHeaders_HeaderBucket* bucket,
                                                                                                                      ::System::Net::Http::Headers::HeaderInfo* headerInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                          { "GetAllHeaderValues", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>(), ::i2c::type_of<::System::Net::Http::Headers::HeaderInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, bucket, headerInfo);
}
inline ::System::Net::Http::Headers::HttpHeaderKind System::Net::Http::Headers::HttpHeaders::GetKnownHeaderKind(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "GetKnownHeaderKind", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpHeaderKind>(nullptr, ___internal_method, name);
}
template <typename T> inline T System::Net::Http::Headers::HttpHeaders::GetValue(::StringW name) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "GetValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, name);
}
template <typename T> inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>* System::Net::Http::Headers::HttpHeaders::GetValues(::StringW name) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(), { "GetValues", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(this, ___internal_method, name);
}
template <typename T> inline void System::Net::Http::Headers::HttpHeaders::SetValue(::StringW name, T value, ::System::Func_2<::System::Object*, ::StringW>* toStringConverter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaders*>(),
                          { "SetValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Func_2<::System::Object*, ::StringW>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, toStringConverter);
}
inline ::System::Net::Http::Headers::HttpHeaders* System::Net::Http::Headers::HttpHeaders::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HttpHeaders*>());
}
inline ::System::Net::Http::Headers::HttpHeaders* System::Net::Http::Headers::HttpHeaders::New_ctor(::System::Net::Http::Headers::HttpHeaderKind headerKind) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HttpHeaders*>(headerKind));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
constexpr System::Net::Http::Headers::HttpHeaders::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*
System::Net::Http::Headers::HttpHeaders::
    i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Collections__Generic__IEnumerable_1___StringW____() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Net::Http::Headers::HttpHeaders::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Net::Http::Headers::HttpHeaders::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpHeaders::HttpHeaders() {}
