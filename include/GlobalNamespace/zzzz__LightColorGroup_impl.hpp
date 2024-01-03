#pragma once
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorGroup_def.hpp"
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroup::*)()>(&::GlobalNamespace::LightColorGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a8068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
constexpr GlobalNamespace::LightColorGroup::operator ::GlobalNamespace::IEditTimeValidated*() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
constexpr ::GlobalNamespace::IEditTimeValidated* GlobalNamespace::LightColorGroup::i___GlobalNamespace__IEditTimeValidated() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
inline ::GlobalNamespace::LightColorGroup* GlobalNamespace::LightColorGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightColorGroup*>());
}
inline void GlobalNamespace::LightColorGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorGroup::LightColorGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
