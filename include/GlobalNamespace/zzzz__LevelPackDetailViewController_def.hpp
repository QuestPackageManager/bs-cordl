#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelPackDetailViewController)
namespace GlobalNamespace {
class __LevelPackDetailViewController____c__DisplayClass16_0;
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
namespace GlobalNamespace {
struct __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace HMUI {
class ImageView;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController__ContentType;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LevelPackDetailViewController__ContentType;
}
namespace GlobalNamespace {
class LevelPackDetailViewController;
}
namespace GlobalNamespace {
class __LevelPackDetailViewController____c__DisplayClass16_0;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LevelPackDetailViewController__ContentType);
MARK_REF_PTR_T(::GlobalNamespace::LevelPackDetailViewController);
MARK_REF_PTR_T(::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0);
MARK_VAL_T(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21);
MARK_VAL_T(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19);
// Type: ::ContentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5665))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LevelPackDetailViewController__ContentType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelPackDetailViewController__ContentType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Loading value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Loading;

  /// @brief Field Owned value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Owned;

  /// @brief Field Buy value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Buy;

  /// @brief Field Error value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController__ContentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController__ContentType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5666))
// CS Name: ::LevelPackDetailViewController::<>c__DisplayClass16_0*
class CORDL_TYPE __LevelPackDetailViewController____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field handleDidPressRefreshButton, offset 0x10, size 0x8
  __declspec(property(get = __get_handleDidPressRefreshButton, put = __set_handleDidPressRefreshButton))::System::Action* handleDidPressRefreshButton;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::LevelPackDetailViewController* __4__this;

  constexpr ::System::Action*& __get_handleDidPressRefreshButton();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_handleDidPressRefreshButton() const;

  constexpr void __set_handleDidPressRefreshButton(::System::Action* value);

  constexpr ::GlobalNamespace::LevelPackDetailViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackDetailViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::LevelPackDetailViewController* value);

  static inline ::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0* New_ctor();

  /// @brief Method .ctor, addr 0x22bff80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__1, addr 0x22c06e4, size 0x2c, virtual false, abstract: false, final false
  inline void _DidActivate_b__1();

  /// @brief Method <DidActivate>b__2, addr 0x22c0710, size 0x2c, virtual false, abstract: false, final false
  inline void _DidActivate_b__2();

  // Ctor Parameters [CppParam { name: "", ty: "__LevelPackDetailViewController____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelPackDetailViewController____c__DisplayClass16_0(__LevelPackDetailViewController____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelPackDetailViewController____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelPackDetailViewController____c__DisplayClass16_0(__LevelPackDetailViewController____c__DisplayClass16_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelPackDetailViewController____c__DisplayClass16_0();

public:
  /// @brief Field handleDidPressRefreshButton, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___handleDidPressRefreshButton;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelPackDetailViewController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0, ___handleDidPressRefreshButton) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RefreshAvailabilityAsync>d__19
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 }),
// TypeDefinitionIndex(TypeDefinitionIndex(16270)), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5667)) CS Name:
// ::LevelPackDetailViewController::<RefreshAvailabilityAsync>d__19
struct CORDL_TYPE __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22c073c, size 0x490, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c0bcc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelPackDetailViewController*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                             ::GlobalNamespace::LevelPackDetailViewController* __4__this,
                                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelPackDetailViewController* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 895 }), TypeDefinitionIndex(TypeDefinitionIndex(3400)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(16271))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5668)) CS Name:
// ::LevelPackDetailViewController::<OpenLevelPackProductStoreAsync>d__21
struct CORDL_TYPE __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22c0bd8, size 0x3f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c0fcc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelPackDetailViewController*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                   ::GlobalNamespace::LevelPackDetailViewController* __4__this,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelPackDetailViewController* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackDetailViewController
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5669))
// CS Name: ::LevelPackDetailViewController*
class CORDL_TYPE LevelPackDetailViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _OpenLevelPackProductStoreAsync_d__21 = ::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;

  using _RefreshAvailabilityAsync_d__19 = ::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0;

  using ContentType = ::GlobalNamespace::__LevelPackDetailViewController__ContentType;

  /// @brief Field _detailWrapper, offset 0x70, size 0x8
  __declspec(property(get = __get__detailWrapper, put = __set__detailWrapper))::UnityEngine::GameObject* _detailWrapper;

  /// @brief Field _packImage, offset 0x78, size 0x8
  __declspec(property(get = __get__packImage, put = __set__packImage))::HMUI::ImageView* _packImage;

  /// @brief Field _buyButton, offset 0x80, size 0x8
  __declspec(property(get = __get__buyButton, put = __set__buyButton))::UnityEngine::UI::Button* _buyButton;

  /// @brief Field _buyContainer, offset 0x88, size 0x8
  __declspec(property(get = __get__buyContainer, put = __set__buyContainer))::UnityEngine::GameObject* _buyContainer;

  /// @brief Field _loadingControl, offset 0x90, size 0x8
  __declspec(property(get = __get__loadingControl, put = __set__loadingControl))::GlobalNamespace::LoadingControl* _loadingControl;

  /// @brief Field _requireInternetContainer, offset 0x98, size 0x8
  __declspec(property(get = __get__requireInternetContainer, put = __set__requireInternetContainer))::UnityEngine::GameObject* _requireInternetContainer;

  /// @brief Field _kawaseBlurRenderer, offset 0xa0, size 0x8
  __declspec(property(get = __get__kawaseBlurRenderer, put = __set__kawaseBlurRenderer))::GlobalNamespace::KawaseBlurRendererSO* _kawaseBlurRenderer;

  /// @brief Field _additionalContentModel, offset 0xa8, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _dlcPromoPanelModel, offset 0xb0, size 0x8
  __declspec(property(get = __get__dlcPromoPanelModel, put = __set__dlcPromoPanelModel))::GlobalNamespace::DlcPromoPanelModel* _dlcPromoPanelModel;

  /// @brief Field _analyticsModel, offset 0xb8, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _eventBinder, offset 0xc0, size 0x8
  __declspec(property(get = __get__eventBinder, put = __set__eventBinder))::GlobalNamespace::EventBinder* _eventBinder;

  /// @brief Field _cancellationTokenSource, offset 0xc8, size 0x8
  __declspec(property(get = __get__cancellationTokenSource, put = __set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _pack, offset 0xd0, size 0x8
  __declspec(property(get = __get__pack, put = __set__pack))::GlobalNamespace::IBeatmapLevelPack* _pack;

  /// @brief Field _blurredPackArtwork, offset 0xd8, size 0x8
  __declspec(property(get = __get__blurredPackArtwork, put = __set__blurredPackArtwork))::UnityEngine::Sprite* _blurredPackArtwork;

  constexpr ::UnityEngine::GameObject*& __get__detailWrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__detailWrapper() const;

  constexpr void __set__detailWrapper(::UnityEngine::GameObject* value);

  constexpr ::HMUI::ImageView*& __get__packImage();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__packImage() const;

  constexpr void __set__packImage(::HMUI::ImageView* value);

  constexpr ::UnityEngine::UI::Button*& __get__buyButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__buyButton() const;

  constexpr void __set__buyButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::GameObject*& __get__buyContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__buyContainer() const;

  constexpr void __set__buyContainer(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::LoadingControl*& __get__loadingControl();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& __get__loadingControl() const;

  constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl* value);

  constexpr ::UnityEngine::GameObject*& __get__requireInternetContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__requireInternetContainer() const;

  constexpr void __set__requireInternetContainer(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::KawaseBlurRendererSO*& __get__kawaseBlurRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> const& __get__kawaseBlurRenderer() const;

  constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO* value);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr ::GlobalNamespace::DlcPromoPanelModel*& __get__dlcPromoPanelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& __get__dlcPromoPanelModel() const;

  constexpr void __set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::GlobalNamespace::EventBinder*& __get__eventBinder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& __get__eventBinder() const;

  constexpr void __set__eventBinder(::GlobalNamespace::EventBinder* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__cancellationTokenSource() const;

  constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get__pack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get__pack() const;

  constexpr void __set__pack(::GlobalNamespace::IBeatmapLevelPack* value);

  constexpr ::UnityEngine::Sprite*& __get__blurredPackArtwork();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__blurredPackArtwork() const;

  constexpr void __set__blurredPackArtwork(::UnityEngine::Sprite* value);

  /// @brief Method SetData, addr 0x22bafcc, size 0x3cc, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::IBeatmapLevelPack* pack);

  /// @brief Method DidActivate, addr 0x22bfd34, size 0x24c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22bff88, size 0x10c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy, addr 0x22c0094, size 0x16c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshAvailabilityAsync, addr 0x22bfca0, size 0x94, virtual false, abstract: false, final false
  inline void RefreshAvailabilityAsync();

  /// @brief Method BuyPackButtonWasPressed, addr 0x22c0200, size 0x10c, virtual false, abstract: false, final false
  inline void BuyPackButtonWasPressed();

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x22c030c, size 0x94, virtual false, abstract: false, final false
  inline void OpenLevelPackProductStoreAsync();

  /// @brief Method ShowContent, addr 0x22c03a0, size 0x2d4, virtual false, abstract: false, final false
  /// @param errorText: ::StringW (default: u"")
  inline void ShowContent(::GlobalNamespace::__LevelPackDetailViewController__ContentType contentType, ::StringW errorText = u"");

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x22c0674, size 0x4, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  static inline ::GlobalNamespace::LevelPackDetailViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22c0678, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__16_0, addr 0x22c06e0, size 0x4, virtual false, abstract: false, final false
  inline void _DidActivate_b__16_0();

  // Ctor Parameters [CppParam { name: "", ty: "LevelPackDetailViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelPackDetailViewController(LevelPackDetailViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelPackDetailViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelPackDetailViewController(LevelPackDetailViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelPackDetailViewController();

public:
  /// @brief Field _detailWrapper, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____detailWrapper;

  /// @brief Field _packImage, offset: 0x78, size: 0x8, def value: None
  ::HMUI::ImageView* ____packImage;

  /// @brief Field _buyButton, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____buyButton;

  /// @brief Field _buyContainer, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____buyContainer;

  /// @brief Field _loadingControl, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::LoadingControl* ____loadingControl;

  /// @brief Field _requireInternetContainer, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____requireInternetContainer;

  /// @brief Field _kawaseBlurRenderer, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::KawaseBlurRendererSO* ____kawaseBlurRenderer;

  /// @brief Field _additionalContentModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _dlcPromoPanelModel, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* ____dlcPromoPanelModel;

  /// @brief Field _analyticsModel, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _eventBinder, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::EventBinder* ____eventBinder;

  /// @brief Field _cancellationTokenSource, offset: 0xc8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _pack, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPack* ____pack;

  /// @brief Field _blurredPackArtwork, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____blurredPackArtwork;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackDetailViewController, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____detailWrapper) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____packImage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____buyButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____buyContainer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____loadingControl) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____requireInternetContainer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____kawaseBlurRenderer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____additionalContentModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____dlcPromoPanelModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____analyticsModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____eventBinder) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____cancellationTokenSource) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____pack) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackDetailViewController, ____blurredPackArtwork) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController__ContentType, "", "LevelPackDetailViewController/ContentType");
NEED_NO_BOX(::GlobalNamespace::LevelPackDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackDetailViewController*, "", "LevelPackDetailViewController");
NEED_NO_BOX(::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0*, "", "LevelPackDetailViewController/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21, "", "LevelPackDetailViewController/<OpenLevelPackProductStoreAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19, "", "LevelPackDetailViewController/<RefreshAvailabilityAsync>d__19");
