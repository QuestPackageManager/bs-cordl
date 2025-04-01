#pragma once
// IWYU pragma private; include "GlobalNamespace/DeterminismConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeterminismConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DeterminismConfig::*)(bool)>(&::GlobalNamespace::DeterminismConfig::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x226d934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterminismConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::DeterminismConfig::__cordl_internal_get_forceSimplePhysics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceSimplePhysics;
}
constexpr bool const& GlobalNamespace::DeterminismConfig::__cordl_internal_get_forceSimplePhysics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceSimplePhysics;
}
constexpr void GlobalNamespace::DeterminismConfig::__cordl_internal_set_forceSimplePhysics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceSimplePhysics = value;
}
inline void GlobalNamespace::DeterminismConfig::_ctor(bool deterministic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterminismConfig*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deterministic);
}
inline ::GlobalNamespace::DeterminismConfig* GlobalNamespace::DeterminismConfig::New_ctor(bool deterministic) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DeterminismConfig*>(deterministic));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeterminismConfig::DeterminismConfig() {}
