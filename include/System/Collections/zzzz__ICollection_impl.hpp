#pragma once
// IWYU pragma private; include "System\Collections\ICollection.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::ICollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ICollection::*)(::System::Array*, int32_t)>(&::System::Collections::ICollection::CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ICollection*>(), { ::i2c::class_of<::System::Collections::ICollection*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ICollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::ICollection::*)()>(&::System::Collections::ICollection::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ICollection*>(), { ::i2c::class_of<::System::Collections::ICollection*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ICollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::ICollection::*)()>(&::System::Collections::ICollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ICollection*>(), { ::i2c::class_of<::System::Collections::ICollection*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ICollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::ICollection::*)()>(&::System::Collections::ICollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ICollection*>(), { ::i2c::class_of<::System::Collections::ICollection*>(), 3 }));
    return ___internal_method;
  }
};
inline void System::Collections::ICollection::CopyTo(::System::Array* array, int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ICollection*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline int32_t System::Collections::ICollection::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ICollection*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Collections::ICollection::get_SyncRoot() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ICollection*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::ICollection::get_IsSynchronized() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ICollection*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::ICollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::ICollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
