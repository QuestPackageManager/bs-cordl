#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstRuntime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstRuntime_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstRuntime_def.hpp"
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>::setStaticF_Value(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "Value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>>::get>(
      std::forward<int64_t>(value));
}
template <typename T> inline int64_t Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>::getStaticF_Value() {
  return ::cordl_internals::getStaticField<int64_t, "Value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>>::get>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>::BurstRuntime_HashCode64_1() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::BurstRuntime.HashStringWithFNV1A64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::StringW)>(&::Unity::Collections::LowLevel::Unsafe::BurstRuntime::HashStringWithFNV1A64)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x48619a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstRuntime*>::get(), "HashStringWithFNV1A64",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
template <typename T> inline int64_t Unity::Collections::LowLevel::Unsafe::BurstRuntime::GetHashCode64() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstRuntime*>::get(), "GetHashCode64",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline int64_t Unity::Collections::LowLevel::Unsafe::BurstRuntime::HashStringWithFNV1A64(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstRuntime*>::get(), "HashStringWithFNV1A64",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, text);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::BurstRuntime::BurstRuntime() {}
