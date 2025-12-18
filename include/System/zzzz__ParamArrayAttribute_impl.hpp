#pragma once
// IWYU pragma private; include "System/ParamArrayAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__ParamArrayAttribute_def.hpp"
//  Writing Method size for method: ::System::ParamArrayAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ParamArrayAttribute::*)()>(&::System::ParamArrayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa7d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ParamArrayAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::ParamArrayAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ParamArrayAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ParamArrayAttribute* System::ParamArrayAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ParamArrayAttribute*>());
}
// Ctor Parameters []
constexpr ::System::ParamArrayAttribute::ParamArrayAttribute() {}
