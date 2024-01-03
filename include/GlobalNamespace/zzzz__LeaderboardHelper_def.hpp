#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardHelper)
namespace GlobalNamespace {
struct __LeaderboardHelper___CreateOculusLeaderboard_d__2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardHelper;
}
namespace GlobalNamespace {
struct __LeaderboardHelper___CreateOculusLeaderboard_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardHelper);
MARK_VAL_T(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2);
// Type: ::<CreateOculusLeaderboard>d__2
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 883 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(14655))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5849)) CS Name:
// ::LeaderboardHelper::<CreateOculusLeaderboard>d__2
struct CORDL_TYPE __LeaderboardHelper___CreateOculusLeaderboard_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22f4bb8, size 0xb48, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22f5700, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "leaderboardID", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "appToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_httpClient_5__2", ty: "::System::Net::Http::HttpClient*", modifiers: "", def_value: None }, CppParam {
  // name: "_request_5__3", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "_contentList_5__4", ty:
  // "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }]
  constexpr __LeaderboardHelper___CreateOculusLeaderboard_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW leaderboardID,
                                                               ::StringW appToken, ::System::Net::Http::HttpClient* _httpClient_5__2, ::System::Net::Http::HttpRequestMessage* _request_5__3,
                                                               ::System::Collections::Generic::List_1<::StringW>* _contentList_5__4,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardHelper___CreateOculusLeaderboard_d__2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field leaderboardID, offset: 0x28, size: 0x8, def value: None
  ::StringW leaderboardID;

  /// @brief Field appToken, offset: 0x30, size: 0x8, def value: None
  ::StringW appToken;

  /// @brief Field <httpClient>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* _httpClient_5__2;

  /// @brief Field <request>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* _request_5__3;

  /// @brief Field <contentList>5__4, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* _contentList_5__4;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, leaderboardID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, appToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, _httpClient_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, _request_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, _contentList_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardHelper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5850))
// CS Name: ::LeaderboardHelper*
class CORDL_TYPE LeaderboardHelper : public ::System::Object {
public:
  // Declarations
  using _CreateOculusLeaderboard_d__2 = ::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2;

  /// @brief Field _leaderboardIds, offset 0x10, size 0x8
  __declspec(property(get = __get__leaderboardIds, put = __set__leaderboardIds))::System::Collections::Generic::List_1<::StringW>* _leaderboardIds;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__leaderboardIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__leaderboardIds() const;

  constexpr void __set__leaderboardIds(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method CreateOculusLeaderboards, addr 0x22f3c18, size 0xe7c, virtual false, abstract: false, final false
  inline void CreateOculusLeaderboards(::GlobalNamespace::LeaderboardIdsModelSO* leaderboardIdsModel, ::GlobalNamespace::BeatmapLevelCollectionSO* _levelCollection, bool debug, ::StringW appToken);

  /// @brief Method CreateOculusLeaderboard, addr 0x22f4a94, size 0xa4, virtual false, abstract: false, final false
  inline void CreateOculusLeaderboard(::StringW leaderboardID, ::StringW appToken);

  static inline ::GlobalNamespace::LeaderboardHelper* New_ctor();

  /// @brief Method .ctor, addr 0x22f4b38, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardHelper(LeaderboardHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardHelper(LeaderboardHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardHelper();

public:
  /// @brief Field _leaderboardIds, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____leaderboardIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardHelper, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardHelper, ____leaderboardIds) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardHelper*, "", "LeaderboardHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, "", "LeaderboardHelper/<CreateOculusLeaderboard>d__2");
