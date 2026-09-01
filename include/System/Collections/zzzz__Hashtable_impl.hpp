#pragma once
// IWYU pragma private; include "System\Collections\Hashtable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__Hashtable_SyncHashtable_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "val", ty: "::System::Object*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "hash_coll", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Hashtable_bucket::Hashtable_bucket(::System::Object* key, ::System::Object* val, int32_t hash_coll) noexcept {
  this->key = key;
  this->val = val;
  this->hash_coll = hash_coll;
}
// Ctor Parameters []
constexpr ::System::Collections::Hashtable_bucket::Hashtable_bucket() {}
//  Writing Method size for method: ::System::Collections::Hashtable_KeyCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable_KeyCollection::*)(::System::Collections::Hashtable*)>(
    &::System::Collections::Hashtable_KeyCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf132c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_KeyCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable_KeyCollection::*)(::System::Array*, int32_t)>(&::System::Collections::Hashtable_KeyCollection::CopyTo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5bf2430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_KeyCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Hashtable_KeyCollection::*)()>(
    &::System::Collections::Hashtable_KeyCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bf25a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_KeyCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Hashtable_KeyCollection::*)()>(&::System::Collections::Hashtable_KeyCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf260c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_KeyCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Hashtable_KeyCollection::*)()>(&::System::Collections::Hashtable_KeyCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf262c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_KeyCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Hashtable_KeyCollection::*)()>(&::System::Collections::Hashtable_KeyCollection::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bf264c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Collections::Hashtable_KeyCollection::__cordl_internal_get__hashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr ::System::Collections::Hashtable* const& System::Collections::Hashtable_KeyCollection::__cordl_internal_get__hashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr void System::Collections::Hashtable_KeyCollection::__cordl_internal_set__hashtable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashtable = value;
}
inline void System::Collections::Hashtable_KeyCollection::_ctor(::System::Collections::Hashtable* hashtable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashtable);
}
inline void System::Collections::Hashtable_KeyCollection::CopyTo(::System::Array* array, int32_t arrayIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::IEnumerator* System::Collections::Hashtable_KeyCollection::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::Collections::Hashtable_KeyCollection::get_IsSynchronized() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Hashtable_KeyCollection::get_SyncRoot() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Collections::Hashtable_KeyCollection::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_KeyCollection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Hashtable_KeyCollection* System::Collections::Hashtable_KeyCollection::New_ctor(::System::Collections::Hashtable* hashtable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable_KeyCollection*>(hashtable));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Hashtable_KeyCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Hashtable_KeyCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Hashtable_KeyCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Hashtable_KeyCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Hashtable_KeyCollection::Hashtable_KeyCollection() {}
//  Writing Method size for method: ::System::Collections::Hashtable_ValueCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable_ValueCollection::*)(::System::Collections::Hashtable*)>(
    &::System::Collections::Hashtable_ValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf1390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_ValueCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable_ValueCollection::*)(::System::Array*, int32_t)>(
    &::System::Collections::Hashtable_ValueCollection::CopyTo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5bf2664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_ValueCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Hashtable_ValueCollection::*)()>(
    &::System::Collections::Hashtable_ValueCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bf27dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_ValueCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Hashtable_ValueCollection::*)()>(&::System::Collections::Hashtable_ValueCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf2840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_ValueCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Hashtable_ValueCollection::*)()>(&::System::Collections::Hashtable_ValueCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf2860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_ValueCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Hashtable_ValueCollection::*)()>(&::System::Collections::Hashtable_ValueCollection::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bf2880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Collections::Hashtable_ValueCollection::__cordl_internal_get__hashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr ::System::Collections::Hashtable* const& System::Collections::Hashtable_ValueCollection::__cordl_internal_get__hashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr void System::Collections::Hashtable_ValueCollection::__cordl_internal_set__hashtable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashtable = value;
}
inline void System::Collections::Hashtable_ValueCollection::_ctor(::System::Collections::Hashtable* hashtable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashtable);
}
inline void System::Collections::Hashtable_ValueCollection::CopyTo(::System::Array* array, int32_t arrayIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::IEnumerator* System::Collections::Hashtable_ValueCollection::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::Collections::Hashtable_ValueCollection::get_IsSynchronized() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Hashtable_ValueCollection::get_SyncRoot() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Collections::Hashtable_ValueCollection::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_ValueCollection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Hashtable_ValueCollection* System::Collections::Hashtable_ValueCollection::New_ctor(::System::Collections::Hashtable* hashtable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable_ValueCollection*>(hashtable));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Hashtable_ValueCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Hashtable_ValueCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Hashtable_ValueCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Hashtable_ValueCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Hashtable_ValueCollection::Hashtable_ValueCollection() {}
//  Writing Method size for method: ::System::Collections::Hashtable_HashtableEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable_HashtableEnumerator::*)(::System::Collections::Hashtable*, int32_t)>(
    &::System::Collections::Hashtable_HashtableEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bf1038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_HashtableEnumerator.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Hashtable_HashtableEnumerator::*)()>(&::System::Collections::Hashtable_HashtableEnumerator::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf32ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_HashtableEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Hashtable_HashtableEnumerator::*)()>(&::System::Collections::Hashtable_HashtableEnumerator::get_Key)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bf32b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_HashtableEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Hashtable_HashtableEnumerator::*)()>(&::System::Collections::Hashtable_HashtableEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bf330c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_HashtableEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::DictionaryEntry (::System::Collections::Hashtable_HashtableEnumerator::*)()>(
    &::System::Collections::Hashtable_HashtableEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bf3404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_HashtableEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Hashtable_HashtableEnumerator::*)()>(
    &::System::Collections::Hashtable_HashtableEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5bf3464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_HashtableEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Hashtable_HashtableEnumerator::*)()>(
    &::System::Collections::Hashtable_HashtableEnumerator::get_Value)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bf3538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable_HashtableEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable_HashtableEnumerator::*)()>(&::System::Collections::Hashtable_HashtableEnumerator::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5bf3594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 16 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__hashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr ::System::Collections::Hashtable* const& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__hashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr void System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_set__hashtable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashtable = value;
}
constexpr int32_t& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__bucket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucket;
}
constexpr int32_t const& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__bucket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucket;
}
constexpr void System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_set__bucket(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bucket = value;
}
constexpr int32_t& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr bool& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr bool const& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_set__current(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
constexpr int32_t& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__getObjectRetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getObjectRetType;
}
constexpr int32_t const& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__getObjectRetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getObjectRetType;
}
constexpr void System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_set__getObjectRetType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getObjectRetType = value;
}
constexpr ::System::Object*& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__currentKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentKey;
}
constexpr ::System::Object* const& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__currentKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentKey;
}
constexpr void System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_set__currentKey(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentKey = value;
}
constexpr ::System::Object*& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__currentValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentValue;
}
constexpr ::System::Object* const& System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_get__currentValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentValue;
}
constexpr void System::Collections::Hashtable_HashtableEnumerator::__cordl_internal_set__currentValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentValue = value;
}
inline void System::Collections::Hashtable_HashtableEnumerator::_ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashtable, getObjRetType);
}
inline ::System::Object* System::Collections::Hashtable_HashtableEnumerator::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Hashtable_HashtableEnumerator::get_Key() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::Hashtable_HashtableEnumerator::MoveNext() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry System::Collections::Hashtable_HashtableEnumerator::get_Entry() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Hashtable_HashtableEnumerator::get_Current() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Hashtable_HashtableEnumerator::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Collections::Hashtable_HashtableEnumerator::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable_HashtableEnumerator*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Hashtable_HashtableEnumerator* System::Collections::Hashtable_HashtableEnumerator::New_ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable_HashtableEnumerator*>(hashtable, getObjRetType));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr System::Collections::Hashtable_HashtableEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* System::Collections::Hashtable_HashtableEnumerator::i___System__Collections__IDictionaryEnumerator() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::Hashtable_HashtableEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Collections::Hashtable_HashtableEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::Hashtable_HashtableEnumerator::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Collections::Hashtable_HashtableEnumerator::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Hashtable_HashtableEnumerator::Hashtable_HashtableEnumerator() {}
// Ctor Parameters []
constexpr ::System::Collections::Hashtable_HashtableDebugView::Hashtable_HashtableDebugView() {}
//  Writing Method size for method: ::System::Collections::Hashtable.get_SerializationInfoTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* (*)()>(
    &::System::Collections::Hashtable::get_SerializationInfoTable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bef8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "get_SerializationInfoTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(bool)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bef944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bef948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(int32_t)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5befbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(int32_t, float_t)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5bef954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(int32_t, float_t, ::System::Collections::IEqualityComparer*)>(
    &::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5befbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Collections::IEqualityComparer*)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5befc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(int32_t, ::System::Collections::IEqualityComparer*)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5befc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Collections::IDictionary*)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5befc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Collections::IDictionary*, float_t)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5befc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Collections::IDictionary*, float_t, ::System::Collections::IEqualityComparer*)>(
    &::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5befc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                  ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5beffb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.InitHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Collections::Hashtable::*)(::System::Object*, int32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::System::Collections::Hashtable::InitHash)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bf0018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                            { "InitHash", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*, ::System::Object*)>(&::System::Collections::Hashtable::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::Clear)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5bf0440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::Clone)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5bf04dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bf05e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.ContainsKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::ContainsKey)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5bf05f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.CopyKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Array*, int32_t)>(&::System::Collections::Hashtable::CopyKeys)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bf0768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "CopyKeys", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.CopyEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Array*, int32_t)>(&::System::Collections::Hashtable::CopyEntries)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bf0814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "CopyEntries", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Array*, int32_t)>(&::System::Collections::Hashtable::CopyTo)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5bf091c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.CopyValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Array*, int32_t)>(&::System::Collections::Hashtable::CopyValues)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bf0ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "CopyValues", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::get_Item)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5bf0b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*, ::System::Object*)>(&::System::Collections::Hashtable::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf0d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.expand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::expand)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bf0d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "expand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.rehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::rehash)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bf0f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "rehash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.UpdateVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::UpdateVersion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bf04c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "UpdateVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.rehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(int32_t)>(&::System::Collections::Hashtable::rehash)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5bf0de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "rehash", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Hashtable::*)()>(
    &::System::Collections::Hashtable::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bf0fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bf1074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.GetHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::GetHash)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bf10d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf11ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf11b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf11bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.KeyEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Hashtable::*)(::System::Object*, ::System::Object*)>(&::System::Collections::Hashtable::KeyEquals)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5bf11c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_Keys)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bf12d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_Values)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bf1334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*, ::System::Object*, bool)>(&::System::Collections::Hashtable::Insert)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5bf0074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                                                             { "Insert", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.putEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::ArrayW<::System::Collections::Hashtable_bucket>, ::System::Object*, ::System::Object*, int32_t)>(
    &::System::Collections::Hashtable::putEntry)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bf0f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                                                                                           { "putEntry",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<::System::Collections::Hashtable_bucket>>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::Remove)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5bf1398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_SyncRoot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bf155c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf15c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Synchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (*)(::System::Collections::Hashtable*)>(&::System::Collections::Hashtable::Synchronized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bf15d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "Synchronized", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Hashtable::GetObjectData)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x5bf1674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::OnDeserialization)> {
  constexpr static std::size_t size = 0x85c;
  constexpr static std::size_t addrs = 0x5bf1bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ::i2c::class_of<::System::Collections::Hashtable*>(), 43 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Collections::Hashtable_bucket>& System::Collections::Hashtable::__cordl_internal_get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
constexpr ::ArrayW<::System::Collections::Hashtable_bucket> const& System::Collections::Hashtable::__cordl_internal_get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__buckets(::ArrayW<::System::Collections::Hashtable_bucket> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buckets = value;
}
constexpr int32_t& System::Collections::Hashtable::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& System::Collections::Hashtable::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr int32_t& System::Collections::Hashtable::__cordl_internal_get__occupancy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occupancy;
}
constexpr int32_t const& System::Collections::Hashtable::__cordl_internal_get__occupancy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occupancy;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__occupancy(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____occupancy = value;
}
constexpr int32_t& System::Collections::Hashtable::__cordl_internal_get__loadsize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadsize;
}
constexpr int32_t const& System::Collections::Hashtable::__cordl_internal_get__loadsize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadsize;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__loadsize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadsize = value;
}
constexpr float_t& System::Collections::Hashtable::__cordl_internal_get__loadFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadFactor;
}
constexpr float_t const& System::Collections::Hashtable::__cordl_internal_get__loadFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadFactor;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__loadFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadFactor = value;
}
constexpr int32_t& System::Collections::Hashtable::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::Hashtable::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr bool& System::Collections::Hashtable::__cordl_internal_get__isWriterInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWriterInProgress;
}
constexpr bool const& System::Collections::Hashtable::__cordl_internal_get__isWriterInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWriterInProgress;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__isWriterInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isWriterInProgress = value;
}
constexpr ::System::Collections::ICollection*& System::Collections::Hashtable::__cordl_internal_get__keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
constexpr ::System::Collections::ICollection* const& System::Collections::Hashtable::__cordl_internal_get__keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__keys(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keys = value;
}
constexpr ::System::Collections::ICollection*& System::Collections::Hashtable::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::System::Collections::ICollection* const& System::Collections::Hashtable::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__values(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
constexpr ::System::Collections::IEqualityComparer*& System::Collections::Hashtable::__cordl_internal_get__keycomparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keycomparer;
}
constexpr ::System::Collections::IEqualityComparer* const& System::Collections::Hashtable::__cordl_internal_get__keycomparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keycomparer;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__keycomparer(::System::Collections::IEqualityComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keycomparer = value;
}
constexpr ::System::Object*& System::Collections::Hashtable::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr ::System::Object* const& System::Collections::Hashtable::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr void System::Collections::Hashtable::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
inline void System::Collections::Hashtable::setStaticF_s_serializationInfoTable(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*, "s_serializationInfoTable",
                                    ::System::Collections::Hashtable*>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*
System::Collections::Hashtable::getStaticF_s_serializationInfoTable() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*,
                                           "s_serializationInfoTable", ::System::Collections::Hashtable*>();
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*
System::Collections::Hashtable::get_SerializationInfoTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "get_SerializationInfoTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*>(nullptr,
                                                                                                                                                                                    ___internal_method);
}
inline void System::Collections::Hashtable::_ctor(bool trash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trash);
}
inline void System::Collections::Hashtable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Hashtable::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Collections::Hashtable::_ctor(int32_t capacity, float_t loadFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, loadFactor);
}
inline void System::Collections::Hashtable::_ctor(int32_t capacity, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, loadFactor, equalityComparer);
}
inline void System::Collections::Hashtable::_ctor(::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, equalityComparer);
}
inline void System::Collections::Hashtable::_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, equalityComparer);
}
inline void System::Collections::Hashtable::_ctor(::System::Collections::IDictionary* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void System::Collections::Hashtable::_ctor(::System::Collections::IDictionary* d, float_t loadFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, loadFactor);
}
inline void System::Collections::Hashtable::_ctor(::System::Collections::IDictionary* d, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, loadFactor, equalityComparer);
}
inline void System::Collections::Hashtable::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline uint32_t System::Collections::Hashtable::InitHash(::System::Object* key, int32_t hashsize, ::by_ref<uint32_t> seed, ::by_ref<uint32_t> incr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                          { "InitHash", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, key, hashsize, seed, incr);
}
inline void System::Collections::Hashtable::Add(::System::Object* key, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Collections::Hashtable::Clear() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Hashtable::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::Hashtable::Contains(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool System::Collections::Hashtable::ContainsKey(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void System::Collections::Hashtable::CopyKeys(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "CopyKeys", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::Hashtable::CopyEntries(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "CopyEntries", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::Hashtable::CopyTo(::System::Array* array, int32_t arrayIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::Hashtable::CopyValues(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "CopyValues", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Object* System::Collections::Hashtable::get_Item(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void System::Collections::Hashtable::set_Item(::System::Object* key, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Collections::Hashtable::expand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "expand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Hashtable::rehash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "rehash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Hashtable::UpdateVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "UpdateVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Hashtable::rehash(int32_t newsize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "rehash", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newsize);
}
inline ::System::Collections::IEnumerator* System::Collections::Hashtable::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Collections::Hashtable::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline int32_t System::Collections::Hashtable::GetHash(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline bool System::Collections::Hashtable::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::Hashtable::get_IsFixedSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::Hashtable::get_IsSynchronized() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::Hashtable::KeyEquals(::System::Object* item, ::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, key);
}
inline ::System::Collections::ICollection* System::Collections::Hashtable::get_Keys() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Collections::Hashtable::get_Values() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline void System::Collections::Hashtable::Insert(::System::Object* key, ::System::Object* nvalue, bool add) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                                                           { "Insert", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, nvalue, add);
}
inline void System::Collections::Hashtable::putEntry(::ArrayW<::System::Collections::Hashtable_bucket> newBuckets, ::System::Object* key, ::System::Object* nvalue, int32_t hashcode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(),
                                                                                         { "putEntry",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::System::Collections::Hashtable_bucket>>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBuckets, key, nvalue, hashcode);
}
inline void System::Collections::Hashtable::Remove(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Object* System::Collections::Hashtable::get_SyncRoot() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Collections::Hashtable::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::Synchronized(::System::Collections::Hashtable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Hashtable*>(), { "Synchronized", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(nullptr, ___internal_method, table);
}
inline void System::Collections::Hashtable::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Collections::Hashtable::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Hashtable*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(bool trash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(trash));
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>());
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(capacity));
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(int32_t capacity, float_t loadFactor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(capacity, loadFactor));
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(int32_t capacity, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(capacity, loadFactor, equalityComparer));
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(equalityComparer));
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(capacity, equalityComparer));
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Collections::IDictionary* d) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(d));
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Collections::IDictionary* d, float_t loadFactor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(d, loadFactor));
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Collections::IDictionary* d, float_t loadFactor,
                                                                                  ::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(d, loadFactor, equalityComparer));
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Hashtable*>(info, context));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr System::Collections::Hashtable::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* System::Collections::Hashtable::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Hashtable::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Hashtable::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Hashtable::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Hashtable::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Collections::Hashtable::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Hashtable::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Collections::Hashtable::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Collections::Hashtable::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::Hashtable::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Collections::Hashtable::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Hashtable::Hashtable() {}
