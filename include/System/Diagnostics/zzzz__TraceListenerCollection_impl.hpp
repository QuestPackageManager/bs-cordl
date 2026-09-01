#pragma once
// IWYU pragma private; include "System\Diagnostics\TraceListenerCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__TraceListenerCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Diagnostics/zzzz__TraceListener_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListenerCollection::*)()>(&::System::Diagnostics::TraceListenerCollection::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x639887c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceListener* (::System::Diagnostics::TraceListenerCollection::*)(::StringW)>(
    &::System::Diagnostics::TraceListenerCollection::get_Item)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x639968c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::TraceListenerCollection::*)()>(&::System::Diagnostics::TraceListenerCollection::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6399988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::TraceListenerCollection::*)(::System::Diagnostics::TraceListener*)>(
    &::System::Diagnostics::TraceListenerCollection::Add)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x63989e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Diagnostics::TraceListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListenerCollection::*)()>(&::System::Diagnostics::TraceListenerCollection::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6399ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Diagnostics::TraceListenerCollection::*)()>(
    &::System::Diagnostics::TraceListenerCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6399968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.InitializeListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListenerCollection::*)(::System::Diagnostics::TraceListener*)>(
    &::System::Diagnostics::TraceListenerCollection::InitializeListener)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x63999a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(),
                                                                                           { "InitializeListener", {}, { ::i2c::type_of<::System::Diagnostics::TraceListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListenerCollection::*)(::StringW)>(&::System::Diagnostics::TraceListenerCollection::Remove)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6399b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListenerCollection::*)(int32_t)>(&::System::Diagnostics::TraceListenerCollection::RemoveAt)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6399bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_IList_get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Diagnostics::TraceListenerCollection::*)(int32_t)>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6399d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_IList_set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListenerCollection::*)(int32_t, ::System::Object*)>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6399d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(),
                                                             { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_IList_get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceListenerCollection::*)()>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6399e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_IList_get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceListenerCollection::*)()>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6399e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_IList_Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::TraceListenerCollection::*)(::System::Object*)>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6399e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_IList_Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceListenerCollection::*)(::System::Object*)>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x639a038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_IList_IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::TraceListenerCollection::*)(::System::Object*)>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x639a058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_IList_Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListenerCollection::*)(int32_t, ::System::Object*)>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x639a078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(),
                                                             { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_IList_Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListenerCollection::*)(::System::Object*)>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x639a250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Diagnostics::TraceListenerCollection::*)()>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639a374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceListenerCollection::*)()>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639a378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListenerCollection.System_Collections_ICollection_CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListenerCollection::*)(::System::Array*, int32_t)>(
    &::System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x639a380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(),
                                                             { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Diagnostics::TraceListenerCollection::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Collections::ArrayList* const& System::Diagnostics::TraceListenerCollection::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void System::Diagnostics::TraceListenerCollection::__cordl_internal_set_list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
inline void System::Diagnostics::TraceListenerCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::TraceListener* System::Diagnostics::TraceListenerCollection::get_Item(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceListener*>(this, ___internal_method, name);
}
inline int32_t System::Diagnostics::TraceListenerCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Diagnostics::TraceListenerCollection::Add(::System::Diagnostics::TraceListener* listener) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Diagnostics::TraceListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, listener);
}
inline void System::Diagnostics::TraceListenerCollection::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Diagnostics::TraceListenerCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListenerCollection::InitializeListener(::System::Diagnostics::TraceListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "InitializeListener", {}, { ::i2c::type_of<::System::Diagnostics::TraceListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void System::Diagnostics::TraceListenerCollection::Remove(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Diagnostics::TraceListenerCollection::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Object* System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::Diagnostics::TraceListenerCollection::System_Collections_IList_set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(),
                                                           { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline bool System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Diagnostics::TraceListenerCollection::System_Collections_IList_Add(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline bool System::Diagnostics::TraceListenerCollection::System_Collections_IList_Contains(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Diagnostics::TraceListenerCollection::System_Collections_IList_IndexOf(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Diagnostics::TraceListenerCollection::System_Collections_IList_Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(),
                                                           { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Diagnostics::TraceListenerCollection::System_Collections_IList_Remove(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListenerCollection*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Diagnostics::TraceListenerCollection* System::Diagnostics::TraceListenerCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::TraceListenerCollection*>());
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Diagnostics::TraceListenerCollection::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::Diagnostics::TraceListenerCollection::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Diagnostics::TraceListenerCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Diagnostics::TraceListenerCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Diagnostics::TraceListenerCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Diagnostics::TraceListenerCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceListenerCollection::TraceListenerCollection() {}
