#pragma once
#include "System/Diagnostics/zzzz__Switch_impl.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::BooleanSwitch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::BooleanSwitch::*)(::StringW, ::StringW)>(&::System::Diagnostics::BooleanSwitch::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2e9f420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::BooleanSwitch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::BooleanSwitch* System::Diagnostics::BooleanSwitch::New_ctor(::StringW displayName, ::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::BooleanSwitch*>(displayName, description));
}
inline void System::Diagnostics::BooleanSwitch::_ctor(::StringW displayName, ::StringW description) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::BooleanSwitch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, description);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::BooleanSwitch::BooleanSwitch() {}
