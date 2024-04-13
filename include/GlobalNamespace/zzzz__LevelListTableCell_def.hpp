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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelListTableCell)
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
struct __LevelListTableCell___RefreshAvailabilityAsync_d__25;
}
namespace GlobalNamespace {
struct __LevelListTableCell___SetDataFromLevelAsync_d__20;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
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
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelListTableCell;
}
namespace GlobalNamespace {
struct __LevelListTableCell___RefreshAvailabilityAsync_d__25;
}
namespace GlobalNamespace {
struct __LevelListTableCell___SetDataFromLevelAsync_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelListTableCell);
MARK_VAL_T(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25);
MARK_VAL_T(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20);
// Type: ::<SetDataFromLevelAsync>d__20
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelListTableCell::<SetDataFromLevelAsync>d__20
struct CORDL_TYPE __LevelListTableCell___SetDataFromLevelAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2638e14, size 0x7f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2639604, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelListTableCell___SetDataFromLevelAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelListTableCell>", modifiers:
  // "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "isFavorite", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "isPromoted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isUpdated", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: None }]
  constexpr __LevelListTableCell___SetDataFromLevelAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                               ::UnityW<::GlobalNamespace::LevelListTableCell> __4__this, ::GlobalNamespace::BeatmapLevel* level, bool isFavorite, bool isPromoted,
                                                               bool isUpdated, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelListTableCell> __4__this;

  /// @brief Field level, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* level;

  /// @brief Field isFavorite, offset: 0x38, size: 0x1, def value: None
  bool isFavorite;

  /// @brief Field isPromoted, offset: 0x39, size: 0x1, def value: None
  bool isPromoted;

  /// @brief Field isUpdated, offset: 0x3a, size: 0x1, def value: None
  bool isUpdated;

  /// @brief Field <cancellationToken>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, level) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, isFavorite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, isPromoted) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, isUpdated) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, _cancellationToken_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RefreshAvailabilityAsync>d__25
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelListTableCell::<RefreshAvailabilityAsync>d__25
struct CORDL_TYPE __LevelListTableCell___RefreshAvailabilityAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2639610, size 0x468, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2639a78, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelListTableCell___RefreshAvailabilityAsync_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelListTableCell>", modifiers:
  // "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "entitlementModel", ty: "::GlobalNamespace::IEntitlementModel*", modifiers:
  // "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __LevelListTableCell___RefreshAvailabilityAsync_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                  ::UnityW<::GlobalNamespace::LevelListTableCell> __4__this, ::StringW levelID, ::GlobalNamespace::IEntitlementModel* entitlementModel,
                                                                  ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelListTableCell> __4__this;

  /// @brief Field levelID, offset: 0x30, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field entitlementModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* entitlementModel;

  /// @brief Field <cancellationToken>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25, levelID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25, entitlementModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25, _cancellationToken_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelListTableCell
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 272, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelListTableCell*
class CORDL_TYPE LevelListTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  using _RefreshAvailabilityAsync_d__25 = ::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25;

  using _SetDataFromLevelAsync_d__20 = ::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20;

  /// @brief Field _backgroundImage, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundImage, put = __cordl_internal_set__backgroundImage))::UnityW<::UnityEngine::UI::Image> _backgroundImage;

  /// @brief Field _canvasGroup, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup))::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _coverImage, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__coverImage, put = __cordl_internal_set__coverImage))::UnityW<::UnityEngine::UI::Image> _coverImage;

  /// @brief Field _defaultCoverImage, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultCoverImage, put = __cordl_internal_set__defaultCoverImage))::UnityW<::UnityEngine::Sprite> _defaultCoverImage;

  /// @brief Field _favoritesBadgeImage, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__favoritesBadgeImage, put = __cordl_internal_set__favoritesBadgeImage))::UnityW<::UnityEngine::UI::Image> _favoritesBadgeImage;

  /// @brief Field _highlightBackgroundColor, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__highlightBackgroundColor, put = __cordl_internal_set__highlightBackgroundColor))::UnityEngine::Color _highlightBackgroundColor;

  /// @brief Field _notOwned, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get__notOwned, put = __cordl_internal_set__notOwned)) bool _notOwned;

  /// @brief Field _notOwnedAlpha, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get__notOwnedAlpha, put = __cordl_internal_set__notOwnedAlpha)) float_t _notOwnedAlpha;

  /// @brief Field _promoBadgeGo, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__promoBadgeGo, put = __cordl_internal_set__promoBadgeGo))::UnityW<::UnityEngine::GameObject> _promoBadgeGo;

  /// @brief Field _refreshingAvailabilityCancellationTokenSource, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__refreshingAvailabilityCancellationTokenSource,
                      put = __cordl_internal_set__refreshingAvailabilityCancellationTokenSource))::System::Threading::CancellationTokenSource* _refreshingAvailabilityCancellationTokenSource;

  /// @brief Field _refreshingAvailabilityLevelID, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__refreshingAvailabilityLevelID, put = __cordl_internal_set__refreshingAvailabilityLevelID))::StringW _refreshingAvailabilityLevelID;

  /// @brief Field _selectedAndHighlightedBackgroundColor, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedBackgroundColor,
                      put = __cordl_internal_set__selectedAndHighlightedBackgroundColor))::UnityEngine::Color _selectedAndHighlightedBackgroundColor;

  /// @brief Field _selectedBackgroundColor, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__selectedBackgroundColor, put = __cordl_internal_set__selectedBackgroundColor))::UnityEngine::Color _selectedBackgroundColor;

  /// @brief Field _settingDataCancellationTokenSource, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__settingDataCancellationTokenSource,
                      put = __cordl_internal_set__settingDataCancellationTokenSource))::System::Threading::CancellationTokenSource* _settingDataCancellationTokenSource;

  /// @brief Field _settingDataFromLevelId, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__settingDataFromLevelId, put = __cordl_internal_set__settingDataFromLevelId))::StringW _settingDataFromLevelId;

  /// @brief Field _songAuthorText, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__songAuthorText, put = __cordl_internal_set__songAuthorText))::UnityW<::TMPro::TextMeshProUGUI> _songAuthorText;

  /// @brief Field _songBpmText, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__songBpmText, put = __cordl_internal_set__songBpmText))::UnityW<::TMPro::TextMeshProUGUI> _songBpmText;

  /// @brief Field _songDurationText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__songDurationText, put = __cordl_internal_set__songDurationText))::UnityW<::TMPro::TextMeshProUGUI> _songDurationText;

  /// @brief Field _songNameText, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__songNameText, put = __cordl_internal_set__songNameText))::UnityW<::TMPro::TextMeshProUGUI> _songNameText;

  /// @brief Field _updatedBadgeGo, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__updatedBadgeGo, put = __cordl_internal_set__updatedBadgeGo))::UnityW<::UnityEngine::GameObject> _updatedBadgeGo;

  /// @brief Method CancelAsyncOperations, addr 0x2638d24, size 0x38, virtual false, abstract: false, final false
  inline void CancelAsyncOperations();

  /// @brief Method HighlightDidChange, addr 0x2638d1c, size 0x4, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  static inline ::GlobalNamespace::LevelListTableCell* New_ctor();

  /// @brief Method RefreshAvailabilityAsync, addr 0x2638d5c, size 0xa8, virtual false, abstract: false, final false
  inline void RefreshAvailabilityAsync(::GlobalNamespace::IEntitlementModel* entitlementModel, ::StringW levelID);

  /// @brief Method RefreshVisuals, addr 0x2638c58, size 0xc4, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method SelectionDidChange, addr 0x2638c54, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method SetDataFromLevelAsync, addr 0x2638b94, size 0xc0, virtual false, abstract: false, final false
  inline void SetDataFromLevelAsync(::GlobalNamespace::BeatmapLevel* level, bool isFavorite, bool isPromoted, bool isUpdated);

  /// @brief Method WasPreparedForReuse, addr 0x2638d20, size 0x4, virtual true, abstract: false, final false
  inline void WasPreparedForReuse();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__backgroundImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__backgroundImage();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__coverImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__coverImage();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__defaultCoverImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__defaultCoverImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__favoritesBadgeImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__favoritesBadgeImage();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__highlightBackgroundColor();

  constexpr bool const& __cordl_internal_get__notOwned() const;

  constexpr bool& __cordl_internal_get__notOwned();

  constexpr float_t const& __cordl_internal_get__notOwnedAlpha() const;

  constexpr float_t& __cordl_internal_get__notOwnedAlpha();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__promoBadgeGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__promoBadgeGo();

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__refreshingAvailabilityCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__refreshingAvailabilityCancellationTokenSource() const;

  constexpr ::StringW const& __cordl_internal_get__refreshingAvailabilityLevelID() const;

  constexpr ::StringW& __cordl_internal_get__refreshingAvailabilityLevelID();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedAndHighlightedBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__selectedAndHighlightedBackgroundColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__selectedBackgroundColor();

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__settingDataCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__settingDataCancellationTokenSource() const;

  constexpr ::StringW const& __cordl_internal_get__settingDataFromLevelId() const;

  constexpr ::StringW& __cordl_internal_get__settingDataFromLevelId();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__songAuthorText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__songAuthorText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__songBpmText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__songBpmText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__songDurationText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__songDurationText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__songNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__songNameText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__updatedBadgeGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__updatedBadgeGo();

  constexpr void __cordl_internal_set__backgroundImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__coverImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__defaultCoverImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__favoritesBadgeImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__highlightBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__notOwned(bool value);

  constexpr void __cordl_internal_set__notOwnedAlpha(float_t value);

  constexpr void __cordl_internal_set__promoBadgeGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__refreshingAvailabilityCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__refreshingAvailabilityLevelID(::StringW value);

  constexpr void __cordl_internal_set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__selectedBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__settingDataCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__settingDataFromLevelId(::StringW value);

  constexpr void __cordl_internal_set__songAuthorText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__songBpmText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__songDurationText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__songNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__updatedBadgeGo(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x2638e04, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelListTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelListTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelListTableCell(LevelListTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelListTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelListTableCell(LevelListTableCell const&) = delete;

  /// @brief Field _backgroundImage, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____backgroundImage;

  /// @brief Field _canvasGroup, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  /// @brief Field _coverImage, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____coverImage;

  /// @brief Field _songNameText, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____songNameText;

  /// @brief Field _songAuthorText, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____songAuthorText;

  /// @brief Field _favoritesBadgeImage, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____favoritesBadgeImage;

  /// @brief Field _songDurationText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____songDurationText;

  /// @brief Field _songBpmText, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____songBpmText;

  /// @brief Field _highlightBackgroundColor, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ____highlightBackgroundColor;

  /// @brief Field _selectedBackgroundColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedBackgroundColor;

  /// @brief Field _selectedAndHighlightedBackgroundColor, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedAndHighlightedBackgroundColor;

  /// @brief Field _notOwnedAlpha, offset: 0xc8, size: 0x4, def value: None
  float_t ____notOwnedAlpha;

  /// @brief Field _promoBadgeGo, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____promoBadgeGo;

  /// @brief Field _updatedBadgeGo, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____updatedBadgeGo;

  /// @brief Field _defaultCoverImage, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____defaultCoverImage;

  /// @brief Field _refreshingAvailabilityCancellationTokenSource, offset: 0xe8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____refreshingAvailabilityCancellationTokenSource;

  /// @brief Field _settingDataCancellationTokenSource, offset: 0xf0, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____settingDataCancellationTokenSource;

  /// @brief Field _notOwned, offset: 0xf8, size: 0x1, def value: None
  bool ____notOwned;

  /// @brief Field _refreshingAvailabilityLevelID, offset: 0x100, size: 0x8, def value: None
  ::StringW ____refreshingAvailabilityLevelID;

  /// @brief Field _settingDataFromLevelId, offset: 0x108, size: 0x8, def value: None
  ::StringW ____settingDataFromLevelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelListTableCell, 0x110>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____defaultCoverImage) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____refreshingAvailabilityCancellationTokenSource) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____settingDataCancellationTokenSource) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____notOwned) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____refreshingAvailabilityLevelID) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelListTableCell, ____settingDataFromLevelId) == 0x108, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelListTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelListTableCell*, "", "LevelListTableCell");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__25, "", "LevelListTableCell/<RefreshAvailabilityAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__20, "", "LevelListTableCell/<SetDataFromLevelAsync>d__20");
