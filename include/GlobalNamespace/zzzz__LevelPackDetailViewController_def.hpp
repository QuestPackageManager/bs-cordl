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
class IBeatmapLevelPack;
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
struct __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;
}
namespace GlobalNamespace {
class __LevelPackDetailViewController____c__DisplayClass16_0;
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
namespace System {
class Action;
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
// Dependencies: []
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5666))
// CS Name: ::LevelPackDetailViewController::<>c__DisplayClass16_0*
class CORDL_TYPE __LevelPackDetailViewController____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field handleDidPressRefreshButton, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handleDidPressRefreshButton, put = __cordl_internal_set_handleDidPressRefreshButton))::System::Action* handleDidPressRefreshButton;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this;

  constexpr ::System::Action*& __cordl_internal_get_handleDidPressRefreshButton();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_handleDidPressRefreshButton() const;

  constexpr void __cordl_internal_set_handleDidPressRefreshButton(::System::Action* value);

  constexpr ::UnityW<::GlobalNamespace::LevelPackDetailViewController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::LevelPackDetailViewController> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LevelPackDetailViewController> value);

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
  ::UnityW<::GlobalNamespace::LevelPackDetailViewController> _____4__this;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(16270)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5667)) CS Name:
// ::LevelPackDetailViewController::<RefreshAvailabilityAsync>d__19
struct CORDL_TYPE __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x22c073c, size 0x490, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c0bcc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelPackDetailViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                             ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this,
                                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19();

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(16271)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 895 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5668)) CS Name:
// ::LevelPackDetailViewController::<OpenLevelPackProductStoreAsync>d__21
struct CORDL_TYPE __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x22c0bd8, size 0x3f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c0fcc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelPackDetailViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                   ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21();

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13605))]
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
  __declspec(property(get = __cordl_internal_get__detailWrapper, put = __cordl_internal_set__detailWrapper))::UnityW<::UnityEngine::GameObject> _detailWrapper;

  /// @brief Field _packImage, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__packImage, put = __cordl_internal_set__packImage))::UnityW<::HMUI::ImageView> _packImage;

  /// @brief Field _buyButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__buyButton, put = __cordl_internal_set__buyButton))::UnityW<::UnityEngine::UI::Button> _buyButton;

  /// @brief Field _buyContainer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__buyContainer, put = __cordl_internal_set__buyContainer))::UnityW<::UnityEngine::GameObject> _buyContainer;

  /// @brief Field _loadingControl, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl))::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _requireInternetContainer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__requireInternetContainer, put = __cordl_internal_set__requireInternetContainer))::UnityW<::UnityEngine::GameObject> _requireInternetContainer;

  /// @brief Field _kawaseBlurRenderer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__kawaseBlurRenderer, put = __cordl_internal_set__kawaseBlurRenderer))::UnityW<::GlobalNamespace::KawaseBlurRendererSO> _kawaseBlurRenderer;

  /// @brief Field _additionalContentModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _dlcPromoPanelModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelModel, put = __cordl_internal_set__dlcPromoPanelModel))::GlobalNamespace::DlcPromoPanelModel* _dlcPromoPanelModel;

  /// @brief Field _analyticsModel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _eventBinder, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBinder, put = __cordl_internal_set__eventBinder))::GlobalNamespace::EventBinder* _eventBinder;

  /// @brief Field _cancellationTokenSource, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _pack, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__pack, put = __cordl_internal_set__pack))::GlobalNamespace::IBeatmapLevelPack* _pack;

  /// @brief Field _blurredPackArtwork, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__blurredPackArtwork, put = __cordl_internal_set__blurredPackArtwork))::UnityW<::UnityEngine::Sprite> _blurredPackArtwork;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__detailWrapper();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__detailWrapper() const;

  constexpr void __cordl_internal_set__detailWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__packImage();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__packImage() const;

  constexpr void __cordl_internal_set__packImage(::UnityW<::HMUI::ImageView> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__buyButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__buyButton() const;

  constexpr void __cordl_internal_set__buyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__buyContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__buyContainer() const;

  constexpr void __cordl_internal_set__buyContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__requireInternetContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__requireInternetContainer() const;

  constexpr void __cordl_internal_set__requireInternetContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& __cordl_internal_get__kawaseBlurRenderer();

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& __cordl_internal_get__kawaseBlurRenderer() const;

  constexpr void __cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __cordl_internal_get__additionalContentModel() const;

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr ::GlobalNamespace::DlcPromoPanelModel*& __cordl_internal_get__dlcPromoPanelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& __cordl_internal_get__dlcPromoPanelModel() const;

  constexpr void __cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::GlobalNamespace::EventBinder*& __cordl_internal_get__eventBinder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& __cordl_internal_get__eventBinder() const;

  constexpr void __cordl_internal_set__eventBinder(::GlobalNamespace::EventBinder* value);

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __cordl_internal_get__pack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __cordl_internal_get__pack() const;

  constexpr void __cordl_internal_set__pack(::GlobalNamespace::IBeatmapLevelPack* value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__blurredPackArtwork();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__blurredPackArtwork() const;

  constexpr void __cordl_internal_set__blurredPackArtwork(::UnityW<::UnityEngine::Sprite> value);

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
  inline void ShowContent(::GlobalNamespace::__LevelPackDetailViewController__ContentType contentType, ::StringW errorText);

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
  ::UnityW<::UnityEngine::Sprite> ____blurredPackArtwork;

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
