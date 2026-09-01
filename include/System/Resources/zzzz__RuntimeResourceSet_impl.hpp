#pragma once
// IWYU pragma private; include "System\Resources\RuntimeResourceSet.hpp"
#include "System/Resources/zzzz__ResourceSet_impl.hpp"
#include "System/Resources/zzzz__RuntimeResourceSet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Resources/zzzz__ResourceLocator_def.hpp"
#include "System/Resources/zzzz__ResourceReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::RuntimeResourceSet::*)(::StringW)>(&::System::Resources::RuntimeResourceSet::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5b73450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::RuntimeResourceSet::*)(::System::IO::Stream*)>(&::System::Resources::RuntimeResourceSet::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b73698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::RuntimeResourceSet::*)(bool)>(&::System::Resources::RuntimeResourceSet::Dispose)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b737ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Resources::RuntimeResourceSet::*)()>(
    &::System::Resources::RuntimeResourceSet::GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b739e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Resources::RuntimeResourceSet::*)()>(
    &::System::Resources::RuntimeResourceSet::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b73ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetEnumeratorHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Resources::RuntimeResourceSet::*)()>(
    &::System::Resources::RuntimeResourceSet::GetEnumeratorHelper)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b739e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { "GetEnumeratorHelper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::RuntimeResourceSet::*)(::StringW)>(&::System::Resources::RuntimeResourceSet::GetString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b73ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::RuntimeResourceSet::*)(::StringW, bool)>(&::System::Resources::RuntimeResourceSet::GetString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b74408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::RuntimeResourceSet::*)(::StringW)>(&::System::Resources::RuntimeResourceSet::GetObject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b74438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::RuntimeResourceSet::*)(::StringW, bool)>(&::System::Resources::RuntimeResourceSet::GetObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b74444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::RuntimeResourceSet::*)(::StringW, bool, bool)>(&::System::Resources::RuntimeResourceSet::GetObject)> {
  constexpr static std::size_t size = 0x8ec;
  constexpr static std::size_t addrs = 0x5b73b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(),
                                                                                           { "GetObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.ResolveResourceLocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Resources::RuntimeResourceSet::*)(::System::Resources::ResourceLocator, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*, bool)>(
    &::System::Resources::RuntimeResourceSet::ResolveResourceLocator)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5b74c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(),
                                                { "ResolveResourceLocator",
                                                  {},
                                                  { ::i2c::type_of<::System::Resources::ResourceLocator>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& System::Resources::RuntimeResourceSet::__cordl_internal_get__resCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* const& System::Resources::RuntimeResourceSet::__cordl_internal_get__resCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resCache;
}
constexpr void System::Resources::RuntimeResourceSet::__cordl_internal_set__resCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resCache = value;
}
constexpr ::System::Resources::ResourceReader*& System::Resources::RuntimeResourceSet::__cordl_internal_get__defaultReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultReader;
}
constexpr ::System::Resources::ResourceReader* const& System::Resources::RuntimeResourceSet::__cordl_internal_get__defaultReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultReader;
}
constexpr void System::Resources::RuntimeResourceSet::__cordl_internal_set__defaultReader(::System::Resources::ResourceReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultReader = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& System::Resources::RuntimeResourceSet::__cordl_internal_get__caseInsensitiveTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseInsensitiveTable;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* const&
System::Resources::RuntimeResourceSet::__cordl_internal_get__caseInsensitiveTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseInsensitiveTable;
}
constexpr void System::Resources::RuntimeResourceSet::__cordl_internal_set__caseInsensitiveTable(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caseInsensitiveTable = value;
}
constexpr bool& System::Resources::RuntimeResourceSet::__cordl_internal_get__haveReadFromReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haveReadFromReader;
}
constexpr bool const& System::Resources::RuntimeResourceSet::__cordl_internal_get__haveReadFromReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haveReadFromReader;
}
constexpr void System::Resources::RuntimeResourceSet::__cordl_internal_set__haveReadFromReader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____haveReadFromReader = value;
}
inline void System::Resources::RuntimeResourceSet::_ctor(::StringW fileName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName);
}
inline void System::Resources::RuntimeResourceSet::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void System::Resources::RuntimeResourceSet::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Collections::IDictionaryEnumerator* System::Resources::RuntimeResourceSet::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Resources::RuntimeResourceSet::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Resources::RuntimeResourceSet::GetEnumeratorHelper() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), { "GetEnumeratorHelper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline ::StringW System::Resources::RuntimeResourceSet::GetString(::StringW key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline ::StringW System::Resources::RuntimeResourceSet::GetString(::StringW key, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key, ignoreCase);
}
inline ::System::Object* System::Resources::RuntimeResourceSet::GetObject(::StringW key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline ::System::Object* System::Resources::RuntimeResourceSet::GetObject(::StringW key, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::RuntimeResourceSet*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key, ignoreCase);
}
inline ::System::Object* System::Resources::RuntimeResourceSet::GetObject(::StringW key, bool ignoreCase, bool isString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(),
                                                                                         { "GetObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key, ignoreCase, isString);
}
inline ::System::Object* System::Resources::RuntimeResourceSet::ResolveResourceLocator(::System::Resources::ResourceLocator resLocation, ::StringW key,
                                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* copyOfCache,
                                                                                       bool keyInWrongCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::RuntimeResourceSet*>(),
                                              { "ResolveResourceLocator",
                                                {},
                                                { ::i2c::type_of<::System::Resources::ResourceLocator>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, resLocation, key, copyOfCache, keyInWrongCase);
}
inline ::System::Resources::RuntimeResourceSet* System::Resources::RuntimeResourceSet::New_ctor(::StringW fileName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::RuntimeResourceSet*>(fileName));
}
inline ::System::Resources::RuntimeResourceSet* System::Resources::RuntimeResourceSet::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::RuntimeResourceSet*>(stream));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Resources::RuntimeResourceSet::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Resources::RuntimeResourceSet::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::RuntimeResourceSet::RuntimeResourceSet() {}
