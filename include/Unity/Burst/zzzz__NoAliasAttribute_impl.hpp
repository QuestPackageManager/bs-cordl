#pragma once
// IWYU pragma private; include "Unity/Burst/NoAliasAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/zzzz__NoAliasAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::NoAliasAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::NoAliasAttribute::*)()>(&::Unity::Burst::NoAliasAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4518dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::NoAliasAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Burst::NoAliasAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::NoAliasAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Burst::NoAliasAttribute* Unity::Burst::NoAliasAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::NoAliasAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::NoAliasAttribute::NoAliasAttribute() {}
