#pragma once
// IWYU pragma private; include "System\Collections\ReadOnlyCollectionBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::ReadOnlyCollectionBase.get_InnerList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Collections::ReadOnlyCollectionBase::*)()>(
    &::System::Collections::ReadOnlyCollectionBase::get_InnerList)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5be6980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { "get_InnerList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ReadOnlyCollectionBase.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::ReadOnlyCollectionBase::*)()>(&::System::Collections::ReadOnlyCollectionBase::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5be69e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { ::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ReadOnlyCollectionBase.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::ReadOnlyCollectionBase::*)()>(
    &::System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5be6a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ReadOnlyCollectionBase.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::ReadOnlyCollectionBase::*)()>(
    &::System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5be6a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ReadOnlyCollectionBase.System_Collections_ICollection_CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ReadOnlyCollectionBase::*)(::System::Array*, int32_t)>(
    &::System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5be6a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(),
                                                             { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ReadOnlyCollectionBase.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::ReadOnlyCollectionBase::*)()>(
    &::System::Collections::ReadOnlyCollectionBase::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5be6a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { ::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ReadOnlyCollectionBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ReadOnlyCollectionBase::*)()>(&::System::Collections::ReadOnlyCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be6ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Collections::ReadOnlyCollectionBase::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::ArrayList* const& System::Collections::ReadOnlyCollectionBase::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Collections::ReadOnlyCollectionBase::__cordl_internal_set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
inline ::System::Collections::ArrayList* System::Collections::ReadOnlyCollectionBase::get_InnerList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { "get_InnerList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline int32_t System::Collections::ReadOnlyCollectionBase::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::Collections::ReadOnlyCollectionBase::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Collections::ReadOnlyCollectionBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ReadOnlyCollectionBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::ReadOnlyCollectionBase* System::Collections::ReadOnlyCollectionBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ReadOnlyCollectionBase*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::ReadOnlyCollectionBase::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::ReadOnlyCollectionBase::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::ReadOnlyCollectionBase::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::ReadOnlyCollectionBase::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::ReadOnlyCollectionBase::ReadOnlyCollectionBase() {}
