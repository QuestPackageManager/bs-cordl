#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlurredCoverImageView)
namespace HMUI {
class ImageView;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace GlobalNamespace {
struct __BlurredCoverImageView___SetTextureAsync_d__6;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace UnityEngine {
class Texture2D;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class BlurredCoverImageView;
}
namespace GlobalNamespace {
struct __BlurredCoverImageView___SetTextureAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlurredCoverImageView);
MARK_VAL_T(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6);
// Type: ::<SetTextureAsync>d__6
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10291)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 777
// }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3400))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5774)) CS Name:
// ::BlurredCoverImageView::<SetTextureAsync>d__6
struct CORDL_TYPE __BlurredCoverImageView___SetTextureAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22dfbd8, size 0x808, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22e03e0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BlurredCoverImageView*", modifiers: "",
  // def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers:
  // "", def_value: None }]
  constexpr __BlurredCoverImageView___SetTextureAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                           ::GlobalNamespace::BlurredCoverImageView* __4__this, ::GlobalNamespace::IPreviewBeatmapLevel* level,
                                                           ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BlurredCoverImageView___SetTextureAsync_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BlurredCoverImageView* __4__this;

  /// @brief Field level, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* level;

  /// @brief Field <cancellationToken>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, level) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, _cancellationToken_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BlurredCoverImageView
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5775))
// CS Name: ::BlurredCoverImageView*
class CORDL_TYPE BlurredCoverImageView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SetTextureAsync_d__6 = ::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6;

  /// @brief Field _coverImage, offset 0x18, size 0x8
  __declspec(property(get = __get__coverImage, put = __set__coverImage))::HMUI::ImageView* _coverImage;

  /// @brief Field _kawaseBlurRenderer, offset 0x20, size 0x8
  __declspec(property(get = __get__kawaseBlurRenderer, put = __set__kawaseBlurRenderer))::GlobalNamespace::KawaseBlurRendererSO* _kawaseBlurRenderer;

  /// @brief Field _settingTextureForLevelId, offset 0x28, size 0x8
  __declspec(property(get = __get__settingTextureForLevelId, put = __set__settingTextureForLevelId))::StringW _settingTextureForLevelId;

  /// @brief Field _cancellationTokenSource, offset 0x30, size 0x8
  __declspec(property(get = __get__cancellationTokenSource, put = __set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _blurredCoverTexture, offset 0x38, size 0x8
  __declspec(property(get = __get__blurredCoverTexture, put = __set__blurredCoverTexture))::UnityEngine::Texture2D* _blurredCoverTexture;

  constexpr ::HMUI::ImageView*& __get__coverImage();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__coverImage() const;

  constexpr void __set__coverImage(::HMUI::ImageView* value);

  constexpr ::GlobalNamespace::KawaseBlurRendererSO*& __get__kawaseBlurRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> const& __get__kawaseBlurRenderer() const;

  constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO* value);

  constexpr ::StringW& __get__settingTextureForLevelId();

  constexpr ::StringW const& __get__settingTextureForLevelId() const;

  constexpr void __set__settingTextureForLevelId(::StringW value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__cancellationTokenSource() const;

  constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::UnityEngine::Texture2D*& __get__blurredCoverTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get__blurredCoverTexture() const;

  constexpr void __set__blurredCoverTexture(::UnityEngine::Texture2D* value);

  /// @brief Method OnDestroy, addr 0x22dfa8c, size 0xa4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetTextureAsync, addr 0x22dfb30, size 0xa0, virtual false, abstract: false, final false
  inline void SetTextureAsync(::GlobalNamespace::IPreviewBeatmapLevel* level);

  static inline ::GlobalNamespace::BlurredCoverImageView* New_ctor();

  /// @brief Method .ctor, addr 0x22dfbd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BlurredCoverImageView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlurredCoverImageView(BlurredCoverImageView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlurredCoverImageView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlurredCoverImageView(BlurredCoverImageView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlurredCoverImageView();

public:
  /// @brief Field _coverImage, offset: 0x18, size: 0x8, def value: None
  ::HMUI::ImageView* ____coverImage;

  /// @brief Field _kawaseBlurRenderer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::KawaseBlurRendererSO* ____kawaseBlurRenderer;

  /// @brief Field _settingTextureForLevelId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____settingTextureForLevelId;

  /// @brief Field _cancellationTokenSource, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _blurredCoverTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ____blurredCoverTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlurredCoverImageView, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____coverImage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____kawaseBlurRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____settingTextureForLevelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____cancellationTokenSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurredCoverImageView, ____blurredCoverTexture) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlurredCoverImageView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlurredCoverImageView*, "", "BlurredCoverImageView");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, "", "BlurredCoverImageView/<SetTextureAsync>d__6");
