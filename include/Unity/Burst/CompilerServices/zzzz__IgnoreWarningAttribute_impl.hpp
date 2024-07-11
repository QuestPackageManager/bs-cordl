#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/IgnoreWarningAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__IgnoreWarningAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::IgnoreWarningAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::CompilerServices::IgnoreWarningAttribute::*)(int32_t)>(
    &::Unity::Burst::CompilerServices::IgnoreWarningAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30d49e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::IgnoreWarningAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Burst::CompilerServices::IgnoreWarningAttribute* Unity::Burst::CompilerServices::IgnoreWarningAttribute::New_ctor(int32_t warning) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::CompilerServices::IgnoreWarningAttribute*>(warning));
}
inline void Unity::Burst::CompilerServices::IgnoreWarningAttribute::_ctor(int32_t warning) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::IgnoreWarningAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, warning);
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::IgnoreWarningAttribute::IgnoreWarningAttribute() {}
