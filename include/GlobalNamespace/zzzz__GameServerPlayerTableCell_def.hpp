#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameServerPlayerTableCell)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
struct __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36;
}
namespace GlobalNamespace {
class __GameServerPlayerTableCell____c__DisplayClass30_0;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class ButtonSpriteSwapToggle;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace HMUI {
class HoverHint;
}
namespace HMUI {
class ImageView;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayerTableCell;
}
namespace GlobalNamespace {
class __GameServerPlayerTableCell____c__DisplayClass30_0;
}
namespace GlobalNamespace {
struct __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerPlayerTableCell);
MARK_REF_PTR_T(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass30_0);
MARK_VAL_T(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36);
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameServerPlayerTableCell::<>c__DisplayClass30_0*
class CORDL_TYPE __GameServerPlayerTableCell____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field modifiersList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_modifiersList,
                      put = __cordl_internal_set_modifiersList))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifiersList;

  static inline ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass30_0* New_ctor();

  /// @brief Method <SetData>b__0, addr 0x24a3fe8, size 0x78, virtual false, abstract: false, final false
  inline void _SetData_b__0(int32_t id, ::GlobalNamespace::GameplayModifierInfoListItem* listItem);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*& __cordl_internal_get_modifiersList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> const& __cordl_internal_get_modifiersList() const;

  constexpr void __cordl_internal_set_modifiersList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value);

  /// @brief Method .ctor, addr 0x24a3d34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameServerPlayerTableCell____c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameServerPlayerTableCell____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameServerPlayerTableCell____c__DisplayClass30_0(__GameServerPlayerTableCell____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameServerPlayerTableCell____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameServerPlayerTableCell____c__DisplayClass30_0(__GameServerPlayerTableCell____c__DisplayClass30_0 const&) = delete;

  /// @brief Field modifiersList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* ___modifiersList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass30_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass30_0, ___modifiersList) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SetBeatmapUseButtonEnabledAsync>d__36
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameServerPlayerTableCell::<SetBeatmapUseButtonEnabledAsync>d__36
struct CORDL_TYPE __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x24a4060, size 0x438, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x24a4498, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GameServerPlayerTableCell>",
  // modifiers: "", def_value: None }, CppParam { name: "getLevelEntitlementTask", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*", modifiers: "", def_value: None },
  // CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> __4__this,
                                                                                ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask,
                                                                                ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> __4__this;

  /// @brief Field getLevelEntitlementTask, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask;

  /// @brief Field <cancellationToken>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36, getLevelEntitlementTask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36, _cancellationToken_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameServerPlayerTableCell
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameServerPlayerTableCell*
class CORDL_TYPE GameServerPlayerTableCell : public ::GlobalNamespace::TableCellWithSeparator {
public:
  // Declarations
  using _SetBeatmapUseButtonEnabledAsync_d__36 = ::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36;

  using __c__DisplayClass30_0 = ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass30_0;

  /// @brief Field _beatmapLevelsModel, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _buttonBinder, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _emptySuggestedLevelText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__emptySuggestedLevelText, put = __cordl_internal_set__emptySuggestedLevelText))::UnityW<::HMUI::CurvedTextMeshPro> _emptySuggestedLevelText;

  /// @brief Field _emptySuggestedModifiersText, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__emptySuggestedModifiersText,
                      put = __cordl_internal_set__emptySuggestedModifiersText))::UnityW<::HMUI::CurvedTextMeshPro> _emptySuggestedModifiersText;

  /// @brief Field _gameplayModifiers, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers))::UnityW<::GlobalNamespace::GameplayModifiersModelSO> _gameplayModifiers;

  /// @brief Field _getLevelEntitlementCancellationTokenSource, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__getLevelEntitlementCancellationTokenSource,
                      put = __cordl_internal_set__getLevelEntitlementCancellationTokenSource))::System::Threading::CancellationTokenSource* _getLevelEntitlementCancellationTokenSource;

  /// @brief Field _hostIcon, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__hostIcon, put = __cordl_internal_set__hostIcon))::UnityW<::UnityEngine::Sprite> _hostIcon;

  /// @brief Field _kickPlayerButton, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__kickPlayerButton, put = __cordl_internal_set__kickPlayerButton))::UnityW<::UnityEngine::UI::Button> _kickPlayerButton;

  /// @brief Field _localPlayerBackgroundImage, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerBackgroundImage, put = __cordl_internal_set__localPlayerBackgroundImage))::UnityW<::UnityEngine::UI::Image> _localPlayerBackgroundImage;

  /// @brief Field _mutePlayerButton, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__mutePlayerButton, put = __cordl_internal_set__mutePlayerButton))::UnityW<::UnityEngine::UI::Button> _mutePlayerButton;

  /// @brief Field _muteToggle, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__muteToggle, put = __cordl_internal_set__muteToggle))::UnityW<::HMUI::ButtonSpriteSwapToggle> _muteToggle;

  /// @brief Field _playerNameText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__playerNameText, put = __cordl_internal_set__playerNameText))::UnityW<::HMUI::CurvedTextMeshPro> _playerNameText;

  /// @brief Field _readyIcon, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__readyIcon, put = __cordl_internal_set__readyIcon))::UnityW<::UnityEngine::Sprite> _readyIcon;

  /// @brief Field _spectatingIcon, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatingIcon, put = __cordl_internal_set__spectatingIcon))::UnityW<::UnityEngine::Sprite> _spectatingIcon;

  /// @brief Field _statusImageView, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__statusImageView, put = __cordl_internal_set__statusImageView))::UnityW<::HMUI::ImageView> _statusImageView;

  /// @brief Field _suggestedCharacteristicIcon, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__suggestedCharacteristicIcon, put = __cordl_internal_set__suggestedCharacteristicIcon))::UnityW<::HMUI::ImageView> _suggestedCharacteristicIcon;

  /// @brief Field _suggestedDifficultyText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__suggestedDifficultyText, put = __cordl_internal_set__suggestedDifficultyText))::UnityW<::TMPro::TextMeshProUGUI> _suggestedDifficultyText;

  /// @brief Field _suggestedLevelText, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__suggestedLevelText, put = __cordl_internal_set__suggestedLevelText))::UnityW<::HMUI::CurvedTextMeshPro> _suggestedLevelText;

  /// @brief Field _suggestedModifiersList, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__suggestedModifiersList,
                      put = __cordl_internal_set__suggestedModifiersList))::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> _suggestedModifiersList;

  /// @brief Field _useBeatmapButton, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__useBeatmapButton, put = __cordl_internal_set__useBeatmapButton))::UnityW<::UnityEngine::UI::Button> _useBeatmapButton;

  /// @brief Field _useBeatmapButtonHoverHint, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__useBeatmapButtonHoverHint, put = __cordl_internal_set__useBeatmapButtonHoverHint))::UnityW<::HMUI::HoverHint> _useBeatmapButtonHoverHint;

  /// @brief Field _useModifiersButton, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__useModifiersButton, put = __cordl_internal_set__useModifiersButton))::UnityW<::UnityEngine::UI::Button> _useModifiersButton;

  /// @brief Field kickPlayerEvent, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_kickPlayerEvent, put = __cordl_internal_set_kickPlayerEvent))::System::Action_1<int32_t>* kickPlayerEvent;

  /// @brief Field useBeatmapEvent, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_useBeatmapEvent, put = __cordl_internal_set_useBeatmapEvent))::System::Action_1<int32_t>* useBeatmapEvent;

  /// @brief Field useModifiersEvent, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_useModifiersEvent, put = __cordl_internal_set_useModifiersEvent))::System::Action_1<int32_t>* useModifiersEvent;

  /// @brief Method Awake, addr 0x24a3ddc, size 0x144, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleKickPlayerButtonPressed, addr 0x24a3f20, size 0x20, virtual false, abstract: false, final false
  inline void HandleKickPlayerButtonPressed();

  /// @brief Method HandleUseBeatmapButtonPressed, addr 0x24a3f40, size 0x20, virtual false, abstract: false, final false
  inline void HandleUseBeatmapButtonPressed();

  /// @brief Method HandleUseModifiersButtonPressed, addr 0x24a3f60, size 0x20, virtual false, abstract: false, final false
  inline void HandleUseModifiersButtonPressed();

  static inline ::GlobalNamespace::GameServerPlayerTableCell* New_ctor();

  /// @brief Method SetBeatmapUseButtonEnabledAsync, addr 0x24a3d3c, size 0xa0, virtual false, abstract: false, final false
  inline void SetBeatmapUseButtonEnabledAsync(::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask);

  /// @brief Method SetData, addr 0x24a3258, size 0xadc, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::ILobbyPlayerData* playerData, bool hasKickPermissions, bool allowSelection,
                      ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__emptySuggestedLevelText() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__emptySuggestedLevelText();

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__emptySuggestedModifiersText() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__emptySuggestedModifiersText();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiers();

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__getLevelEntitlementCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__getLevelEntitlementCancellationTokenSource() const;

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__hostIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__hostIcon();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__kickPlayerButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__kickPlayerButton();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__localPlayerBackgroundImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__localPlayerBackgroundImage();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__mutePlayerButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__mutePlayerButton();

  constexpr ::UnityW<::HMUI::ButtonSpriteSwapToggle> const& __cordl_internal_get__muteToggle() const;

  constexpr ::UnityW<::HMUI::ButtonSpriteSwapToggle>& __cordl_internal_get__muteToggle();

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__playerNameText() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__playerNameText();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__readyIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__readyIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__spectatingIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__spectatingIcon();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__statusImageView() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__statusImageView();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__suggestedCharacteristicIcon() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__suggestedCharacteristicIcon();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__suggestedDifficultyText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__suggestedDifficultyText();

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__suggestedLevelText() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__suggestedLevelText();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> const& __cordl_internal_get__suggestedModifiersList() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList>& __cordl_internal_get__suggestedModifiersList();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__useBeatmapButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__useBeatmapButton();

  constexpr ::UnityW<::HMUI::HoverHint> const& __cordl_internal_get__useBeatmapButtonHoverHint() const;

  constexpr ::UnityW<::HMUI::HoverHint>& __cordl_internal_get__useBeatmapButtonHoverHint();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__useModifiersButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__useModifiersButton();

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_kickPlayerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_kickPlayerEvent() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_useBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_useBeatmapEvent() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_useModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_useModifiersEvent() const;

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__emptySuggestedLevelText(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr void __cordl_internal_set__emptySuggestedModifiersText(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr void __cordl_internal_set__gameplayModifiers(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__getLevelEntitlementCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__hostIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__kickPlayerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__localPlayerBackgroundImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__mutePlayerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__muteToggle(::UnityW<::HMUI::ButtonSpriteSwapToggle> value);

  constexpr void __cordl_internal_set__playerNameText(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr void __cordl_internal_set__readyIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__spectatingIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__statusImageView(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__suggestedCharacteristicIcon(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__suggestedDifficultyText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__suggestedLevelText(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr void __cordl_internal_set__suggestedModifiersList(::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> value);

  constexpr void __cordl_internal_set__useBeatmapButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__useBeatmapButtonHoverHint(::UnityW<::HMUI::HoverHint> value);

  constexpr void __cordl_internal_set__useModifiersButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_kickPlayerEvent(::System::Action_1<int32_t>* value);

  constexpr void __cordl_internal_set_useBeatmapEvent(::System::Action_1<int32_t>* value);

  constexpr void __cordl_internal_set_useModifiersEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x24a3f80, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_kickPlayerEvent, addr 0x24a2e20, size 0xb4, virtual false, abstract: false, final false
  inline void add_kickPlayerEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_useBeatmapEvent, addr 0x24a2f88, size 0xb4, virtual false, abstract: false, final false
  inline void add_useBeatmapEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_useModifiersEvent, addr 0x24a30f0, size 0xb4, virtual false, abstract: false, final false
  inline void add_useModifiersEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_kickPlayerEvent, addr 0x24a2ed4, size 0xb4, virtual false, abstract: false, final false
  inline void remove_kickPlayerEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_useBeatmapEvent, addr 0x24a303c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_useBeatmapEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_useModifiersEvent, addr 0x24a31a4, size 0xb4, virtual false, abstract: false, final false
  inline void remove_useModifiersEvent(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerPlayerTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerPlayerTableCell(GameServerPlayerTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerPlayerTableCell(GameServerPlayerTableCell const&) = delete;

  /// @brief Field _playerNameText, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____playerNameText;

  /// @brief Field _localPlayerBackgroundImage, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____localPlayerBackgroundImage;

  /// @brief Field _suggestedLevelText, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____suggestedLevelText;

  /// @brief Field _suggestedCharacteristicIcon, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____suggestedCharacteristicIcon;

  /// @brief Field _suggestedDifficultyText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____suggestedDifficultyText;

  /// @brief Field _emptySuggestedLevelText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____emptySuggestedLevelText;

  /// @brief Field _suggestedModifiersList, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> ____suggestedModifiersList;

  /// @brief Field _emptySuggestedModifiersText, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____emptySuggestedModifiersText;

  /// @brief Field _mutePlayerButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____mutePlayerButton;

  /// @brief Field _kickPlayerButton, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____kickPlayerButton;

  /// @brief Field _useBeatmapButton, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____useBeatmapButton;

  /// @brief Field _useModifiersButton, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____useModifiersButton;

  /// @brief Field _useBeatmapButtonHoverHint, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHint> ____useBeatmapButtonHoverHint;

  /// @brief Field _muteToggle, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::HMUI::ButtonSpriteSwapToggle> ____muteToggle;

  /// @brief Field _statusImageView, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____statusImageView;

  /// @brief Field _readyIcon, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____readyIcon;

  /// @brief Field _spectatingIcon, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____spectatingIcon;

  /// @brief Field _hostIcon, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____hostIcon;

  /// @brief Field _gameplayModifiers, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiers;

  /// @brief Field _beatmapLevelsModel, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field kickPlayerEvent, offset: 0x100, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___kickPlayerEvent;

  /// @brief Field useBeatmapEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___useBeatmapEvent;

  /// @brief Field useModifiersEvent, offset: 0x110, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___useModifiersEvent;

  /// @brief Field _buttonBinder, offset: 0x118, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _getLevelEntitlementCancellationTokenSource, offset: 0x120, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____getLevelEntitlementCancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerPlayerTableCell, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____playerNameText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____localPlayerBackgroundImage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____suggestedLevelText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____suggestedCharacteristicIcon) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____suggestedDifficultyText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____emptySuggestedLevelText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____suggestedModifiersList) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____emptySuggestedModifiersText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____mutePlayerButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____kickPlayerButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____useBeatmapButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____useModifiersButton) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____useBeatmapButtonHoverHint) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____muteToggle) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____statusImageView) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____readyIcon) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____spectatingIcon) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____hostIcon) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____gameplayModifiers) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____beatmapLevelsModel) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ___kickPlayerEvent) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ___useBeatmapEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ___useModifiersEvent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____buttonBinder) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____getLevelEntitlementCancellationTokenSource) == 0x120, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerPlayerTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerPlayerTableCell*, "", "GameServerPlayerTableCell");
NEED_NO_BOX(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass30_0*, "", "GameServerPlayerTableCell/<>c__DisplayClass30_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__36, "", "GameServerPlayerTableCell/<SetBeatmapUseButtonEnabledAsync>d__36");
