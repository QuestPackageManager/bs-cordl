#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__IntrospectiveSortUtilities_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::IntrospectiveSortUtilities.FloorLog2PlusOne
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2PlusOne)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x258bce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IntrospectiveSortUtilities*>::get(), "FloorLog2PlusOne",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::IntrospectiveSortUtilities.ThrowOrIgnoreBadComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x258bd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IntrospectiveSortUtilities*>::get(), "ThrowOrIgnoreBadComparer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline int32_t System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2PlusOne(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IntrospectiveSortUtilities*>::get(), "FloorLog2PlusOne",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, n);
}
inline void System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer(::System::Object* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IntrospectiveSortUtilities*>::get(), "ThrowOrIgnoreBadComparer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, comparer);
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::IntrospectiveSortUtilities::IntrospectiveSortUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
