#pragma once
// IWYU pragma private; include "System\Collections\Specialized\OrderedDictionary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Specialized/zzzz__OrderedDictionary_def.hpp"
#include "System/Collections/Specialized/zzzz__OrderedDictionary_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::*)(::System::Collections::ArrayList*, int32_t)>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x63efae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x63f014c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::DictionaryEntry (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x63f0304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "get_Entry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::get_Key)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x63f047c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::get_Value)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x63f0564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x63f064c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x63f06f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::__cordl_internal_get__objectReturnType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectReturnType;
}
constexpr int32_t const& System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::__cordl_internal_get__objectReturnType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectReturnType;
}
constexpr void System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::__cordl_internal_set__objectReturnType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectReturnType = value;
}
constexpr ::System::Collections::IEnumerator*& System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::__cordl_internal_get__arrayEnumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayEnumerator;
}
constexpr ::System::Collections::IEnumerator* const& System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::__cordl_internal_get__arrayEnumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayEnumerator;
}
constexpr void System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::__cordl_internal_set__arrayEnumerator(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arrayEnumerator = value;
}
inline void System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::_ctor(::System::Collections::ArrayList* array, int32_t objectReturnType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, objectReturnType);
}
inline ::System::Object* System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::get_Entry() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*
System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::New_ctor(::System::Collections::ArrayList* array, int32_t objectReturnType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator*>(array, objectReturnType));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::i___System__Collections__IDictionaryEnumerator() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryEnumerator::OrderedDictionary_OrderedDictionaryEnumerator() {}
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::*)(::System::Collections::ArrayList*, bool)>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63ef2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection.System_Collections_ICollection_CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::*)(::System::Array*, int32_t)>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x63f0798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                             { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection.System_Collections_ICollection_get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f0b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(), { "System.Collections.ICollection.get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f0b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                             { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f0b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::*)()>(
    &::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63f0ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                             { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::__cordl_internal_get__objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr ::System::Collections::ArrayList* const& System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::__cordl_internal_get__objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr void System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::__cordl_internal_set__objects(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objects = value;
}
constexpr bool& System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::__cordl_internal_get__isKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKeys;
}
constexpr bool const& System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::__cordl_internal_get__isKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKeys;
}
constexpr void System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::__cordl_internal_set__isKeys(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isKeys = value;
}
inline void System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::_ctor(::System::Collections::ArrayList* array, bool isKeys) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, isKeys);
}
inline void System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline int32_t System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                                                         { "System.Collections.ICollection.get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                                                         { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                                                         { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(),
                                                                                         { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*
System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::New_ctor(::System::Collections::ArrayList* array, bool isKeys) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection*>(array, isKeys));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection::OrderedDictionary_OrderedDictionaryKeyValueCollection() {}
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)()>(&::System::Collections::Specialized::OrderedDictionary::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63ef1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(int32_t)>(&::System::Collections::Specialized::OrderedDictionary::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63ef1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(int32_t, ::System::Collections::IEqualityComparer*)>(
    &::System::Collections::Specialized::OrderedDictionary::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63ef1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Specialized::OrderedDictionary::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ef1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Specialized::OrderedDictionary::*)()>(&::System::Collections::Specialized::OrderedDictionary::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63ef1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.System_Collections_IDictionary_get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::OrderedDictionary::*)()>(
    &::System::Collections::Specialized::OrderedDictionary::System_Collections_IDictionary_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ef264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "System.Collections.IDictionary.get_IsFixedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::OrderedDictionary::*)()>(&::System::Collections::Specialized::OrderedDictionary::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ef26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::OrderedDictionary::*)()>(
    &::System::Collections::Specialized::OrderedDictionary::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ef274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Collections::Specialized::OrderedDictionary::*)()>(
    &::System::Collections::Specialized::OrderedDictionary::get_Keys)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x63ef27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_Keys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.get_objectsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Collections::Specialized::OrderedDictionary::*)()>(
    &::System::Collections::Specialized::OrderedDictionary::get_objectsArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x63ef1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_objectsArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.get_objectsTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::System::Collections::Specialized::OrderedDictionary::*)()>(
    &::System::Collections::Specialized::OrderedDictionary::get_objectsTable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63ef2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_objectsTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::OrderedDictionary::*)()>(
    &::System::Collections::Specialized::OrderedDictionary::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63ef370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::OrderedDictionary::*)(::System::Object*)>(
    &::System::Collections::Specialized::OrderedDictionary::get_Item)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63ef3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::Specialized::OrderedDictionary::set_Item)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x63ef408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Collections::Specialized::OrderedDictionary::*)()>(
    &::System::Collections::Specialized::OrderedDictionary::get_Values)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63ef7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::Specialized::OrderedDictionary::Add)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x63ef6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)()>(&::System::Collections::Specialized::OrderedDictionary::Clear)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63ef858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::OrderedDictionary::*)(::System::Object*)>(
    &::System::Collections::Specialized::OrderedDictionary::Contains)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63ef8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(::System::Array*, int32_t)>(
    &::System::Collections::Specialized::OrderedDictionary::CopyTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63ef918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                           { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.IndexOfKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Specialized::OrderedDictionary::*)(::System::Object*)>(
    &::System::Collections::Specialized::OrderedDictionary::IndexOfKey)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x63ef568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "IndexOfKey", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(::System::Object*)>(
    &::System::Collections::Specialized::OrderedDictionary::Remove)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x63ef954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Collections::Specialized::OrderedDictionary::*)()>(
    &::System::Collections::Specialized::OrderedDictionary::GetEnumerator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63efa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Specialized::OrderedDictionary::*)()>(
    &::System::Collections::Specialized::OrderedDictionary::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63efb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Specialized::OrderedDictionary::GetObjectData)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x63efbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(::System::Object*)>(
    &::System::Collections::Specialized::OrderedDictionary::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63efd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                             { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::OrderedDictionary.OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::OrderedDictionary::*)(::System::Object*)>(
    &::System::Collections::Specialized::OrderedDictionary::OnDeserialization)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x63efd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), 24 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__objectsArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectsArray;
}
constexpr ::System::Collections::ArrayList* const& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__objectsArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectsArray;
}
constexpr void System::Collections::Specialized::OrderedDictionary::__cordl_internal_set__objectsArray(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectsArray = value;
}
constexpr ::System::Collections::Hashtable*& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__objectsTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectsTable;
}
constexpr ::System::Collections::Hashtable* const& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__objectsTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectsTable;
}
constexpr void System::Collections::Specialized::OrderedDictionary::__cordl_internal_set__objectsTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectsTable = value;
}
constexpr int32_t& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__initialCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialCapacity;
}
constexpr int32_t const& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__initialCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialCapacity;
}
constexpr void System::Collections::Specialized::OrderedDictionary::__cordl_internal_set__initialCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialCapacity = value;
}
constexpr ::System::Collections::IEqualityComparer*& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
constexpr ::System::Collections::IEqualityComparer* const& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
constexpr void System::Collections::Specialized::OrderedDictionary::__cordl_internal_set__comparer(::System::Collections::IEqualityComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comparer = value;
}
constexpr bool& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__readOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnly;
}
constexpr bool const& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__readOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnly;
}
constexpr void System::Collections::Specialized::OrderedDictionary::__cordl_internal_set__readOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readOnly = value;
}
constexpr ::System::Object*& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr ::System::Object* const& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr void System::Collections::Specialized::OrderedDictionary::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__siInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____siInfo;
}
constexpr ::System::Runtime::Serialization::SerializationInfo* const& System::Collections::Specialized::OrderedDictionary::__cordl_internal_get__siInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____siInfo;
}
constexpr void System::Collections::Specialized::OrderedDictionary::__cordl_internal_set__siInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____siInfo = value;
}
inline void System::Collections::Specialized::OrderedDictionary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Specialized::OrderedDictionary::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Collections::Specialized::OrderedDictionary::_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, comparer);
}
inline void System::Collections::Specialized::OrderedDictionary::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline int32_t System::Collections::Specialized::OrderedDictionary::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Collections::Specialized::OrderedDictionary::System_Collections_IDictionary_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "System.Collections.IDictionary.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::Specialized::OrderedDictionary::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::Specialized::OrderedDictionary::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Collections::Specialized::OrderedDictionary::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Collections::Specialized::OrderedDictionary::get_objectsArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_objectsArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Collections::Specialized::OrderedDictionary::get_objectsTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_objectsTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Specialized::OrderedDictionary::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Specialized::OrderedDictionary::get_Item(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void System::Collections::Specialized::OrderedDictionary::set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Collections::ICollection* System::Collections::Specialized::OrderedDictionary::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline void System::Collections::Specialized::OrderedDictionary::Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Collections::Specialized::OrderedDictionary::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Collections::Specialized::OrderedDictionary::Contains(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void System::Collections::Specialized::OrderedDictionary::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline int32_t System::Collections::Specialized::OrderedDictionary::IndexOfKey(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "IndexOfKey", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline void System::Collections::Specialized::OrderedDictionary::Remove(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Collections::IDictionaryEnumerator* System::Collections::Specialized::OrderedDictionary::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Collections::Specialized::OrderedDictionary::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Collections::Specialized::OrderedDictionary::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Collections::Specialized::OrderedDictionary::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::Collections::Specialized::OrderedDictionary::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::OrderedDictionary*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline ::System::Collections::Specialized::OrderedDictionary* System::Collections::Specialized::OrderedDictionary::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::OrderedDictionary*>());
}
inline ::System::Collections::Specialized::OrderedDictionary* System::Collections::Specialized::OrderedDictionary::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::OrderedDictionary*>(capacity));
}
inline ::System::Collections::Specialized::OrderedDictionary* System::Collections::Specialized::OrderedDictionary::New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::OrderedDictionary*>(capacity, comparer));
}
inline ::System::Collections::Specialized::OrderedDictionary* System::Collections::Specialized::OrderedDictionary::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::OrderedDictionary*>(info, context));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr System::Collections::Specialized::OrderedDictionary::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* System::Collections::Specialized::OrderedDictionary::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Specialized::OrderedDictionary::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Specialized::OrderedDictionary::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Specialized::OrderedDictionary::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Specialized::OrderedDictionary::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Collections::Specialized::OrderedDictionary::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Specialized::OrderedDictionary::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Collections::Specialized::OrderedDictionary::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Collections::Specialized::OrderedDictionary::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::OrderedDictionary::OrderedDictionary() {}
