#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelBar)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __LevelBar___Setup_d__17;
}
namespace HMUI {
class ImageView;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
struct __LevelBar___Setup_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelBar);
MARK_VAL_T(::GlobalNamespace::__LevelBar___Setup_d__17);
// Type: ::<Setup>d__17
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10213)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3395)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 765 }), TypeDefinitionIndex(TypeDefinitionIndex(14934)), TypeDefinitionIndex(TypeDefinitionIndex(2675))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(5881)) CS Name: ::LevelBar::<Setup>d__17
struct CORDL_TYPE __LevelBar___Setup_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x219e858 size 0x940 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x219f198 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelBar*", modifiers: "", def_value: None
  // }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty:
  // "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO*", modifiers: "", def_value:
  // None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
  constexpr __LevelBar___Setup_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LevelBar* __4__this,
                                     ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                     ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelBar___Setup_d__17();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelBar* __4__this;

  /// @brief Field previewBeatmapLevel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  /// @brief Field <cancellationToken>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelBar___Setup_d__17, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__17, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__17, previewBeatmapLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__17, beatmapDifficulty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__17, beatmapCharacteristic) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__17, _cancellationToken_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelBar___Setup_d__17, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelBar
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5882))
// CS Name: ::LevelBar*
class CORDL_TYPE LevelBar : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Setup_d__17 = ::GlobalNamespace::__LevelBar___Setup_d__17;

  /// @brief Field _songArtworkImageView, offset 0x18, size 0x8
  __declspec(property(get = __get__songArtworkImageView, put = __set__songArtworkImageView))::HMUI::ImageView* _songArtworkImageView;

  /// @brief Field _songNameText, offset 0x20, size 0x8
  __declspec(property(get = __get__songNameText, put = __set__songNameText))::TMPro::TextMeshProUGUI* _songNameText;

  /// @brief Field _authorNameText, offset 0x28, size 0x8
  __declspec(property(get = __get__authorNameText, put = __set__authorNameText))::TMPro::TextMeshProUGUI* _authorNameText;

  /// @brief Field _showSongSubName, offset 0x30, size 0x1
  __declspec(property(get = __get__showSongSubName, put = __set__showSongSubName)) bool _showSongSubName;

  /// @brief Field _singleLineSongInfoContainer, offset 0x38, size 0x8
  __declspec(property(get = __get__singleLineSongInfoContainer, put = __set__singleLineSongInfoContainer))::UnityEngine::GameObject* _singleLineSongInfoContainer;

  /// @brief Field _multiLineSongInfoContainer, offset 0x40, size 0x8
  __declspec(property(get = __get__multiLineSongInfoContainer, put = __set__multiLineSongInfoContainer))::UnityEngine::GameObject* _multiLineSongInfoContainer;

  /// @brief Field _multiLineSongNameText, offset 0x48, size 0x8
  __declspec(property(get = __get__multiLineSongNameText, put = __set__multiLineSongNameText))::TMPro::TextMeshProUGUI* _multiLineSongNameText;

  /// @brief Field _multiLineAuthorNameText, offset 0x50, size 0x8
  __declspec(property(get = __get__multiLineAuthorNameText, put = __set__multiLineAuthorNameText))::TMPro::TextMeshProUGUI* _multiLineAuthorNameText;

  /// @brief Field _showDifficultyAndCharacteristic, offset 0x58, size 0x1
  __declspec(property(get = __get__showDifficultyAndCharacteristic, put = __set__showDifficultyAndCharacteristic)) bool _showDifficultyAndCharacteristic;

  /// @brief Field _difficultyText, offset 0x60, size 0x8
  __declspec(property(get = __get__difficultyText, put = __set__difficultyText))::TMPro::TextMeshProUGUI* _difficultyText;

  /// @brief Field _characteristicIconImageView, offset 0x68, size 0x8
  __declspec(property(get = __get__characteristicIconImageView, put = __set__characteristicIconImageView))::HMUI::ImageView* _characteristicIconImageView;

  /// @brief Field _useArtworkBackground, offset 0x70, size 0x1
  __declspec(property(get = __get__useArtworkBackground, put = __set__useArtworkBackground)) bool _useArtworkBackground;

  /// @brief Field _artworkBackgroundImage, offset 0x78, size 0x8
  __declspec(property(get = __get__artworkBackgroundImage, put = __set__artworkBackgroundImage))::HMUI::ImageView* _artworkBackgroundImage;

  /// @brief Field _cancellationTokenSource, offset 0x80, size 0x8
  __declspec(property(get = __get__cancellationTokenSource, put = __set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  __declspec(property(put = set_hide)) bool hide;

  constexpr ::HMUI::ImageView*& __get__songArtworkImageView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__songArtworkImageView() const;

  constexpr void __set__songArtworkImageView(::HMUI::ImageView* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__songNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__songNameText() const;

  constexpr void __set__songNameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__authorNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__authorNameText() const;

  constexpr void __set__authorNameText(::TMPro::TextMeshProUGUI* value);

  constexpr bool& __get__showSongSubName();

  constexpr bool const& __get__showSongSubName() const;

  constexpr void __set__showSongSubName(bool value);

  constexpr ::UnityEngine::GameObject*& __get__singleLineSongInfoContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__singleLineSongInfoContainer() const;

  constexpr void __set__singleLineSongInfoContainer(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__multiLineSongInfoContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__multiLineSongInfoContainer() const;

  constexpr void __set__multiLineSongInfoContainer(::UnityEngine::GameObject* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__multiLineSongNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__multiLineSongNameText() const;

  constexpr void __set__multiLineSongNameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__multiLineAuthorNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__multiLineAuthorNameText() const;

  constexpr void __set__multiLineAuthorNameText(::TMPro::TextMeshProUGUI* value);

  constexpr bool& __get__showDifficultyAndCharacteristic();

  constexpr bool const& __get__showDifficultyAndCharacteristic() const;

  constexpr void __set__showDifficultyAndCharacteristic(bool value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__difficultyText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__difficultyText() const;

  constexpr void __set__difficultyText(::TMPro::TextMeshProUGUI* value);

  constexpr ::HMUI::ImageView*& __get__characteristicIconImageView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__characteristicIconImageView() const;

  constexpr void __set__characteristicIconImageView(::HMUI::ImageView* value);

  constexpr bool& __get__useArtworkBackground();

  constexpr bool const& __get__useArtworkBackground() const;

  constexpr void __set__useArtworkBackground(bool value);

  constexpr ::HMUI::ImageView*& __get__artworkBackgroundImage();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__artworkBackgroundImage() const;

  constexpr void __set__artworkBackgroundImage(::HMUI::ImageView* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__cancellationTokenSource() const;

  constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  /// @brief Method set_hide addr 0x219e748 size 0x2c virtual false final false
  inline void set_hide(bool value);

  /// @brief Method Setup addr 0x219e774 size 0xc virtual false final false
  inline void Setup(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);

  /// @brief Method Setup addr 0x219e780 size 0xbc virtual false final false
  inline void Setup(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  /// @brief Method OnDestroy addr 0x219e83c size 0x14 virtual false final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::LevelBar* New_ctor();

  /// @brief Method .ctor addr 0x219e850 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelBar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelBar(LevelBar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelBar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelBar(LevelBar const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelBar();

public:
  /// @brief Field _songArtworkImageView, offset: 0x18, size: 0x8, def value: None
  ::HMUI::ImageView* ____songArtworkImageView;

  /// @brief Field _songNameText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____songNameText;

  /// @brief Field _authorNameText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____authorNameText;

  /// @brief Field _showSongSubName, offset: 0x30, size: 0x1, def value: None
  bool ____showSongSubName;

  /// @brief Field _singleLineSongInfoContainer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____singleLineSongInfoContainer;

  /// @brief Field _multiLineSongInfoContainer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____multiLineSongInfoContainer;

  /// @brief Field _multiLineSongNameText, offset: 0x48, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____multiLineSongNameText;

  /// @brief Field _multiLineAuthorNameText, offset: 0x50, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____multiLineAuthorNameText;

  /// @brief Field _showDifficultyAndCharacteristic, offset: 0x58, size: 0x1, def value: None
  bool ____showDifficultyAndCharacteristic;

  /// @brief Field _difficultyText, offset: 0x60, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____difficultyText;

  /// @brief Field _characteristicIconImageView, offset: 0x68, size: 0x8, def value: None
  ::HMUI::ImageView* ____characteristicIconImageView;

  /// @brief Field _useArtworkBackground, offset: 0x70, size: 0x1, def value: None
  bool ____useArtworkBackground;

  /// @brief Field _artworkBackgroundImage, offset: 0x78, size: 0x8, def value: None
  ::HMUI::ImageView* ____artworkBackgroundImage;

  /// @brief Field _cancellationTokenSource, offset: 0x80, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelBar, 0x88>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::LevelBar, ____cancellationTokenSource) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelBar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelBar*, "", "LevelBar");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelBar___Setup_d__17, "", "LevelBar/<Setup>d__17");
