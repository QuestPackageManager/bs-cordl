#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformLeaderboardsHandler)
namespace Oculus::Platform {
class Message;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace GlobalNamespace {
class __OculusPlatformLeaderboardsHandler____c;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__ScoreData;
}
namespace GlobalNamespace {
class __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
class __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace Oculus::Platform {
class Request;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler;
}
namespace GlobalNamespace {
class __OculusPlatformLeaderboardsHandler____c;
}
namespace GlobalNamespace {
class __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformLeaderboardsHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4220))
// CS Name: ::OculusPlatformLeaderboardsHandler::<>c*
class CORDL_TYPE __OculusPlatformLeaderboardsHandler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* __9__3_0;

  static inline void setStaticF___9(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* value);

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* value);

  static inline ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* getStaticF___9__3_0();

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* New_ctor();

  /// @brief Method .ctor, addr 0x232ab74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x232ab7c, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__3_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* message);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformLeaderboardsHandler____c(__OculusPlatformLeaderboardsHandler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformLeaderboardsHandler____c(__OculusPlatformLeaderboardsHandler____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformLeaderboardsHandler____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4221))
// CS Name: ::OculusPlatformLeaderboardsHandler::<>c__DisplayClass4_0*
class CORDL_TYPE __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusPlatformLeaderboardsHandler* __4__this;

  /// @brief Field oculusRequest, offset 0x18, size 0x8
  __declspec(property(get = __get_oculusRequest, put = __set_oculusRequest))::Oculus::Platform::Request* oculusRequest;

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformLeaderboardsHandler*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value);

  constexpr ::Oculus::Platform::Request*& __get_oculusRequest();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Request*> const& __get_oculusRequest() const;

  constexpr void __set_oculusRequest(::Oculus::Platform::Request* value);

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0* New_ctor();

  /// @brief Method .ctor, addr 0x232a5ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <AddOculusRequest>b__0, addr 0x232ab80, size 0x64, virtual false, abstract: false, final false
  inline void _AddOculusRequest_b__0(::GlobalNamespace::HMAsyncRequest* request);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformLeaderboardsHandler* _____4__this;

  /// @brief Field oculusRequest, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Request* ___oculusRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0, ___oculusRequest) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4222))
// CS Name: ::OculusPlatformLeaderboardsHandler::<>c__DisplayClass6_0*
class CORDL_TYPE __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusPlatformLeaderboardsHandler* __4__this;

  /// @brief Field completionHandler, offset 0x18, size 0x8
  __declspec(property(get = __get_completionHandler, put = __set_completionHandler))::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler;

  /// @brief Field referencePlayerId, offset 0x20, size 0x8
  __declspec(property(get = __get_referencePlayerId, put = __set_referencePlayerId))::StringW referencePlayerId;

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformLeaderboardsHandler*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value);

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*& __get_completionHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*> const& __get_completionHandler() const;

  constexpr void __set_completionHandler(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* value);

  constexpr ::StringW& __get_referencePlayerId();

  constexpr ::StringW const& __get_referencePlayerId() const;

  constexpr void __set_referencePlayerId(::StringW value);

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor, addr 0x232a8f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetScores>b__0, addr 0x232abe4, size 0x2f8, virtual false, abstract: false, final false
  inline void _GetScores_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* message);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformLeaderboardsHandler* _____4__this;

  /// @brief Field completionHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* ___completionHandler;

  /// @brief Field referencePlayerId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___referencePlayerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0, ___completionHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0, ___referencePlayerId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4223))
// CS Name: ::OculusPlatformLeaderboardsHandler::<>c__DisplayClass7_0*
class CORDL_TYPE __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusPlatformLeaderboardsHandler* __4__this;

  /// @brief Field completionHandler, offset 0x18, size 0x8
  __declspec(property(get = __get_completionHandler, put = __set_completionHandler))::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler;

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformLeaderboardsHandler*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value);

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*& __get_completionHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*> const& __get_completionHandler() const;

  constexpr void __set_completionHandler(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* value);

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor, addr 0x232ab08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UploadScore>b__0, addr 0x232af1c, size 0x98, virtual false, abstract: false, final false
  inline void _UploadScore_b__0(::Oculus::Platform::Message_1<bool>* messsage);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformLeaderboardsHandler* _____4__this;

  /// @brief Field completionHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* ___completionHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0, ___completionHandler) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusPlatformLeaderboardsHandler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4224))
// CS Name: ::OculusPlatformLeaderboardsHandler*
class CORDL_TYPE OculusPlatformLeaderboardsHandler : public ::GlobalNamespace::PlatformLeaderboardsHandler {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0;

  using __c = ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c;

  /// @brief Field _leaderboardIdsModel, offset 0x10, size 0x8
  __declspec(property(get = __get__leaderboardIdsModel, put = __set__leaderboardIdsModel))::GlobalNamespace::LeaderboardIdsModelSO* _leaderboardIdsModel;

  /// @brief Field _oculusRequestIds, offset 0x18, size 0x8
  __declspec(property(get = __get__oculusRequestIds, put = __set__oculusRequestIds))::System::Collections::Generic::HashSet_1<uint64_t>* _oculusRequestIds;

  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  constexpr ::GlobalNamespace::LeaderboardIdsModelSO*& __get__leaderboardIdsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> const& __get__leaderboardIdsModel() const;

  constexpr void __set__leaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO* value);

  constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& __get__oculusRequestIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint64_t>*> const& __get__oculusRequestIds() const;

  constexpr void __set__oculusRequestIds(::System::Collections::Generic::HashSet_1<uint64_t>* value);

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  static inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler* New_ctor();

  /// @brief Method .ctor, addr 0x232a3d8, size 0x120, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method AddOculusRequest, addr 0x232a500, size 0xec, virtual false, abstract: false, final false
  inline void AddOculusRequest(::Oculus::Platform::Request* oculusRequest, ::GlobalNamespace::HMAsyncRequest* asyncRequest);

  /// @brief Method CheckMessageForValidRequest, addr 0x232a5f4, size 0x98, virtual false, abstract: false, final false
  inline bool CheckMessageForValidRequest(::Oculus::Platform::Message* message);

  /// @brief Method GetScores, addr 0x232a68c, size 0x268, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method UploadScore, addr 0x232a8fc, size 0x20c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                        ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler);

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformLeaderboardsHandler(OculusPlatformLeaderboardsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformLeaderboardsHandler(OculusPlatformLeaderboardsHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformLeaderboardsHandler();

public:
  /// @brief Field _leaderboardIdsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardIdsModelSO* ____leaderboardIdsModel;

  /// @brief Field _oculusRequestIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint64_t>* ____oculusRequestIds;

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformLeaderboardsHandler, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler, ____leaderboardIdsModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler, ____oculusRequestIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler, ____gameplayModifiersModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformLeaderboardsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformLeaderboardsHandler*, "", "OculusPlatformLeaderboardsHandler");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*, "", "OculusPlatformLeaderboardsHandler/<>c");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass7_0");
