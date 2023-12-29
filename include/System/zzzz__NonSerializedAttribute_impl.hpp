#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__NonSerializedAttribute_def.hpp"
//  Writing Method size for method: ::System::NonSerializedAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::NonSerializedAttribute::*)()>(&::System::NonSerializedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2453f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NonSerializedAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::NonSerializedAttribute* System::NonSerializedAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::NonSerializedAttribute*>());
}
inline void System::NonSerializedAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NonSerializedAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::NonSerializedAttribute::NonSerializedAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
