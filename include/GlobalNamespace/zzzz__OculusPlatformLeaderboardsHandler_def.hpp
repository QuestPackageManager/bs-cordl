#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformLeaderboardsHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class __LeaderboardScoreUploader__ScoreData;
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
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
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
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusPlatformLeaderboardsHandler::<>c*
class CORDL_TYPE __OculusPlatformLeaderboardsHandler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* __9__3_0;

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* New_ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x26c49f0, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__3_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* _);

  /// @brief Method .ctor, addr 0x26c49e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* getStaticF___9();

  static inline ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* value);

  static inline void setStaticF___9__3_0(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformLeaderboardsHandler____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformLeaderboardsHandler____c(__OculusPlatformLeaderboardsHandler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformLeaderboardsHandler____c(__OculusPlatformLeaderboardsHandler____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13300 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusPlatformLeaderboardsHandler::<>c__DisplayClass4_0*
class CORDL_TYPE __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusPlatformLeaderboardsHandler* __4__this;

  /// @brief Field oculusRequest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_oculusRequest, put = __cordl_internal_set_oculusRequest)) ::Oculus::Platform::Request* oculusRequest;

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0* New_ctor();

  /// @brief Method <AddOculusRequest>b__0, addr 0x26c49f4, size 0x64, virtual false, abstract: false, final false
  inline void _AddOculusRequest_b__0(::GlobalNamespace::HMAsyncRequest* _);

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformLeaderboardsHandler*> const& __cordl_internal_get___4__this() const;

  constexpr ::Oculus::Platform::Request*& __cordl_internal_get_oculusRequest();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Request*> const& __cordl_internal_get_oculusRequest() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value);

  constexpr void __cordl_internal_set_oculusRequest(::Oculus::Platform::Request* value);

  /// @brief Method .ctor, addr 0x26c4444, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformLeaderboardsHandler____c__DisplayClass4_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformLeaderboardsHandler* _____4__this;

  /// @brief Field oculusRequest, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Request* ___oculusRequest;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13301 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0, ___oculusRequest) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusPlatformLeaderboardsHandler::<>c__DisplayClass6_0*
class CORDL_TYPE __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusPlatformLeaderboardsHandler* __4__this;

  /// @brief Field completionHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_completionHandler,
                      put = __cordl_internal_set_completionHandler)) ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler;

  /// @brief Field referencePlayerId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_referencePlayerId, put = __cordl_internal_set_referencePlayerId)) ::StringW referencePlayerId;

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0* New_ctor();

  /// @brief Method <GetScores>g__Callback|0, addr 0x26c4a58, size 0x308, virtual false, abstract: false, final false
  inline void _GetScores_g__Callback_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* message);

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformLeaderboardsHandler*> const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*& __cordl_internal_get_completionHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*> const& __cordl_internal_get_completionHandler() const;

  constexpr ::StringW const& __cordl_internal_get_referencePlayerId() const;

  constexpr ::StringW& __cordl_internal_get_referencePlayerId();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value);

  constexpr void __cordl_internal_set_completionHandler(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* value);

  constexpr void __cordl_internal_set_referencePlayerId(::StringW value);

  /// @brief Method .ctor, addr 0x26c4750, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformLeaderboardsHandler____c__DisplayClass6_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformLeaderboardsHandler* _____4__this;

  /// @brief Field completionHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* ___completionHandler;

  /// @brief Field referencePlayerId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___referencePlayerId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0, ___completionHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0, ___referencePlayerId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusPlatformLeaderboardsHandler::<>c__DisplayClass7_0*
class CORDL_TYPE __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusPlatformLeaderboardsHandler* __4__this;

  /// @brief Field completionHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_completionHandler,
                      put = __cordl_internal_set_completionHandler)) ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler;

  static inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0* New_ctor();

  /// @brief Method <UploadScore>b__0, addr 0x26c4da0, size 0x98, virtual false, abstract: false, final false
  inline void _UploadScore_b__0(::Oculus::Platform::Message_1<bool>* messsage);

  constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformLeaderboardsHandler*> const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*& __cordl_internal_get_completionHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*> const& __cordl_internal_get_completionHandler() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value);

  constexpr void __cordl_internal_set_completionHandler(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* value);

  /// @brief Method .ctor, addr 0x26c4984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformLeaderboardsHandler____c__DisplayClass7_0(__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformLeaderboardsHandler* _____4__this;

  /// @brief Field completionHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* ___completionHandler;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13303 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0, ___completionHandler) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusPlatformLeaderboardsHandler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusPlatformLeaderboardsHandler*
class CORDL_TYPE OculusPlatformLeaderboardsHandler : public ::GlobalNamespace::PlatformLeaderboardsHandler {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0;

  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel, put = __cordl_internal_set__gameplayModifiersModel)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>
      _gameplayModifiersModel;

  /// @brief Field _leaderboardIdsModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIdsModel, put = __cordl_internal_set__leaderboardIdsModel)) ::GlobalNamespace::LeaderboardIdsModel* _leaderboardIdsModel;

  /// @brief Field _oculusRequestIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusRequestIds, put = __cordl_internal_set__oculusRequestIds)) ::System::Collections::Generic::HashSet_1<uint64_t>* _oculusRequestIds;

  /// @brief Method AddOculusRequest, addr 0x26c435c, size 0xe8, virtual false, abstract: false, final false
  inline void AddOculusRequest(::Oculus::Platform::Request* oculusRequest, ::GlobalNamespace::HMAsyncRequest* asyncRequest);

  /// @brief Method CheckMessageForValidRequest, addr 0x26c444c, size 0x94, virtual false, abstract: false, final false
  inline bool CheckMessageForValidRequest(::Oculus::Platform::Message* message);

  /// @brief Method GetScores, addr 0x26c44e0, size 0x270, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  static inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler* New_ctor();

  /// @brief Method UploadScore, addr 0x26c4758, size 0x22c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                        ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler);

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::GlobalNamespace::LeaderboardIdsModel*& __cordl_internal_get__leaderboardIdsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModel*> const& __cordl_internal_get__leaderboardIdsModel() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& __cordl_internal_get__oculusRequestIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint64_t>*> const& __cordl_internal_get__oculusRequestIds() const;

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__leaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModel* value);

  constexpr void __cordl_internal_set__oculusRequestIds(::System::Collections::Generic::HashSet_1<uint64_t>* value);

  /// @brief Method .ctor, addr 0x26c4238, size 0x11c, virtual false, abstract: false, final false
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

  /// @brief Field _leaderboardIdsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardIdsModel* ____leaderboardIdsModel;

  /// @brief Field _oculusRequestIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint64_t>* ____oculusRequestIds;

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13304 };

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
