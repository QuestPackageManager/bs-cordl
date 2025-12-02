#pragma once
// IWYU pragma private; include "System/Collections/Generic/IntrospectiveSortUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__IntrospectiveSortUtilities_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::IntrospectiveSortUtilities.FloorLog2PlusOne
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2PlusOne)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59dce78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IntrospectiveSortUtilities*>::get(), "FloorLog2PlusOne",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::IntrospectiveSortUtilities.ThrowOrIgnoreBadComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59dcea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IntrospectiveSortUtilities*>::get(), "ThrowOrIgnoreBadComparer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline int32_t System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2PlusOne(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IntrospectiveSortUtilities*>::get(), "FloorLog2PlusOne",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, n);
}
inline void System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer(::System::Object* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IntrospectiveSortUtilities*>::get(), "ThrowOrIgnoreBadComparer",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, comparer);
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::IntrospectiveSortUtilities::IntrospectiveSortUtilities() {}
