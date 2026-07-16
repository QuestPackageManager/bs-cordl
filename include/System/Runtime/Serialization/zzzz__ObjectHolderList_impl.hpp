#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectHolderList.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolderList_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolderListEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolder_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolderList::*)()>(&::System::Runtime::Serialization::ObjectHolderList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4decc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolderList::*)(int32_t)>(&::System::Runtime::Serialization::ObjectHolderList::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b51a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderList.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolderList::*)(::System::Runtime::Serialization::ObjectHolder*)>(
    &::System::Runtime::Serialization::ObjectHolderList::Add)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b51af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { ::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderList.GetFixupEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ObjectHolderListEnumerator* (::System::Runtime::Serialization::ObjectHolderList::*)()>(
    &::System::Runtime::Serialization::ObjectHolderList::GetFixupEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b50ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { "GetFixupEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderList.EnlargeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolderList::*)()>(&::System::Runtime::Serialization::ObjectHolderList::EnlargeArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b51b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { "EnlargeArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderList.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ObjectHolderList::*)()>(&::System::Runtime::Serialization::ObjectHolderList::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b51c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderList.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ObjectHolderList::*)()>(&::System::Runtime::Serialization::ObjectHolderList::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b51c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*>& System::Runtime::Serialization::ObjectHolderList::__cordl_internal_get_m_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_values;
}
constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*> const& System::Runtime::Serialization::ObjectHolderList::__cordl_internal_get_m_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_values;
}
constexpr void System::Runtime::Serialization::ObjectHolderList::__cordl_internal_set_m_values(::ArrayW<::System::Runtime::Serialization::ObjectHolder*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_values = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolderList::__cordl_internal_get_m_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolderList::__cordl_internal_get_m_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr void System::Runtime::Serialization::ObjectHolderList::__cordl_internal_set_m_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_count = value;
}
inline void System::Runtime::Serialization::ObjectHolderList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolderList::_ctor(int32_t startingSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startingSize);
}
inline void System::Runtime::Serialization::ObjectHolderList::Add(::System::Runtime::Serialization::ObjectHolder* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::ObjectHolderListEnumerator* System::Runtime::Serialization::ObjectHolderList::GetFixupEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { "GetFixupEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ObjectHolderListEnumerator*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolderList::EnlargeArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { "EnlargeArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectHolderList::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectHolderList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderList*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ObjectHolderList* System::Runtime::Serialization::ObjectHolderList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ObjectHolderList*>());
}
inline ::System::Runtime::Serialization::ObjectHolderList* System::Runtime::Serialization::ObjectHolderList::New_ctor(int32_t startingSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ObjectHolderList*>(startingSize));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ObjectHolderList::ObjectHolderList() {}
