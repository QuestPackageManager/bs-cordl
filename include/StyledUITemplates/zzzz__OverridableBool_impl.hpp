#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableBool.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_impl.hpp"
#include "StyledUITemplates/zzzz__OverridableBool_def.hpp"
//  Writing Method size for method: ::StyledUITemplates::OverridableBool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::StyledUITemplates::OverridableBool::*)()>(&::StyledUITemplates::OverridableBool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4079a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableBool*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void StyledUITemplates::OverridableBool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableBool*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StyledUITemplates::OverridableBool* StyledUITemplates::OverridableBool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::StyledUITemplates::OverridableBool*>());
}
// Ctor Parameters []
constexpr ::StyledUITemplates::OverridableBool::OverridableBool() {}
