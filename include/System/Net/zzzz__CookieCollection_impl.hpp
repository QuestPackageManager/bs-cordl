#pragma once
// IWYU pragma private; include "System\Net\CookieCollection.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::CookieCollection_Stamp::CookieCollection_Stamp(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CookieCollection_Stamp::CookieCollection_Stamp() {}
constexpr ::System::Net::CookieCollection_Stamp System::Net::CookieCollection_Stamp::Check{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::CookieCollection_Stamp System::Net::CookieCollection_Stamp::Set{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::CookieCollection_Stamp System::Net::CookieCollection_Stamp::SetToUnused{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::CookieCollection_Stamp System::Net::CookieCollection_Stamp::SetToMaxUsed{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Net::CookieCollection_CookieCollectionEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieCollection_CookieCollectionEnumerator::*)(::System::Net::CookieCollection*)>(
    &::System::Net::CookieCollection_CookieCollectionEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x641d0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection_CookieCollectionEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::CookieCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection_CookieCollectionEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::CookieCollection_CookieCollectionEnumerator::*)()>(
    &::System::Net::CookieCollection_CookieCollectionEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x641d128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection_CookieCollectionEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection_CookieCollectionEnumerator.System_Collections_IEnumerator_MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieCollection_CookieCollectionEnumerator::*)()>(
    &::System::Net::CookieCollection_CookieCollectionEnumerator::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x641d1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection_CookieCollectionEnumerator*>(), { "System.Collections.IEnumerator.MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection_CookieCollectionEnumerator.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieCollection_CookieCollectionEnumerator::*)()>(
    &::System::Net::CookieCollection_CookieCollectionEnumerator::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x641d258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection_CookieCollectionEnumerator*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::CookieCollection*& System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_get_m_cookies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cookies;
}
constexpr ::System::Net::CookieCollection* const& System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_get_m_cookies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cookies;
}
constexpr void System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_set_m_cookies(::System::Net::CookieCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cookies = value;
}
constexpr int32_t& System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_get_m_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr int32_t const& System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_get_m_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr void System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_set_m_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_count = value;
}
constexpr int32_t& System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_get_m_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_index;
}
constexpr int32_t const& System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_get_m_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_index;
}
constexpr void System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_set_m_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_index = value;
}
constexpr int32_t& System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_get_m_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr int32_t const& System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_get_m_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr void System::Net::CookieCollection_CookieCollectionEnumerator::__cordl_internal_set_m_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_version = value;
}
inline void System::Net::CookieCollection_CookieCollectionEnumerator::_ctor(::System::Net::CookieCollection* cookies) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection_CookieCollectionEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::CookieCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookies);
}
inline ::System::Object* System::Net::CookieCollection_CookieCollectionEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection_CookieCollectionEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::CookieCollection_CookieCollectionEnumerator::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection_CookieCollectionEnumerator*>(), { "System.Collections.IEnumerator.MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::CookieCollection_CookieCollectionEnumerator::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection_CookieCollectionEnumerator*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::CookieCollection_CookieCollectionEnumerator* System::Net::CookieCollection_CookieCollectionEnumerator::New_ctor(::System::Net::CookieCollection* cookies) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CookieCollection_CookieCollectionEnumerator*>(cookies));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Net::CookieCollection_CookieCollectionEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Net::CookieCollection_CookieCollectionEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::CookieCollection_CookieCollectionEnumerator::CookieCollection_CookieCollectionEnumerator() {}
//  Writing Method size for method: ::System::Net::CookieCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x641c1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cookie* (::System::Net::CookieCollection::*)(int32_t)>(&::System::Net::CookieCollection::get_Item)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x641c27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieCollection::*)(::System::Net::Cookie*)>(&::System::Net::CookieCollection::Add)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x641c370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Net::Cookie*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieCollection::*)(::System::Net::CookieCollection*)>(&::System::Net::CookieCollection::Add)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x641c7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Net::CookieCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x641caf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x641cb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x641cb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieCollection::*)(::System::Array*, int32_t)>(&::System::Net::CookieCollection::CopyTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x641cb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.TimeStamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Net::CookieCollection::*)(::System::Net::CookieCollection_Stamp)>(&::System::Net::CookieCollection::TimeStamp)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x641cb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "TimeStamp", {}, { ::i2c::type_of<::System::Net::CookieCollection_Stamp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.get_IsOtherVersionSeen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::get_IsOtherVersionSeen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x641cc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_IsOtherVersionSeen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.InternalAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CookieCollection::*)(::System::Net::Cookie*, bool)>(&::System::Net::CookieCollection::InternalAdd)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x641cc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "InternalAdd", {}, { ::i2c::type_of<::System::Net::Cookie*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CookieCollection::*)(::System::Net::Cookie*)>(&::System::Net::CookieCollection::IndexOf)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x641c430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Net::Cookie*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieCollection::*)(int32_t)>(&::System::Net::CookieCollection::RemoveAt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x641d0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::CookieCollection::*)()>(&::System::Net::CookieCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x641ca94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::CookieCollection::__cordl_internal_get_m_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr int32_t const& System::Net::CookieCollection::__cordl_internal_get_m_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr void System::Net::CookieCollection::__cordl_internal_set_m_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_version = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::CookieCollection::__cordl_internal_get_m_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_list;
}
constexpr ::System::Collections::ArrayList* const& System::Net::CookieCollection::__cordl_internal_get_m_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_list;
}
constexpr void System::Net::CookieCollection::__cordl_internal_set_m_list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_list = value;
}
constexpr ::System::DateTime& System::Net::CookieCollection::__cordl_internal_get_m_TimeStamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeStamp;
}
constexpr ::System::DateTime const& System::Net::CookieCollection::__cordl_internal_get_m_TimeStamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeStamp;
}
constexpr void System::Net::CookieCollection::__cordl_internal_set_m_TimeStamp(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeStamp = value;
}
constexpr bool& System::Net::CookieCollection::__cordl_internal_get_m_has_other_versions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_has_other_versions;
}
constexpr bool const& System::Net::CookieCollection::__cordl_internal_get_m_has_other_versions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_has_other_versions;
}
constexpr void System::Net::CookieCollection::__cordl_internal_set_m_has_other_versions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_has_other_versions = value;
}
constexpr bool& System::Net::CookieCollection::__cordl_internal_get_m_IsReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
constexpr bool const& System::Net::CookieCollection::__cordl_internal_get_m_IsReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
constexpr void System::Net::CookieCollection::__cordl_internal_set_m_IsReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsReadOnly = value;
}
inline void System::Net::CookieCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Cookie* System::Net::CookieCollection::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cookie*>(this, ___internal_method, index);
}
inline void System::Net::CookieCollection::Add(::System::Net::Cookie* cookie) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Net::Cookie*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookie);
}
inline void System::Net::CookieCollection::Add(::System::Net::CookieCollection* cookies) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Net::CookieCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookies);
}
inline int32_t System::Net::CookieCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::CookieCollection::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Net::CookieCollection::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Net::CookieCollection::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::DateTime System::Net::CookieCollection::TimeStamp(::System::Net::CookieCollection_Stamp how) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "TimeStamp", {}, { ::i2c::type_of<::System::Net::CookieCollection_Stamp>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, how);
}
inline bool System::Net::CookieCollection::get_IsOtherVersionSeen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "get_IsOtherVersionSeen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::CookieCollection::InternalAdd(::System::Net::Cookie* cookie, bool isStrict) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "InternalAdd", {}, { ::i2c::type_of<::System::Net::Cookie*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cookie, isStrict);
}
inline int32_t System::Net::CookieCollection::IndexOf(::System::Net::Cookie* cookie) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Net::Cookie*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cookie);
}
inline void System::Net::CookieCollection::RemoveAt(int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::System::Collections::IEnumerator* System::Net::CookieCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieCollection*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Net::CookieCollection* System::Net::CookieCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CookieCollection*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Net::CookieCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Net::CookieCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Net::CookieCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Net::CookieCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::CookieCollection::CookieCollection() {}
