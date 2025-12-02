#ifdef __cpp_modules
module;
#endif

#pragma once
#include "OculusStudios/GraphQL/ClientInterface/ApplicationSuspendedException.hpp"
#include "OculusStudios/GraphQL/ClientInterface/AttemptData.hpp"
#include "OculusStudios/GraphQL/ClientInterface/Defines.hpp"
#include "OculusStudios/GraphQL/ClientInterface/EmptyResponseObject.hpp"
#include "OculusStudios/GraphQL/ClientInterface/FailureHandlingMethod.hpp"
#include "OculusStudios/GraphQL/ClientInterface/GraphErrorCode.hpp"
#include "OculusStudios/GraphQL/ClientInterface/GraphErrorCodeExtensions.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IFragmentModel.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IGraphQLClient.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IGraphQLClientEvents.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IGraphQLInputObject.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IGraphQLInputSupportsClientMutationId.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IGraphQLModel.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IGraphQLOperation.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IMutationRequest.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IQueryRequest.hpp"
#include "OculusStudios/GraphQL/ClientInterface/IRequestWithResultConversion_2.hpp"
#include "OculusStudios/GraphQL/ClientInterface/NotInitializedException.hpp"
#include "OculusStudios/GraphQL/ClientInterface/OfflineException.hpp"
#include "OculusStudios/GraphQL/ClientInterface/Request.hpp"
#include "OculusStudios/GraphQL/ClientInterface/RequestState.hpp"
#include "OculusStudios/GraphQL/ClientInterface/RequestStateExtensions.hpp"
#include "OculusStudios/GraphQL/ClientInterface/RequestType.hpp"
#ifdef __cpp_modules
export module ClientInterface;
#endif
