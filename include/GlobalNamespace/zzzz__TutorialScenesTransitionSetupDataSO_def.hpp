#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
struct __TutorialScenesTransitionSetupDataSO__TutorialEndStateType;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __TutorialScenesTransitionSetupDataSO__TutorialEndStateType;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType);
MARK_REF_PTR_T(::GlobalNamespace::TutorialScenesTransitionSetupDataSO);
// Type: ::TutorialEndStateType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TutorialScenesTransitionSetupDataSO::TutorialEndStateType
struct CORDL_TYPE __TutorialScenesTransitionSetupDataSO__TutorialEndStateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TutorialScenesTransitionSetupDataSO__TutorialEndStateType_Unwrapped
  enum struct ____TutorialScenesTransitionSetupDataSO__TutorialEndStateType_Unwrapped : int32_t {
    __E_Completed = static_cast<int32_t>(0x0),
    __E_ReturnToMenu = static_cast<int32_t>(0x1),
    __E_Restart = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TutorialScenesTransitionSetupDataSO__TutorialEndStateType_Unwrapped() const noexcept {
    return static_cast<____TutorialScenesTransitionSetupDataSO__TutorialEndStateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialScenesTransitionSetupDataSO__TutorialEndStateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TutorialScenesTransitionSetupDataSO__TutorialEndStateType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Completed value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const Completed;

  /// @brief Field Restart value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const Restart;

  /// @brief Field ReturnToMenu value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const ReturnToMenu;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialScenesTransitionSetupDataSO
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialScenesTransitionSetupDataSO*
class CORDL_TYPE TutorialScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  using TutorialEndStateType = ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType;

  /// @brief Field _environmentInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentInfo,
                      put = __cordl_internal_set__environmentInfo))::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _environmentInfo;

  /// @brief Field _gameCoreSceneInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameCoreSceneInfo, put = __cordl_internal_set__gameCoreSceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _gameCoreSceneInfo;

  /// @brief Field _loadedEnvironmentInfo, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__loadedEnvironmentInfo, put = __cordl_internal_set__loadedEnvironmentInfo))::UnityW<::GlobalNamespace::EnvironmentInfoSO> _loadedEnvironmentInfo;

  /// @brief Field _loadedTutorialSceneInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__loadedTutorialSceneInfo, put = __cordl_internal_set__loadedTutorialSceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _loadedTutorialSceneInfo;

  /// @brief Field <playerSpecificSettings>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings_k__BackingField,
                      put = __cordl_internal_set__playerSpecificSettings_k__BackingField))::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings_k__BackingField;

  /// @brief Field _tutorialSceneInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialSceneInfo,
                      put = __cordl_internal_set__tutorialSceneInfo))::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::SceneInfo>>* _tutorialSceneInfo;

  /// @brief Field didFinishEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent))::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>,
                                                                                    ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>* didFinishEvent;

  __declspec(property(get = get_playerSpecificSettings, put = set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Method Finish, addr 0x26d6050, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState);

  /// @brief Method Init, addr 0x26d079c, size 0x3e0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  static inline ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* New_ctor();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
  __cordl_internal_get__environmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__gameCoreSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__gameCoreSceneInfo();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get__loadedEnvironmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get__loadedEnvironmentInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__loadedTutorialSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__loadedTutorialSceneInfo();

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__playerSpecificSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get__playerSpecificSettings_k__BackingField() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::SceneInfo>>*& __cordl_internal_get__tutorialSceneInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::SceneInfo>>*> const& __cordl_internal_get__tutorialSceneInfo() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*&
  __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*> const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__environmentInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set__gameCoreSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__loadedEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set__loadedTutorialSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__playerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__tutorialSceneInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::SceneInfo>>* value);

  constexpr void __cordl_internal_set_didFinishEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>* value);

  /// @brief Method .ctor, addr 0x26d6078, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x26d45e8, size 0xb0, virtual false, abstract: false, final false
  inline void
  add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>* value);

  /// @brief Method get_playerSpecificSettings, addr 0x26d6040, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();

  /// @brief Method remove_didFinishEvent, addr 0x26d33f8, size 0xb0, virtual false, abstract: false, final false
  inline void
  remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>* value);

  /// @brief Method set_playerSpecificSettings, addr 0x26d6048, size 0x8, virtual false, abstract: false, final false
  inline void set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialScenesTransitionSetupDataSO(TutorialScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialScenesTransitionSetupDataSO(TutorialScenesTransitionSetupDataSO const&) = delete;

  /// @brief Field _environmentInfo, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____environmentInfo;

  /// @brief Field _tutorialSceneInfo, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::SceneInfo>>* ____tutorialSceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____gameCoreSceneInfo;

  /// @brief Field didFinishEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>* ___didFinishEvent;

  /// @brief Field <playerSpecificSettings>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings_k__BackingField;

  /// @brief Field _loadedEnvironmentInfo, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ____loadedEnvironmentInfo;

  /// @brief Field _loadedTutorialSceneInfo, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____loadedTutorialSceneInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO, ____environmentInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO, ____tutorialSceneInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO, ____gameCoreSceneInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO, ___didFinishEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO, ____playerSpecificSettings_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO, ____loadedEnvironmentInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO, ____loadedTutorialSceneInfo) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType, "", "TutorialScenesTransitionSetupDataSO/TutorialEndStateType");
NEED_NO_BOX(::GlobalNamespace::TutorialScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*, "", "TutorialScenesTransitionSetupDataSO");
