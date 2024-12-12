#pragma once
// IWYU pragma private; include "GlobalNamespace/ISonyOnlineServicesAvailabilityModel.hpp"
#include "GlobalNamespace/zzzz__ISonyOnlineServicesAvailabilityModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyOnlineServicesAvailabilityModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability() {}
constexpr ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability::Available{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability::Unavailable{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability::UnknownError{
  static_cast<int32_t>(0x2)
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability>*
GlobalNamespace::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailabilityAsync() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability>*, false>(this, ___internal_method);
}
