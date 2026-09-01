#pragma once
// IWYU pragma private; include "System\Collections\CollectionBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::CollectionBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5be5010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.get_InnerList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::get_InnerList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be5108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "get_InnerList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.get_List
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::get_List)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be5110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "get_List", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5be5114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5be5134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(int32_t)>(&::System::Collections::CollectionBase::RemoveAt)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5be5180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_IList_get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5be5350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_IList_get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5be5370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5be5390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::CollectionBase::*)()>(
    &::System::Collections::CollectionBase::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5be53b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_ICollection_CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(::System::Array*, int32_t)>(
    &::System::Collections::CollectionBase::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5be53d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(),
                                                             { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_IList_get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::CollectionBase::*)(int32_t)>(
    &::System::Collections::CollectionBase::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5be53f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_IList_set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(int32_t, ::System::Object*)>(
    &::System::Collections::CollectionBase::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5be54a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(),
                                                             { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_IList_Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::CollectionBase::*)(::System::Object*)>(&::System::Collections::CollectionBase::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5be5688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_IList_Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::CollectionBase::*)(::System::Object*)>(&::System::Collections::CollectionBase::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5be56a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_IList_Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(::System::Object*)>(&::System::Collections::CollectionBase::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5be57e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_IList_IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::CollectionBase::*)(::System::Object*)>(
    &::System::Collections::CollectionBase::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5be5978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.System_Collections_IList_Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(int32_t, ::System::Object*)>(
    &::System::Collections::CollectionBase::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5be5998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5be5b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.OnSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(int32_t, ::System::Object*, ::System::Object*)>(&::System::Collections::CollectionBase::OnSet)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be5b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ::i2c::class_of<::System::Collections::CollectionBase*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.OnInsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(int32_t, ::System::Object*)>(&::System::Collections::CollectionBase::OnInsert)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be5b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ::i2c::class_of<::System::Collections::CollectionBase*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.OnClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::OnClear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be5b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ::i2c::class_of<::System::Collections::CollectionBase*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.OnRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(int32_t, ::System::Object*)>(&::System::Collections::CollectionBase::OnRemove)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be5b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ::i2c::class_of<::System::Collections::CollectionBase*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(::System::Object*)>(&::System::Collections::CollectionBase::OnValidate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5be5b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ::i2c::class_of<::System::Collections::CollectionBase*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.OnSetComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(int32_t, ::System::Object*, ::System::Object*)>(
    &::System::Collections::CollectionBase::OnSetComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be5bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ::i2c::class_of<::System::Collections::CollectionBase*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.OnInsertComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(int32_t, ::System::Object*)>(&::System::Collections::CollectionBase::OnInsertComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be5bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ::i2c::class_of<::System::Collections::CollectionBase*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.OnClearComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)()>(&::System::Collections::CollectionBase::OnClearComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be5bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ::i2c::class_of<::System::Collections::CollectionBase*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CollectionBase.OnRemoveComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CollectionBase::*)(int32_t, ::System::Object*)>(&::System::Collections::CollectionBase::OnRemoveComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be5bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ::i2c::class_of<::System::Collections::CollectionBase*>(), 28 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Collections::CollectionBase::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::ArrayList* const& System::Collections::CollectionBase::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Collections::CollectionBase::__cordl_internal_set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
inline void System::Collections::CollectionBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Collections::CollectionBase::get_InnerList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "get_InnerList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Collections::IList* System::Collections::CollectionBase::get_List() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "get_List", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline int32_t System::Collections::CollectionBase::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Collections::CollectionBase::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::CollectionBase::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline bool System::Collections::CollectionBase::System_Collections_IList_get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::CollectionBase::System_Collections_IList_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::CollectionBase::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::CollectionBase::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Collections::CollectionBase::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Object* System::Collections::CollectionBase::System_Collections_IList_get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::Collections::CollectionBase::System_Collections_IList_set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline bool System::Collections::CollectionBase::System_Collections_IList_Contains(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Collections::CollectionBase::System_Collections_IList_Add(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Collections::CollectionBase::System_Collections_IList_Remove(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Collections::CollectionBase::System_Collections_IList_IndexOf(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Collections::CollectionBase::System_Collections_IList_Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Collections::IEnumerator* System::Collections::CollectionBase::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CollectionBase*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Collections::CollectionBase::OnSet(int32_t index, ::System::Object* oldValue, ::System::Object* newValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::CollectionBase*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, oldValue, newValue);
}
inline void System::Collections::CollectionBase::OnInsert(int32_t index, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::CollectionBase*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Collections::CollectionBase::OnClear() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::CollectionBase*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::CollectionBase::OnRemove(int32_t index, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::CollectionBase*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Collections::CollectionBase::OnValidate(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::CollectionBase*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Collections::CollectionBase::OnSetComplete(int32_t index, ::System::Object* oldValue, ::System::Object* newValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::CollectionBase*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, oldValue, newValue);
}
inline void System::Collections::CollectionBase::OnInsertComplete(int32_t index, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::CollectionBase*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Collections::CollectionBase::OnClearComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::CollectionBase*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::CollectionBase::OnRemoveComplete(int32_t index, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::CollectionBase*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Collections::CollectionBase* System::Collections::CollectionBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::CollectionBase*>());
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Collections::CollectionBase::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::Collections::CollectionBase::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::CollectionBase::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::CollectionBase::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::CollectionBase::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::CollectionBase::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::CollectionBase::CollectionBase() {}
