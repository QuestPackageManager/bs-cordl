#pragma once
#include "System/zzzz__MonoTODOAttribute_impl.hpp"
#include "System/zzzz__MonoLimitationAttribute_def.hpp"
//  Writing Method size for method: ::System::MonoLimitationAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoLimitationAttribute::*)(::StringW)>(&::System::MonoLimitationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x285e14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoLimitationAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::MonoLimitationAttribute* System::MonoLimitationAttribute::New_ctor(::StringW comment) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::MonoLimitationAttribute*>(comment));
}
inline void System::MonoLimitationAttribute::_ctor(::StringW comment) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoLimitationAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comment);
}
// Ctor Parameters []
constexpr ::System::MonoLimitationAttribute::MonoLimitationAttribute() {}
