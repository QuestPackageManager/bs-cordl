#pragma once
// IWYU pragma private; include "GlobalNamespace/LightColorGroupParent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupParent_def.hpp"
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupParent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroupParent::*)()>(&::GlobalNamespace::LightColorGroupParent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e6030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupParent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightColorGroupParent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupParent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightColorGroupParent* GlobalNamespace::LightColorGroupParent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightColorGroupParent*>());
}
/// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
constexpr GlobalNamespace::LightColorGroupParent::operator ::GlobalNamespace::IEditTimeValidated*() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
constexpr ::GlobalNamespace::IEditTimeValidated* GlobalNamespace::LightColorGroupParent::i___GlobalNamespace__IEditTimeValidated() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorGroupParent::LightColorGroupParent() {}
