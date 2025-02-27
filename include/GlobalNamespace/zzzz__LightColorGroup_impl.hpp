#pragma once
// IWYU pragma private; include "GlobalNamespace/LightColorGroup.hpp"
#include "GlobalNamespace/zzzz__IEditTimeValidated_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroup::*)()>(&::GlobalNamespace::LightColorGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9d9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightColorGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightColorGroup* GlobalNamespace::LightColorGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightColorGroup*>());
}
/// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
constexpr GlobalNamespace::LightColorGroup::operator ::GlobalNamespace::IEditTimeValidated*() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
constexpr ::GlobalNamespace::IEditTimeValidated* GlobalNamespace::LightColorGroup::i___GlobalNamespace__IEditTimeValidated() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorGroup::LightColorGroup() {}
