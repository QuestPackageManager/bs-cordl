#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/AssumeRangeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__AssumeRangeAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::AssumeRangeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::CompilerServices::AssumeRangeAttribute::*)(int64_t, int64_t)>(
    &::Unity::Burst::CompilerServices::AssumeRangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x453d1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::CompilerServices::AssumeRangeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::CompilerServices::AssumeRangeAttribute::*)(uint64_t, uint64_t)>(
    &::Unity::Burst::CompilerServices::AssumeRangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x453d1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Burst::CompilerServices::AssumeRangeAttribute::_ctor(int64_t min, int64_t max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
inline void Unity::Burst::CompilerServices::AssumeRangeAttribute::_ctor(uint64_t min, uint64_t max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
inline ::Unity::Burst::CompilerServices::AssumeRangeAttribute* Unity::Burst::CompilerServices::AssumeRangeAttribute::New_ctor(int64_t min, int64_t max) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>(min, max));
}
inline ::Unity::Burst::CompilerServices::AssumeRangeAttribute* Unity::Burst::CompilerServices::AssumeRangeAttribute::New_ctor(uint64_t min, uint64_t max) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>(min, max));
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::AssumeRangeAttribute::AssumeRangeAttribute() {}
