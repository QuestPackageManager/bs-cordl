#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__GlobalizationMode_def.hpp"
//  Writing Method size for method: ::System::Globalization::GlobalizationMode.get_Invariant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Globalization::GlobalizationMode::get_Invariant)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2401d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::GlobalizationMode*>::get(),
                                                                               "get_Invariant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GlobalizationMode.GetGlobalizationInvariantMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Globalization::GlobalizationMode::GetGlobalizationInvariantMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2401d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::GlobalizationMode*>::get(),
                                                                               "GetGlobalizationInvariantMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Globalization::GlobalizationMode::setStaticF__Invariant_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<Invariant>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::GlobalizationMode*>::get>(
      std::forward<bool>(value));
}
inline bool System::Globalization::GlobalizationMode::getStaticF__Invariant_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<Invariant>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::GlobalizationMode*>::get>();
}
inline bool System::Globalization::GlobalizationMode::get_Invariant() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::GlobalizationMode*>::get(),
                                                                             "get_Invariant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Globalization::GlobalizationMode::GetGlobalizationInvariantMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::GlobalizationMode*>::get(),
                                                                             "GetGlobalizationInvariantMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Globalization::GlobalizationMode::GlobalizationMode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
