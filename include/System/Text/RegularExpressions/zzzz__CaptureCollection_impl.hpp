#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/CaptureCollection.hpp"
#include "System/Text/RegularExpressions/zzzz__Capture_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__CaptureCollection_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Text/RegularExpressions/zzzz__CaptureCollection_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Capture_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection_Enumerator::*)(::System::Text::RegularExpressions::CaptureCollection*)>(
    &::System::Text::RegularExpressions::CaptureCollection_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6376c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Text::RegularExpressions::CaptureCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::CaptureCollection_Enumerator::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x637776c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::Capture* (::System::Text::RegularExpressions::CaptureCollection_Enumerator::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x63777a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection_Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Text::RegularExpressions::CaptureCollection_Enumerator::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x637781c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection_Enumerator.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection_Enumerator::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection_Enumerator::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6377820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection_Enumerator.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection_Enumerator::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection_Enumerator::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x637782c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::CaptureCollection*& System::Text::RegularExpressions::CaptureCollection_Enumerator::__cordl_internal_get__collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
constexpr ::System::Text::RegularExpressions::CaptureCollection* const& System::Text::RegularExpressions::CaptureCollection_Enumerator::__cordl_internal_get__collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
constexpr void System::Text::RegularExpressions::CaptureCollection_Enumerator::__cordl_internal_set__collection(::System::Text::RegularExpressions::CaptureCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____collection = value;
}
constexpr int32_t& System::Text::RegularExpressions::CaptureCollection_Enumerator::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Text::RegularExpressions::CaptureCollection_Enumerator::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Text::RegularExpressions::CaptureCollection_Enumerator::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline void System::Text::RegularExpressions::CaptureCollection_Enumerator::_ctor(::System::Text::RegularExpressions::CaptureCollection* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Text::RegularExpressions::CaptureCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline bool System::Text::RegularExpressions::CaptureCollection_Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::Capture* System::Text::RegularExpressions::CaptureCollection_Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::Capture*>(this, ___internal_method);
}
inline ::System::Object* System::Text::RegularExpressions::CaptureCollection_Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::CaptureCollection_Enumerator::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::CaptureCollection_Enumerator::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::CaptureCollection_Enumerator*
System::Text::RegularExpressions::CaptureCollection_Enumerator::New_ctor(::System::Text::RegularExpressions::CaptureCollection* collection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::CaptureCollection_Enumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>"
constexpr System::Text::RegularExpressions::CaptureCollection_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>*
System::Text::RegularExpressions::CaptureCollection_Enumerator::i___System__Collections__Generic__IEnumerator_1___System__Text__RegularExpressions__Capture__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Text::RegularExpressions::CaptureCollection_Enumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Text::RegularExpressions::CaptureCollection_Enumerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Text::RegularExpressions::CaptureCollection_Enumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Text::RegularExpressions::CaptureCollection_Enumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::CaptureCollection_Enumerator::CaptureCollection_Enumerator() {}
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::CaptureCollection::*)()>(&::System::Text::RegularExpressions::CaptureCollection::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6376b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::CaptureCollection::*)()>(&::System::Text::RegularExpressions::CaptureCollection::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6376b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::Capture* (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t)>(
    &::System::Text::RegularExpressions::CaptureCollection::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6376b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Text::RegularExpressions::CaptureCollection::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6376bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Capture__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>* (::System::Text::RegularExpressions::CaptureCollection::*)()>(
        &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Capture__GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6376c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                             { "System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Capture>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.GetCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::Capture* (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t)>(
    &::System::Text::RegularExpressions::CaptureCollection::GetCapture)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6376b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "GetCapture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.ForceInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)()>(&::System::Text::RegularExpressions::CaptureCollection::ForceInitialized)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6376c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "ForceInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::CaptureCollection::*)()>(&::System::Text::RegularExpressions::CaptureCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6376dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Text::RegularExpressions::CaptureCollection::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6376df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(::System::Array*, int32_t)>(
    &::System::Text::RegularExpressions::CaptureCollection::CopyTo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6376dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                           { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(::ArrayW<::System::Text::RegularExpressions::Capture*>, int32_t)>(
    &::System::Text::RegularExpressions::CaptureCollection::CopyTo)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6376eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                             { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Text::RegularExpressions::Capture*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::CaptureCollection::*)(::System::Text::RegularExpressions::Capture*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__IndexOf)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6377014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                            { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.IndexOf", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t, ::System::Text::RegularExpressions::Capture*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__Insert)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63770c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                           { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.Insert",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__RemoveAt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6377114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                             { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::Capture* (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6377160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                             { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t, ::System::Text::RegularExpressions::Capture*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__set_Item)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6377164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                           { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.set_Item",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(::System::Text::RegularExpressions::Capture*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Add)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63771b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                            { "System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Add", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63771fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                           { "System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::CaptureCollection::*)(::System::Text::RegularExpressions::Capture*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Contains)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6377248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                            { "System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Contains", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::CaptureCollection::*)(::System::Text::RegularExpressions::Capture*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Remove)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6377300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                            { "System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Remove", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::CaptureCollection::*)(::System::Object*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x637734c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6377398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::CaptureCollection::*)(::System::Object*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x63773e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                           { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::CaptureCollection::*)(::System::Object*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x63774ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                           { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t, ::System::Object*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63775f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                             { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::CaptureCollection::*)()>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6377640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(::System::Object*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6377648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                           { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6377694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63776e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection.System_Collections_IList_set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)(int32_t, ::System::Object*)>(
    &::System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63776e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                             { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::CaptureCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::CaptureCollection::*)()>(&::System::Text::RegularExpressions::CaptureCollection::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6377730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::Group*& System::Text::RegularExpressions::CaptureCollection::__cordl_internal_get__group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr ::System::Text::RegularExpressions::Group* const& System::Text::RegularExpressions::CaptureCollection::__cordl_internal_get__group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr void System::Text::RegularExpressions::CaptureCollection::__cordl_internal_set__group(::System::Text::RegularExpressions::Group* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____group = value;
}
constexpr int32_t& System::Text::RegularExpressions::CaptureCollection::__cordl_internal_get__capcount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr int32_t const& System::Text::RegularExpressions::CaptureCollection::__cordl_internal_get__capcount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr void System::Text::RegularExpressions::CaptureCollection::__cordl_internal_set__capcount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capcount = value;
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*>& System::Text::RegularExpressions::CaptureCollection::__cordl_internal_get__captures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captures;
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*> const& System::Text::RegularExpressions::CaptureCollection::__cordl_internal_get__captures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captures;
}
constexpr void System::Text::RegularExpressions::CaptureCollection::__cordl_internal_set__captures(::ArrayW<::System::Text::RegularExpressions::Capture*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____captures = value;
}
inline bool System::Text::RegularExpressions::CaptureCollection::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::CaptureCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::Capture* System::Text::RegularExpressions::CaptureCollection::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::Capture*>(this, ___internal_method, i);
}
inline ::System::Collections::IEnumerator* System::Text::RegularExpressions::CaptureCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>*
System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Capture__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Capture>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>*>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::Capture* System::Text::RegularExpressions::CaptureCollection::GetCapture(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "GetCapture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::Capture*>(this, ___internal_method, i);
}
inline void System::Text::RegularExpressions::CaptureCollection::ForceInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "ForceInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::CaptureCollection::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Text::RegularExpressions::CaptureCollection::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::CaptureCollection::CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void System::Text::RegularExpressions::CaptureCollection::CopyTo(::ArrayW<::System::Text::RegularExpressions::Capture*> array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                           { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Text::RegularExpressions::Capture*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline int32_t
System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__IndexOf(::System::Text::RegularExpressions::Capture* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                          { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.IndexOf", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__Insert(int32_t index,
                                                                                                                                                 ::System::Text::RegularExpressions::Capture* item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                         { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.Insert",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                           { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Text::RegularExpressions::Capture*
System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                           { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::Capture*>(this, ___internal_method, index);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__set_Item(int32_t index,
                                                                                                                                                   ::System::Text::RegularExpressions::Capture* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                         { "System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.set_Item",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Add(::System::Text::RegularExpressions::Capture* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                          { "System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Add", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool
System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Contains(::System::Text::RegularExpressions::Capture* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                          { "System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Contains", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline bool
System::Text::RegularExpressions::CaptureCollection::System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Remove(::System::Text::RegularExpressions::Capture* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                          { "System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Remove", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Capture*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline int32_t System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Add(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Contains(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                         { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_IndexOf(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                                                         { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                           { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline bool System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_Remove(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Object* System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::Text::RegularExpressions::CaptureCollection::System_Collections_IList_set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(),
                                                           { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Text::RegularExpressions::CaptureCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::CaptureCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::CaptureCollection* System::Text::RegularExpressions::CaptureCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::CaptureCollection*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>"
constexpr System::Text::RegularExpressions::CaptureCollection::operator ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>"
constexpr ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>*
System::Text::RegularExpressions::CaptureCollection::i___System__Collections__Generic__IList_1___System__Text__RegularExpressions__Capture__() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>"
constexpr System::Text::RegularExpressions::CaptureCollection::operator ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>*
System::Text::RegularExpressions::CaptureCollection::i___System__Collections__Generic__ICollection_1___System__Text__RegularExpressions__Capture__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>"
constexpr System::Text::RegularExpressions::CaptureCollection::operator ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>*
System::Text::RegularExpressions::CaptureCollection::i___System__Collections__Generic__IEnumerable_1___System__Text__RegularExpressions__Capture__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Text::RegularExpressions::CaptureCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Text::RegularExpressions::CaptureCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>"
constexpr System::Text::RegularExpressions::CaptureCollection::operator ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>*
System::Text::RegularExpressions::CaptureCollection::i___System__Collections__Generic__IReadOnlyList_1___System__Text__RegularExpressions__Capture__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>"
constexpr System::Text::RegularExpressions::CaptureCollection::operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>*
System::Text::RegularExpressions::CaptureCollection::i___System__Collections__Generic__IReadOnlyCollection_1___System__Text__RegularExpressions__Capture__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Text::RegularExpressions::CaptureCollection::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::Text::RegularExpressions::CaptureCollection::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Text::RegularExpressions::CaptureCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Text::RegularExpressions::CaptureCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::CaptureCollection::CaptureCollection() {}
