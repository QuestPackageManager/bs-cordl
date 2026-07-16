#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNativeList.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRNativeList_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeList_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeList_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRNativeList_CapacityHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNativeList_CapacityHelper::*)(::System::Nullable_1<int32_t>)>(
    &::GlobalNamespace::OVRNativeList_CapacityHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f02c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_CapacityHelper>(), { ".ctor", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRNativeList_CapacityHelper::_ctor(::System::Nullable_1<int32_t> count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_CapacityHelper>(), { ".ctor", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count);
}
template <typename T> inline ::GlobalNamespace::OVRNativeList_1<T> GlobalNamespace::OVRNativeList_CapacityHelper::AllocateEmpty(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_CapacityHelper>(),
                                                                                              { "AllocateEmpty", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_1<T>>(*this, ___internal_method, allocator);
}
// Ctor Parameters [CppParam { name: "_count", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRNativeList_CapacityHelper::OVRNativeList_CapacityHelper(::System::Nullable_1<int32_t> _count) noexcept {
  this->_count = _count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNativeList_CapacityHelper::OVRNativeList_CapacityHelper() {}
template <typename T> inline ::GlobalNamespace::OVRNativeList_CapacityHelper GlobalNamespace::OVRNativeList::WithSuggestedCapacityFrom(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList*>(),
                                                           { "WithSuggestedCapacityFrom", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_CapacityHelper>(nullptr, ___internal_method, collection);
}
template <typename T>
inline ::GlobalNamespace::OVRNativeList_CapacityHelper GlobalNamespace::OVRNativeList::WithSuggestedCapacityFrom(::System::Collections::Generic::IEnumerable_1<T>* collection,
                                                                                                                 ::by_ref<::GlobalNamespace::OVREnumerable_1<T>> nonAllocatingEnumerable) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList*>(),
                                              { "WithSuggestedCapacityFrom",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVREnumerable_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_CapacityHelper>(nullptr, ___internal_method, collection, nonAllocatingEnumerable);
}
template <typename T>
inline ::GlobalNamespace::OVRNativeList_1<T> GlobalNamespace::OVRNativeList::ToNativeList(::System::Collections::Generic::IEnumerable_1<T>* collection, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList*>(),
                          { "ToNativeList", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_1<T>>(nullptr, ___internal_method, collection, allocator);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNativeList::OVRNativeList() {}
