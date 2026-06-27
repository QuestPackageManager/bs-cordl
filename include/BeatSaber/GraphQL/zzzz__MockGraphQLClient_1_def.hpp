#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/MockGraphQLClient_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockGraphQLClient_1)
namespace BeatSaber::GraphQL {
template<typename T,typename TDomainModel>
class MockGraphQLClient_1___c__12_1;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClientEvents;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClient;
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
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace BeatSaber::GraphQL {
template<typename T>
class MockGraphQLClient_1;
}
namespace BeatSaber::GraphQL {
template<typename T,typename TDomainModel>
class MockGraphQLClient_1___c__12_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BeatSaber::GraphQL::MockGraphQLClient_1);
MARK_GEN_REF_PTR_T(::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1);
// Dependencies System.Object
namespace BeatSaber::GraphQL {
// cpp template
template<typename T,typename TDomainModel>
// Is value type: false
// CS Name: BeatSaber.GraphQL.MockGraphQLClient`1/<>c__12`1<T,TDomainModel>
class CORDL_TYPE MockGraphQLClient_1___c__12_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T,TDomainModel>*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Func_2<::System::Threading::Tasks::Task_1<T>*,TDomainModel>*  __9__12_0;

static inline ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T,TDomainModel>* New_ctor() ;

/// @brief Method <Query>b__12_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TDomainModel _Query_b__12_0(::System::Threading::Tasks::Task_1<T>*  result) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T,TDomainModel>* getStaticF___9() ;

static inline ::System::Func_2<::System::Threading::Tasks::Task_1<T>*,TDomainModel>* getStaticF___9__12_0() ;

static inline void setStaticF___9(::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T,TDomainModel>*  value) ;

static inline void setStaticF___9__12_0(::System::Func_2<::System::Threading::Tasks::Task_1<T>*,TDomainModel>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockGraphQLClient_1___c__12_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockGraphQLClient_1___c__12_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockGraphQLClient_1___c__12_1(MockGraphQLClient_1___c__12_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockGraphQLClient_1___c__12_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockGraphQLClient_1___c__12_1(MockGraphQLClient_1___c__12_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22423};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaber::GraphQL
// Dependencies System.Object
namespace BeatSaber::GraphQL {
// cpp template
template<typename T>
// Is value type: false
// CS Name: BeatSaber.GraphQL.MockGraphQLClient`1<T>
class CORDL_TYPE MockGraphQLClient_1 : public ::System::Object {
public:
// Declarations
template<typename TDomainModel>
using __c__12_1 = ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>;

/// @brief Field QueryCompletionSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueryCompletionSource, put=__cordl_internal_set_QueryCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<T>*  QueryCompletionSource;

/// @brief Field QueryResult, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueryResult, put=__cordl_internal_set_QueryResult)) T  QueryResult;

/// @brief Field RequestCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_RequestCount, put=__cordl_internal_set_RequestCount)) int32_t  RequestCount;

/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
constexpr operator  ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*() noexcept;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Initialize(::StringW  endpoint, ::StringW  accessToken, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  customAppHeaders, ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*  logger) ;

/// @brief Method Mutate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TDomainModel>
inline ::System::Threading::Tasks::Task_1<TDomainModel>* Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest*  request) ;

/// @brief Method Mutate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TDomainModel,typename TViewModel>
inline ::System::Threading::Tasks::Task_1<TViewModel>* Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest*  request) ;

static inline ::BeatSaber::GraphQL::MockGraphQLClient_1<T>* New_ctor() ;

/// @brief Method OnApplicationResumed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnApplicationResumed() ;

/// @brief Method OnApplicationSuspended, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnApplicationSuspended() ;

/// @brief Method PauseRequestQueue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void PauseRequestQueue() ;

/// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TDomainModel>
inline ::System::Threading::Tasks::Task_1<TDomainModel>* Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest*  request) ;

/// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TDomainModel,typename TViewModel>
inline ::System::Threading::Tasks::Task_1<TViewModel>* Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest*  request) ;

/// @brief Method ResetRequestForUserInitiatedRetryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* ResetRequestForUserInitiatedRetryAsync(::OculusStudios::GraphQL::ClientInterface::Request*  request) ;

/// @brief Method ResumeRequestQueue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void ResumeRequestQueue() ;

/// @brief Method SetApplicationOffline, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetApplicationOffline() ;

/// @brief Method SetApplicationOnline, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetApplicationOnline() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Update(float_t  deltaTime) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& __cordl_internal_get_QueryCompletionSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __cordl_internal_get_QueryCompletionSource() ;

constexpr T const& __cordl_internal_get_QueryResult() const;

constexpr T& __cordl_internal_get_QueryResult() ;

constexpr int32_t const& __cordl_internal_get_RequestCount() const;

constexpr int32_t& __cordl_internal_get_RequestCount() ;

constexpr void __cordl_internal_set_QueryCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value) ;

constexpr void __cordl_internal_set_QueryResult(T  value) ;

constexpr void __cordl_internal_set_RequestCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* i___OculusStudios__GraphQL__ClientInterface__IGraphQLClient() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockGraphQLClient_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockGraphQLClient_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockGraphQLClient_1(MockGraphQLClient_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockGraphQLClient_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockGraphQLClient_1(MockGraphQLClient_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22424};

/// @brief Field QueryResult, offset: 0x10, size: 0x8, def value: None
 T  ___QueryResult;

/// @brief Field RequestCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___RequestCount;

/// @brief Field QueryCompletionSource, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<T>*  ___QueryCompletionSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaber::GraphQL
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatSaber::GraphQL::MockGraphQLClient_1, "BeatSaber.GraphQL", "MockGraphQLClient`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1, "BeatSaber.GraphQL", "MockGraphQLClient`1/<>c__12`1");
