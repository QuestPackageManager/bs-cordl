#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelListTableCell)
namespace GlobalNamespace {
struct __LevelListTableCell___SetDataFromLevelAsync_d__19;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __LevelListTableCell___RefreshAvailabilityAsync_d__24;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace UnityEngine::UI {
class Image;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace UnityEngine {
class GameObject;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelListTableCell;
}
namespace GlobalNamespace {
struct __LevelListTableCell___RefreshAvailabilityAsync_d__24;
}
namespace GlobalNamespace {
struct __LevelListTableCell___SetDataFromLevelAsync_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelListTableCell);
MARK_VAL_T(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24);
MARK_VAL_T(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19);
// Type: ::<SetDataFromLevelAsync>d__19
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 777 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(10291))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5428))
// CS Name: ::LevelListTableCell::<SetDataFromLevelAsync>d__19
struct CORDL_TYPE __LevelListTableCell___SetDataFromLevelAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x227aee4, size 0xa50, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x227b934, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelListTableCell*", modifiers: "",
  // def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "isFavorite", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "isPromoted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isUpdated", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
  constexpr __LevelListTableCell___SetDataFromLevelAsync_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                               ::GlobalNamespace::LevelListTableCell* __4__this, ::GlobalNamespace::IPreviewBeatmapLevel* level, bool isFavorite, bool isPromoted,
                                                               bool isUpdated, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelListTableCell___SetDataFromLevelAsync_d__19();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelListTableCell* __4__this;

  /// @brief Field level, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* level;

  /// @brief Field isFavorite, offset: 0x38, size: 0x1, def value: None
  bool isFavorite;

  /// @brief Field isPromoted, offset: 0x39, size: 0x1, def value: None
  bool isPromoted;

  /// @brief Field isUpdated, offset: 0x3a, size: 0x1, def value: None
  bool isUpdated;

  /// @brief Field <cancellationToken>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, level) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, isFavorite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, isPromoted) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, isUpdated) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, _cancellationToken_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RefreshAvailabilityAsync>d__24
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 }), TypeDefinitionIndex(TypeDefinitionIndex(16270)),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5429))
// CS Name: ::LevelListTableCell::<RefreshAvailabilityAsync>d__24
struct CORDL_TYPE __LevelListTableCell___RefreshAvailabilityAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x227b940, size 0x46c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x227bdac, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelListTableCell*", modifiers: "",
  // def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "contentModel", ty: "::GlobalNamespace::IAdditionalContentModel*", modifiers:
  // "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __LevelListTableCell___RefreshAvailabilityAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                  ::GlobalNamespace::LevelListTableCell* __4__this, ::StringW levelID, ::GlobalNamespace::IAdditionalContentModel* contentModel,
                                                                  ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelListTableCell___RefreshAvailabilityAsync_d__24();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelListTableCell* __4__this;

  /// @brief Field levelID, offset: 0x30, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field contentModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* contentModel;

  /// @brief Field <cancellationToken>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, levelID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, contentModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, _cancellationToken_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelListTableCell
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5430))
// CS Name: ::LevelListTableCell*
class CORDL_TYPE LevelListTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  using _RefreshAvailabilityAsync_d__24 = ::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24;

  using _SetDataFromLevelAsync_d__19 = ::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19;

  /// @brief Field _backgroundImage, offset 0x58, size 0x8
  __declspec(property(get = __get__backgroundImage, put = __set__backgroundImage))::UnityEngine::UI::Image* _backgroundImage;

  /// @brief Field _canvasGroup, offset 0x60, size 0x8
  __declspec(property(get = __get__canvasGroup, put = __set__canvasGroup))::UnityEngine::CanvasGroup* _canvasGroup;

  /// @brief Field _coverImage, offset 0x68, size 0x8
  __declspec(property(get = __get__coverImage, put = __set__coverImage))::UnityEngine::UI::Image* _coverImage;

  /// @brief Field _songNameText, offset 0x70, size 0x8
  __declspec(property(get = __get__songNameText, put = __set__songNameText))::TMPro::TextMeshProUGUI* _songNameText;

  /// @brief Field _songAuthorText, offset 0x78, size 0x8
  __declspec(property(get = __get__songAuthorText, put = __set__songAuthorText))::TMPro::TextMeshProUGUI* _songAuthorText;

  /// @brief Field _favoritesBadgeImage, offset 0x80, size 0x8
  __declspec(property(get = __get__favoritesBadgeImage, put = __set__favoritesBadgeImage))::UnityEngine::UI::Image* _favoritesBadgeImage;

  /// @brief Field _songDurationText, offset 0x88, size 0x8
  __declspec(property(get = __get__songDurationText, put = __set__songDurationText))::TMPro::TextMeshProUGUI* _songDurationText;

  /// @brief Field _songBpmText, offset 0x90, size 0x8
  __declspec(property(get = __get__songBpmText, put = __set__songBpmText))::TMPro::TextMeshProUGUI* _songBpmText;

  /// @brief Field _highlightBackgroundColor, offset 0x98, size 0x10
  __declspec(property(get = __get__highlightBackgroundColor, put = __set__highlightBackgroundColor))::UnityEngine::Color _highlightBackgroundColor;

  /// @brief Field _selectedBackgroundColor, offset 0xa8, size 0x10
  __declspec(property(get = __get__selectedBackgroundColor, put = __set__selectedBackgroundColor))::UnityEngine::Color _selectedBackgroundColor;

  /// @brief Field _selectedAndHighlightedBackgroundColor, offset 0xb8, size 0x10
  __declspec(property(get = __get__selectedAndHighlightedBackgroundColor, put = __set__selectedAndHighlightedBackgroundColor))::UnityEngine::Color _selectedAndHighlightedBackgroundColor;

  /// @brief Field _notOwnedAlpha, offset 0xc8, size 0x4
  __declspec(property(get = __get__notOwnedAlpha, put = __set__notOwnedAlpha)) float_t _notOwnedAlpha;

  /// @brief Field _promoBadgeGo, offset 0xd0, size 0x8
  __declspec(property(get = __get__promoBadgeGo, put = __set__promoBadgeGo))::UnityEngine::GameObject* _promoBadgeGo;

  /// @brief Field _updatedBadgeGo, offset 0xd8, size 0x8
  __declspec(property(get = __get__updatedBadgeGo, put = __set__updatedBadgeGo))::UnityEngine::GameObject* _updatedBadgeGo;

  /// @brief Field _refreshingAvailabilityCancellationTokenSource, offset 0xe0, size 0x8
  __declspec(property(get = __get__refreshingAvailabilityCancellationTokenSource,
                      put = __set__refreshingAvailabilityCancellationTokenSource))::System::Threading::CancellationTokenSource* _refreshingAvailabilityCancellationTokenSource;

  /// @brief Field _settingDataCancellationTokenSource, offset 0xe8, size 0x8
  __declspec(property(get = __get__settingDataCancellationTokenSource,
                      put = __set__settingDataCancellationTokenSource))::System::Threading::CancellationTokenSource* _settingDataCancellationTokenSource;

  /// @brief Field _notOwned, offset 0xf0, size 0x1
  __declspec(property(get = __get__notOwned, put = __set__notOwned)) bool _notOwned;

  /// @brief Field _refreshingAvailabilityLevelID, offset 0xf8, size 0x8
  __declspec(property(get = __get__refreshingAvailabilityLevelID, put = __set__refreshingAvailabilityLevelID))::StringW _refreshingAvailabilityLevelID;

  /// @brief Field _settingDataFromLevelId, offset 0x100, size 0x8
  __declspec(property(get = __get__settingDataFromLevelId, put = __set__settingDataFromLevelId))::StringW _settingDataFromLevelId;

  constexpr ::UnityEngine::UI::Image*& __get__backgroundImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__backgroundImage() const;

  constexpr void __set__backgroundImage(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__canvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__canvasGroup() const;

  constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::UnityEngine::UI::Image*& __get__coverImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__coverImage() const;

  constexpr void __set__coverImage(::UnityEngine::UI::Image* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__songNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__songNameText() const;

  constexpr void __set__songNameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__songAuthorText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__songAuthorText() const;

  constexpr void __set__songAuthorText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Image*& __get__favoritesBadgeImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__favoritesBadgeImage() const;

  constexpr void __set__favoritesBadgeImage(::UnityEngine::UI::Image* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__songDurationText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__songDurationText() const;

  constexpr void __set__songDurationText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__songBpmText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__songBpmText() const;

  constexpr void __set__songBpmText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::Color& __get__highlightBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__highlightBackgroundColor() const;

  constexpr void __set__highlightBackgroundColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__selectedBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__selectedBackgroundColor() const;

  constexpr void __set__selectedBackgroundColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__selectedAndHighlightedBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__selectedAndHighlightedBackgroundColor() const;

  constexpr void __set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color value);

  constexpr float_t& __get__notOwnedAlpha();

  constexpr float_t const& __get__notOwnedAlpha() const;

  constexpr void __set__notOwnedAlpha(float_t value);

  constexpr ::UnityEngine::GameObject*& __get__promoBadgeGo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__promoBadgeGo() const;

  constexpr void __set__promoBadgeGo(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__updatedBadgeGo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__updatedBadgeGo() const;

  constexpr void __set__updatedBadgeGo(::UnityEngine::GameObject* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__refreshingAvailabilityCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__refreshingAvailabilityCancellationTokenSource() const;

  constexpr void __set__refreshingAvailabilityCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__settingDataCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__settingDataCancellationTokenSource() const;

  constexpr void __set__settingDataCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr bool& __get__notOwned();

  constexpr bool const& __get__notOwned() const;

  constexpr void __set__notOwned(bool value);

  constexpr ::StringW& __get__refreshingAvailabilityLevelID();

  constexpr ::StringW const& __get__refreshingAvailabilityLevelID() const;

  constexpr void __set__refreshingAvailabilityLevelID(::StringW value);

  constexpr ::StringW& __get__settingDataFromLevelId();

  constexpr ::StringW const& __get__settingDataFromLevelId() const;

  constexpr void __set__settingDataFromLevelId(::StringW value);

  /// @brief Method SetDataFromLevelAsync, addr 0x227ac64, size 0xc0, virtual false, abstract: false, final false
  inline void SetDataFromLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* level, bool isFavorite, bool isPromoted, bool isUpdated);

  /// @brief Method SelectionDidChange, addr 0x227ad24, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method HighlightDidChange, addr 0x227adec, size 0x4, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method RefreshVisuals, addr 0x227ad28, size 0xc4, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method WasPreparedForReuse, addr 0x227adf0, size 0x4, virtual true, abstract: false, final false
  inline void WasPreparedForReuse();

  /// @brief Method RefreshAvailabilityAsync, addr 0x227ae2c, size 0xa8, virtual false, abstract: false, final false
  inline void RefreshAvailabilityAsync(::GlobalNamespace::IAdditionalContentModel* contentModel, ::StringW levelID);

  /// @brief Method CancelAsyncOperations, addr 0x227adf4, size 0x38, virtual false, abstract: false, final false
  inline void CancelAsyncOperations();

  static inline ::GlobalNamespace::LevelListTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x227aed4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelListTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelListTableCell(LevelListTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelListTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelListTableCell(LevelListTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelListTableCell();

public:
  /// @brief Field _backgroundImage, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____backgroundImage;

  /// @brief Field _canvasGroup, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____canvasGroup;

  /// @brief Field _coverImage, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____coverImage;

  /// @brief Field _songNameText, offset: 0x70, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____songNameText;

  /// @brief Field _songAuthorText, offset: 0x78, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____songAuthorText;

  /// @brief Field _favoritesBadgeImage, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____favoritesBadgeImage;

  /// @brief Field _songDurationText, offset: 0x88, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____songDurationText;

  /// @brief Field _songBpmText, offset: 0x90, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____songBpmText;

  /// @brief Field _highlightBackgroundColor, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ____highlightBackgroundColor;

  /// @brief Field _selectedBackgroundColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedBackgroundColor;

  /// @brief Field _selectedAndHighlightedBackgroundColor, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedAndHighlightedBackgroundColor;

  /// @brief Field _notOwnedAlpha, offset: 0xc8, size: 0x4, def value: None
  float_t ____notOwnedAlpha;

  /// @brief Field _promoBadgeGo, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____promoBadgeGo;

  /// @brief Field _updatedBadgeGo, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____updatedBadgeGo;

  /// @brief Field _refreshingAvailabilityCancellationTokenSource, offset: 0xe0, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____refreshingAvailabilityCancellationTokenSource;

  /// @brief Field _settingDataCancellationTokenSource, offset: 0xe8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____settingDataCancellationTokenSource;

  /// @brief Field _notOwned, offset: 0xf0, size: 0x1, def value: None
  bool ____notOwned;

  /// @brief Field _refreshingAvailabilityLevelID, offset: 0xf8, size: 0x8, def value: None
  ::StringW ____refreshingAvailabilityLevelID;

  /// @brief Field _settingDataFromLevelId, offset: 0x100, size: 0x8, def value: None
  ::StringW ____settingDataFromLevelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelListTableCell, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____backgroundImage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____canvasGroup) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____coverImage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____songNameText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____songAuthorText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____favoritesBadgeImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____songDurationText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____songBpmText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____highlightBackgroundColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____selectedBackgroundColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____selectedAndHighlightedBackgroundColor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____notOwnedAlpha) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____promoBadgeGo) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____updatedBadgeGo) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____refreshingAvailabilityCancellationTokenSource) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____settingDataCancellationTokenSource) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____notOwned) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____refreshingAvailabilityLevelID) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____settingDataFromLevelId) == 0x100, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelListTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelListTableCell*, "", "LevelListTableCell");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, "", "LevelListTableCell/<RefreshAvailabilityAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, "", "LevelListTableCell/<SetDataFromLevelAsync>d__19");
