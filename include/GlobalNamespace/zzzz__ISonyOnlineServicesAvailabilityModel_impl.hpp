#pragma once
// IWYU pragma private; include "GlobalNamespace/ISonyOnlineServicesAvailabilityModel.hpp"
#include "GlobalNamespace/zzzz__ISonyOnlineServicesAvailabilityModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyOnlineServicesAvailabilityModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability() {}
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Available{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Unavailable{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::UnknownError{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel.GetOnlineServicesAvailabilityAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability>* (::GlobalNamespace::ISonyOnlineServicesAvailabilityModel::*)()>(
    &::GlobalNamespace::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailabilityAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability>*
GlobalNamespace::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailabilityAsync() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability>*, false>(this,
                                                                                                                                                                                ___internal_method);
}
