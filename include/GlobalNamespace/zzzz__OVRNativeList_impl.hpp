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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNativeList_CapacityHelper::*)(::System::Nullable_1<int32_t>)>(
    &::GlobalNamespace::OVRNativeList_CapacityHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d569c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNativeList_CapacityHelper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRNativeList_CapacityHelper::_ctor(::System::Nullable_1<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNativeList_CapacityHelper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
template <typename T> inline ::GlobalNamespace::OVRNativeList_1<T> GlobalNamespace::OVRNativeList_CapacityHelper::AllocateEmpty(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNativeList_CapacityHelper>::get(), "AllocateEmpty",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_1<T>, false>(this, ___internal_method, allocator);
}
// Ctor Parameters [CppParam { name: "_count", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRNativeList_CapacityHelper::OVRNativeList_CapacityHelper(::System::Nullable_1<int32_t> _count) noexcept {
  this->_count = _count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNativeList_CapacityHelper::OVRNativeList_CapacityHelper() {}
template <typename T> inline ::GlobalNamespace::OVRNativeList_CapacityHelper GlobalNamespace::OVRNativeList::WithSuggestedCapacityFrom(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNativeList*>::get(), "WithSuggestedCapacityFrom",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_CapacityHelper, false>(nullptr, ___internal_method, collection);
}
template <typename T>
inline ::GlobalNamespace::OVRNativeList_CapacityHelper GlobalNamespace::OVRNativeList::WithSuggestedCapacityFrom(::System::Collections::Generic::IEnumerable_1<T>* collection,
                                                                                                                 ::ByRef<::GlobalNamespace::OVREnumerable_1<T>> nonAllocatingEnumerable) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNativeList*>::get(), "WithSuggestedCapacityFrom",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVREnumerable_1<T>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_CapacityHelper, false>(nullptr, ___internal_method, collection, nonAllocatingEnumerable);
}
template <typename T>
inline ::GlobalNamespace::OVRNativeList_1<T> GlobalNamespace::OVRNativeList::ToNativeList(::System::Collections::Generic::IEnumerable_1<T>* collection, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNativeList*>::get(), "ToNativeList",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_1<T>, false>(nullptr, ___internal_method, collection, allocator);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNativeList::OVRNativeList() {}
