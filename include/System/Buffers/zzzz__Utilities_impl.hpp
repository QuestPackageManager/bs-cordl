#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__Utilities_def.hpp"
//  Writing Method size for method: ::System::Buffers::Utilities.SelectBucketIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Buffers::Utilities::SelectBucketIndex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x258c5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::Utilities*>::get(), "SelectBucketIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Utilities.GetMaxSizeForBucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Buffers::Utilities::GetMaxSizeForBucket)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x258c678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::Utilities*>::get(), "GetMaxSizeForBucket", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t System::Buffers::Utilities::SelectBucketIndex(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::Utilities*>::get(), "SelectBucketIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bufferSize);
}
inline int32_t System::Buffers::Utilities::GetMaxSizeForBucket(int32_t binIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::Utilities*>::get(), "GetMaxSizeForBucket", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, binIndex);
}
// Ctor Parameters []
constexpr ::System::Buffers::Utilities::Utilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
