#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DBNull_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__StringComparer_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::*)(
    ::StringW, ::System::Object*)>(&::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2940fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::__get_Key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr ::StringW const& System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::__get_Key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr void System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::__set_Key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::__get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::__get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::__set_Value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*
System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::New_ctor(::StringW name, ::System::Object* value) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*>(name, value));
}
inline void System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::_ctor(::StringW name, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry::__NameObjectCollectionBase__NameObjectEntry() {}
//  Writing Method size for method: ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::*)(
    ::System::Collections::Specialized::NameObjectCollectionBase*)>(&::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x294106c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Specialized::NameObjectCollectionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::*)()>(
    &::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2941518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::*)()>(
    &::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29415f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*>::get(), "Reset",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::*)()>(
    &::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2941688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*>::get(),
                                    "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr int32_t& System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__get__pos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos;
}
constexpr int32_t const& System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__get__pos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos;
}
constexpr void System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__set__pos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pos = value;
}
constexpr ::System::Collections::Specialized::NameObjectCollectionBase*& System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__get__coll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coll;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::NameObjectCollectionBase*> const&
System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__get__coll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coll;
}
constexpr void System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__set__coll(::System::Collections::Specialized::NameObjectCollectionBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coll)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
inline ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*
System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::New_ctor(::System::Collections::Specialized::NameObjectCollectionBase* coll) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*>(coll));
}
inline void System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::_ctor(::System::Collections::Specialized::NameObjectCollectionBase* coll) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Specialized::NameObjectCollectionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, coll);
}
inline bool System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*>::get(),
                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*>::get(),
                                               "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator::__NameObjectCollectionBase__NameObjectKeysEnumerator() {}
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(
    &::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x293cb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Collections::IEqualityComparer*)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x293fdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(
    int32_t, ::System::Collections::IEqualityComparer*)>(&::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x293cd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x293cc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::DBNull*)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293da9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DBNull*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x293cdc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Specialized::NameObjectCollectionBase::GetObjectData)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x293ffd4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.OnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Object*)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0x2940710;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(
    &::System::Collections::Specialized::NameObjectCollectionBase::Reset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x293fe58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "Reset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::Reset)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x293ff10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "Reset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.FindEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry* (
    ::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&::System::Collections::Specialized::NameObjectCollectionBase::FindEntry)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2940f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "FindEntry",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(
    &::System::Collections::Specialized::NameObjectCollectionBase::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2940fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "get_IsReadOnly",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW, ::System::Object*)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::BaseAdd)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x293d1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseAdd", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::BaseRemove)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x293d5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseRemove",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::BaseGet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x293d19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseGet",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW, ::System::Object*)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::BaseSet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x293d51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseSet", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::BaseGet)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x293d884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseGet",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseGetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::BaseGetKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x293d9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseGetKey",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(
    &::System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x294100c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(
    &::System::Collections::Specialized::NameObjectCollectionBase::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29410ac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.System_Collections_ICollection_CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Array*, int32_t)>(
    &::System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x29410d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "System.Collections.ICollection.CopyTo",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(
    &::System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29413ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(),
                                                 "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(
    &::System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2941468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(),
                                                 "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Specialized::NameObjectCollectionBase::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Specialized::NameObjectCollectionBase::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Specialized::NameObjectCollectionBase::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Specialized::NameObjectCollectionBase::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Collections::Specialized::NameObjectCollectionBase::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Specialized::NameObjectCollectionBase::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Collections::Specialized::NameObjectCollectionBase::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback*
System::Collections::Specialized::NameObjectCollectionBase::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
constexpr bool& System::Collections::Specialized::NameObjectCollectionBase::__get__readOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnly;
}
constexpr bool const& System::Collections::Specialized::NameObjectCollectionBase::__get__readOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnly;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__readOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readOnly = value;
}
constexpr ::System::Collections::ArrayList*& System::Collections::Specialized::NameObjectCollectionBase::__get__entriesArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entriesArray;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Collections::Specialized::NameObjectCollectionBase::__get__entriesArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entriesArray;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__entriesArray(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entriesArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEqualityComparer*& System::Collections::Specialized::NameObjectCollectionBase::__get__keyComparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyComparer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& System::Collections::Specialized::NameObjectCollectionBase::__get__keyComparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyComparer;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__keyComparer(::System::Collections::IEqualityComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyComparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Collections::Specialized::NameObjectCollectionBase::__get__entriesTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entriesTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Collections::Specialized::NameObjectCollectionBase::__get__entriesTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entriesTable;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__entriesTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entriesTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*& System::Collections::Specialized::NameObjectCollectionBase::__get__nullKeyEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullKeyEntry;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*> const&
System::Collections::Specialized::NameObjectCollectionBase::__get__nullKeyEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullKeyEntry;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__nullKeyEntry(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nullKeyEntry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Collections::Specialized::NameObjectCollectionBase::__get__serializationInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const&
System::Collections::Specialized::NameObjectCollectionBase::__get__serializationInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationInfo;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__serializationInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializationInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::Specialized::NameObjectCollectionBase::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::Specialized::NameObjectCollectionBase::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::Object*& System::Collections::Specialized::NameObjectCollectionBase::__get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::Specialized::NameObjectCollectionBase::__get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Collections::Specialized::NameObjectCollectionBase::setStaticF_defaultComparer(::System::StringComparer* value) {
  ::cordl_internals::setStaticField<::System::StringComparer*, "defaultComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get>(
      std::forward<::System::StringComparer*>(value));
}
inline ::System::StringComparer* System::Collections::Specialized::NameObjectCollectionBase::getStaticF_defaultComparer() {
  return ::cordl_internals::getStaticField<::System::StringComparer*, "defaultComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get>();
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Specialized::NameObjectCollectionBase*>());
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Specialized::NameObjectCollectionBase*>(equalityComparer));
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, equalityComparer);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(int32_t capacity,
                                                                                                                                          ::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Specialized::NameObjectCollectionBase*>(capacity, equalityComparer));
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, equalityComparer);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Specialized::NameObjectCollectionBase*>(capacity));
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(::System::DBNull* dummy) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Specialized::NameObjectCollectionBase*>(dummy));
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(::System::DBNull* dummy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DBNull*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dummy);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Specialized::NameObjectCollectionBase*>(info, context));
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::Reset(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry* System::Collections::Specialized::NameObjectCollectionBase::FindEntry(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "FindEntry",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*, false>(this, ___internal_method, key);
}
inline bool System::Collections::Specialized::NameObjectCollectionBase::get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "get_IsReadOnly",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::BaseAdd(::StringW name, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseAdd", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::BaseRemove(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseRemove",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::System::Object* System::Collections::Specialized::NameObjectCollectionBase::BaseGet(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseGet",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::BaseSet(::StringW name, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseSet", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline ::System::Object* System::Collections::Specialized::NameObjectCollectionBase::BaseGet(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseGet",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline ::StringW System::Collections::Specialized::NameObjectCollectionBase::BaseGetKey(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "BaseGetKey",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline int32_t System::Collections::Specialized::NameObjectCollectionBase::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(), "System.Collections.ICollection.CopyTo",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
inline ::System::Object* System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(),
                                               "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NameObjectCollectionBase*>::get(),
                                               "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NameObjectCollectionBase::NameObjectCollectionBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
