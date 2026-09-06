#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IRequestWithResultConversion_2.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLModel_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IRequestWithResultConversion_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template <typename TBackend, typename TFrontend>
  requires(::cordl_internals::type_constraint<TBackend, ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*> && ::cordl_internals::reference_type_constraint<TBackend> &&
           ::cordl_internals::reference_type_constraint<TFrontend>)
inline ::System::Threading::Tasks::Task_1<TFrontend>* OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>::ConvertResponseModel(TBackend backendModel) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TFrontend>*>(this, ___internal_method, backendModel);
}
