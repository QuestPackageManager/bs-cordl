#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformFactory.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformFactory_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformFactory.CreateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>* (
    ::OculusStudios::Platform::Core::IPlatformFactory::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(&::OculusStudios::Platform::Core::IPlatformFactory::CreateAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::IPlatformFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::IPlatformFactory*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>*
OculusStudios::Platform::Core::IPlatformFactory::CreateAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::IPlatformFactory*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>*, false>(this, ___internal_method, initParams);
}
