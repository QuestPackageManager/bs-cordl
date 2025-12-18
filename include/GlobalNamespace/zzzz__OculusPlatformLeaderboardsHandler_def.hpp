#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformLeaderboardsHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformLeaderboardsHandler)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class LeaderboardIdsModel;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader_ScoreData;
}
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler___c;
}
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler___c__DisplayClass4_0;
}
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler___c__DisplayClass6_0;
}
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler___c__DisplayClass7_0;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_GetScoresCompletionHandler;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_ScoresScope;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_UploadScoreCompletionHandler;
}
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class Request;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler;
}
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler___c;
}
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler___c__DisplayClass4_0;
}
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler___c__DisplayClass6_0;
}
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformLeaderboardsHandler);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass6_0);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformLeaderboardsHandler/<>c
class CORDL_TYPE OculusPlatformLeaderboardsHandler___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* __9__3_0;

  static inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c* New_ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x365e384, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__3_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* _);

  /// @brief Method .ctor, addr 0x365e380, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c* getStaticF___9();

  static inline ::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c* value);

  static inline void setStaticF___9__3_0(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformLeaderboardsHandler___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformLeaderboardsHandler___c(OculusPlatformLeaderboardsHandler___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformLeaderboardsHandler___c(OculusPlatformLeaderboardsHandler___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15268 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformLeaderboardsHandler/<>c__DisplayClass4_0
class CORDL_TYPE OculusPlatformLeaderboardsHandler___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusPlatformLeaderboardsHandler* __4__this;

  /// @brief Field oculusRequest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_oculusRequest, put = __cordl_internal_set_oculusRequest)) ::Oculus::Platform::Request* oculusRequest;

  static inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass4_0* New_ctor();

  /// @brief Method <AddOculusRequest>b__0, addr 0x365e388, size 0x68, virtual false, abstract: false, final false
  inline void _AddOculusRequest_b__0(::GlobalNamespace::HMAsyncRequest* _);

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& __cordl_internal_get___4__this();

  constexpr ::Oculus::Platform::Request* const& __cordl_internal_get_oculusRequest() const;

  constexpr ::Oculus::Platform::Request*& __cordl_internal_get_oculusRequest();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value);

  constexpr void __cordl_internal_set_oculusRequest(::Oculus::Platform::Request* value);

  /// @brief Method .ctor, addr 0x365ddd4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformLeaderboardsHandler___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformLeaderboardsHandler___c__DisplayClass4_0(OculusPlatformLeaderboardsHandler___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformLeaderboardsHandler___c__DisplayClass4_0(OculusPlatformLeaderboardsHandler___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15269 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformLeaderboardsHandler* _____4__this;

  /// @brief Field oculusRequest, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Request* ___oculusRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass4_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass4_0, ___oculusRequest) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass4_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformLeaderboardsHandler/<>c__DisplayClass6_0
class CORDL_TYPE OculusPlatformLeaderboardsHandler___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusPlatformLeaderboardsHandler* __4__this;

  /// @brief Field completionHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_completionHandler,
                      put = __cordl_internal_set_completionHandler)) ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler;

  /// @brief Field referencePlayerId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_referencePlayerId, put = __cordl_internal_set_referencePlayerId)) uint64_t referencePlayerId;

  static inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass6_0* New_ctor();

  /// @brief Method <GetScores>g__Callback|0, addr 0x365e3f0, size 0x2c8, virtual false, abstract: false, final false
  inline void _GetScores_g__Callback_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* message);

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* const& __cordl_internal_get_completionHandler() const;

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*& __cordl_internal_get_completionHandler();

  constexpr uint64_t const& __cordl_internal_get_referencePlayerId() const;

  constexpr uint64_t& __cordl_internal_get_referencePlayerId();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value);

  constexpr void __cordl_internal_set_completionHandler(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* value);

  constexpr void __cordl_internal_set_referencePlayerId(uint64_t value);

  /// @brief Method .ctor, addr 0x365e0f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformLeaderboardsHandler___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformLeaderboardsHandler___c__DisplayClass6_0(OculusPlatformLeaderboardsHandler___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformLeaderboardsHandler___c__DisplayClass6_0(OculusPlatformLeaderboardsHandler___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15270 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformLeaderboardsHandler* _____4__this;

  /// @brief Field completionHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* ___completionHandler;

  /// @brief Field referencePlayerId, offset: 0x20, size: 0x8, def value: None
  uint64_t ___referencePlayerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass6_0, ___completionHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass6_0, ___referencePlayerId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass6_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformLeaderboardsHandler/<>c__DisplayClass7_0
class CORDL_TYPE OculusPlatformLeaderboardsHandler___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusPlatformLeaderboardsHandler* __4__this;

  /// @brief Field completionHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_completionHandler,
                      put = __cordl_internal_set_completionHandler)) ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler;

  static inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0* New_ctor();

  /// @brief Method <UploadScore>b__0, addr 0x365e6b8, size 0xa4, virtual false, abstract: false, final false
  inline void _UploadScore_b__0(::Oculus::Platform::Message_1<bool>* messsage);

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* const& __cordl_internal_get_completionHandler() const;

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*& __cordl_internal_get_completionHandler();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value);

  constexpr void __cordl_internal_set_completionHandler(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* value);

  /// @brief Method .ctor, addr 0x365e328, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformLeaderboardsHandler___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformLeaderboardsHandler___c__DisplayClass7_0(OculusPlatformLeaderboardsHandler___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformLeaderboardsHandler___c__DisplayClass7_0(OculusPlatformLeaderboardsHandler___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15271 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformLeaderboardsHandler* _____4__this;

  /// @brief Field completionHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* ___completionHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0, ___completionHandler) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlatformLeaderboardsHandler
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformLeaderboardsHandler
class CORDL_TYPE OculusPlatformLeaderboardsHandler : public ::GlobalNamespace::PlatformLeaderboardsHandler {
public:
  // Declarations
  using __c = ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c;

  using __c__DisplayClass4_0 = ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass4_0;

  using __c__DisplayClass6_0 = ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0;

  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel, put = __cordl_internal_set__gameplayModifiersModel)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>
      _gameplayModifiersModel;

  /// @brief Field _leaderboardIdsModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIdsModel, put = __cordl_internal_set__leaderboardIdsModel)) ::GlobalNamespace::LeaderboardIdsModel* _leaderboardIdsModel;

  /// @brief Field _oculusRequestIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusRequestIds, put = __cordl_internal_set__oculusRequestIds)) ::System::Collections::Generic::HashSet_1<uint64_t>* _oculusRequestIds;

  /// @brief Method AddOculusRequest, addr 0x365dcd8, size 0xfc, virtual false, abstract: false, final false
  inline void AddOculusRequest(::Oculus::Platform::Request* oculusRequest, ::GlobalNamespace::HMAsyncRequest* asyncRequest);

  /// @brief Method CheckMessageForValidRequest, addr 0x365ddd8, size 0xa4, virtual false, abstract: false, final false
  inline bool CheckMessageForValidRequest(::Oculus::Platform::Message* message);

  /// @brief Method GetScores, addr 0x365de7c, size 0x278, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scope, uint64_t referencePlayerId,
                                                      ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler);

  static inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler* New_ctor();

  /// @brief Method UploadScore, addr 0x365e0f8, size 0x230, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                        ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler);

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::GlobalNamespace::LeaderboardIdsModel* const& __cordl_internal_get__leaderboardIdsModel() const;

  constexpr ::GlobalNamespace::LeaderboardIdsModel*& __cordl_internal_get__leaderboardIdsModel();

  constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& __cordl_internal_get__oculusRequestIds() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& __cordl_internal_get__oculusRequestIds();

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__leaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModel* value);

  constexpr void __cordl_internal_set__oculusRequestIds(::System::Collections::Generic::HashSet_1<uint64_t>* value);

  /// @brief Method .ctor, addr 0x365dbb8, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformLeaderboardsHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformLeaderboardsHandler(OculusPlatformLeaderboardsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformLeaderboardsHandler(OculusPlatformLeaderboardsHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15272 };

  /// @brief Field _leaderboardIdsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardIdsModel* ____leaderboardIdsModel;

  /// @brief Field _oculusRequestIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint64_t>* ____oculusRequestIds;

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler, ____leaderboardIdsModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler, ____oculusRequestIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformLeaderboardsHandler, ____gameplayModifiersModel) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformLeaderboardsHandler, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformLeaderboardsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformLeaderboardsHandler*, "", "OculusPlatformLeaderboardsHandler");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*, "", "OculusPlatformLeaderboardsHandler/<>c");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass4_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass6_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass7_0");
