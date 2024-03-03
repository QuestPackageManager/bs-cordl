#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenEqualityComparer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::*)(int32_t, int32_t)>(
    &::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2795ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::__cordl_internal_get_LineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineNumber;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::__cordl_internal_get_LineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineNumber;
}
constexpr void Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::__cordl_internal_set_LineNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LineNumber = value;
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::__cordl_internal_get_LinePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LinePosition;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::__cordl_internal_get_LinePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LinePosition;
}
constexpr void Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::__cordl_internal_set_LinePosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LinePosition = value;
}
inline ::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation* Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::New_ctor(int32_t lineNumber, int32_t linePosition) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation*>(lineNumber, linePosition));
}
inline void Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::_ctor(int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineNumber, linePosition);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation::__JToken__LineInfoAnnotation() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::*)(int32_t)>(
    &::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x278e898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2796df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2796df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41.System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                                               "System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2796e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41.System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::*)()>(
        &::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2796ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                                               "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x1004;
  constexpr static std::size_t addrs = 0x2796f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr bool& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr bool const& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_set_self(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___self = value;
}
constexpr bool& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___3__self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__self;
}
constexpr bool const& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___3__self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__self;
}
constexpr void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_set___3__self(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__self = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get__current_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current_5__1;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_get__current_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current_5__1;
}
constexpr void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__cordl_internal_set__current_5__1(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____current_5__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41* Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>(__1__state));
}
inline void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                                             "System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41::__JToken___GetAncestors_d__41() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::*)(int32_t)>(
    &::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2797f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2797fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2797fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42.System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279803c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                                               "System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2798044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2798084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42.System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::*)()>(
        &::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x279808c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                                               "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x279812c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get__o_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____o_5__1;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_get__o_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____o_5__1;
}
constexpr void Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__cordl_internal_set__o_5__1(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____o_5__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42* Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>(__1__state));
}
inline void Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                                             "System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42::__JToken___AfterSelf_d__42() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::*)(int32_t)>(
    &::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2798130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2798174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2798178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43.System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279820c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                                               "System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2798214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2798254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43.System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::*)()>(
        &::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x279825c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                                               "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27982fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get__o_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____o_5__1;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_get__o_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____o_5__1;
}
constexpr void Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__cordl_internal_set__o_5__1(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____o_5__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43* Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>(__1__state));
}
inline void Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                                             "System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43::__JToken___BeforeSelf_d__43() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get__annotations_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotations_5__1;
}
template <typename T>
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get__annotations_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotations_5__1;
}
template <typename T>
constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_set__annotations_5__1(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____annotations_5__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
template <typename T> inline ::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>* Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>*>(__1__state));
}
template <typename T> inline void Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>::__JToken___Annotations_d__171_1() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::*)(int32_t)>(
    &::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2798300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2798344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::MoveNext)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2798348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2798514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x279851c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279855c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172.System_Collections_Generic_IEnumerable_System_Object__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>* (
    ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::*)()>(&::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2798564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                    "System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::*)()>(
    &::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x279860c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__172::operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>*
Newtonsoft::Json::Linq::__JToken___Annotations_d__172::i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__172::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::__JToken___Annotations_d__172::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__172::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
Newtonsoft::Json::Linq::__JToken___Annotations_d__172::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__172::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Newtonsoft::Json::Linq::__JToken___Annotations_d__172::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Newtonsoft::Json::Linq::__JToken___Annotations_d__172::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___Annotations_d__172::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::System::Type*& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___3__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___3__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__type;
}
constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_set___3__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get__annotations_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotations_5__1;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get__annotations_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotations_5__1;
}
constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_set__annotations_5__1(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____annotations_5__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr int32_t const& Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
inline ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172* Newtonsoft::Json::Linq::__JToken___Annotations_d__172::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>(__1__state));
}
inline void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::__JToken___Annotations_d__172::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Object*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::__JToken___Annotations_d__172::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172::__JToken___Annotations_d__172() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_EqualityComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenEqualityComparer* (*)()>(&::Newtonsoft::Json::Linq::JToken::get_EqualityComparer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2787f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_EqualityComparer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Parent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JContainer* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::get_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278e6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Parent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Parent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JContainer*)>(
    &::Newtonsoft::Json::Linq::JToken::set_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278e6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "set_Parent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Root
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::get_Root)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2785484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Root",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.CloneToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::CloneToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.DeepEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::DeepEquals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenType (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::get_Type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_HasValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_HasValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.DeepEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::DeepEquals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2781dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "DeepEquals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278e6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Next",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278e6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "set_Next", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Previous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::get_Previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278e6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Previous",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Previous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::set_Previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278e6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "set_Previous", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Path)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x278d1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Path",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2784918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.AddAfterSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::AddAfterSelf)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x278e6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AddAfterSelf", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.AddBeforeSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::AddBeforeSelf)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x278e770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AddBeforeSelf", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Ancestors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Ancestors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278e810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Ancestors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.AncestorsAndSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::AncestorsAndSelf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278e890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AncestorsAndSelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.GetAncestors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JToken::*)(bool)>(&::Newtonsoft::Json::Linq::JToken::GetAncestors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x278e818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "GetAncestors",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.AfterSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::AfterSelf)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x278e8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AfterSelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.BeforeSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::BeforeSelf)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x278e944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "BeforeSelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*)>(
    &::Newtonsoft::Json::Linq::JToken::get_Item)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x278e9ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::set_Item)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x278ea44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_First
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::get_First)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x278eadc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Last
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::get_Last)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x278eb74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::Children)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x278ec0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Remove)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x278a4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Remove",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::Replace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2787738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.WriteTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(
    ::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*>)>(&::Newtonsoft::Json::Linq::JToken::WriteTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x278ec64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JToken::*)(
    ::Newtonsoft::Json::Formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*>)>(&::Newtonsoft::Json::Linq::JToken::ToString)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x278ecbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Formatting>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.EnsureValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::EnsureValue)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x278ef0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "EnsureValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::GetType)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x278f024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ValidateToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::Newtonsoft::Json::Linq::JToken*, ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, bool)>(&::Newtonsoft::Json::Linq::JToken::ValidateToken)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x278f11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ValidateToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_bool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_bool)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x278f1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__DateTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTimeOffset)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x278f374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_bool_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_bool_)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x278f5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x278f7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__DateTime_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTime_)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x278f940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__DateTimeOffset_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTimeOffset_)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x278fb5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__Decimal_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Decimal> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Decimal_)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x278fe70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_double_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_double_t_)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2790060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_char16_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<char16_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_char16_t_)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2790230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2790408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int16_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int16_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2790594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint16_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint16_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2790720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_char16_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_char16_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x27908ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint8_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint8_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2790a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int8_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int8_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2790bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int32_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int32_t_)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2790d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int16_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int16_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int16_t_)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2790f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint16_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint16_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint16_t_)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2791100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint8_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint8_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint8_t_)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x27912d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int8_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int8_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int8_t_)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x27914b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__DateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTime)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2791688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int64_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int64_t_)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x279186c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_float_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<float_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_float_t_)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2791a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2791c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint32_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint32_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint32_t_)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2791da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint64_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint64_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint64_t_)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2791f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_double_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x279214c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_float_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x27922d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___StringW
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___StringW)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2792464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2792688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2792814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___ArrayW_uint8_t___Array_uint8_t___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___ArrayW_uint8_t___Array_uint8_t___)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x27929a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Guid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Guid)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2792bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__Guid_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Guid> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Guid_)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2792e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__TimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__TimeSpan)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x27930ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__TimeSpan_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::TimeSpan> (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__TimeSpan_)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x27932b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Uri_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Uri_)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x27934f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(bool)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27936fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::DateTimeOffset)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2793760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(uint8_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27937d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<uint8_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2793838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(int8_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27938d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<int8_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2793934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<bool>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27939cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(int64_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2793a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<::System::DateTime>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2793ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<::System::DateTimeOffset>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2793b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTimeOffset>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<::System::Decimal>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2793c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<double_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2793ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<double_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(int16_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2793d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(uint16_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2793dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(int32_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2793e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2793eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::DateTime)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2793f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<int64_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2793fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<float_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2794054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Decimal)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27940ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<int16_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2794160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<uint16_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27941f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<uint32_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2794290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<uint64_t>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2794328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(double_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27943cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(float_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2794438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::StringW)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27944a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(uint32_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2794508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(uint64_t)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x279456c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27945d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Uri*)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2794634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::TimeSpan)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2794698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27946fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Guid)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27947a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Nullable_1<::System::Guid>)>(
    &::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2794814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27948c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (
    ::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2794954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                               "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.GetDeepHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::GetDeepHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (
    ::Newtonsoft::Json::Linq::JToken::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27949c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                               "Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.get_Item", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.CreateReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonReader* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::CreateReader)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27949d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "CreateReader",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.FromObjectInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::Linq::JToken::FromObjectInternal)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2789de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "FromObjectInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.FromObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::FromObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2794a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "FromObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.FromObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::Linq::JToken::FromObject)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2794a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "FromObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)(::System::Type*)>(
    &::Newtonsoft::Json::Linq::JToken::ToObject)> {
  constexpr static std::size_t size = 0xae4;
  constexpr static std::size_t addrs = 0x2794b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ToObject", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)(::System::Type*, ::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::Linq::JToken::ToObject)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x27955e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ToObject", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ReadFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::Linq::JToken::ReadFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27957c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ReadFrom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ReadFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(
    &::Newtonsoft::Json::Linq::JToken::ReadFrom)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2795818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ReadFrom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::StringW)>(&::Newtonsoft::Json::Linq::JToken::Parse)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2795ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::StringW, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(
    &::Newtonsoft::Json::Linq::JToken::Parse)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2795b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(
    &::Newtonsoft::Json::Linq::JToken::Load)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2795d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Linq::JToken::Load)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2795df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SetLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::IJsonLineInfo*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JToken::SetLineInfo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x278441c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SetLineInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IJsonLineInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SetLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(int32_t, int32_t)>(&::Newtonsoft::Json::Linq::JToken::SetLineInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2795e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SetLineInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_IJsonLineInfo_HasLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_HasLineInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x279610c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Newtonsoft.Json.IJsonLineInfo.HasLineInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_IJsonLineInfo_get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2796160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Newtonsoft.Json.IJsonLineInfo.get_LineNumber",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_IJsonLineInfo_get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27961b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Newtonsoft.Json.IJsonLineInfo.get_LinePosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SelectToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)(::StringW)>(
    &::Newtonsoft::Json::Linq::JToken::SelectToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SelectToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SelectToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)(::StringW, bool)>(
    &::Newtonsoft::Json::Linq::JToken::SelectToken)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2796210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SelectToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SelectTokens
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JToken::*)(::StringW)>(&::Newtonsoft::Json::Linq::JToken::SelectTokens)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SelectTokens", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SelectTokens
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (
    ::Newtonsoft::Json::Linq::JToken::*)(::StringW, bool)>(&::Newtonsoft::Json::Linq::JToken::SelectTokens)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2796590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SelectTokens", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2796610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                               "System.ICloneable.Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.DeepClone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(
    &::Newtonsoft::Json::Linq::JToken::DeepClone)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x279661c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "DeepClone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.AddAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::AddAnnotation)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2795ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AddAnnotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Annotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)(::System::Type*)>(
    &::Newtonsoft::Json::Linq::JToken::Annotation)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2796628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Annotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Annotations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Newtonsoft::Json::Linq::JToken::*)(::System::Type*)>(&::Newtonsoft::Json::Linq::JToken::Annotations)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2796760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Annotations", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.RemoveAnnotations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::System::Type*)>(&::Newtonsoft::Json::Linq::JToken::RemoveAnnotations)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x27967d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "RemoveAnnotations", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::JToken::operator ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JToken::i___Newtonsoft__Json__Linq__IJEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::JToken::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JToken::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Newtonsoft::Json::Linq::JToken::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::JToken::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr Newtonsoft::Json::Linq::JToken::operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* Newtonsoft::Json::Linq::JToken::i___Newtonsoft__Json__IJsonLineInfo() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr Newtonsoft::Json::Linq::JToken::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Newtonsoft::Json::Linq::JToken::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::Newtonsoft::Json::Linq::JContainer*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JContainer*> const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__previous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previous;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__previous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previous;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__previous(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previous)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__next(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__annotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__annotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotations;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__annotations(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____annotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF__equalityComparer(::Newtonsoft::Json::Linq::JTokenEqualityComparer* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::JTokenEqualityComparer*, "_equalityComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::Newtonsoft::Json::Linq::JTokenEqualityComparer*>(value));
}
inline ::Newtonsoft::Json::Linq::JTokenEqualityComparer* Newtonsoft::Json::Linq::JToken::getStaticF__equalityComparer() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::JTokenEqualityComparer*, "_equalityComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_BooleanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BooleanTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_BooleanTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BooleanTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_NumberTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "NumberTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_NumberTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "NumberTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_StringTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "StringTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_StringTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "StringTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_GuidTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "GuidTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_GuidTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "GuidTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_TimeSpanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "TimeSpanTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_TimeSpanTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "TimeSpanTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_UriTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "UriTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_UriTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "UriTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_CharTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "CharTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_CharTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "CharTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_DateTimeTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "DateTimeTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_DateTimeTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "DateTimeTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_BytesTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BytesTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_BytesTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BytesTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline ::Newtonsoft::Json::Linq::JTokenEqualityComparer* Newtonsoft::Json::Linq::JToken::get_EqualityComparer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_EqualityComparer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenEqualityComparer*, false>(nullptr, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JContainer* Newtonsoft::Json::Linq::JToken::get_Parent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Parent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JContainer*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::set_Parent(::Newtonsoft::Json::Linq::JContainer* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "set_Parent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Root() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Root",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::CloneToken() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JToken::DeepEquals(::Newtonsoft::Json::Linq::JToken* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JToken::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JToken::get_HasValues() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JToken::DeepEquals(::Newtonsoft::Json::Linq::JToken* t1, ::Newtonsoft::Json::Linq::JToken* t2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "DeepEquals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t1, t2);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Next() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Next",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::set_Next(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "set_Next", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Previous() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Previous",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::set_Previous(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "set_Previous", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::get_Path() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "get_Path",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JToken*>());
}
inline void Newtonsoft::Json::Linq::JToken::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::AddAfterSelf(::System::Object* content) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AddAfterSelf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
inline void Newtonsoft::Json::Linq::JToken::AddBeforeSelf(::System::Object* content) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AddBeforeSelf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::Ancestors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Ancestors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::AncestorsAndSelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AncestorsAndSelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::GetAncestors(bool self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "GetAncestors",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method, self);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::AfterSelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AfterSelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::BeforeSelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "BeforeSelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Item(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method, key);
}
inline void Newtonsoft::Json::Linq::JToken::set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename T> inline T Newtonsoft::Json::Linq::JToken::Value(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, key);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_First() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Last() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Newtonsoft::Json::Linq::JToken::Children() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*>, false>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Linq::JEnumerable_1<T> Newtonsoft::Json::Linq::JToken::Children() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Children",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JEnumerable_1<T>, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Newtonsoft::Json::Linq::JToken::Values() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::Remove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Remove",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::Replace(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JToken::WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, converters);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::ToString(::Newtonsoft::Json::Formatting formatting,
                                                          ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Formatting>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, formatting, converters);
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JToken::EnsureValue(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "EnsureValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JValue*, false>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::GetType(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, token);
}
inline bool Newtonsoft::Json::Linq::JToken::ValidateToken(::Newtonsoft::Json::Linq::JToken* o,
                                                          ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> validTypes, bool nullable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ValidateToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, o, validTypes, nullable);
}
inline bool Newtonsoft::Json::Linq::JToken::op_Explicit_bool(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTimeOffset(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_bool_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(nullptr, ___internal_method, value);
}
inline int64_t Newtonsoft::Json::Linq::JToken::op_Explicit_int64_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTime_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTimeOffset_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Decimal_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_double_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<char16_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_char16_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<char16_t>, false>(nullptr, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::Linq::JToken::op_Explicit_int32_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
inline int16_t Newtonsoft::Json::Linq::JToken::op_Explicit_int16_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
inline uint16_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint16_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
inline char16_t Newtonsoft::Json::Linq::JToken::op_Explicit_char16_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
inline uint8_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint8_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
inline int8_t Newtonsoft::Json::Linq::JToken::op_Explicit_int8_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int32_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int16_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int16_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int16_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint16_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint16_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint8_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint8_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint8_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int8_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int8_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int8_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::DateTime Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTime(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int64_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<float_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_float_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal Newtonsoft::Json::Linq::JToken::op_Explicit___System__Decimal(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint32_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint32_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint32_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint64_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint64_t_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
inline double_t Newtonsoft::Json::Linq::JToken::op_Explicit_double_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
inline float_t Newtonsoft::Json::Linq::JToken::op_Explicit_float_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::op_Explicit___StringW(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline uint32_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint32_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
inline uint64_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint64_t(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Newtonsoft::Json::Linq::JToken::op_Explicit___ArrayW_uint8_t___Array_uint8_t___(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, value);
}
inline ::System::Guid Newtonsoft::Json::Linq::JToken::op_Explicit___System__Guid(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Guid> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Guid_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Guid>, false>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan Newtonsoft::Json::Linq::JToken::op_Explicit___System__TimeSpan(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::TimeSpan> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__TimeSpan_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>, false>(nullptr, ___internal_method, value);
}
inline ::System::Uri* Newtonsoft::Json::Linq::JToken::op_Explicit___System__Uri_(::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::DateTimeOffset value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(int8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::DateTime> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::DateTimeOffset> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTimeOffset>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::Decimal> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<double_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<double_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Uri* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Guid value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::Guid> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::JToken::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JToken::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JToken::GetDeepHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                             "Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.get_Item", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method, key);
}
inline ::Newtonsoft::Json::JsonReader* Newtonsoft::Json::Linq::JToken::CreateReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "CreateReader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReader*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::FromObjectInternal(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "FromObjectInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, o, jsonSerializer);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::FromObject(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "FromObject", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, o);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::FromObject(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "FromObject", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, o, jsonSerializer);
}
template <typename T> inline T Newtonsoft::Json::Linq::JToken::ToObject() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ToObject",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::ToObject(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ToObject", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, objectType);
}
template <typename T> inline T Newtonsoft::Json::Linq::JToken::ToObject(::Newtonsoft::Json::JsonSerializer* jsonSerializer) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ToObject",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, jsonSerializer);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::ToObject(::System::Type* objectType, ::Newtonsoft::Json::JsonSerializer* jsonSerializer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ToObject", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, objectType, jsonSerializer);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::ReadFrom(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ReadFrom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, reader);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::ReadFrom(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "ReadFrom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, reader, settings);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::Parse(::StringW json) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, json);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::Parse(::StringW json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, json, settings);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, reader, settings);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::Load(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, reader);
}
inline void Newtonsoft::Json::Linq::JToken::SetLineInfo(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SetLineInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IJsonLineInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineInfo, settings);
}
inline void Newtonsoft::Json::Linq::JToken::SetLineInfo(int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SetLineInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineNumber, linePosition);
}
inline bool Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_HasLineInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Newtonsoft.Json.IJsonLineInfo.HasLineInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LineNumber() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Newtonsoft.Json.IJsonLineInfo.get_LineNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LinePosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Newtonsoft.Json.IJsonLineInfo.get_LinePosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::SelectToken(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SelectToken", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method, path);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::SelectToken(::StringW path, bool errorWhenNoMatch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SelectToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method, path, errorWhenNoMatch);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::SelectTokens(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SelectTokens", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method, path);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::SelectTokens(::StringW path, bool errorWhenNoMatch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "SelectTokens", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method, path, errorWhenNoMatch);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                                                             "System.ICloneable.Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::DeepClone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "DeepClone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::AddAnnotation(::System::Object* annotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "AddAnnotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, annotation);
}
template <typename T> inline T Newtonsoft::Json::Linq::JToken::Annotation() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Annotation",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::Annotation(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Annotation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Newtonsoft::Json::Linq::JToken::Annotations() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Annotations",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Newtonsoft::Json::Linq::JToken::Annotations(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "Annotations", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*, false>(this, ___internal_method, type);
}
template <typename T> inline void Newtonsoft::Json::Linq::JToken::RemoveAnnotations() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "RemoveAnnotations",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::RemoveAnnotations(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(), "RemoveAnnotations", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JToken::JToken() {}
