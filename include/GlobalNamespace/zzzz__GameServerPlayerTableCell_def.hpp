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
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class __GameServerPlayerTableCell____c__DisplayClass29_0;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace GlobalNamespace {
struct __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35;
}
namespace UnityEngine::UI {
class Image;
}
namespace HMUI {
class ButtonBinder;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace HMUI {
class ButtonSpriteSwapToggle;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace HMUI {
class HoverHint;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayerTableCell;
}
namespace GlobalNamespace {
class __GameServerPlayerTableCell____c__DisplayClass29_0;
}
namespace GlobalNamespace {
struct __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerPlayerTableCell);
MARK_REF_PTR_T(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0);
MARK_VAL_T(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35);
// Type: ::<>c__DisplayClass29_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5423))
// CS Name: ::GameServerPlayerTableCell::<>c__DisplayClass29_0*
class CORDL_TYPE __GameServerPlayerTableCell____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field modifiersList, offset 0x10, size 0x8
  __declspec(property(get = __get_modifiersList, put = __set_modifiersList))::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifiersList;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*& __get_modifiersList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> const& __get_modifiersList() const;

  constexpr void __set_modifiersList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* value);

  static inline ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0* New_ctor();

  /// @brief Method .ctor, addr 0x227a260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SetData>b__0, addr 0x227a514, size 0x78, virtual false, abstract: false, final false
  inline void _SetData_b__0(int32_t id, ::GlobalNamespace::GameplayModifierInfoListItem* listItem);

  // Ctor Parameters [CppParam { name: "", ty: "__GameServerPlayerTableCell____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameServerPlayerTableCell____c__DisplayClass29_0(__GameServerPlayerTableCell____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameServerPlayerTableCell____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameServerPlayerTableCell____c__DisplayClass29_0(__GameServerPlayerTableCell____c__DisplayClass29_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameServerPlayerTableCell____c__DisplayClass29_0();

public:
  /// @brief Field modifiersList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* ___modifiersList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0, ___modifiersList) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SetBeatmapUseButtonEnabledAsync>d__35
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 }),
// TypeDefinitionIndex(TypeDefinitionIndex(16270)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3400))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5424))
// CS Name: ::GameServerPlayerTableCell::<SetBeatmapUseButtonEnabledAsync>d__35
struct CORDL_TYPE __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x227a58c, size 0x438, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x227a9c4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameServerPlayerTableCell*", modifiers: "",
  // def_value: None }, CppParam { name: "getLevelEntitlementTask", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*", modifiers: "", def_value: None }, CppParam { name:
  // "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                ::GlobalNamespace::GameServerPlayerTableCell* __4__this,
                                                                                ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask,
                                                                                ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameServerPlayerTableCell* __4__this;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, getLevelEntitlementTask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, _cancellationToken_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameServerPlayerTableCell
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13502))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5425))
// CS Name: ::GameServerPlayerTableCell*
class CORDL_TYPE GameServerPlayerTableCell : public ::GlobalNamespace::TableCellWithSeparator {
public:
  // Declarations
  using _SetBeatmapUseButtonEnabledAsync_d__35 = ::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35;

  using __c__DisplayClass29_0 = ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0;

  /// @brief Field _playerNameText, offset 0x60, size 0x8
  __declspec(property(get = __get__playerNameText, put = __set__playerNameText))::HMUI::CurvedTextMeshPro* _playerNameText;

  /// @brief Field _localPlayerBackgroundImage, offset 0x68, size 0x8
  __declspec(property(get = __get__localPlayerBackgroundImage, put = __set__localPlayerBackgroundImage))::UnityEngine::UI::Image* _localPlayerBackgroundImage;

  /// @brief Field _suggestedLevelText, offset 0x70, size 0x8
  __declspec(property(get = __get__suggestedLevelText, put = __set__suggestedLevelText))::HMUI::CurvedTextMeshPro* _suggestedLevelText;

  /// @brief Field _suggestedCharacteristicIcon, offset 0x78, size 0x8
  __declspec(property(get = __get__suggestedCharacteristicIcon, put = __set__suggestedCharacteristicIcon))::HMUI::ImageView* _suggestedCharacteristicIcon;

  /// @brief Field _suggestedDifficultyText, offset 0x80, size 0x8
  __declspec(property(get = __get__suggestedDifficultyText, put = __set__suggestedDifficultyText))::TMPro::TextMeshProUGUI* _suggestedDifficultyText;

  /// @brief Field _emptySuggestedLevelText, offset 0x88, size 0x8
  __declspec(property(get = __get__emptySuggestedLevelText, put = __set__emptySuggestedLevelText))::HMUI::CurvedTextMeshPro* _emptySuggestedLevelText;

  /// @brief Field _suggestedModifiersList, offset 0x90, size 0x8
  __declspec(property(get = __get__suggestedModifiersList, put = __set__suggestedModifiersList))::GlobalNamespace::GameplayModifierInfoListItemsList* _suggestedModifiersList;

  /// @brief Field _emptySuggestedModifiersText, offset 0x98, size 0x8
  __declspec(property(get = __get__emptySuggestedModifiersText, put = __set__emptySuggestedModifiersText))::HMUI::CurvedTextMeshPro* _emptySuggestedModifiersText;

  /// @brief Field _mutePlayerButton, offset 0xa0, size 0x8
  __declspec(property(get = __get__mutePlayerButton, put = __set__mutePlayerButton))::UnityEngine::UI::Button* _mutePlayerButton;

  /// @brief Field _kickPlayerButton, offset 0xa8, size 0x8
  __declspec(property(get = __get__kickPlayerButton, put = __set__kickPlayerButton))::UnityEngine::UI::Button* _kickPlayerButton;

  /// @brief Field _useBeatmapButton, offset 0xb0, size 0x8
  __declspec(property(get = __get__useBeatmapButton, put = __set__useBeatmapButton))::UnityEngine::UI::Button* _useBeatmapButton;

  /// @brief Field _useModifiersButton, offset 0xb8, size 0x8
  __declspec(property(get = __get__useModifiersButton, put = __set__useModifiersButton))::UnityEngine::UI::Button* _useModifiersButton;

  /// @brief Field _useBeatmapButtonHoverHint, offset 0xc0, size 0x8
  __declspec(property(get = __get__useBeatmapButtonHoverHint, put = __set__useBeatmapButtonHoverHint))::HMUI::HoverHint* _useBeatmapButtonHoverHint;

  /// @brief Field _muteToggle, offset 0xc8, size 0x8
  __declspec(property(get = __get__muteToggle, put = __set__muteToggle))::HMUI::ButtonSpriteSwapToggle* _muteToggle;

  /// @brief Field _statusImageView, offset 0xd0, size 0x8
  __declspec(property(get = __get__statusImageView, put = __set__statusImageView))::HMUI::ImageView* _statusImageView;

  /// @brief Field _readyIcon, offset 0xd8, size 0x8
  __declspec(property(get = __get__readyIcon, put = __set__readyIcon))::UnityEngine::Sprite* _readyIcon;

  /// @brief Field _spectatingIcon, offset 0xe0, size 0x8
  __declspec(property(get = __get__spectatingIcon, put = __set__spectatingIcon))::UnityEngine::Sprite* _spectatingIcon;

  /// @brief Field _hostIcon, offset 0xe8, size 0x8
  __declspec(property(get = __get__hostIcon, put = __set__hostIcon))::UnityEngine::Sprite* _hostIcon;

  /// @brief Field _gameplayModifiers, offset 0xf0, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiers;

  /// @brief Field kickPlayerEvent, offset 0xf8, size 0x8
  __declspec(property(get = __get_kickPlayerEvent, put = __set_kickPlayerEvent))::System::Action_1<int32_t>* kickPlayerEvent;

  /// @brief Field useBeatmapEvent, offset 0x100, size 0x8
  __declspec(property(get = __get_useBeatmapEvent, put = __set_useBeatmapEvent))::System::Action_1<int32_t>* useBeatmapEvent;

  /// @brief Field useModifiersEvent, offset 0x108, size 0x8
  __declspec(property(get = __get_useModifiersEvent, put = __set_useModifiersEvent))::System::Action_1<int32_t>* useModifiersEvent;

  /// @brief Field _buttonBinder, offset 0x110, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _getLevelEntitlementCancellationTokenSource, offset 0x118, size 0x8
  __declspec(property(get = __get__getLevelEntitlementCancellationTokenSource,
                      put = __set__getLevelEntitlementCancellationTokenSource))::System::Threading::CancellationTokenSource* _getLevelEntitlementCancellationTokenSource;

  constexpr ::HMUI::CurvedTextMeshPro*& __get__playerNameText();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& __get__playerNameText() const;

  constexpr void __set__playerNameText(::HMUI::CurvedTextMeshPro* value);

  constexpr ::UnityEngine::UI::Image*& __get__localPlayerBackgroundImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__localPlayerBackgroundImage() const;

  constexpr void __set__localPlayerBackgroundImage(::UnityEngine::UI::Image* value);

  constexpr ::HMUI::CurvedTextMeshPro*& __get__suggestedLevelText();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& __get__suggestedLevelText() const;

  constexpr void __set__suggestedLevelText(::HMUI::CurvedTextMeshPro* value);

  constexpr ::HMUI::ImageView*& __get__suggestedCharacteristicIcon();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__suggestedCharacteristicIcon() const;

  constexpr void __set__suggestedCharacteristicIcon(::HMUI::ImageView* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__suggestedDifficultyText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__suggestedDifficultyText() const;

  constexpr void __set__suggestedDifficultyText(::TMPro::TextMeshProUGUI* value);

  constexpr ::HMUI::CurvedTextMeshPro*& __get__emptySuggestedLevelText();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& __get__emptySuggestedLevelText() const;

  constexpr void __set__emptySuggestedLevelText(::HMUI::CurvedTextMeshPro* value);

  constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList*& __get__suggestedModifiersList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierInfoListItemsList*> const& __get__suggestedModifiersList() const;

  constexpr void __set__suggestedModifiersList(::GlobalNamespace::GameplayModifierInfoListItemsList* value);

  constexpr ::HMUI::CurvedTextMeshPro*& __get__emptySuggestedModifiersText();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& __get__emptySuggestedModifiersText() const;

  constexpr void __set__emptySuggestedModifiersText(::HMUI::CurvedTextMeshPro* value);

  constexpr ::UnityEngine::UI::Button*& __get__mutePlayerButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__mutePlayerButton() const;

  constexpr void __set__mutePlayerButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__kickPlayerButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__kickPlayerButton() const;

  constexpr void __set__kickPlayerButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__useBeatmapButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__useBeatmapButton() const;

  constexpr void __set__useBeatmapButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__useModifiersButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__useModifiersButton() const;

  constexpr void __set__useModifiersButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::HoverHint*& __get__useBeatmapButtonHoverHint();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& __get__useBeatmapButtonHoverHint() const;

  constexpr void __set__useBeatmapButtonHoverHint(::HMUI::HoverHint* value);

  constexpr ::HMUI::ButtonSpriteSwapToggle*& __get__muteToggle();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonSpriteSwapToggle*> const& __get__muteToggle() const;

  constexpr void __set__muteToggle(::HMUI::ButtonSpriteSwapToggle* value);

  constexpr ::HMUI::ImageView*& __get__statusImageView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__statusImageView() const;

  constexpr void __set__statusImageView(::HMUI::ImageView* value);

  constexpr ::UnityEngine::Sprite*& __get__readyIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__readyIcon() const;

  constexpr void __set__readyIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__spectatingIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__spectatingIcon() const;

  constexpr void __set__spectatingIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__hostIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__hostIcon() const;

  constexpr void __set__hostIcon(::UnityEngine::Sprite* value);

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::System::Action_1<int32_t>*& __get_kickPlayerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_kickPlayerEvent() const;

  constexpr void __set_kickPlayerEvent(::System::Action_1<int32_t>* value);

  constexpr ::System::Action_1<int32_t>*& __get_useBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_useBeatmapEvent() const;

  constexpr void __set_useBeatmapEvent(::System::Action_1<int32_t>* value);

  constexpr ::System::Action_1<int32_t>*& __get_useModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_useModifiersEvent() const;

  constexpr void __set_useModifiersEvent(::System::Action_1<int32_t>* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__getLevelEntitlementCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__getLevelEntitlementCancellationTokenSource() const;

  constexpr void __set__getLevelEntitlementCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  /// @brief Method add_kickPlayerEvent, addr 0x227930c, size 0xb0, virtual false, abstract: false, final false
  inline void add_kickPlayerEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_kickPlayerEvent, addr 0x22793bc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_kickPlayerEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_useBeatmapEvent, addr 0x227946c, size 0xb4, virtual false, abstract: false, final false
  inline void add_useBeatmapEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_useBeatmapEvent, addr 0x2279520, size 0xb4, virtual false, abstract: false, final false
  inline void remove_useBeatmapEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_useModifiersEvent, addr 0x22795d4, size 0xb4, virtual false, abstract: false, final false
  inline void add_useModifiersEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_useModifiersEvent, addr 0x2279688, size 0xb4, virtual false, abstract: false, final false
  inline void remove_useModifiersEvent(::System::Action_1<int32_t>* value);

  /// @brief Method SetData, addr 0x227973c, size 0xb24, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::ILobbyPlayerData* playerData, bool hasKickPermissions, bool allowSelection,
                      ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask);

  /// @brief Method Awake, addr 0x227a308, size 0x144, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleKickPlayerButtonPressed, addr 0x227a44c, size 0x20, virtual false, abstract: false, final false
  inline void HandleKickPlayerButtonPressed();

  /// @brief Method HandleUseBeatmapButtonPressed, addr 0x227a46c, size 0x20, virtual false, abstract: false, final false
  inline void HandleUseBeatmapButtonPressed();

  /// @brief Method HandleUseModifiersButtonPressed, addr 0x227a48c, size 0x20, virtual false, abstract: false, final false
  inline void HandleUseModifiersButtonPressed();

  /// @brief Method SetBeatmapUseButtonEnabledAsync, addr 0x227a268, size 0xa0, virtual false, abstract: false, final false
  inline void SetBeatmapUseButtonEnabledAsync(::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask);

  static inline ::GlobalNamespace::GameServerPlayerTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x227a4ac, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerPlayerTableCell(GameServerPlayerTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerPlayerTableCell(GameServerPlayerTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerPlayerTableCell();

public:
  /// @brief Field _playerNameText, offset: 0x60, size: 0x8, def value: None
  ::HMUI::CurvedTextMeshPro* ____playerNameText;

  /// @brief Field _localPlayerBackgroundImage, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____localPlayerBackgroundImage;

  /// @brief Field _suggestedLevelText, offset: 0x70, size: 0x8, def value: None
  ::HMUI::CurvedTextMeshPro* ____suggestedLevelText;

  /// @brief Field _suggestedCharacteristicIcon, offset: 0x78, size: 0x8, def value: None
  ::HMUI::ImageView* ____suggestedCharacteristicIcon;

  /// @brief Field _suggestedDifficultyText, offset: 0x80, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____suggestedDifficultyText;

  /// @brief Field _emptySuggestedLevelText, offset: 0x88, size: 0x8, def value: None
  ::HMUI::CurvedTextMeshPro* ____emptySuggestedLevelText;

  /// @brief Field _suggestedModifiersList, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierInfoListItemsList* ____suggestedModifiersList;

  /// @brief Field _emptySuggestedModifiersText, offset: 0x98, size: 0x8, def value: None
  ::HMUI::CurvedTextMeshPro* ____emptySuggestedModifiersText;

  /// @brief Field _mutePlayerButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____mutePlayerButton;

  /// @brief Field _kickPlayerButton, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____kickPlayerButton;

  /// @brief Field _useBeatmapButton, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____useBeatmapButton;

  /// @brief Field _useModifiersButton, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____useModifiersButton;

  /// @brief Field _useBeatmapButtonHoverHint, offset: 0xc0, size: 0x8, def value: None
  ::HMUI::HoverHint* ____useBeatmapButtonHoverHint;

  /// @brief Field _muteToggle, offset: 0xc8, size: 0x8, def value: None
  ::HMUI::ButtonSpriteSwapToggle* ____muteToggle;

  /// @brief Field _statusImageView, offset: 0xd0, size: 0x8, def value: None
  ::HMUI::ImageView* ____statusImageView;

  /// @brief Field _readyIcon, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____readyIcon;

  /// @brief Field _spectatingIcon, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____spectatingIcon;

  /// @brief Field _hostIcon, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____hostIcon;

  /// @brief Field _gameplayModifiers, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiers;

  /// @brief Field kickPlayerEvent, offset: 0xf8, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___kickPlayerEvent;

  /// @brief Field useBeatmapEvent, offset: 0x100, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___useBeatmapEvent;

  /// @brief Field useModifiersEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___useModifiersEvent;

  /// @brief Field _buttonBinder, offset: 0x110, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _getLevelEntitlementCancellationTokenSource, offset: 0x118, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____getLevelEntitlementCancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerPlayerTableCell, 0x120>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ___kickPlayerEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ___useBeatmapEvent) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ___useModifiersEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____buttonBinder) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableCell, ____getLevelEntitlementCancellationTokenSource) == 0x118, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerPlayerTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerPlayerTableCell*, "", "GameServerPlayerTableCell");
NEED_NO_BOX(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0*, "", "GameServerPlayerTableCell/<>c__DisplayClass29_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, "", "GameServerPlayerTableCell/<SetBeatmapUseButtonEnabledAsync>d__35");
