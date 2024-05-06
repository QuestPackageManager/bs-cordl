#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelBar)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct __LevelBar___Setup_d__18;
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
namespace System::Threading {
struct CancellationToken;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
struct __LevelBar___Setup_d__18;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelBar);
MARK_VAL_T(::GlobalNamespace::__LevelBar___Setup_d__18);
// Type: ::<Setup>d__18
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelBar::<Setup>d__18
struct CORDL_TYPE __LevelBar___Setup_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x266af68, size 0x6c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x266b630, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelBar___Setup_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelBar>", modifiers: "",
  // def_value: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevel_5__2", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__3", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: None }]
  constexpr __LevelBar___Setup_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelBar> __4__this,
                                     ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2, ::System::Threading::CancellationToken _cancellationToken_5__3,
                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> __4__this;

  /// @brief Field beatmapKey, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field <beatmapLevel>5__2, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2;

  /// @brief Field <cancellationToken>5__3, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__3;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelBar___Setup_d__18, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__18, beatmapKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__18, _beatmapLevel_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__18, _cancellationToken_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__18, __u__1) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelBar
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelBar*
class CORDL_TYPE LevelBar : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Setup_d__18 = ::GlobalNamespace::__LevelBar___Setup_d__18;

  /// @brief Field _artworkBackgroundImage, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__artworkBackgroundImage, put = __cordl_internal_set__artworkBackgroundImage))::UnityW<::HMUI::ImageView> _artworkBackgroundImage;

  /// @brief Field _authorNameText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__authorNameText, put = __cordl_internal_set__authorNameText))::UnityW<::TMPro::TextMeshProUGUI> _authorNameText;

  /// @brief Field _beatmapLevelsModel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _cancellationTokenSource, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _characteristicIconImageView, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristicIconImageView, put = __cordl_internal_set__characteristicIconImageView))::UnityW<::HMUI::ImageView> _characteristicIconImageView;

  /// @brief Field _defaultArtworkImage, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultArtworkImage, put = __cordl_internal_set__defaultArtworkImage))::UnityW<::UnityEngine::Sprite> _defaultArtworkImage;

  /// @brief Field _difficultyText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyText, put = __cordl_internal_set__difficultyText))::UnityW<::TMPro::TextMeshProUGUI> _difficultyText;

  /// @brief Field _multiLineAuthorNameText, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__multiLineAuthorNameText, put = __cordl_internal_set__multiLineAuthorNameText))::UnityW<::TMPro::TextMeshProUGUI> _multiLineAuthorNameText;

  /// @brief Field _multiLineSongInfoContainer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__multiLineSongInfoContainer, put = __cordl_internal_set__multiLineSongInfoContainer))::UnityW<::UnityEngine::GameObject> _multiLineSongInfoContainer;

  /// @brief Field _multiLineSongNameText, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__multiLineSongNameText, put = __cordl_internal_set__multiLineSongNameText))::UnityW<::TMPro::TextMeshProUGUI> _multiLineSongNameText;

  /// @brief Field _showDifficultyAndCharacteristic, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__showDifficultyAndCharacteristic, put = __cordl_internal_set__showDifficultyAndCharacteristic)) bool _showDifficultyAndCharacteristic;

  /// @brief Field _showSongSubName, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__showSongSubName, put = __cordl_internal_set__showSongSubName)) bool _showSongSubName;

  /// @brief Field _singleLineSongInfoContainer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__singleLineSongInfoContainer,
                      put = __cordl_internal_set__singleLineSongInfoContainer))::UnityW<::UnityEngine::GameObject> _singleLineSongInfoContainer;

  /// @brief Field _songArtworkImageView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__songArtworkImageView, put = __cordl_internal_set__songArtworkImageView))::UnityW<::HMUI::ImageView> _songArtworkImageView;

  /// @brief Field _songNameText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songNameText, put = __cordl_internal_set__songNameText))::UnityW<::TMPro::TextMeshProUGUI> _songNameText;

  /// @brief Field _useArtworkBackground, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__useArtworkBackground, put = __cordl_internal_set__useArtworkBackground)) bool _useArtworkBackground;

  __declspec(property(put = set_hide)) bool hide;

  static inline ::GlobalNamespace::LevelBar* New_ctor();

  /// @brief Method OnDestroy, addr 0x266af4c, size 0x14, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Setup, addr 0x266ae9c, size 0xb0, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::BeatmapKey beatmapKey);

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__artworkBackgroundImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__artworkBackgroundImage();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__authorNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__authorNameText();

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__characteristicIconImageView() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__characteristicIconImageView();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__defaultArtworkImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__defaultArtworkImage();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__difficultyText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__difficultyText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__multiLineAuthorNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__multiLineAuthorNameText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__multiLineSongInfoContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__multiLineSongInfoContainer();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__multiLineSongNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__multiLineSongNameText();

  constexpr bool const& __cordl_internal_get__showDifficultyAndCharacteristic() const;

  constexpr bool& __cordl_internal_get__showDifficultyAndCharacteristic();

  constexpr bool const& __cordl_internal_get__showSongSubName() const;

  constexpr bool& __cordl_internal_get__showSongSubName();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__singleLineSongInfoContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__singleLineSongInfoContainer();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__songArtworkImageView() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__songArtworkImageView();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__songNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__songNameText();

  constexpr bool const& __cordl_internal_get__useArtworkBackground() const;

  constexpr bool& __cordl_internal_get__useArtworkBackground();

  constexpr void __cordl_internal_set__artworkBackgroundImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__authorNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__characteristicIconImageView(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__defaultArtworkImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__difficultyText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__multiLineAuthorNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__multiLineSongInfoContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__multiLineSongNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__showDifficultyAndCharacteristic(bool value);

  constexpr void __cordl_internal_set__showSongSubName(bool value);

  constexpr void __cordl_internal_set__singleLineSongInfoContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__songArtworkImageView(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__songNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__useArtworkBackground(bool value);

  /// @brief Method .ctor, addr 0x266af60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_hide, addr 0x266ae70, size 0x2c, virtual false, abstract: false, final false
  inline void set_hide(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelBar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelBar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelBar(LevelBar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelBar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelBar(LevelBar const&) = delete;

  /// @brief Field _songArtworkImageView, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____songArtworkImageView;

  /// @brief Field _songNameText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____songNameText;

  /// @brief Field _authorNameText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____authorNameText;

  /// @brief Field _showSongSubName, offset: 0x30, size: 0x1, def value: None
  bool ____showSongSubName;

  /// @brief Field _singleLineSongInfoContainer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____singleLineSongInfoContainer;

  /// @brief Field _multiLineSongInfoContainer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____multiLineSongInfoContainer;

  /// @brief Field _multiLineSongNameText, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____multiLineSongNameText;

  /// @brief Field _multiLineAuthorNameText, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____multiLineAuthorNameText;

  /// @brief Field _showDifficultyAndCharacteristic, offset: 0x58, size: 0x1, def value: None
  bool ____showDifficultyAndCharacteristic;

  /// @brief Field _difficultyText, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____difficultyText;

  /// @brief Field _characteristicIconImageView, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____characteristicIconImageView;

  /// @brief Field _useArtworkBackground, offset: 0x70, size: 0x1, def value: None
  bool ____useArtworkBackground;

  /// @brief Field _artworkBackgroundImage, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____artworkBackgroundImage;

  /// @brief Field _defaultArtworkImage, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____defaultArtworkImage;

  /// @brief Field _beatmapLevelsModel, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _cancellationTokenSource, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelBar, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____songArtworkImageView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____songNameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____authorNameText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____showSongSubName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____singleLineSongInfoContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____multiLineSongInfoContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____multiLineSongNameText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____multiLineAuthorNameText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____showDifficultyAndCharacteristic) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____difficultyText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____characteristicIconImageView) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____useArtworkBackground) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____artworkBackgroundImage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____defaultArtworkImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____beatmapLevelsModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelBar, ____cancellationTokenSource) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelBar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelBar*, "", "LevelBar");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelBar___Setup_d__18, "", "LevelBar/<Setup>d__18");
