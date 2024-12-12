#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelPackDetailViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelPackDetailViewController)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace GlobalNamespace {
struct LevelPackDetailViewController_ContentType;
}
namespace GlobalNamespace {
struct LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24;
}
namespace GlobalNamespace {
struct LevelPackDetailViewController__RefreshAvailabilityAsync_d__22;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace HMUI {
class ImageView;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
struct LevelPackDetailViewController_ContentType;
}
namespace GlobalNamespace {
class LevelPackDetailViewController;
}
namespace GlobalNamespace {
struct LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24;
}
namespace GlobalNamespace {
struct LevelPackDetailViewController__RefreshAvailabilityAsync_d__22;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelPackDetailViewController_ContentType);
MARK_REF_PTR_T(::GlobalNamespace::LevelPackDetailViewController);
MARK_VAL_T(::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24);
MARK_VAL_T(::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__22);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelPackDetailViewController/ContentType
struct CORDL_TYPE LevelPackDetailViewController_ContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LevelPackDetailViewController_ContentType_Unwrapped
  enum struct __LevelPackDetailViewController_ContentType_Unwrapped : int32_t {
    __E_Loading = static_cast<int32_t>(0x0),
    __E_NonBuyable = static_cast<int32_t>(0x1),
    __E_Buyable = static_cast<int32_t>(0x2),
    __E_Error = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LevelPackDetailViewController_ContentType_Unwrapped() const noexcept {
    return static_cast<__LevelPackDetailViewController_ContentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelPackDetailViewController_ContentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LevelPackDetailViewController_ContentType(int32_t value__) noexcept;

  /// @brief Field Buyable value: I32(2)
  static ::GlobalNamespace::LevelPackDetailViewController_ContentType const Buyable;

  /// @brief Field Error value: I32(3)
  static ::GlobalNamespace::LevelPackDetailViewController_ContentType const Error;

  /// @brief Field Loading value: I32(0)
  static ::GlobalNamespace::LevelPackDetailViewController_ContentType const Loading;

  /// @brief Field NonBuyable value: I32(1)
  static ::GlobalNamespace::LevelPackDetailViewController_ContentType const NonBuyable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5345 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController_ContentType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackDetailViewController_ContentType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelPackDetailViewController/<OpenLevelPackProductStoreAsync>d__24
struct CORDL_TYPE LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b61184, size 0x378, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b614fc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelPackDetailViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5346 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelPackDetailViewController/<RefreshAvailabilityAsync>d__22
struct CORDL_TYPE LevelPackDetailViewController__RefreshAvailabilityAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b61508, size 0x488, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b61990, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelPackDetailViewController__RefreshAvailabilityAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelPackDetailViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr LevelPackDetailViewController__RefreshAvailabilityAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                          ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5347 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__22, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__22, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelPackDetailViewController
class CORDL_TYPE LevelPackDetailViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using ContentType = ::GlobalNamespace::LevelPackDetailViewController_ContentType;

  using _OpenLevelPackProductStoreAsync_d__24 = ::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24;

  using _RefreshAvailabilityAsync_d__22 = ::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__22;

  /// @brief Field _additionalContentModel, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _analyticsModel, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _blurredPackArtwork, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__blurredPackArtwork, put = __cordl_internal_set__blurredPackArtwork)) ::UnityW<::UnityEngine::Sprite> _blurredPackArtwork;

  /// @brief Field _buyButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__buyButton, put = __cordl_internal_set__buyButton)) ::UnityW<::UnityEngine::UI::Button> _buyButton;

  /// @brief Field _buyContainer, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__buyContainer, put = __cordl_internal_set__buyContainer)) ::UnityW<::UnityEngine::GameObject> _buyContainer;

  /// @brief Field _cancellationTokenSource, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _defaultCoverSprite, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultCoverSprite, put = __cordl_internal_set__defaultCoverSprite)) ::UnityW<::UnityEngine::Sprite> _defaultCoverSprite;

  /// @brief Field _detailWrapper, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__detailWrapper, put = __cordl_internal_set__detailWrapper)) ::UnityW<::UnityEngine::GameObject> _detailWrapper;

  /// @brief Field _dlcPromoPanelModel, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelModel, put = __cordl_internal_set__dlcPromoPanelModel)) ::GlobalNamespace::DlcPromoPanelModel* _dlcPromoPanelModel;

  /// @brief Field _entitlementModel, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel)) ::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _eventBinder, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBinder, put = __cordl_internal_set__eventBinder)) ::GlobalNamespace::EventBinder* _eventBinder;

  /// @brief Field _kawaseBlurRenderer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__kawaseBlurRenderer, put = __cordl_internal_set__kawaseBlurRenderer)) ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> _kawaseBlurRenderer;

  /// @brief Field _loadingControl, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl)) ::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _pack, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__pack, put = __cordl_internal_set__pack)) ::GlobalNamespace::BeatmapLevelPack* _pack;

  /// @brief Field _packImage, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__packImage, put = __cordl_internal_set__packImage)) ::UnityW<::HMUI::ImageView> _packImage;

  /// @brief Field _requireInternetContainer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__requireInternetContainer, put = __cordl_internal_set__requireInternetContainer)) ::UnityW<::UnityEngine::GameObject> _requireInternetContainer;

  /// @brief Field _steamMessageGameObject, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__steamMessageGameObject, put = __cordl_internal_set__steamMessageGameObject)) ::UnityW<::UnityEngine::GameObject> _steamMessageGameObject;

  /// @brief Method BuyPackButtonWasPressed, addr 0x3b60ca4, size 0x94, virtual false, abstract: false, final false
  inline void BuyPackButtonWasPressed();

  /// @brief Method DidActivate, addr 0x3b60834, size 0x1ec, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b60a20, size 0x114, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x3b60ffc, size 0x4, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  static inline ::GlobalNamespace::LevelPackDetailViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b60b34, size 0x170, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x3b60d38, size 0x90, virtual false, abstract: false, final false
  inline void OpenLevelPackProductStoreAsync();

  /// @brief Method RefreshAvailabilityAsync, addr 0x3b607a4, size 0x90, virtual false, abstract: false, final false
  inline void RefreshAvailabilityAsync();

  /// @brief Method SetData, addr 0x3b604f4, size 0x2b0, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapLevelPack* pack);

  /// @brief Method ShowContent, addr 0x3b60dc8, size 0x234, virtual false, abstract: false, final false
  inline void ShowContent(::GlobalNamespace::LevelPackDetailViewController_ContentType contentType, ::StringW errorText);

  /// @brief Method <DidActivate>b__19_1, addr 0x3b61064, size 0x90, virtual false, abstract: false, final false
  inline void _DidActivate_b__19_1();

  /// @brief Method <DidActivate>b__19_2, addr 0x3b610f4, size 0x90, virtual false, abstract: false, final false
  inline void _DidActivate_b__19_2();

  /// @brief Method <DidActivate>g__HandleDidPressRefreshButton|19_0, addr 0x3b61060, size 0x4, virtual false, abstract: false, final false
  inline void _DidActivate_g__HandleDidPressRefreshButton_19_0();

  constexpr ::GlobalNamespace::IAdditionalContentModel* const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__blurredPackArtwork() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__blurredPackArtwork();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__buyButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__buyButton();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__buyContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__buyContainer();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__defaultCoverSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__defaultCoverSprite();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__detailWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__detailWrapper();

  constexpr ::GlobalNamespace::DlcPromoPanelModel* const& __cordl_internal_get__dlcPromoPanelModel() const;

  constexpr ::GlobalNamespace::DlcPromoPanelModel*& __cordl_internal_get__dlcPromoPanelModel();

  constexpr ::GlobalNamespace::IEntitlementModel* const& __cordl_internal_get__entitlementModel() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::GlobalNamespace::EventBinder* const& __cordl_internal_get__eventBinder() const;

  constexpr ::GlobalNamespace::EventBinder*& __cordl_internal_get__eventBinder();

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& __cordl_internal_get__kawaseBlurRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& __cordl_internal_get__kawaseBlurRenderer();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::GlobalNamespace::BeatmapLevelPack* const& __cordl_internal_get__pack() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get__pack();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__packImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__packImage();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__requireInternetContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__requireInternetContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__steamMessageGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__steamMessageGameObject();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__blurredPackArtwork(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__buyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buyContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__defaultCoverSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__detailWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__eventBinder(::GlobalNamespace::EventBinder* value);

  constexpr void __cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value);

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__pack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set__packImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__requireInternetContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__steamMessageGameObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x3b61000, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelPackDetailViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelPackDetailViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelPackDetailViewController(LevelPackDetailViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelPackDetailViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelPackDetailViewController(LevelPackDetailViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5348 };

  /// @brief Field _detailWrapper, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____detailWrapper;

  /// @brief Field _packImage, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____packImage;

  /// @brief Field _buyButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____buyButton;

  /// @brief Field _buyContainer, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____buyContainer;

  /// @brief Field _loadingControl, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _requireInternetContainer, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____requireInternetContainer;

  /// @brief Field _steamMessageGameObject, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____steamMessageGameObject;

  /// @brief Field _kawaseBlurRenderer, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> ____kawaseBlurRenderer;

  /// @brief Field _defaultCoverSprite, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____defaultCoverSprite;

  /// @brief Field _additionalContentModel, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _entitlementModel, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field _dlcPromoPanelModel, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* ____dlcPromoPanelModel;

  /// @brief Field _analyticsModel, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _eventBinder, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::EventBinder* ____eventBinder;

  /// @brief Field _cancellationTokenSource, offset: 0xe8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _pack, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ____pack;

  /// @brief Field _blurredPackArtwork, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____blurredPackArtwork;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____detailWrapper) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____packImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____buyButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____buyContainer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____loadingControl) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____requireInternetContainer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____steamMessageGameObject) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____kawaseBlurRenderer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____defaultCoverSprite) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____additionalContentModel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____entitlementModel) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____dlcPromoPanelModel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____analyticsModel) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____eventBinder) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____cancellationTokenSource) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____pack) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____blurredPackArtwork) == 0xf8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackDetailViewController, 0x100>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackDetailViewController_ContentType, "", "LevelPackDetailViewController/ContentType");
NEED_NO_BOX(::GlobalNamespace::LevelPackDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackDetailViewController*, "", "LevelPackDetailViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__24, "", "LevelPackDetailViewController/<OpenLevelPackProductStoreAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__22, "", "LevelPackDetailViewController/<RefreshAvailabilityAsync>d__22");
