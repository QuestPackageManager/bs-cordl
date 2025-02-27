#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberManager)
namespace GlobalNamespace {
class SaberManager_InitData;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class Saber;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class SaberManager_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberManager);
MARK_REF_PTR_T(::GlobalNamespace::SaberManager_InitData);
// Dependencies SaberType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberManager/InitData
class CORDL_TYPE SaberManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field oneSaberMode, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_oneSaberMode, put = __cordl_internal_set_oneSaberMode)) bool oneSaberMode;

  /// @brief Field oneSaberType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_oneSaberType, put = __cordl_internal_set_oneSaberType)) ::GlobalNamespace::SaberType oneSaberType;

  static inline ::GlobalNamespace::SaberManager_InitData* New_ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType);

  constexpr bool const& __cordl_internal_get_oneSaberMode() const;

  constexpr bool& __cordl_internal_get_oneSaberMode();

  constexpr ::GlobalNamespace::SaberType const& __cordl_internal_get_oneSaberType() const;

  constexpr ::GlobalNamespace::SaberType& __cordl_internal_get_oneSaberType();

  constexpr void __cordl_internal_set_oneSaberMode(bool value);

  constexpr void __cordl_internal_set_oneSaberType(::GlobalNamespace::SaberType value);

  /// @brief Method .ctor, addr 0x3bf9120, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberManager_InitData(SaberManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberManager_InitData(SaberManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4659 };

  /// @brief Field oneSaberMode, offset: 0x10, size: 0x1, def value: None
  bool ___oneSaberMode;

  /// @brief Field oneSaberType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ___oneSaberType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberManager_InitData, ___oneSaberMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager_InitData, ___oneSaberType) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberManager_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberManager
class CORDL_TYPE SaberManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::SaberManager_InitData;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::SaberManager_InitData* _initData;

  /// @brief Field _leftSaber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftSaber, put = __cordl_internal_set__leftSaber)) ::UnityW<::GlobalNamespace::Saber> _leftSaber;

  /// @brief Field _rightSaber, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rightSaber, put = __cordl_internal_set__rightSaber)) ::UnityW<::GlobalNamespace::Saber> _rightSaber;

  /// @brief Field _started, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__started, put = __cordl_internal_set__started)) bool _started;

  /// @brief Field didUpdateSaberPositionsEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_didUpdateSaberPositionsEvent,
                      put =
                          __cordl_internal_set_didUpdateSaberPositionsEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* didUpdateSaberPositionsEvent;

  __declspec(property(put = set_disableSabers)) bool disableSabers;

  __declspec(property(get = get_leftSaber)) ::UnityW<::GlobalNamespace::Saber> leftSaber;

  __declspec(property(get = get_rightSaber)) ::UnityW<::GlobalNamespace::Saber> rightSaber;

  static inline ::GlobalNamespace::SaberManager* New_ctor();

  /// @brief Method OnDisable, addr 0x3bf9020, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3bf9024, size 0x10, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshSabers, addr 0x3bf8efc, size 0x124, virtual false, abstract: false, final false
  inline void RefreshSabers();

  /// @brief Method SaberForType, addr 0x3bf90c8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Saber> SaberForType(::GlobalNamespace::SaberType saberType);

  /// @brief Method Start, addr 0x3bf8ee0, size 0x1c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3bf9034, size 0x94, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::SaberManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::SaberManager_InitData*& __cordl_internal_get__initData();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__leftSaber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__leftSaber();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__rightSaber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__rightSaber();

  constexpr bool const& __cordl_internal_get__started() const;

  constexpr bool& __cordl_internal_get__started();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* const& __cordl_internal_get_didUpdateSaberPositionsEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*& __cordl_internal_get_didUpdateSaberPositionsEvent();

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::SaberManager_InitData* value);

  constexpr void __cordl_internal_set__leftSaber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__rightSaber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__started(bool value);

  constexpr void __cordl_internal_set_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value);

  /// @brief Method .ctor, addr 0x3bf9118, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didUpdateSaberPositionsEvent, addr 0x3bf7534, size 0xb0, virtual false, abstract: false, final false
  inline void add_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value);

  /// @brief Method get_leftSaber, addr 0x3bf8ec0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Saber> get_leftSaber();

  /// @brief Method get_rightSaber, addr 0x3bf8ec8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Saber> get_rightSaber();

  /// @brief Method remove_didUpdateSaberPositionsEvent, addr 0x3bf7670, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value);

  /// @brief Method set_disableSabers, addr 0x3bf8ed0, size 0x10, virtual false, abstract: false, final false
  inline void set_disableSabers(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberManager(SaberManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberManager(SaberManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4660 };

  /// @brief Field _leftSaber, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____leftSaber;

  /// @brief Field _rightSaber, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____rightSaber;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager_InitData* ____initData;

  /// @brief Field _started, offset: 0x38, size: 0x1, def value: None
  bool ____started;

  /// @brief Field didUpdateSaberPositionsEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* ___didUpdateSaberPositionsEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberManager, ____leftSaber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager, ____rightSaber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager, ____initData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager, ____started) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager, ___didUpdateSaberPositionsEvent) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberManager, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberManager*, "", "SaberManager");
NEED_NO_BOX(::GlobalNamespace::SaberManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberManager_InitData*, "", "SaberManager/InitData");
