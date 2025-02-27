#pragma once
// IWYU pragma private; include "GlobalNamespace/BlurredCoverImageView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlurredCoverImageView)
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct BlurredCoverImageView__SetTextureAsync_d__7;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
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
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BlurredCoverImageView;
}
namespace GlobalNamespace {
struct BlurredCoverImageView__SetTextureAsync_d__7;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlurredCoverImageView);
MARK_VAL_T(::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: BlurredCoverImageView/<SetTextureAsync>d__7
struct CORDL_TYPE BlurredCoverImageView__SetTextureAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b0d6dc, size 0x748, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b0de24, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlurredCoverImageView__SetTextureAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::BlurredCoverImageView>", modifiers:
  // "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>",
  // modifiers: "", def_value: None }]
  constexpr BlurredCoverImageView__SetTextureAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                        ::UnityW<::GlobalNamespace::BlurredCoverImageView> __4__this, ::GlobalNamespace::BeatmapLevel* level,
                                                        ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4971 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BlurredCoverImageView> __4__this;

  /// @brief Field level, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* level;

  /// @brief Field <cancellationToken>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7, level) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7, _cancellationToken_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlurredCoverImageView
class CORDL_TYPE BlurredCoverImageView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SetTextureAsync_d__7 = ::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7;

  /// @brief Field _beatmapLevel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel)) ::GlobalNamespace::BeatmapLevel* _beatmapLevel;

  /// @brief Field _blurredCoverTexture, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__blurredCoverTexture, put = __cordl_internal_set__blurredCoverTexture)) ::UnityW<::UnityEngine::Texture2D> _blurredCoverTexture;

  /// @brief Field _cancellationTokenSource, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _coverImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__coverImage, put = __cordl_internal_set__coverImage)) ::UnityW<::HMUI::ImageView> _coverImage;

  /// @brief Field _kawaseBlurRenderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__kawaseBlurRenderer, put = __cordl_internal_set__kawaseBlurRenderer)) ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> _kawaseBlurRenderer;

  /// @brief Field _settingTextureForLevelId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingTextureForLevelId, put = __cordl_internal_set__settingTextureForLevelId)) ::StringW _settingTextureForLevelId;

  static inline ::GlobalNamespace::BlurredCoverImageView* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b0d594, size 0xa4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetTextureAsync, addr 0x3b0d638, size 0x9c, virtual false, abstract: false, final false
  inline void SetTextureAsync(::GlobalNamespace::BeatmapLevel* level);

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__blurredCoverTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__blurredCoverTexture();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__coverImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__coverImage();

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& __cordl_internal_get__kawaseBlurRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& __cordl_internal_get__kawaseBlurRenderer();

  constexpr ::StringW const& __cordl_internal_get__settingTextureForLevelId() const;

  constexpr ::StringW& __cordl_internal_get__settingTextureForLevelId();

  constexpr void __cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__blurredCoverTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__coverImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value);

  constexpr void __cordl_internal_set__settingTextureForLevelId(::StringW value);

  /// @brief Method .ctor, addr 0x3b0d6d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlurredCoverImageView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlurredCoverImageView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlurredCoverImageView(BlurredCoverImageView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlurredCoverImageView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlurredCoverImageView(BlurredCoverImageView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4972 };

  /// @brief Field _coverImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____coverImage;

  /// @brief Field _kawaseBlurRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> ____kawaseBlurRenderer;

  /// @brief Field _beatmapLevel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel;

  /// @brief Field _settingTextureForLevelId, offset: 0x38, size: 0x8, def value: None
  ::StringW ____settingTextureForLevelId;

  /// @brief Field _cancellationTokenSource, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _blurredCoverTexture, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____blurredCoverTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____coverImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____kawaseBlurRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____beatmapLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____settingTextureForLevelId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____cancellationTokenSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____blurredCoverTexture) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlurredCoverImageView, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlurredCoverImageView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlurredCoverImageView*, "", "BlurredCoverImageView");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlurredCoverImageView__SetTextureAsync_d__7, "", "BlurredCoverImageView/<SetTextureAsync>d__7");
