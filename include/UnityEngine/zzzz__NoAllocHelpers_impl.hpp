#pragma once
// IWYU pragma private; include "UnityEngine/NoAllocHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__NoAllocHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/zzzz__NoAllocHelpers_def.hpp"
template <typename T> constexpr ::ArrayW<T>& UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr ::ArrayW<T> const& UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_set__items(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____items = value;
}
template <typename T> constexpr int32_t& UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename T> constexpr int32_t const& UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename T> constexpr void UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
template <typename T> constexpr int32_t& UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr int32_t const& UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr void UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>::NoAllocHelpers_ListPrivateFieldAccess_1() {}
//  Writing Method size for method: ::UnityEngine::NoAllocHelpers.SafeLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*)>(&::UnityEngine::NoAllocHelpers::SafeLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ae2980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NoAllocHelpers*>(), { "SafeLength", {}, { ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
template <typename T> inline void UnityEngine::NoAllocHelpers::EnsureListElemCount(::System::Collections::Generic::List_1<T>* list, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NoAllocHelpers*>(),
                                              { "EnsureListElemCount", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, count);
}
inline int32_t UnityEngine::NoAllocHelpers::SafeLength(::System::Array* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NoAllocHelpers*>(), { "SafeLength", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, values);
}
template <typename T> inline int32_t UnityEngine::NoAllocHelpers::SafeLength(::System::Collections::Generic::List_1<T>* values) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::NoAllocHelpers*>(), { "SafeLength", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, values);
}
template <typename T> inline ::ArrayW<T> UnityEngine::NoAllocHelpers::ExtractArrayFromList(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::NoAllocHelpers*>(), { "ExtractArrayFromList", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, list);
}
template <typename T> inline void UnityEngine::NoAllocHelpers::ResetListContents(::System::Collections::Generic::List_1<T>* list, ::System::ReadOnlySpan_1<T> span) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::NoAllocHelpers*>(),
                          { "ResetListContents", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, span);
}
template <typename T> inline void UnityEngine::NoAllocHelpers::ResetListSize(::System::Collections::Generic::List_1<T>* list, int32_t size) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NoAllocHelpers*>(),
                                              { "ResetListSize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, size);
}
// Ctor Parameters []
constexpr ::UnityEngine::NoAllocHelpers::NoAllocHelpers() {}
