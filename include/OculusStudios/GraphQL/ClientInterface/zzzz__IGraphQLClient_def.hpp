#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IGraphQLClient)
namespace OculusStudios::GraphQL::ClientInterface {
class EmptyResponseObject;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClientEvents;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IMutationRequest;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IQueryRequest;
}
namespace OculusStudios::GraphQL::ClientInterface {
class Request;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClient;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.IGraphQLClient
class CORDL_TYPE IGraphQLClient {
public:
  // Declarations
  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize(::StringW endpoint, ::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* customAppHeaders,
                         ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger);

  /// @brief Method Mutate, addr 0x5d7e2e8, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>* Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request);

  /// @brief Method Mutate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TDomainModel> inline ::System::Threading::Tasks::Task_1<TDomainModel>* Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request);

  /// @brief Method Mutate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TDomainModel, typename TViewModel> inline ::System::Threading::Tasks::Task_1<TViewModel>* Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request);

  /// @brief Method OnApplicationResumed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnApplicationResumed();

  /// @brief Method OnApplicationSuspended, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnApplicationSuspended();

  /// @brief Method PauseRequestQueue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PauseRequestQueue();

  /// @brief Method Query, addr 0x5d7e228, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>* Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request);

  /// @brief Method Query, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TDomainModel> inline ::System::Threading::Tasks::Task_1<TDomainModel>* Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request);

  /// @brief Method Query, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TDomainModel, typename TViewModel> inline ::System::Threading::Tasks::Task_1<TViewModel>* Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request);

  /// @brief Method ResetRequestForUserInitiatedRetryAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ResetRequestForUserInitiatedRetryAsync(::OculusStudios::GraphQL::ClientInterface::Request* request);

  /// @brief Method ResumeRequestQueue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ResumeRequestQueue();

  /// @brief Method SetApplicationOffline, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetApplicationOffline();

  /// @brief Method SetApplicationOnline, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetApplicationOnline();

  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update(float_t deltaTime);

  // Ctor Parameters [CppParam { name: "", ty: "IGraphQLClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGraphQLClient(IGraphQLClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*, "OculusStudios.GraphQL.ClientInterface", "IGraphQLClient");
