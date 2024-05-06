#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitSetupData.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode::__AppInitSetupData__RunMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode::__AppInitSetupData__RunMode() {}
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode GlobalNamespace::__AppInitSetupData__RunMode::Game{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode GlobalNamespace::__AppInitSetupData__RunMode::PlayTest{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::AppInitSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitSetupData::*)()>(&::GlobalNamespace::AppInitSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106c3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitSetupData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode& GlobalNamespace::AppInitSetupData::__cordl_internal_get_runMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runMode;
}
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode const& GlobalNamespace::AppInitSetupData::__cordl_internal_get_runMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runMode;
}
constexpr void GlobalNamespace::AppInitSetupData::__cordl_internal_set_runMode(::GlobalNamespace::__AppInitSetupData__RunMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___runMode = value;
}
inline ::GlobalNamespace::AppInitSetupData* GlobalNamespace::AppInitSetupData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AppInitSetupData*>());
}
inline void GlobalNamespace::AppInitSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitSetupData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitSetupData::AppInitSetupData() {}
