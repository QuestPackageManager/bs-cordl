#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeDisableUnsafePtrRestrictionAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c9e620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute* Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute*>());
}
inline void Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute::NativeDisableUnsafePtrRestrictionAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
