#pragma once
// IWYU pragma private; include "System\Resources\ResourceSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Resources/zzzz__IResourceReader_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Resources::ResourceSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceSet::*)()>(&::System::Resources::ResourceSet::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7d0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceSet::*)(bool)>(&::System::Resources::ResourceSet::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b735b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.CommonInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceSet::*)()>(&::System::Resources::ResourceSet::CommonInit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b7d0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "CommonInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceSet::*)(bool)>(&::System::Resources::ResourceSet::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b73920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ::i2c::class_of<::System::Resources::ResourceSet*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceSet::*)()>(&::System::Resources::ResourceSet::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b79204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Resources::ResourceSet::*)()>(&::System::Resources::ResourceSet::GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7d114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ::i2c::class_of<::System::Resources::ResourceSet*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Resources::ResourceSet::*)()>(
    &::System::Resources::ResourceSet::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7d184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.GetEnumeratorHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Resources::ResourceSet::*)()>(&::System::Resources::ResourceSet::GetEnumeratorHelper)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b7d118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "GetEnumeratorHelper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceSet::*)(::StringW)>(&::System::Resources::ResourceSet::GetString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b7d188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ::i2c::class_of<::System::Resources::ResourceSet*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceSet::*)(::StringW, bool)>(&::System::Resources::ResourceSet::GetString)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5b7d37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ::i2c::class_of<::System::Resources::ResourceSet*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.GetObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceSet::*)(::StringW)>(&::System::Resources::ResourceSet::GetObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7d82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ::i2c::class_of<::System::Resources::ResourceSet*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.GetObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceSet::*)(::StringW, bool)>(&::System::Resources::ResourceSet::GetObject)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b7d830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ::i2c::class_of<::System::Resources::ResourceSet*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.GetObjectInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceSet::*)(::StringW)>(&::System::Resources::ResourceSet::GetObjectInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b7d2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "GetObjectInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceSet.GetCaseInsensitiveObjectInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceSet::*)(::StringW)>(&::System::Resources::ResourceSet::GetCaseInsensitiveObjectInternal)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5b7d554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "GetCaseInsensitiveObjectInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Resources::IResourceReader*& System::Resources::ResourceSet::__cordl_internal_get_Reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Reader;
}
constexpr ::System::Resources::IResourceReader* const& System::Resources::ResourceSet::__cordl_internal_get_Reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Reader;
}
constexpr void System::Resources::ResourceSet::__cordl_internal_set_Reader(::System::Resources::IResourceReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Reader = value;
}
constexpr ::System::Collections::Hashtable*& System::Resources::ResourceSet::__cordl_internal_get_Table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Table;
}
constexpr ::System::Collections::Hashtable* const& System::Resources::ResourceSet::__cordl_internal_get_Table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Table;
}
constexpr void System::Resources::ResourceSet::__cordl_internal_set_Table(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Table = value;
}
constexpr ::System::Collections::Hashtable*& System::Resources::ResourceSet::__cordl_internal_get__caseInsensitiveTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseInsensitiveTable;
}
constexpr ::System::Collections::Hashtable* const& System::Resources::ResourceSet::__cordl_internal_get__caseInsensitiveTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseInsensitiveTable;
}
constexpr void System::Resources::ResourceSet::__cordl_internal_set__caseInsensitiveTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caseInsensitiveTable = value;
}
inline void System::Resources::ResourceSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Resources::ResourceSet::_ctor(bool junk) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, junk);
}
inline void System::Resources::ResourceSet::CommonInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "CommonInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Resources::ResourceSet::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceSet*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Resources::ResourceSet::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Resources::ResourceSet::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceSet*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Resources::ResourceSet::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Resources::ResourceSet::GetEnumeratorHelper() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "GetEnumeratorHelper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline ::StringW System::Resources::ResourceSet::GetString(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceSet*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW System::Resources::ResourceSet::GetString(::StringW name, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceSet*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, ignoreCase);
}
inline ::System::Object* System::Resources::ResourceSet::GetObject(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceSet*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline ::System::Object* System::Resources::ResourceSet::GetObject(::StringW name, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Resources::ResourceSet*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, ignoreCase);
}
inline ::System::Object* System::Resources::ResourceSet::GetObjectInternal(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "GetObjectInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline ::System::Object* System::Resources::ResourceSet::GetCaseInsensitiveObjectInternal(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceSet*>(), { "GetCaseInsensitiveObjectInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline ::System::Resources::ResourceSet* System::Resources::ResourceSet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ResourceSet*>());
}
inline ::System::Resources::ResourceSet* System::Resources::ResourceSet::New_ctor(bool junk) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ResourceSet*>(junk));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Resources::ResourceSet::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Resources::ResourceSet::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Resources::ResourceSet::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Resources::ResourceSet::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceSet::ResourceSet() {}
