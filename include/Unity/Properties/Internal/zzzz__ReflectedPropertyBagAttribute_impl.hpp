#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectedPropertyBagAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Properties/Internal/zzzz__ReflectedPropertyBagAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::ReflectedPropertyBagAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::Internal::ReflectedPropertyBagAttribute::*)()>(
    &::Unity::Properties::Internal::ReflectedPropertyBagAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x492434c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::ReflectedPropertyBagAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::ReflectedPropertyBagAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::ReflectedPropertyBagAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::ReflectedPropertyBagAttribute* Unity::Properties::Internal::ReflectedPropertyBagAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::Internal::ReflectedPropertyBagAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::ReflectedPropertyBagAttribute::ReflectedPropertyBagAttribute() {}
