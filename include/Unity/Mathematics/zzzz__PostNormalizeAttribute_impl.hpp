#pragma once
// IWYU pragma private; include "Unity/Mathematics/PostNormalizeAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Mathematics/zzzz__PostNormalizeAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::PostNormalizeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::PostNormalizeAttribute::*)()>(&::Unity::Mathematics::PostNormalizeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46d2e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::PostNormalizeAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::PostNormalizeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::PostNormalizeAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::PostNormalizeAttribute* Unity::Mathematics::PostNormalizeAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Mathematics::PostNormalizeAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::PostNormalizeAttribute::PostNormalizeAttribute() {}
