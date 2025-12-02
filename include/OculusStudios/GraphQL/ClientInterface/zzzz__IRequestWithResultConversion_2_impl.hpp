#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IRequestWithResultConversion_2.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IRequestWithResultConversion_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template <typename TBackend, typename TFrontend>
inline ::System::Threading::Tasks::Task_1<TFrontend>* OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>::ConvertResponseModel(TBackend backendModel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TFrontend>*, false>(this, ___internal_method, backendModel);
}
