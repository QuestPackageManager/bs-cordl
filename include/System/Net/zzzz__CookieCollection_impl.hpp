#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Array_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__CookieCollection__Stamp::__CookieCollection__Stamp(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::__CookieCollection__Stamp::__CookieCollection__Stamp() {}
constexpr ::System::Net::__CookieCollection__Stamp System::Net::__CookieCollection__Stamp::Check{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::__CookieCollection__Stamp System::Net::__CookieCollection__Stamp::Set{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::__CookieCollection__Stamp System::Net::__CookieCollection__Stamp::SetToUnused{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::__CookieCollection__Stamp System::Net::__CookieCollection__Stamp::SetToMaxUsed{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Net::__CookieCollection__CookieCollectionEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__CookieCollection__CookieCollectionEnumerator::*)(::System::Net::CookieCollection*)>(
    &::System::Net::__CookieCollection__CookieCollectionEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29aec68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieCollection__CookieCollectionEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__CookieCollection__CookieCollectionEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::__CookieCollection__CookieCollectionEnumerator::*)()>(
    &::System::Net::__CookieCollection__CookieCollectionEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29aecc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieCollection__CookieCollectionEnumerator*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__CookieCollection__CookieCollectionEnumerator.System_Collections_IEnumerator_MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__CookieCollection__CookieCollectionEnumerator::*)()>(
    &::System::Net::__CookieCollection__CookieCollectionEnumerator::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29aed70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieCollection__CookieCollectionEnumerator*>::get(),
                                                 "System.Collections.IEnumerator.MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__CookieCollection__CookieCollectionEnumerator.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__CookieCollection__CookieCollectionEnumerator::*)()>(
    &::System::Net::__CookieCollection__CookieCollectionEnumerator::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29aee14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieCollection__CookieCollectionEnumerator*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Net::__CookieCollection__CookieCollectionEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr ::System::Net::CookieCollection*& System::Net::__CookieCollection__CookieCollectionEnumerator::__get_m_cookies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_cookies;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> const& System::Net::__CookieCollection__CookieCollectionEnumerator::__get_m_cookies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_cookies;
}
constexpr void System::Net::__CookieCollection__CookieCollectionEnumerator::__set_m_cookies(::System::Net::CookieCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_cookies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::__CookieCollection__CookieCollectionEnumerator::__get_m_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_count;
}
constexpr int32_t const& System::Net::__CookieCollection__CookieCollectionEnumerator::__get_m_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_count;
}
constexpr void System::Net::__CookieCollection__CookieCollectionEnumerator::__set_m_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_count = value;
}
constexpr int32_t& System::Net::__CookieCollection__CookieCollectionEnumerator::__get_m_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_index;
}
constexpr int32_t const& System::Net::__CookieCollection__CookieCollectionEnumerator::__get_m_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_index;
}
constexpr void System::Net::__CookieCollection__CookieCollectionEnumerator::__set_m_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_index = value;
}
constexpr int32_t& System::Net::__CookieCollection__CookieCollectionEnumerator::__get_m_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_version;
}
constexpr int32_t const& System::Net::__CookieCollection__CookieCollectionEnumerator::__get_m_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_version;
}
constexpr void System::Net::__CookieCollection__CookieCollectionEnumerator::__set_m_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_version = value;
}
inline ::System::Net::__CookieCollection__CookieCollectionEnumerator* System::Net::__CookieCollection__CookieCollectionEnumerator::New_ctor(::System::Net::CookieCollection* cookies) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__CookieCollection__CookieCollectionEnumerator*>(cookies));
}
inline void System::Net::__CookieCollection__CookieCollectionEnumerator::_ctor(::System::Net::CookieCollection* cookies) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieCollection__CookieCollectionEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cookies);
}
inline ::System::Object* System::Net::__CookieCollection__CookieCollectionEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieCollection__CookieCollectionEnumerator*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Net::__CookieCollection__CookieCollectionEnumerator::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieCollection__CookieCollectionEnumerator*>::get(),
                                               "System.Collections.IEnumerator.MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::__CookieCollection__CookieCollectionEnumerator::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieCollection__CookieCollectionEnumerator*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__CookieCollection__CookieCollectionEnumerator::__CookieCollection__CookieCollectionEnumerator() {}
//  Writing Method size for method: ::System::Net::CookieCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29adcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cookie* (::System::Net::CookieCollection::*)(int32_t)>(&::System::Net::CookieCollection::get_Item)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x29add9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieCollection::*)(::System::Net::Cookie*)>(&::System::Net::CookieCollection::Add)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29ade88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieCollection::*)(::System::Net::CookieCollection*)>(&::System::Net::CookieCollection::Add)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x29ae310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ae670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "get_Count",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ae694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "get_IsSynchronized",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29ae69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "get_SyncRoot",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieCollection::*)(::System::Array*, int32_t)>(&::System::Net::CookieCollection::CopyTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ae6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.TimeStamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Net::CookieCollection::*)(::System::Net::__CookieCollection__Stamp)>(
    &::System::Net::CookieCollection::TimeStamp)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x29ae6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "TimeStamp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__CookieCollection__Stamp>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_IsOtherVersionSeen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::get_IsOtherVersionSeen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ae784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(),
                                                                               "get_IsOtherVersionSeen", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.InternalAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::CookieCollection::*)(::System::Net::Cookie*, bool)>(
    &::System::Net::CookieCollection::InternalAdd)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x29ae78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "InternalAdd", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::CookieCollection::*)(::System::Net::Cookie*)>(&::System::Net::CookieCollection::IndexOf)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x29adf4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieCollection::*)(int32_t)>(&::System::Net::CookieCollection::RemoveAt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29aec44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "RemoveAt", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Net::CookieCollection::*)()>(
    &::System::Net::CookieCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29ae610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "GetEnumerator",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Net::CookieCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Net::CookieCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr int32_t& System::Net::CookieCollection::__get_m_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_version;
}
constexpr int32_t const& System::Net::CookieCollection::__get_m_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_version;
}
constexpr void System::Net::CookieCollection::__set_m_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_version = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::CookieCollection::__get_m_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Net::CookieCollection::__get_m_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_list;
}
constexpr void System::Net::CookieCollection::__set_m_list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& System::Net::CookieCollection::__get_m_TimeStamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TimeStamp;
}
constexpr ::System::DateTime const& System::Net::CookieCollection::__get_m_TimeStamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TimeStamp;
}
constexpr void System::Net::CookieCollection::__set_m_TimeStamp(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_TimeStamp = value;
}
constexpr bool& System::Net::CookieCollection::__get_m_has_other_versions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_has_other_versions;
}
constexpr bool const& System::Net::CookieCollection::__get_m_has_other_versions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_has_other_versions;
}
constexpr void System::Net::CookieCollection::__set_m_has_other_versions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_has_other_versions = value;
}
constexpr bool& System::Net::CookieCollection::__get_m_IsReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IsReadOnly;
}
constexpr bool const& System::Net::CookieCollection::__get_m_IsReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IsReadOnly;
}
constexpr void System::Net::CookieCollection::__set_m_IsReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_IsReadOnly = value;
}
inline ::System::Net::CookieCollection* System::Net::CookieCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::CookieCollection*>());
}
inline void System::Net::CookieCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Cookie* System::Net::CookieCollection::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cookie*, false>(this, ___internal_method, index);
}
inline void System::Net::CookieCollection::Add(::System::Net::Cookie* cookie) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cookie);
}
inline void System::Net::CookieCollection::Add(::System::Net::CookieCollection* cookies) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cookies);
}
inline int32_t System::Net::CookieCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Net::CookieCollection::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "get_IsSynchronized",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::CookieCollection::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "get_SyncRoot",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Net::CookieCollection::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
inline ::System::DateTime System::Net::CookieCollection::TimeStamp(::System::Net::__CookieCollection__Stamp how) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "TimeStamp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__CookieCollection__Stamp>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, how);
}
inline bool System::Net::CookieCollection::get_IsOtherVersionSeen() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "get_IsOtherVersionSeen",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Net::CookieCollection::InternalAdd(::System::Net::Cookie* cookie, bool isStrict) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "InternalAdd", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cookie, isStrict);
}
inline int32_t System::Net::CookieCollection::IndexOf(::System::Net::Cookie* cookie) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cookie);
}
inline void System::Net::CookieCollection::RemoveAt(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "RemoveAt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline ::System::Collections::IEnumerator* System::Net::CookieCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieCollection*>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::CookieCollection::CookieCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
