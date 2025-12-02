#pragma once
// IWYU pragma private; include "System/Diagnostics/MonitoringDescriptionAttribute.hpp"
#include "System/ComponentModel/zzzz__DescriptionAttribute_impl.hpp"
#include "System/Diagnostics/zzzz__MonitoringDescriptionAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::MonitoringDescriptionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::MonitoringDescriptionAttribute::*)(::StringW)>(
    &::System::Diagnostics::MonitoringDescriptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6182c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::MonitoringDescriptionAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::MonitoringDescriptionAttribute.get_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::MonitoringDescriptionAttribute::*)()>(
    &::System::Diagnostics::MonitoringDescriptionAttribute::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6182c84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::MonitoringDescriptionAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::MonitoringDescriptionAttribute*>::get(), 7));
    return ___internal_method;
  }
};
inline void System::Diagnostics::MonitoringDescriptionAttribute::_ctor(::StringW description) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::MonitoringDescriptionAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, description);
}
inline ::StringW System::Diagnostics::MonitoringDescriptionAttribute::get_Description() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::MonitoringDescriptionAttribute*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Diagnostics::MonitoringDescriptionAttribute* System::Diagnostics::MonitoringDescriptionAttribute::New_ctor(::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::MonitoringDescriptionAttribute*>(description));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::MonitoringDescriptionAttribute::MonitoringDescriptionAttribute() {}
