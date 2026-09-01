#pragma once
// IWYU pragma private; include "System\Collections\Specialized\ReadOnlyList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Specialized/zzzz__ReadOnlyList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::ReadOnlyList::*)(::System::Collections::IList*)>(
    &::System::Collections::Specialized::ReadOnlyList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f1958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Specialized::ReadOnlyList::*)()>(&::System::Collections::Specialized::ReadOnlyList::get_Count)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x63f1abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::ReadOnlyList::*)()>(&::System::Collections::Specialized::ReadOnlyList::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f1b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::ReadOnlyList::*)()>(&::System::Collections::Specialized::ReadOnlyList::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f1b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_IsFixedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::ReadOnlyList::*)()>(&::System::Collections::Specialized::ReadOnlyList::get_IsSynchronized)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x63f1b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::ReadOnlyList::*)(int32_t)>(&::System::Collections::Specialized::ReadOnlyList::get_Item)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63f1c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::ReadOnlyList::*)(int32_t, ::System::Object*)>(
    &::System::Collections::Specialized::ReadOnlyList::set_Item)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f1cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::ReadOnlyList::*)()>(&::System::Collections::Specialized::ReadOnlyList::get_SyncRoot)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x63f1d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Specialized::ReadOnlyList::*)(::System::Object*)>(&::System::Collections::Specialized::ReadOnlyList::Add)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f1dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Add", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::ReadOnlyList::*)()>(&::System::Collections::Specialized::ReadOnlyList::Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f1e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::ReadOnlyList::*)(::System::Object*)>(&::System::Collections::Specialized::ReadOnlyList::Contains)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x63f1e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::ReadOnlyList::*)(::System::Array*, int32_t)>(
    &::System::Collections::Specialized::ReadOnlyList::CopyTo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x63f1f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Specialized::ReadOnlyList::*)()>(
    &::System::Collections::Specialized::ReadOnlyList::GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x63f1fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Specialized::ReadOnlyList::*)(::System::Object*)>(&::System::Collections::Specialized::ReadOnlyList::IndexOf)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x63f2074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::ReadOnlyList::*)(int32_t, ::System::Object*)>(
    &::System::Collections::Specialized::ReadOnlyList::Insert)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f212c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::ReadOnlyList::*)(::System::Object*)>(&::System::Collections::Specialized::ReadOnlyList::Remove)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f2178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::ReadOnlyList.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::ReadOnlyList::*)(int32_t)>(&::System::Collections::Specialized::ReadOnlyList::RemoveAt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f21c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& System::Collections::Specialized::ReadOnlyList::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::IList* const& System::Collections::Specialized::ReadOnlyList::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Collections::Specialized::ReadOnlyList::__cordl_internal_set__list(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
inline void System::Collections::Specialized::ReadOnlyList::_ctor(::System::Collections::IList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline int32_t System::Collections::Specialized::ReadOnlyList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Collections::Specialized::ReadOnlyList::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::Specialized::ReadOnlyList::get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::Specialized::ReadOnlyList::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Specialized::ReadOnlyList::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::Collections::Specialized::ReadOnlyList::set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Object* System::Collections::Specialized::ReadOnlyList::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Collections::Specialized::ReadOnlyList::Add(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Add", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Collections::Specialized::ReadOnlyList::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Collections::Specialized::ReadOnlyList::Contains(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void System::Collections::Specialized::ReadOnlyList::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::Collections::Specialized::ReadOnlyList::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t System::Collections::Specialized::ReadOnlyList::IndexOf(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Collections::Specialized::ReadOnlyList::Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Collections::Specialized::ReadOnlyList::Remove(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Collections::Specialized::ReadOnlyList::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::ReadOnlyList*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Collections::Specialized::ReadOnlyList* System::Collections::Specialized::ReadOnlyList::New_ctor(::System::Collections::IList* list) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::ReadOnlyList*>(list));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Collections::Specialized::ReadOnlyList::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::Collections::Specialized::ReadOnlyList::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Specialized::ReadOnlyList::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Specialized::ReadOnlyList::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Specialized::ReadOnlyList::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Specialized::ReadOnlyList::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::ReadOnlyList::ReadOnlyList() {}
