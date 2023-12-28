#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__SortedList_def.hpp"
#include "System/Collections/zzzz__SortedList_def.hpp"
#include "System/Collections/zzzz__SortedList_SyncSortedList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
//  Writing Method size for method: ::System::Collections::__SortedList__SortedListEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__SortedListEnumerator::*)(
    ::System::Collections::SortedList*, int32_t, int32_t, int32_t)>(&::System::Collections::__SortedList__SortedListEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2580930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::SortedList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__SortedListEnumerator.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__SortedList__SortedListEnumerator::*)()>(
    &::System::Collections::__SortedList__SortedListEnumerator::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25821bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(), "Clone",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__SortedListEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__SortedList__SortedListEnumerator::*)()>(
    &::System::Collections::__SortedList__SortedListEnumerator::get_Key)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25821c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__SortedListEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__SortedList__SortedListEnumerator::*)()>(
    &::System::Collections::__SortedList__SortedListEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2582268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__SortedListEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (::System::Collections::__SortedList__SortedListEnumerator::*)()>(
    &::System::Collections::__SortedList__SortedListEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2582354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__SortedListEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__SortedList__SortedListEnumerator::*)()>(
    &::System::Collections::__SortedList__SortedListEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25823fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__SortedListEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__SortedList__SortedListEnumerator::*)()>(
    &::System::Collections::__SortedList__SortedListEnumerator::get_Value)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25824d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__SortedListEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__SortedListEnumerator::*)()>(
    &::System::Collections::__SortedList__SortedListEnumerator::Reset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2582574;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(), 16));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr System::Collections::__SortedList__SortedListEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::__SortedList__SortedListEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::__SortedList__SortedListEnumerator::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::SortedList*& System::Collections::__SortedList__SortedListEnumerator::__get__sortedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& System::Collections::__SortedList__SortedListEnumerator::__get__sortedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedList;
}
constexpr void System::Collections::__SortedList__SortedListEnumerator::__set__sortedList(::System::Collections::SortedList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sortedList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Collections::__SortedList__SortedListEnumerator::__get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::__SortedList__SortedListEnumerator::__get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr void System::Collections::__SortedList__SortedListEnumerator::__set__key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Collections::__SortedList__SortedListEnumerator::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::__SortedList__SortedListEnumerator::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void System::Collections::__SortedList__SortedListEnumerator::__set__value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::__SortedList__SortedListEnumerator::__get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Collections::__SortedList__SortedListEnumerator::__get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Collections::__SortedList__SortedListEnumerator::__set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr int32_t& System::Collections::__SortedList__SortedListEnumerator::__get__startIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startIndex;
}
constexpr int32_t const& System::Collections::__SortedList__SortedListEnumerator::__get__startIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startIndex;
}
constexpr void System::Collections::__SortedList__SortedListEnumerator::__set__startIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startIndex = value;
}
constexpr int32_t& System::Collections::__SortedList__SortedListEnumerator::__get__endIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endIndex;
}
constexpr int32_t const& System::Collections::__SortedList__SortedListEnumerator::__get__endIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endIndex;
}
constexpr void System::Collections::__SortedList__SortedListEnumerator::__set__endIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endIndex = value;
}
constexpr int32_t& System::Collections::__SortedList__SortedListEnumerator::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::__SortedList__SortedListEnumerator::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::__SortedList__SortedListEnumerator::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr bool& System::Collections::__SortedList__SortedListEnumerator::__get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr bool const& System::Collections::__SortedList__SortedListEnumerator::__get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void System::Collections::__SortedList__SortedListEnumerator::__set__current(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
constexpr int32_t& System::Collections::__SortedList__SortedListEnumerator::__get__getObjectRetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getObjectRetType;
}
constexpr int32_t const& System::Collections::__SortedList__SortedListEnumerator::__get__getObjectRetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getObjectRetType;
}
constexpr void System::Collections::__SortedList__SortedListEnumerator::__set__getObjectRetType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getObjectRetType = value;
}
inline ::System::Collections::__SortedList__SortedListEnumerator* System::Collections::__SortedList__SortedListEnumerator::New_ctor(::System::Collections::SortedList* sortedList, int32_t index,
                                                                                                                                    int32_t count, int32_t getObjRetType) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::__SortedList__SortedListEnumerator*>(sortedList, index, count, getObjRetType));
}
inline void System::Collections::__SortedList__SortedListEnumerator::_ctor(::System::Collections::SortedList* sortedList, int32_t index, int32_t count, int32_t getObjRetType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::SortedList*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sortedList, index, count, getObjRetType);
}
inline ::System::Object* System::Collections::__SortedList__SortedListEnumerator::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                                             "Clone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__SortedList__SortedListEnumerator::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                                             "get_Key", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Collections::__SortedList__SortedListEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry System::Collections::__SortedList__SortedListEnumerator::get_Entry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                                             "get_Entry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__SortedList__SortedListEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                                             "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__SortedList__SortedListEnumerator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                                             "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Collections::__SortedList__SortedListEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__SortedListEnumerator*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::__SortedList__SortedListEnumerator::__SortedList__SortedListEnumerator() {}
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__KeyList::*)(::System::Collections::SortedList*)>(
    &::System::Collections::__SortedList__KeyList::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2580b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::SortedList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::__SortedList__KeyList::*)()>(
    &::System::Collections::__SortedList__KeyList::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25825f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__SortedList__KeyList::*)()>(
    &::System::Collections::__SortedList__KeyList::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2582614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__SortedList__KeyList::*)()>(
    &::System::Collections::__SortedList__KeyList::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x258261c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__SortedList__KeyList::*)()>(
    &::System::Collections::__SortedList__KeyList::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2582624;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__SortedList__KeyList::*)()>(
    &::System::Collections::__SortedList__KeyList::get_SyncRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2582648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::__SortedList__KeyList::*)(::System::Object*)>(
    &::System::Collections::__SortedList__KeyList::Add)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x258266c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__KeyList::*)()>(&::System::Collections::__SortedList__KeyList::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25826bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__SortedList__KeyList::*)(::System::Object*)>(
    &::System::Collections::__SortedList__KeyList::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x258270c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__KeyList::*)(::System::Array*, int32_t)>(
    &::System::Collections::__SortedList__KeyList::CopyTo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2582730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__KeyList::*)(int32_t, ::System::Object*)>(
    &::System::Collections::__SortedList__KeyList::Insert)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__SortedList__KeyList::*)(int32_t)>(
    &::System::Collections::__SortedList__KeyList::get_Item)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2582850;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__KeyList::*)(int32_t, ::System::Object*)>(
    &::System::Collections::__SortedList__KeyList::set_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::__SortedList__KeyList::*)()>(
    &::System::Collections::__SortedList__KeyList::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25828c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::__SortedList__KeyList::*)(::System::Object*)>(
    &::System::Collections::__SortedList__KeyList::IndexOf)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2582954;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__KeyList::*)(::System::Object*)>(
    &::System::Collections::__SortedList__KeyList::Remove)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582a20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__KeyList.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__KeyList::*)(int32_t)>(
    &::System::Collections::__SortedList__KeyList::RemoveAt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582a70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), 35));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Collections::__SortedList__KeyList::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::__SortedList__KeyList::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::__SortedList__KeyList::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::SortedList*& System::Collections::__SortedList__KeyList::__get_sortedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortedList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& System::Collections::__SortedList__KeyList::__get_sortedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortedList;
}
constexpr void System::Collections::__SortedList__KeyList::__set_sortedList(::System::Collections::SortedList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sortedList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::__SortedList__KeyList* System::Collections::__SortedList__KeyList::New_ctor(::System::Collections::SortedList* sortedList) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::__SortedList__KeyList*>(sortedList));
}
inline void System::Collections::__SortedList__KeyList::_ctor(::System::Collections::SortedList* sortedList) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::SortedList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sortedList);
}
inline int32_t System::Collections::__SortedList__KeyList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Collections::__SortedList__KeyList::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                             "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::__SortedList__KeyList::get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                             "get_IsFixedSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::__SortedList__KeyList::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                             "get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__SortedList__KeyList::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                             "get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t System::Collections::__SortedList__KeyList::Add(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
inline void System::Collections::__SortedList__KeyList::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Collections::__SortedList__KeyList::Contains(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "Contains", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline void System::Collections::__SortedList__KeyList::CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::__SortedList__KeyList::Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "Insert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline ::System::Object* System::Collections::__SortedList__KeyList::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline void System::Collections::__SortedList__KeyList::set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "set_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline ::System::Collections::IEnumerator* System::Collections::__SortedList__KeyList::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline int32_t System::Collections::__SortedList__KeyList::IndexOf(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
inline void System::Collections::__SortedList__KeyList::Remove(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void System::Collections::__SortedList__KeyList::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__KeyList*>::get(), "RemoveAt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::System::Collections::__SortedList__KeyList::__SortedList__KeyList() {}
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__ValueList::*)(::System::Collections::SortedList*)>(
    &::System::Collections::__SortedList__ValueList::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2580bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::SortedList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::__SortedList__ValueList::*)()>(
    &::System::Collections::__SortedList__ValueList::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2582ac0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__SortedList__ValueList::*)()>(
    &::System::Collections::__SortedList__ValueList::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2582adc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__SortedList__ValueList::*)()>(
    &::System::Collections::__SortedList__ValueList::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2582ae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__SortedList__ValueList::*)()>(
    &::System::Collections::__SortedList__ValueList::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2582aec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__SortedList__ValueList::*)()>(
    &::System::Collections::__SortedList__ValueList::get_SyncRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2582b10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::__SortedList__ValueList::*)(::System::Object*)>(
    &::System::Collections::__SortedList__ValueList::Add)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582b34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__ValueList::*)()>(&::System::Collections::__SortedList__ValueList::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582b84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__SortedList__ValueList::*)(::System::Object*)>(
    &::System::Collections::__SortedList__ValueList::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2582bd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__ValueList::*)(::System::Array*, int32_t)>(
    &::System::Collections::__SortedList__ValueList::CopyTo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2582bf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__ValueList::*)(int32_t, ::System::Object*)>(
    &::System::Collections::__SortedList__ValueList::Insert)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582cc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__SortedList__ValueList::*)(int32_t)>(
    &::System::Collections::__SortedList__ValueList::get_Item)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2582d18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__ValueList::*)(int32_t, ::System::Object*)>(
    &::System::Collections::__SortedList__ValueList::set_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582d3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::__SortedList__ValueList::*)()>(
    &::System::Collections::__SortedList__ValueList::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2582d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::__SortedList__ValueList::*)(::System::Object*)>(
    &::System::Collections::__SortedList__ValueList::IndexOf)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2582e1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__ValueList::*)(::System::Object*)>(
    &::System::Collections::__SortedList__ValueList::Remove)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__SortedList__ValueList.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__SortedList__ValueList::*)(int32_t)>(
    &::System::Collections::__SortedList__ValueList::RemoveAt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2582ee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), 35));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Collections::__SortedList__ValueList::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::__SortedList__ValueList::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::__SortedList__ValueList::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::SortedList*& System::Collections::__SortedList__ValueList::__get_sortedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortedList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& System::Collections::__SortedList__ValueList::__get_sortedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortedList;
}
constexpr void System::Collections::__SortedList__ValueList::__set_sortedList(::System::Collections::SortedList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sortedList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::__SortedList__ValueList* System::Collections::__SortedList__ValueList::New_ctor(::System::Collections::SortedList* sortedList) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::__SortedList__ValueList*>(sortedList));
}
inline void System::Collections::__SortedList__ValueList::_ctor(::System::Collections::SortedList* sortedList) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::SortedList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sortedList);
}
inline int32_t System::Collections::__SortedList__ValueList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                                             "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Collections::__SortedList__ValueList::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                                             "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::__SortedList__ValueList::get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                                             "get_IsFixedSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::__SortedList__ValueList::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                                             "get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__SortedList__ValueList::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                                             "get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t System::Collections::__SortedList__ValueList::Add(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
inline void System::Collections::__SortedList__ValueList::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Collections::__SortedList__ValueList::Contains(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "Contains", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline void System::Collections::__SortedList__ValueList::CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::__SortedList__ValueList::Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "Insert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline ::System::Object* System::Collections::__SortedList__ValueList::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline void System::Collections::__SortedList__ValueList::set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "set_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline ::System::Collections::IEnumerator* System::Collections::__SortedList__ValueList::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline int32_t System::Collections::__SortedList__ValueList::IndexOf(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void System::Collections::__SortedList__ValueList::Remove(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Collections::__SortedList__ValueList::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__SortedList__ValueList*>::get(), "RemoveAt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::System::Collections::__SortedList__ValueList::__SortedList__ValueList() {}
// Ctor Parameters []
constexpr ::System::Collections::__SortedList__SortedListDebugView::__SortedList__SortedListDebugView() {}
//  Writing Method size for method: ::System::Collections::SortedList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)()>(&::System::Collections::SortedList::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x257fc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)()>(&::System::Collections::SortedList::Init)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x257fc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(int32_t)>(&::System::Collections::SortedList::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x257fd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(::System::Collections::IComparer*)>(
    &::System::Collections::SortedList::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x257fecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::SortedList::Add)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x257ff00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.set_Capacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(int32_t)>(&::System::Collections::SortedList::set_Capacity)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2580160;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::SortedList::*)()>(&::System::Collections::SortedList::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2580348;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Collections::SortedList::*)()>(
    &::System::Collections::SortedList::get_Keys)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2580350;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Collections::SortedList::*)()>(
    &::System::Collections::SortedList::get_Values)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2580360;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::SortedList::*)()>(&::System::Collections::SortedList::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2580370;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::SortedList::*)()>(&::System::Collections::SortedList::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2580378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::SortedList::*)()>(&::System::Collections::SortedList::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2580380;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::SortedList::*)()>(&::System::Collections::SortedList::get_SyncRoot)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2580388;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)()>(&::System::Collections::SortedList::Clear)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2580400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::SortedList::*)()>(&::System::Collections::SortedList::Clone)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2580444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::SortedList::*)(::System::Object*)>(&::System::Collections::SortedList::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25804f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.ContainsValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::SortedList::*)(::System::Object*)>(&::System::Collections::SortedList::ContainsValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2580514;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(::System::Array*, int32_t)>(&::System::Collections::SortedList::CopyTo)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2580538;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.EnsureCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(int32_t)>(&::System::Collections::SortedList::EnsureCapacity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25807b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "EnsureCapacity", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.GetByIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::SortedList::*)(int32_t)>(&::System::Collections::SortedList::GetByIndex)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2580804;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::SortedList::*)()>(
    &::System::Collections::SortedList::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25808c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Collections::SortedList::*)()>(
    &::System::Collections::SortedList::GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2580990;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.GetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::SortedList::*)(int32_t)>(&::System::Collections::SortedList::GetKey)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2580a00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.GetKeyList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::System::Collections::SortedList::*)()>(
    &::System::Collections::SortedList::GetKeyList)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2580abc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.GetValueList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::System::Collections::SortedList::*)()>(
    &::System::Collections::SortedList::GetValueList)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2580b54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::SortedList::*)(::System::Object*)>(
    &::System::Collections::SortedList::get_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2580bec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::SortedList::set_Item)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2580c3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.IndexOfKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::SortedList::*)(::System::Object*)>(&::System::Collections::SortedList::IndexOfKey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2580d60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.IndexOfValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::SortedList::*)(::System::Object*)>(
    &::System::Collections::SortedList::IndexOfValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2580e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(int32_t, ::System::Object*, ::System::Object*)>(
    &::System::Collections::SortedList::Insert)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2580030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Insert", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(int32_t)>(&::System::Collections::SortedList::RemoveAt)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2580e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::SortedList::*)(::System::Object*)>(&::System::Collections::SortedList::Remove)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2580f9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::SortedList.Synchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::SortedList* (*)(::System::Collections::SortedList*)>(
    &::System::Collections::SortedList::Synchronized)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2580fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Synchronized", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::SortedList*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr System::Collections::SortedList::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::SortedList::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::SortedList::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::SortedList::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Collections::SortedList::__get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Collections::SortedList::__get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void System::Collections::SortedList::__set_keys(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Collections::SortedList::__get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Collections::SortedList::__get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr void System::Collections::SortedList::__set_values(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::SortedList::__get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr int32_t const& System::Collections::SortedList::__get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr void System::Collections::SortedList::__set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
constexpr int32_t& System::Collections::SortedList::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& System::Collections::SortedList::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Collections::SortedList::__set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::System::Collections::IComparer*& System::Collections::SortedList::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& System::Collections::SortedList::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
constexpr void System::Collections::SortedList::__set_comparer(::System::Collections::IComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::__SortedList__KeyList*& System::Collections::SortedList::__get_keyList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::__SortedList__KeyList*> const& System::Collections::SortedList::__get_keyList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyList;
}
constexpr void System::Collections::SortedList::__set_keyList(::System::Collections::__SortedList__KeyList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::__SortedList__ValueList*& System::Collections::SortedList::__get_valueList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::__SortedList__ValueList*> const& System::Collections::SortedList::__get_valueList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueList;
}
constexpr void System::Collections::SortedList::__set_valueList(::System::Collections::__SortedList__ValueList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Collections::SortedList::__get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::SortedList::__get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr void System::Collections::SortedList::__set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::SortedList* System::Collections::SortedList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::SortedList*>());
}
inline void System::Collections::SortedList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::SortedList::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::SortedList* System::Collections::SortedList::New_ctor(int32_t initialCapacity) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::SortedList*>(initialCapacity));
}
inline void System::Collections::SortedList::_ctor(int32_t initialCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialCapacity);
}
inline ::System::Collections::SortedList* System::Collections::SortedList::New_ctor(::System::Collections::IComparer* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::SortedList*>(comparer));
}
inline void System::Collections::SortedList::_ctor(::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
inline void System::Collections::SortedList::Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void System::Collections::SortedList::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "set_Capacity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Collections::SortedList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Collections::SortedList::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "get_Keys",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Collections::SortedList::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "get_Values",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline bool System::Collections::SortedList::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "get_IsReadOnly",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::SortedList::get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "get_IsFixedSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::SortedList::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "get_IsSynchronized",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::SortedList::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "get_SyncRoot",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Collections::SortedList::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::SortedList::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Clone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Collections::SortedList::Contains(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Contains", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline bool System::Collections::SortedList::ContainsValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "ContainsValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline void System::Collections::SortedList::CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::SortedList::EnsureCapacity(int32_t min) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "EnsureCapacity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min);
}
inline ::System::Object* System::Collections::SortedList::GetByIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "GetByIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* System::Collections::SortedList::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Collections::SortedList::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::SortedList::GetKey(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "GetKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline ::System::Collections::IList* System::Collections::SortedList::GetKeyList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "GetKeyList",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method);
}
inline ::System::Collections::IList* System::Collections::SortedList::GetValueList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "GetValueList",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::SortedList::get_Item(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, key);
}
inline void System::Collections::SortedList::set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "set_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline int32_t System::Collections::SortedList::IndexOfKey(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "IndexOfKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
inline int32_t System::Collections::SortedList::IndexOfValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "IndexOfValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void System::Collections::SortedList::Insert(int32_t index, ::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Insert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, key, value);
}
inline void System::Collections::SortedList::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "RemoveAt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Collections::SortedList::Remove(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline ::System::Collections::SortedList* System::Collections::SortedList::Synchronized(::System::Collections::SortedList* list) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::SortedList*>::get(), "Synchronized", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::SortedList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::SortedList*, false>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::System::Collections::SortedList::SortedList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
