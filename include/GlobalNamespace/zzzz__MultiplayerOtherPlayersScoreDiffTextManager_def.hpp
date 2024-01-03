#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerOtherPlayersScoreDiffTextManager)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class __MultiplayerOtherPlayersScoreDiffTextManager____c;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerOtherPlayersScoreDiffTextManager;
}
namespace GlobalNamespace {
class __MultiplayerOtherPlayersScoreDiffTextManager____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5230))
// CS Name: ::MultiplayerOtherPlayersScoreDiffTextManager::<>c*
class CORDL_TYPE __MultiplayerOtherPlayersScoreDiffTextManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* __9__10_0;

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c* value);

  static inline ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c* getStaticF___9();

  static inline void setStaticF___9__10_0(::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* getStaticF___9__10_0();

  static inline ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c* New_ctor();

  /// @brief Method .ctor, addr 0x2253dd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Update>b__10_0, addr 0x2253de0, size 0x14, virtual false, abstract: false, final false
  inline bool _Update_b__10_0(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* p);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerOtherPlayersScoreDiffTextManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerOtherPlayersScoreDiffTextManager____c(__MultiplayerOtherPlayersScoreDiffTextManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerOtherPlayersScoreDiffTextManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerOtherPlayersScoreDiffTextManager____c(__MultiplayerOtherPlayersScoreDiffTextManager____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerOtherPlayersScoreDiffTextManager____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerOtherPlayersScoreDiffTextManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5231))
// CS Name: ::MultiplayerOtherPlayersScoreDiffTextManager*
class CORDL_TYPE MultiplayerOtherPlayersScoreDiffTextManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c;

  /// @brief Field _multiplayerController, offset 0x18, size 0x8
  __declspec(property(get = __get__multiplayerController, put = __set__multiplayerController))::GlobalNamespace::MultiplayerController* _multiplayerController;

  /// @brief Field _playersManager, offset 0x20, size 0x8
  __declspec(property(get = __get__playersManager, put = __set__playersManager))::GlobalNamespace::MultiplayerPlayersManager* _playersManager;

  /// @brief Field _scoreProvider, offset 0x28, size 0x8
  __declspec(property(get = __get__scoreProvider, put = __set__scoreProvider))::GlobalNamespace::MultiplayerScoreProvider* _scoreProvider;

  /// @brief Field _multiplayerSessionManager, offset 0x30, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _layoutProvider, offset 0x38, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _initData, offset 0x40, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__CoreGameHUDController__InitData* _initData;

  /// @brief Field _timeToNextUpdate, offset 0x48, size 0x4
  __declspec(property(get = __get__timeToNextUpdate, put = __set__timeToNextUpdate)) float_t _timeToNextUpdate;

  constexpr ::GlobalNamespace::MultiplayerController*& __get__multiplayerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get__multiplayerController() const;

  constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController* value);

  constexpr ::GlobalNamespace::MultiplayerPlayersManager*& __get__playersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& __get__playersManager() const;

  constexpr void __set__playersManager(::GlobalNamespace::MultiplayerPlayersManager* value);

  constexpr ::GlobalNamespace::MultiplayerScoreProvider*& __get__scoreProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& __get__scoreProvider() const;

  constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__CoreGameHUDController__InitData* value);

  constexpr float_t& __get__timeToNextUpdate();

  constexpr float_t const& __get__timeToNextUpdate() const;

  constexpr void __set__timeToNextUpdate(float_t value);

  /// @brief Method Start, addr 0x2252e2c, size 0xb8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x2252ee4, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x2252fb4, size 0x3d4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method InitLeftRightPositions, addr 0x2253748, size 0x4bc, virtual false, abstract: false, final false
  inline void InitLeftRightPositions();

  /// @brief Method HideAll, addr 0x2253388, size 0x3c0, virtual false, abstract: false, final false
  inline void HideAll();

  /// @brief Method HandleStateChanged, addr 0x2253c04, size 0x168, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State newState);

  static inline ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager* New_ctor();

  /// @brief Method .ctor, addr 0x2253d6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerOtherPlayersScoreDiffTextManager(MultiplayerOtherPlayersScoreDiffTextManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerOtherPlayersScoreDiffTextManager(MultiplayerOtherPlayersScoreDiffTextManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerOtherPlayersScoreDiffTextManager();

public:
  /// @brief Field _multiplayerController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* ____multiplayerController;

  /// @brief Field _playersManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPlayersManager* ____playersManager;

  /// @brief Field _scoreProvider, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider* ____scoreProvider;

  /// @brief Field _multiplayerSessionManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _layoutProvider, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _initData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__CoreGameHUDController__InitData* ____initData;

  /// @brief Field _timeToNextUpdate, offset: 0x48, size: 0x4, def value: None
  float_t ____timeToNextUpdate;

  /// @brief Field kUpdateInterval offset 0xffffffff size 0x4
  static constexpr float_t kUpdateInterval{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____multiplayerController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____playersManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____scoreProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____multiplayerSessionManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____layoutProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____initData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____timeToNextUpdate) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*, "", "MultiplayerOtherPlayersScoreDiffTextManager");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*, "", "MultiplayerOtherPlayersScoreDiffTextManager/<>c");
