#pragma once
// IWYU pragma private; include "System/Collections/Specialized/NameValueCollection.hpp"
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_impl.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DBNull_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)()>(&::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x63e89cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(int32_t)>(&::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x63e8a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(int32_t, ::System::Collections::IEqualityComparer*)>(
    &::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x63e8ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63e8c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.InvalidateCachedArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)()>(
    &::System::Collections::Specialized::NameValueCollection::InvalidateCachedArrays)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e8cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { "InvalidateCachedArrays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetAsOneString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::ArrayList*)>(&::System::Collections::Specialized::NameValueCollection::GetAsOneString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x63e8cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                           { "GetAsOneString", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetAsStringArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::Collections::ArrayList*)>(&::System::Collections::Specialized::NameValueCollection::GetAsStringArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x63e8e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                           { "GetAsStringArray", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::StringW, ::StringW)>(
    &::System::Collections::Specialized::NameValueCollection::Add)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x63e8f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameValueCollection::*)(::StringW)>(
    &::System::Collections::Specialized::NameValueCollection::Get)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63e91d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Collections::Specialized::NameValueCollection::*)(::StringW)>(
    &::System::Collections::Specialized::NameValueCollection::GetValues)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63e9268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::StringW, ::StringW)>(
    &::System::Collections::Specialized::NameValueCollection::Set)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63e9300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::StringW)>(
    &::System::Collections::Specialized::NameValueCollection::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e948c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameValueCollection::*)(::StringW)>(
    &::System::Collections::Specialized::NameValueCollection::get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63e969c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::StringW, ::StringW)>(
    &::System::Collections::Specialized::NameValueCollection::set_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63e96ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameValueCollection::*)(int32_t)>(
    &::System::Collections::Specialized::NameValueCollection::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63e96bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Collections::Specialized::NameValueCollection::*)(int32_t)>(
    &::System::Collections::Specialized::NameValueCollection::GetValues)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63e97f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameValueCollection::*)(int32_t)>(
    &::System::Collections::Specialized::NameValueCollection::GetKey)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63e9884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::System::DBNull*)>(
    &::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x63e9930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::DBNull*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& System::Collections::Specialized::NameValueCollection::__cordl_internal_get__all() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____all;
}
constexpr ::ArrayW<::StringW> const& System::Collections::Specialized::NameValueCollection::__cordl_internal_get__all() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____all;
}
constexpr void System::Collections::Specialized::NameValueCollection::__cordl_internal_set__all(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____all = value;
}
constexpr ::ArrayW<::StringW>& System::Collections::Specialized::NameValueCollection::__cordl_internal_get__allKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allKeys;
}
constexpr ::ArrayW<::StringW> const& System::Collections::Specialized::NameValueCollection::__cordl_internal_get__allKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allKeys;
}
constexpr void System::Collections::Specialized::NameValueCollection::__cordl_internal_set__allKeys(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allKeys = value;
}
inline void System::Collections::Specialized::NameValueCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameValueCollection::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Collections::Specialized::NameValueCollection::_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, equalityComparer);
}
inline void System::Collections::Specialized::NameValueCollection::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Collections::Specialized::NameValueCollection::InvalidateCachedArrays() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { "InvalidateCachedArrays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::GetAsOneString(::System::Collections::ArrayList* list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                         { "GetAsOneString", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, list);
}
inline ::ArrayW<::StringW> System::Collections::Specialized::NameValueCollection::GetAsStringArray(::System::Collections::ArrayList* list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                                                                                         { "GetAsStringArray", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, list);
}
inline void System::Collections::Specialized::NameValueCollection::Add(::StringW name, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::Get(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::ArrayW<::StringW> System::Collections::Specialized::NameValueCollection::GetValues(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, name);
}
inline void System::Collections::Specialized::NameValueCollection::Set(::StringW name, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Collections::Specialized::NameValueCollection::Remove(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::get_Item(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline void System::Collections::Specialized::NameValueCollection::set_Item(::StringW name, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { "set_Item", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::Get(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::ArrayW<::StringW> System::Collections::Specialized::NameValueCollection::GetValues(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, index);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::GetKey(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void System::Collections::Specialized::NameValueCollection::_ctor(::System::DBNull* dummy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::DBNull*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dummy);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>());
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>(capacity));
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor(int32_t capacity,
                                                                                                                                ::System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>(capacity, equalityComparer));
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>(info, context));
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor(::System::DBNull* dummy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>(dummy));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NameValueCollection::NameValueCollection() {}
