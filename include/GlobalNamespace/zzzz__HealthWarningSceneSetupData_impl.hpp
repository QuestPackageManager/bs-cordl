#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningSceneSetupData::*)()>(&::GlobalNamespace::HealthWarningSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x577c494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::HealthWarningSceneSetupData::__cordl_internal_get_taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::HealthWarningSceneSetupData::__cordl_internal_get_taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr void GlobalNamespace::HealthWarningSceneSetupData::__cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HealthWarningSceneSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningSceneSetupData* GlobalNamespace::HealthWarningSceneSetupData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HealthWarningSceneSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningSceneSetupData::HealthWarningSceneSetupData() {}
