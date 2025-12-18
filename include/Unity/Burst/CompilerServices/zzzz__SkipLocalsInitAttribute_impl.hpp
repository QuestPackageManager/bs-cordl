#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/SkipLocalsInitAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__SkipLocalsInitAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::SkipLocalsInitAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::CompilerServices::SkipLocalsInitAttribute::*)()>(
    &::Unity::Burst::CompilerServices::SkipLocalsInitAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f0fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::SkipLocalsInitAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Burst::CompilerServices::SkipLocalsInitAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::SkipLocalsInitAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Burst::CompilerServices::SkipLocalsInitAttribute* Unity::Burst::CompilerServices::SkipLocalsInitAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::CompilerServices::SkipLocalsInitAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::SkipLocalsInitAttribute::SkipLocalsInitAttribute() {}
