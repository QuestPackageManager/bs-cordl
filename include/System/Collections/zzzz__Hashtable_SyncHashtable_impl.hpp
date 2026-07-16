#pragma once
// IWYU pragma private; include "System/Collections/Hashtable_SyncHashtable.hpp"
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/Collections/zzzz__Hashtable_SyncHashtable_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Hashtable_SyncHashtable::*)(::System::Collections::Hashtable*)>(&::GlobalNamespace::Hashtable_SyncHashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Hashtable_SyncHashtable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::GlobalNamespace::Hashtable_SyncHashtable::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bf0598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Hashtable_SyncHashtable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::GlobalNamespace::Hashtable_SyncHashtable::GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bf05d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(&::GlobalNamespace::Hashtable_SyncHashtable::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(&::GlobalNamespace::Hashtable_SyncHashtable::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf062c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(&::GlobalNamespace::Hashtable_SyncHashtable::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf064c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(&::GlobalNamespace::Hashtable_SyncHashtable::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf066c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::Hashtable_SyncHashtable::*)(::System::Object*)>(&::GlobalNamespace::Hashtable_SyncHashtable::get_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf0674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Hashtable_SyncHashtable::*)(::System::Object*, ::System::Object*)>(
    &::GlobalNamespace::Hashtable_SyncHashtable::set_Item)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bf0694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(&::GlobalNamespace::Hashtable_SyncHashtable::get_SyncRoot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf078c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Hashtable_SyncHashtable::*)(::System::Object*, ::System::Object*)>(&::GlobalNamespace::Hashtable_SyncHashtable::Add)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bf07ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(&::GlobalNamespace::Hashtable_SyncHashtable::Clear)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5bf08a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Hashtable_SyncHashtable::*)(::System::Object*)>(&::GlobalNamespace::Hashtable_SyncHashtable::Contains)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf0984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.ContainsKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Hashtable_SyncHashtable::*)(::System::Object*)>(&::GlobalNamespace::Hashtable_SyncHashtable::ContainsKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5bf09a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Hashtable_SyncHashtable::*)(::System::Array*, int32_t)>(&::GlobalNamespace::Hashtable_SyncHashtable::CopyTo)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bf0a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(&::GlobalNamespace::Hashtable_SyncHashtable::Clone)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5bf0b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(
    &::GlobalNamespace::Hashtable_SyncHashtable::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf0c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(
    &::GlobalNamespace::Hashtable_SyncHashtable::GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf0ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(&::GlobalNamespace::Hashtable_SyncHashtable::get_Keys)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bf0cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::GlobalNamespace::Hashtable_SyncHashtable::*)()>(
    &::GlobalNamespace::Hashtable_SyncHashtable::get_Values)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bf0dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Hashtable_SyncHashtable::*)(::System::Object*)>(&::GlobalNamespace::Hashtable_SyncHashtable::Remove)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bf0eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hashtable_SyncHashtable.OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Hashtable_SyncHashtable::*)(::System::Object*)>(&::GlobalNamespace::Hashtable_SyncHashtable::OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf0fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 43 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& GlobalNamespace::Hashtable_SyncHashtable::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Collections::Hashtable* const& GlobalNamespace::Hashtable_SyncHashtable::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void GlobalNamespace::Hashtable_SyncHashtable::__cordl_internal_set__table(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
inline void GlobalNamespace::Hashtable_SyncHashtable::_ctor(::System::Collections::Hashtable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void GlobalNamespace::Hashtable_SyncHashtable::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void GlobalNamespace::Hashtable_SyncHashtable::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline int32_t GlobalNamespace::Hashtable_SyncHashtable::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::Hashtable_SyncHashtable::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::Hashtable_SyncHashtable::get_IsFixedSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::Hashtable_SyncHashtable::get_IsSynchronized() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::Hashtable_SyncHashtable::get_Item(::System::Object* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void GlobalNamespace::Hashtable_SyncHashtable::set_Item(::System::Object* key, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Object* GlobalNamespace::Hashtable_SyncHashtable::get_SyncRoot() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::Hashtable_SyncHashtable::Add(::System::Object* key, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void GlobalNamespace::Hashtable_SyncHashtable::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::Hashtable_SyncHashtable::Contains(::System::Object* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool GlobalNamespace::Hashtable_SyncHashtable::ContainsKey(::System::Object* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void GlobalNamespace::Hashtable_SyncHashtable::CopyTo(::System::Array* array, int32_t arrayIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Object* GlobalNamespace::Hashtable_SyncHashtable::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::Hashtable_SyncHashtable::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* GlobalNamespace::Hashtable_SyncHashtable::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* GlobalNamespace::Hashtable_SyncHashtable::get_Keys() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* GlobalNamespace::Hashtable_SyncHashtable::get_Values() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline void GlobalNamespace::Hashtable_SyncHashtable::Remove(::System::Object* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void GlobalNamespace::Hashtable_SyncHashtable::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Hashtable_SyncHashtable*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline ::GlobalNamespace::Hashtable_SyncHashtable* GlobalNamespace::Hashtable_SyncHashtable::New_ctor(::System::Collections::Hashtable* table) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Hashtable_SyncHashtable*>(table));
}
inline ::GlobalNamespace::Hashtable_SyncHashtable* GlobalNamespace::Hashtable_SyncHashtable::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Hashtable_SyncHashtable*>(info, context));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::Hashtable_SyncHashtable::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::Hashtable_SyncHashtable::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Hashtable_SyncHashtable::Hashtable_SyncHashtable() {}
