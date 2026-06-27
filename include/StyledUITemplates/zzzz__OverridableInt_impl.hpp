#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableInt.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_impl.hpp"
#include "StyledUITemplates/zzzz__OverridableInt_def.hpp"
//  Writing Method size for method: ::StyledUITemplates::OverridableInt._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::StyledUITemplates::OverridableInt::*)()>(&::StyledUITemplates::OverridableInt::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e04fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableInt*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void StyledUITemplates::OverridableInt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableInt*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StyledUITemplates::OverridableInt* StyledUITemplates::OverridableInt::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::StyledUITemplates::OverridableInt*>());
}
// Ctor Parameters []
constexpr ::StyledUITemplates::OverridableInt::OverridableInt()   {
}
