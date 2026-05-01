#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatSaber/GraphQL/BSClientProviderInitializationState.hpp"
#include "BeatSaber/GraphQL/DummyGraphQLClient.hpp"
#include "BeatSaber/GraphQL/GraphQLClientEvents.hpp"
#include "BeatSaber/GraphQL/GraphQLClientProvider.hpp"
#include "BeatSaber/GraphQL/GraphQLClientProviderInstaller.hpp"
#include "BeatSaber/GraphQL/GraphQLClientProviderInstallerSO.hpp"
#include "BeatSaber/GraphQL/GraphQLDummyClientProvider.hpp"
#include "BeatSaber/GraphQL/IGraphQLClientProvider.hpp"
#include "BeatSaber/GraphQL/MockGraphQLClientProvider.hpp"
#include "BeatSaber/GraphQL/MockGraphQLClient_1.hpp"
#ifdef __cpp_modules
export module GraphQL;
#endif
