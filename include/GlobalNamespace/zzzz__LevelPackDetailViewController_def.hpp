#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelPackDetailViewController)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
struct EntitlementStatus;
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
class KawaseBlurRendererSO;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController__ContentType;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___RefreshAvailabilityAsync_d__21;
}
namespace HMUI {
class ImageView;
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
struct __LevelPackDetailViewController__ContentType;
}
namespace GlobalNamespace {
class LevelPackDetailViewController;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___RefreshAvailabilityAsync_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LevelPackDetailViewController__ContentType);
MARK_REF_PTR_T(::GlobalNamespace::LevelPackDetailViewController);
MARK_VAL_T(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23);
MARK_VAL_T(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__21);
// Type: ::ContentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelPackDetailViewController::ContentType
struct CORDL_TYPE __LevelPackDetailViewController__ContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LevelPackDetailViewController__ContentType_Unwrapped
  enum struct ____LevelPackDetailViewController__ContentType_Unwrapped : int32_t {
    __E_Loading = static_cast<int32_t>(0x0),
    __E_Owned = static_cast<int32_t>(0x1),
    __E_Buy = static_cast<int32_t>(0x2),
    __E_Error = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LevelPackDetailViewController__ContentType_Unwrapped() const noexcept {
    return static_cast<____LevelPackDetailViewController__ContentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____LevelPackDetailViewController__ContentType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelPackDetailViewController__ContentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LevelPackDetailViewController__ContentType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Buy value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Buy;

  /// @brief Field Error value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Error;

  /// @brief Field Loading value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Loading;

  /// @brief Field Owned value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Owned;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController__ContentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController__ContentType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RefreshAvailabilityAsync>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelPackDetailViewController::<RefreshAvailabilityAsync>d__21
struct CORDL_TYPE __LevelPackDetailViewController___RefreshAvailabilityAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23bf3a0, size 0x3ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23bf78c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelPackDetailViewController___RefreshAvailabilityAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelPackDetailViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __LevelPackDetailViewController___RefreshAvailabilityAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                             ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this,
                                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__21, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__23
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelPackDetailViewController::<OpenLevelPackProductStoreAsync>d__23
struct CORDL_TYPE __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23bf798, size 0x378, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23bfb10, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelPackDetailViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                   ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackDetailViewController
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelPackDetailViewController*
class CORDL_TYPE LevelPackDetailViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using ContentType = ::GlobalNamespace::__LevelPackDetailViewController__ContentType;

  using _OpenLevelPackProductStoreAsync_d__23 = ::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23;

  using _RefreshAvailabilityAsync_d__21 = ::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__21;

  /// @brief Field _additionalContentModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _analyticsModel, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _beatmapLevelsModel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _blurredPackArtwork, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__blurredPackArtwork, put = __cordl_internal_set__blurredPackArtwork))::UnityW<::UnityEngine::Sprite> _blurredPackArtwork;

  /// @brief Field _buyButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__buyButton, put = __cordl_internal_set__buyButton))::UnityW<::UnityEngine::UI::Button> _buyButton;

  /// @brief Field _buyContainer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__buyContainer, put = __cordl_internal_set__buyContainer))::UnityW<::UnityEngine::GameObject> _buyContainer;

  /// @brief Field _cancellationTokenSource, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _defaultCoverSprite, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultCoverSprite, put = __cordl_internal_set__defaultCoverSprite))::UnityW<::UnityEngine::Sprite> _defaultCoverSprite;

  /// @brief Field _detailWrapper, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__detailWrapper, put = __cordl_internal_set__detailWrapper))::UnityW<::UnityEngine::GameObject> _detailWrapper;

  /// @brief Field _dlcPromoPanelModel, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelModel, put = __cordl_internal_set__dlcPromoPanelModel))::GlobalNamespace::DlcPromoPanelModel* _dlcPromoPanelModel;

  /// @brief Field _eventBinder, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBinder, put = __cordl_internal_set__eventBinder))::GlobalNamespace::EventBinder* _eventBinder;

  /// @brief Field _kawaseBlurRenderer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__kawaseBlurRenderer, put = __cordl_internal_set__kawaseBlurRenderer))::UnityW<::GlobalNamespace::KawaseBlurRendererSO> _kawaseBlurRenderer;

  /// @brief Field _loadingControl, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl))::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _pack, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__pack, put = __cordl_internal_set__pack))::GlobalNamespace::BeatmapLevelPack* _pack;

  /// @brief Field _packImage, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__packImage, put = __cordl_internal_set__packImage))::UnityW<::HMUI::ImageView> _packImage;

  /// @brief Field _requireInternetContainer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__requireInternetContainer, put = __cordl_internal_set__requireInternetContainer))::UnityW<::UnityEngine::GameObject> _requireInternetContainer;

  /// @brief Method BuyPackButtonWasPressed, addr 0x23beeb8, size 0x94, virtual false, abstract: false, final false
  inline void BuyPackButtonWasPressed();

  /// @brief Method DidActivate, addr 0x23bea64, size 0x1dc, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x23bec40, size 0x10c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x23bf218, size 0x4, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  static inline ::GlobalNamespace::LevelPackDetailViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x23bed4c, size 0x16c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x23bef4c, size 0x94, virtual false, abstract: false, final false
  inline void OpenLevelPackProductStoreAsync();

  /// @brief Method RefreshAvailabilityAsync, addr 0x23be9d0, size 0x94, virtual false, abstract: false, final false
  inline void RefreshAvailabilityAsync();

  /// @brief Method SetData, addr 0x23be704, size 0x2cc, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapLevelPack* pack);

  /// @brief Method ShowContent, addr 0x23befe0, size 0x238, virtual false, abstract: false, final false
  inline void ShowContent(::GlobalNamespace::__LevelPackDetailViewController__ContentType contentType, ::StringW errorText);

  /// @brief Method <DidActivate>b__18_1, addr 0x23bf288, size 0x8c, virtual false, abstract: false, final false
  inline void _DidActivate_b__18_1();

  /// @brief Method <DidActivate>b__18_2, addr 0x23bf314, size 0x8c, virtual false, abstract: false, final false
  inline void _DidActivate_b__18_2();

  /// @brief Method <DidActivate>g__HandleDidPressRefreshButton|18_0, addr 0x23bf284, size 0x4, virtual false, abstract: false, final false
  inline void _DidActivate_g__HandleDidPressRefreshButton_18_0();

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__blurredPackArtwork() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__blurredPackArtwork();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__buyButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__buyButton();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__buyContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__buyContainer();

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__defaultCoverSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__defaultCoverSprite();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__detailWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__detailWrapper();

  constexpr ::GlobalNamespace::DlcPromoPanelModel*& __cordl_internal_get__dlcPromoPanelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& __cordl_internal_get__dlcPromoPanelModel() const;

  constexpr ::GlobalNamespace::EventBinder*& __cordl_internal_get__eventBinder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& __cordl_internal_get__eventBinder() const;

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& __cordl_internal_get__kawaseBlurRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& __cordl_internal_get__kawaseBlurRenderer();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get__pack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const& __cordl_internal_get__pack() const;

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__packImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__packImage();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__requireInternetContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__requireInternetContainer();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__blurredPackArtwork(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__buyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buyContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__defaultCoverSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__detailWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value);

  constexpr void __cordl_internal_set__eventBinder(::GlobalNamespace::EventBinder* value);

  constexpr void __cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value);

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__pack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set__packImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__requireInternetContainer(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x23bf21c, size 0x68, virtual false, abstract: false, final false
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

  /// @brief Field _detailWrapper, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____detailWrapper;

  /// @brief Field _packImage, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____packImage;

  /// @brief Field _buyButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____buyButton;

  /// @brief Field _buyContainer, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____buyContainer;

  /// @brief Field _loadingControl, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _requireInternetContainer, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____requireInternetContainer;

  /// @brief Field _kawaseBlurRenderer, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> ____kawaseBlurRenderer;

  /// @brief Field _defaultCoverSprite, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____defaultCoverSprite;

  /// @brief Field _additionalContentModel, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapLevelsModel, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _dlcPromoPanelModel, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* ____dlcPromoPanelModel;

  /// @brief Field _analyticsModel, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _eventBinder, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::EventBinder* ____eventBinder;

  /// @brief Field _cancellationTokenSource, offset: 0xd8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _pack, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ____pack;

  /// @brief Field _blurredPackArtwork, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____blurredPackArtwork;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackDetailViewController, 0xf0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____detailWrapper) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____packImage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____buyButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____buyContainer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____loadingControl) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____requireInternetContainer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____kawaseBlurRenderer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____defaultCoverSprite) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____additionalContentModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____beatmapLevelsModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____dlcPromoPanelModel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____analyticsModel) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____eventBinder) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____cancellationTokenSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____pack) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____blurredPackArtwork) == 0xe8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController__ContentType, "", "LevelPackDetailViewController/ContentType");
NEED_NO_BOX(::GlobalNamespace::LevelPackDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackDetailViewController*, "", "LevelPackDetailViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__23, "", "LevelPackDetailViewController/<OpenLevelPackProductStoreAsync>d__23");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__21, "", "LevelPackDetailViewController/<RefreshAvailabilityAsync>d__21");
