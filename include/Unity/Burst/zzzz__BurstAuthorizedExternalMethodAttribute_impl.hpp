#pragma once
// IWYU pragma private; include "Unity/Burst/BurstAuthorizedExternalMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/zzzz__BurstAuthorizedExternalMethodAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstAuthorizedExternalMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstAuthorizedExternalMethodAttribute::*)()>(
    &::Unity::Burst::BurstAuthorizedExternalMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68937e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstAuthorizedExternalMethodAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstAuthorizedExternalMethodAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstAuthorizedExternalMethodAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Burst::BurstAuthorizedExternalMethodAttribute* Unity::Burst::BurstAuthorizedExternalMethodAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::BurstAuthorizedExternalMethodAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstAuthorizedExternalMethodAttribute::BurstAuthorizedExternalMethodAttribute() {}
