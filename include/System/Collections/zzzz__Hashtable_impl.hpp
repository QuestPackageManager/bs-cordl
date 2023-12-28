#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__Hashtable_SyncHashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "val", ty: "::System::Object*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "hash_coll", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::__Hashtable__bucket::__Hashtable__bucket(::System::Object* key, ::System::Object* val, int32_t hash_coll) noexcept {
  this->key = key;
  this->val = val;
  this->hash_coll = hash_coll;
}
// Ctor Parameters []
constexpr ::System::Collections::__Hashtable__bucket::__Hashtable__bucket() {}
//  Writing Method size for method: ::System::Collections::__Hashtable__KeyCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__Hashtable__KeyCollection::*)(::System::Collections::Hashtable*)>(
    &::System::Collections::__Hashtable__KeyCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2589590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__KeyCollection.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__Hashtable__KeyCollection::*)(::System::Array*, int32_t)>(
    &::System::Collections::__Hashtable__KeyCollection::CopyTo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x258a79c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__KeyCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::__Hashtable__KeyCollection::*)()>(
    &::System::Collections::__Hashtable__KeyCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x258a928;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__KeyCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__Hashtable__KeyCollection::*)()>(
    &::System::Collections::__Hashtable__KeyCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x258a990;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__KeyCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__Hashtable__KeyCollection::*)()>(
    &::System::Collections::__Hashtable__KeyCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x258a9b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__KeyCollection.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::__Hashtable__KeyCollection::*)()>(
    &::System::Collections::__Hashtable__KeyCollection::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x258a9d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(), 13));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::__Hashtable__KeyCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::__Hashtable__KeyCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Hashtable*& System::Collections::__Hashtable__KeyCollection::__get__hashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Collections::__Hashtable__KeyCollection::__get__hashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr void System::Collections::__Hashtable__KeyCollection::__set__hashtable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hashtable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::__Hashtable__KeyCollection* System::Collections::__Hashtable__KeyCollection::New_ctor(::System::Collections::Hashtable* hashtable) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::__Hashtable__KeyCollection*>(hashtable));
}
inline void System::Collections::__Hashtable__KeyCollection::_ctor(::System::Collections::Hashtable* hashtable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashtable);
}
inline void System::Collections::__Hashtable__KeyCollection::CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::IEnumerator* System::Collections::__Hashtable__KeyCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool System::Collections::__Hashtable__KeyCollection::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(),
                                                                             "get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__Hashtable__KeyCollection::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(),
                                                                             "get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t System::Collections::__Hashtable__KeyCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__KeyCollection*>::get(),
                                                                             "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::__Hashtable__KeyCollection::__Hashtable__KeyCollection() {}
//  Writing Method size for method: ::System::Collections::__Hashtable__ValueCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__Hashtable__ValueCollection::*)(::System::Collections::Hashtable*)>(
    &::System::Collections::__Hashtable__ValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2589628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__ValueCollection.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__Hashtable__ValueCollection::*)(::System::Array*, int32_t)>(
    &::System::Collections::__Hashtable__ValueCollection::CopyTo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x258a9f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__ValueCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::__Hashtable__ValueCollection::*)()>(
    &::System::Collections::__Hashtable__ValueCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x258ab80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__ValueCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__Hashtable__ValueCollection::*)()>(
    &::System::Collections::__Hashtable__ValueCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x258abe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__ValueCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__Hashtable__ValueCollection::*)()>(
    &::System::Collections::__Hashtable__ValueCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x258ac0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__ValueCollection.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::__Hashtable__ValueCollection::*)()>(
    &::System::Collections::__Hashtable__ValueCollection::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x258ac30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(), 13));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::__Hashtable__ValueCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::__Hashtable__ValueCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Hashtable*& System::Collections::__Hashtable__ValueCollection::__get__hashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Collections::__Hashtable__ValueCollection::__get__hashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr void System::Collections::__Hashtable__ValueCollection::__set__hashtable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hashtable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::__Hashtable__ValueCollection* System::Collections::__Hashtable__ValueCollection::New_ctor(::System::Collections::Hashtable* hashtable) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::__Hashtable__ValueCollection*>(hashtable));
}
inline void System::Collections::__Hashtable__ValueCollection::_ctor(::System::Collections::Hashtable* hashtable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashtable);
}
inline void System::Collections::__Hashtable__ValueCollection::CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::IEnumerator* System::Collections::__Hashtable__ValueCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool System::Collections::__Hashtable__ValueCollection::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(),
                                                                             "get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__Hashtable__ValueCollection::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(),
                                                                             "get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t System::Collections::__Hashtable__ValueCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__ValueCollection*>::get(),
                                                                             "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::__Hashtable__ValueCollection::__Hashtable__ValueCollection() {}
//  Writing Method size for method: ::System::Collections::__Hashtable__HashtableEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__Hashtable__HashtableEnumerator::*)(::System::Collections::Hashtable*, int32_t)>(
    &::System::Collections::__Hashtable__HashtableEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x258927c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__HashtableEnumerator.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__Hashtable__HashtableEnumerator::*)()>(
    &::System::Collections::__Hashtable__HashtableEnumerator::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x258b6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                                               "Clone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__HashtableEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__Hashtable__HashtableEnumerator::*)()>(
    &::System::Collections::__Hashtable__HashtableEnumerator::get_Key)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x258b6e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__HashtableEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__Hashtable__HashtableEnumerator::*)()>(
    &::System::Collections::__Hashtable__HashtableEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x258b744;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__HashtableEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (::System::Collections::__Hashtable__HashtableEnumerator::*)()>(
    &::System::Collections::__Hashtable__HashtableEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x258b878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__HashtableEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__Hashtable__HashtableEnumerator::*)()>(
    &::System::Collections::__Hashtable__HashtableEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x258b8f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__HashtableEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__Hashtable__HashtableEnumerator::*)()>(
    &::System::Collections::__Hashtable__HashtableEnumerator::get_Value)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x258b9e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Hashtable__HashtableEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__Hashtable__HashtableEnumerator::*)()>(
    &::System::Collections::__Hashtable__HashtableEnumerator::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x258ba44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(), 16));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr System::Collections::__Hashtable__HashtableEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::__Hashtable__HashtableEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::__Hashtable__HashtableEnumerator::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Hashtable*& System::Collections::__Hashtable__HashtableEnumerator::__get__hashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Collections::__Hashtable__HashtableEnumerator::__get__hashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtable;
}
constexpr void System::Collections::__Hashtable__HashtableEnumerator::__set__hashtable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hashtable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::__Hashtable__HashtableEnumerator::__get__bucket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucket;
}
constexpr int32_t const& System::Collections::__Hashtable__HashtableEnumerator::__get__bucket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucket;
}
constexpr void System::Collections::__Hashtable__HashtableEnumerator::__set__bucket(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bucket = value;
}
constexpr int32_t& System::Collections::__Hashtable__HashtableEnumerator::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::__Hashtable__HashtableEnumerator::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::__Hashtable__HashtableEnumerator::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr bool& System::Collections::__Hashtable__HashtableEnumerator::__get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr bool const& System::Collections::__Hashtable__HashtableEnumerator::__get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void System::Collections::__Hashtable__HashtableEnumerator::__set__current(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
constexpr int32_t& System::Collections::__Hashtable__HashtableEnumerator::__get__getObjectRetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getObjectRetType;
}
constexpr int32_t const& System::Collections::__Hashtable__HashtableEnumerator::__get__getObjectRetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getObjectRetType;
}
constexpr void System::Collections::__Hashtable__HashtableEnumerator::__set__getObjectRetType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getObjectRetType = value;
}
constexpr ::System::Object*& System::Collections::__Hashtable__HashtableEnumerator::__get__currentKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentKey;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::__Hashtable__HashtableEnumerator::__get__currentKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentKey;
}
constexpr void System::Collections::__Hashtable__HashtableEnumerator::__set__currentKey(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Collections::__Hashtable__HashtableEnumerator::__get__currentValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::__Hashtable__HashtableEnumerator::__get__currentValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentValue;
}
constexpr void System::Collections::__Hashtable__HashtableEnumerator::__set__currentValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::__Hashtable__HashtableEnumerator* System::Collections::__Hashtable__HashtableEnumerator::New_ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::__Hashtable__HashtableEnumerator*>(hashtable, getObjRetType));
}
inline void System::Collections::__Hashtable__HashtableEnumerator::_ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashtable, getObjRetType);
}
inline ::System::Object* System::Collections::__Hashtable__HashtableEnumerator::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                                             "Clone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__Hashtable__HashtableEnumerator::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                                             "get_Key", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Collections::__Hashtable__HashtableEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry System::Collections::__Hashtable__HashtableEnumerator::get_Entry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                                             "get_Entry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__Hashtable__HashtableEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                                             "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__Hashtable__HashtableEnumerator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                                             "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Collections::__Hashtable__HashtableEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Hashtable__HashtableEnumerator*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::__Hashtable__HashtableEnumerator::__Hashtable__HashtableEnumerator() {}
// Ctor Parameters []
constexpr ::System::Collections::__Hashtable__HashtableDebugView::__Hashtable__HashtableDebugView() {}
//  Writing Method size for method: ::System::Collections::Hashtable.get_SerializationInfoTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* (*)()>(
        &::System::Collections::Hashtable::get_SerializationInfoTable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2587b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                               "get_SerializationInfoTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(bool)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2587b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2587b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(int32_t)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2587e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(int32_t, float_t)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2587b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(int32_t, float_t, ::System::Collections::IEqualityComparer*)>(
    &::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2587e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Collections::IEqualityComparer*)>(
    &::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2587e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(int32_t, ::System::Collections::IEqualityComparer*)>(
    &::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2587e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Collections::IDictionary*)>(
    &::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2587ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Collections::IDictionary*, float_t)>(
    &::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2587eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Collections::Hashtable::*)(::System::Collections::IDictionary*, float_t, ::System::Collections::IEqualityComparer*)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2587ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25881e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.InitHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Hashtable::*)(::System::Object*, int32_t, ByRef<uint32_t>, ByRef<uint32_t>)>(
    &::System::Collections::Hashtable::InitHash)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2588248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "InitHash", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::Hashtable::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x258829c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::Clear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2588664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::Clone)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2588730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2588844;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.ContainsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::ContainsKey)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2588854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.CopyKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Array*, int32_t)>(&::System::Collections::Hashtable::CopyKeys)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25889bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "CopyKeys", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.CopyEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Array*, int32_t)>(
    &::System::Collections::Hashtable::CopyEntries)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2588a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "CopyEntries", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Array*, int32_t)>(&::System::Collections::Hashtable::CopyTo)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2588b68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.CopyValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Array*, int32_t)>(
    &::System::Collections::Hashtable::CopyValues)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2588d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "CopyValues", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Hashtable::*)(::System::Object*)>(
    &::System::Collections::Hashtable::get_Item)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2588dc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::Hashtable::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2588fb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.expand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::expand)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2588fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "expand",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.rehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::rehash)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x258914c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "rehash",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.UpdateVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::UpdateVersion)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2588704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "UpdateVersion",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.rehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(int32_t)>(&::System::Collections::Hashtable::rehash)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2589028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "rehash", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Hashtable::*)()>(
    &::System::Collections::Hashtable::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2589218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Collections::Hashtable::*)()>(
    &::System::Collections::Hashtable::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25892d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.GetHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::GetHash)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2589338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2589400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2589408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2589410;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.KeyEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Hashtable::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::Hashtable::KeyEquals)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2589418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Collections::Hashtable::*)()>(
    &::System::Collections::Hashtable::get_Keys)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2589520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Collections::Hashtable::*)()>(
    &::System::Collections::Hashtable::get_Values)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25895b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*, ::System::Object*, bool)>(
    &::System::Collections::Hashtable::Insert)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x25882a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "Insert", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.putEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(
    ::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*>, ::System::Object*, ::System::Object*, int32_t)>(
    &::System::Collections::Hashtable::putEntry)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2589168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "putEntry", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*)>(&::System::Collections::Hashtable::Remove)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2589650;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_SyncRoot)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2589838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Hashtable::*)()>(&::System::Collections::Hashtable::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25898b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.Synchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Hashtable* (*)(::System::Collections::Hashtable*)>(
    &::System::Collections::Hashtable::Synchronized)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x25898b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "Synchronized", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Hashtable::GetObjectData)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x2589994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Hashtable.OnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Hashtable::*)(::System::Object*)>(
    &::System::Collections::Hashtable::OnDeserialization)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x2589ed0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), 43));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr System::Collections::Hashtable::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Hashtable::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Hashtable::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Collections::Hashtable::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Collections::Hashtable::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::Hashtable::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*>& System::Collections::Hashtable::__get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
constexpr ::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> const& System::Collections::Hashtable::__get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
constexpr void System::Collections::Hashtable::__set__buckets(::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buckets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::Hashtable::__get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& System::Collections::Hashtable::__get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void System::Collections::Hashtable::__set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr int32_t& System::Collections::Hashtable::__get__occupancy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occupancy;
}
constexpr int32_t const& System::Collections::Hashtable::__get__occupancy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occupancy;
}
constexpr void System::Collections::Hashtable::__set__occupancy(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____occupancy = value;
}
constexpr int32_t& System::Collections::Hashtable::__get__loadsize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadsize;
}
constexpr int32_t const& System::Collections::Hashtable::__get__loadsize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadsize;
}
constexpr void System::Collections::Hashtable::__set__loadsize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadsize = value;
}
constexpr float_t& System::Collections::Hashtable::__get__loadFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadFactor;
}
constexpr float_t const& System::Collections::Hashtable::__get__loadFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadFactor;
}
constexpr void System::Collections::Hashtable::__set__loadFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadFactor = value;
}
constexpr int32_t& System::Collections::Hashtable::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::Hashtable::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::Hashtable::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr bool& System::Collections::Hashtable::__get__isWriterInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWriterInProgress;
}
constexpr bool const& System::Collections::Hashtable::__get__isWriterInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWriterInProgress;
}
constexpr void System::Collections::Hashtable::__set__isWriterInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isWriterInProgress = value;
}
constexpr ::System::Collections::ICollection*& System::Collections::Hashtable::__get__keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& System::Collections::Hashtable::__get__keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
constexpr void System::Collections::Hashtable::__set__keys(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ICollection*& System::Collections::Hashtable::__get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& System::Collections::Hashtable::__get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Collections::Hashtable::__set__values(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEqualityComparer*& System::Collections::Hashtable::__get__keycomparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keycomparer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& System::Collections::Hashtable::__get__keycomparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keycomparer;
}
constexpr void System::Collections::Hashtable::__set__keycomparer(::System::Collections::IEqualityComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keycomparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Collections::Hashtable::__get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::Hashtable::__get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr void System::Collections::Hashtable::__set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Collections::Hashtable::setStaticF_s_serializationInfoTable(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*, "s_serializationInfoTable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*
System::Collections::Hashtable::getStaticF_s_serializationInfoTable() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*,
                                           "s_serializationInfoTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get>();
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*
System::Collections::Hashtable::get_SerializationInfoTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                             "get_SerializationInfoTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*, false>(
      nullptr, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(bool trash) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(trash));
}
inline void System::Collections::Hashtable::_ctor(bool trash) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trash);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>());
}
inline void System::Collections::Hashtable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(capacity));
}
inline void System::Collections::Hashtable::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(int32_t capacity, float_t loadFactor) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(capacity, loadFactor));
}
inline void System::Collections::Hashtable::_ctor(int32_t capacity, float_t loadFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, loadFactor);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(int32_t capacity, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(capacity, loadFactor, equalityComparer));
}
inline void System::Collections::Hashtable::_ctor(int32_t capacity, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, loadFactor, equalityComparer);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(equalityComparer));
}
inline void System::Collections::Hashtable::_ctor(::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, equalityComparer);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(capacity, equalityComparer));
}
inline void System::Collections::Hashtable::_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, equalityComparer);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Collections::IDictionary* d) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(d));
}
inline void System::Collections::Hashtable::_ctor(::System::Collections::IDictionary* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Collections::IDictionary* d, float_t loadFactor) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(d, loadFactor));
}
inline void System::Collections::Hashtable::_ctor(::System::Collections::IDictionary* d, float_t loadFactor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, loadFactor);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Collections::IDictionary* d, float_t loadFactor,
                                                                                  ::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(d, loadFactor, equalityComparer));
}
inline void System::Collections::Hashtable::_ctor(::System::Collections::IDictionary* d, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, loadFactor, equalityComparer);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Hashtable*>(info, context));
}
inline void System::Collections::Hashtable::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline uint32_t System::Collections::Hashtable::InitHash(::System::Object* key, int32_t hashsize, ByRef<uint32_t> seed, ByRef<uint32_t> incr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "InitHash", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, key, hashsize, seed, incr);
}
inline void System::Collections::Hashtable::Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void System::Collections::Hashtable::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Hashtable::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "Clone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Collections::Hashtable::Contains(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "Contains", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline bool System::Collections::Hashtable::ContainsKey(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "ContainsKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline void System::Collections::Hashtable::CopyKeys(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "CopyKeys", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::Hashtable::CopyEntries(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "CopyEntries", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::Hashtable::CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::Hashtable::CopyValues(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "CopyValues", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Object* System::Collections::Hashtable::get_Item(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, key);
}
inline void System::Collections::Hashtable::set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "set_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void System::Collections::Hashtable::expand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "expand",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::Hashtable::rehash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "rehash",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::Hashtable::UpdateVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "UpdateVersion",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::Hashtable::rehash(int32_t newsize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "rehash", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newsize);
}
inline ::System::Collections::IEnumerator* System::Collections::Hashtable::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Collections::Hashtable::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(this, ___internal_method);
}
inline int32_t System::Collections::Hashtable::GetHash(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "GetHash", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
inline bool System::Collections::Hashtable::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "get_IsReadOnly",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::Hashtable::get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "get_IsFixedSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::Hashtable::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "get_IsSynchronized",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::Hashtable::KeyEquals(::System::Object* item, ::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "KeyEquals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, key);
}
inline ::System::Collections::ICollection* System::Collections::Hashtable::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "get_Keys",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Collections::Hashtable::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "get_Values",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline void System::Collections::Hashtable::Insert(::System::Object* key, ::System::Object* nvalue, bool add) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "Insert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, nvalue, add);
}
inline void System::Collections::Hashtable::putEntry(::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> newBuckets, ::System::Object* key,
                                                     ::System::Object* nvalue, int32_t hashcode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "putEntry", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newBuckets, key, nvalue, hashcode);
}
inline void System::Collections::Hashtable::Remove(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline ::System::Object* System::Collections::Hashtable::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "get_SyncRoot",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t System::Collections::Hashtable::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Collections::Hashtable::Synchronized(::System::Collections::Hashtable* table) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "Synchronized", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*, false>(nullptr, ___internal_method, table);
}
inline void System::Collections::Hashtable::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Collections::Hashtable::OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Hashtable*>::get(), "OnDeserialization", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
// Ctor Parameters []
constexpr ::System::Collections::Hashtable::Hashtable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
