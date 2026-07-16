#pragma once
// IWYU pragma private; include "System/Net/HttpListenerPrefixCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerPrefixCollection_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerPrefixCollection::*)(::System::Net::HttpListener*)>(&::System::Net::HttpListenerPrefixCollection::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x642e800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::HttpListenerPrefixCollection::*)()>(&::System::Net::HttpListenerPrefixCollection::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x642fc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerPrefixCollection::*)()>(&::System::Net::HttpListenerPrefixCollection::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6430138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerPrefixCollection::*)(::StringW)>(&::System::Net::HttpListenerPrefixCollection::Add)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6430140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "Add", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerPrefixCollection::*)()>(&::System::Net::HttpListenerPrefixCollection::Clear)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6430284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerPrefixCollection::*)(::StringW)>(&::System::Net::HttpListenerPrefixCollection::Contains)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6430348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerPrefixCollection::*)(::ArrayW<::StringW>, int32_t)>(&::System::Net::HttpListenerPrefixCollection::CopyTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64303b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (::System::Net::HttpListenerPrefixCollection::*)()>(
    &::System::Net::HttpListenerPrefixCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x642a8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::HttpListenerPrefixCollection::*)()>(
    &::System::Net::HttpListenerPrefixCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6430438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerPrefixCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerPrefixCollection::*)(::StringW)>(&::System::Net::HttpListenerPrefixCollection::Remove)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x64304c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Net::HttpListenerPrefixCollection::__cordl_internal_get_prefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Net::HttpListenerPrefixCollection::__cordl_internal_get_prefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr void System::Net::HttpListenerPrefixCollection::__cordl_internal_set_prefixes(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefixes = value;
}
constexpr ::System::Net::HttpListener*& System::Net::HttpListenerPrefixCollection::__cordl_internal_get_listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listener;
}
constexpr ::System::Net::HttpListener* const& System::Net::HttpListenerPrefixCollection::__cordl_internal_get_listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listener;
}
constexpr void System::Net::HttpListenerPrefixCollection::__cordl_internal_set_listener(::System::Net::HttpListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listener = value;
}
inline void System::Net::HttpListenerPrefixCollection::_ctor(::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline int32_t System::Net::HttpListenerPrefixCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::HttpListenerPrefixCollection::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpListenerPrefixCollection::Add(::StringW uriPrefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "Add", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uriPrefix);
}
inline void System::Net::HttpListenerPrefixCollection::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::HttpListenerPrefixCollection::Contains(::StringW uriPrefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uriPrefix);
}
inline void System::Net::HttpListenerPrefixCollection::CopyTo(::ArrayW<::StringW> array, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset);
}
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System::Net::HttpListenerPrefixCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::HttpListenerPrefixCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::Net::HttpListenerPrefixCollection::Remove(::StringW uriPrefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerPrefixCollection*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uriPrefix);
}
inline ::System::Net::HttpListenerPrefixCollection* System::Net::HttpListenerPrefixCollection::New_ctor(::System::Net::HttpListener* listener) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListenerPrefixCollection*>(listener));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::StringW>"
constexpr System::Net::HttpListenerPrefixCollection::operator ::System::Collections::Generic::ICollection_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::StringW>"
constexpr ::System::Collections::Generic::ICollection_1<::StringW>* System::Net::HttpListenerPrefixCollection::i___System__Collections__Generic__ICollection_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr System::Net::HttpListenerPrefixCollection::operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* System::Net::HttpListenerPrefixCollection::i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Net::HttpListenerPrefixCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Net::HttpListenerPrefixCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerPrefixCollection::HttpListenerPrefixCollection() {}
