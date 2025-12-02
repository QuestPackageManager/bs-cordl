#pragma once
// IWYU pragma private; include "HMUI/EventSystemHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__EventSystemHelpers_def.hpp"
//  Writing Method size for method: ::HMUI::EventSystemHelpers.IsInputFieldSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::HMUI::EventSystemHelpers::IsInputFieldSelected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5664718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EventSystemHelpers*>::get(), "IsInputFieldSelected",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool HMUI::EventSystemHelpers::IsInputFieldSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EventSystemHelpers*>::get(), "IsInputFieldSelected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::EventSystemHelpers::EventSystemHelpers() {}
