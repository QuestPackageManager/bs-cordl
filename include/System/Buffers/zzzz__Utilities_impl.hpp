#pragma once
// IWYU pragma private; include "System/Buffers/Utilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__Utilities_def.hpp"
//  Writing Method size for method: ::System::Buffers::Utilities.SelectBucketIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Buffers::Utilities::SelectBucketIndex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3dd7570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::Utilities*>::get(), "SelectBucketIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Utilities.GetMaxSizeForBucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Buffers::Utilities::GetMaxSizeForBucket)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3dd75ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::Utilities*>::get(), "GetMaxSizeForBucket", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t System::Buffers::Utilities::SelectBucketIndex(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::Utilities*>::get(), "SelectBucketIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bufferSize);
}
inline int32_t System::Buffers::Utilities::GetMaxSizeForBucket(int32_t binIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::Utilities*>::get(), "GetMaxSizeForBucket",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, binIndex);
}
// Ctor Parameters []
constexpr ::System::Buffers::Utilities::Utilities() {}
