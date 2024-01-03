#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PreviewBeatmapLevelSO)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
struct __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60;
}
namespace GlobalNamespace {
struct __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
namespace GlobalNamespace {
struct __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60;
}
namespace GlobalNamespace {
struct __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PreviewBeatmapLevelSO);
MARK_VAL_T(::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60);
MARK_VAL_T(::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59);
// Type: ::<GetPreviewAudioClipAsync>d__59
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 276
// }), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(15594)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 276 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4405)) CS Name: ::PreviewBeatmapLevelSO::<GetPreviewAudioClipAsync>d__59
struct CORDL_TYPE __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x234bdec, size 0x230, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x234c01c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PreviewBeatmapLevelSO*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }]
  constexpr __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> __t__builder,
                                                                     ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::PreviewBeatmapLevelSO* __4__this,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PreviewBeatmapLevelSO* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetCoverImageAsync>d__60
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 777 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(10291)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 777 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2677))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4406)) CS Name: ::PreviewBeatmapLevelSO::<GetCoverImageAsync>d__60
struct CORDL_TYPE __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x234c074, size 0x230, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x234c2a4, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PreviewBeatmapLevelSO*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
  constexpr __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder,
                                                               ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::PreviewBeatmapLevelSO* __4__this,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PreviewBeatmapLevelSO* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PreviewBeatmapLevelSO
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(4658))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4407))
// CS Name: ::PreviewBeatmapLevelSO*
class CORDL_TYPE PreviewBeatmapLevelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using _GetCoverImageAsync_d__60 = ::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60;

  using _GetPreviewAudioClipAsync_d__59 = ::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59;

  /// @brief Field _levelID, offset 0x18, size 0x8
  __declspec(property(get = __get__levelID, put = __set__levelID))::StringW _levelID;

  /// @brief Field _songName, offset 0x20, size 0x8
  __declspec(property(get = __get__songName, put = __set__songName))::StringW _songName;

  /// @brief Field _songSubName, offset 0x28, size 0x8
  __declspec(property(get = __get__songSubName, put = __set__songSubName))::StringW _songSubName;

  /// @brief Field _songAuthorName, offset 0x30, size 0x8
  __declspec(property(get = __get__songAuthorName, put = __set__songAuthorName))::StringW _songAuthorName;

  /// @brief Field _levelAuthorName, offset 0x38, size 0x8
  __declspec(property(get = __get__levelAuthorName, put = __set__levelAuthorName))::StringW _levelAuthorName;

  /// @brief Field _previewAudioClip, offset 0x40, size 0x8
  __declspec(property(get = __get__previewAudioClip, put = __set__previewAudioClip))::UnityEngine::AudioClip* _previewAudioClip;

  /// @brief Field _beatsPerMinute, offset 0x48, size 0x4
  __declspec(property(get = __get__beatsPerMinute, put = __set__beatsPerMinute)) float_t _beatsPerMinute;

  /// @brief Field _songTimeOffset, offset 0x4c, size 0x4
  __declspec(property(get = __get__songTimeOffset, put = __set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _shuffle, offset 0x50, size 0x4
  __declspec(property(get = __get__shuffle, put = __set__shuffle)) float_t _shuffle;

  /// @brief Field _shufflePeriod, offset 0x54, size 0x4
  __declspec(property(get = __get__shufflePeriod, put = __set__shufflePeriod)) float_t _shufflePeriod;

  /// @brief Field _previewStartTime, offset 0x58, size 0x4
  __declspec(property(get = __get__previewStartTime, put = __set__previewStartTime)) float_t _previewStartTime;

  /// @brief Field _previewDuration, offset 0x5c, size 0x4
  __declspec(property(get = __get__previewDuration, put = __set__previewDuration)) float_t _previewDuration;

  /// @brief Field _songDuration, offset 0x60, size 0x4
  __declspec(property(get = __get__songDuration, put = __set__songDuration)) float_t _songDuration;

  /// @brief Field _coverImage, offset 0x68, size 0x8
  __declspec(property(get = __get__coverImage, put = __set__coverImage))::UnityEngine::Sprite* _coverImage;

  /// @brief Field _environmentInfo, offset 0x70, size 0x8
  __declspec(property(get = __get__environmentInfo, put = __set__environmentInfo))::GlobalNamespace::EnvironmentInfoSO* _environmentInfo;

  /// @brief Field _allDirectionsEnvironmentInfo, offset 0x78, size 0x8
  __declspec(property(get = __get__allDirectionsEnvironmentInfo, put = __set__allDirectionsEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* _allDirectionsEnvironmentInfo;

  /// @brief Field _environmentInfos, offset 0x80, size 0x8
  __declspec(property(get = __get__environmentInfos, put = __set__environmentInfos))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> _environmentInfos;

  /// @brief Field _previewDifficultyBeatmapSets, offset 0x88, size 0x8
  __declspec(property(
      get = __get__previewDifficultyBeatmapSets,
      put = __set__previewDifficultyBeatmapSets))::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> _previewDifficultyBeatmapSets;

  /// @brief Field _contentRating, offset 0x90, size 0x4
  __declspec(property(get = __get__contentRating, put = __set__contentRating))::GlobalNamespace::PlayerSensitivityFlag _contentRating;

  /// @brief Field _ignore360MovementBeatmaps, offset 0x94, size 0x1
  __declspec(property(get = __get__ignore360MovementBeatmaps, put = __set__ignore360MovementBeatmaps)) bool _ignore360MovementBeatmaps;

  /// @brief Field _no360MovementPreviewDifficultyBeatmapSets, offset 0x98, size 0x8
  __declspec(property(get = __get__no360MovementPreviewDifficultyBeatmapSets, put = __set__no360MovementPreviewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<
      ::GlobalNamespace::PreviewDifficultyBeatmapSet*>* _no360MovementPreviewDifficultyBeatmapSets;

  __declspec(property(get = get_levelID))::StringW levelID;

  __declspec(property(get = get_songName))::StringW songName;

  __declspec(property(get = get_songSubName))::StringW songSubName;

  __declspec(property(get = get_songAuthorName))::StringW songAuthorName;

  __declspec(property(get = get_levelAuthorName))::StringW levelAuthorName;

  __declspec(property(get = get_beatsPerMinute)) float_t beatsPerMinute;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_songDuration)) float_t songDuration;

  __declspec(property(get = get_shuffle)) float_t shuffle;

  __declspec(property(get = get_shufflePeriod)) float_t shufflePeriod;

  __declspec(property(get = get_previewStartTime)) float_t previewStartTime;

  __declspec(property(get = get_previewDuration)) float_t previewDuration;

  __declspec(property(get = get_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  __declspec(property(get = get_allDirectionsEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;

  __declspec(property(get = get_environmentInfos))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos;

  __declspec(property(get = get_songPreviewAudioClip))::UnityEngine::AudioClip* songPreviewAudioClip;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  __declspec(property(get = get_previewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr ::GlobalNamespace::IPreviewBeatmapLevel* i___GlobalNamespace__IPreviewBeatmapLevel() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr ::GlobalNamespace::IAssetSongPreviewAudioClipProvider* i___GlobalNamespace__IAssetSongPreviewAudioClipProvider() noexcept;

  constexpr ::StringW& __get__levelID();

  constexpr ::StringW const& __get__levelID() const;

  constexpr void __set__levelID(::StringW value);

  constexpr ::StringW& __get__songName();

  constexpr ::StringW const& __get__songName() const;

  constexpr void __set__songName(::StringW value);

  constexpr ::StringW& __get__songSubName();

  constexpr ::StringW const& __get__songSubName() const;

  constexpr void __set__songSubName(::StringW value);

  constexpr ::StringW& __get__songAuthorName();

  constexpr ::StringW const& __get__songAuthorName() const;

  constexpr void __set__songAuthorName(::StringW value);

  constexpr ::StringW& __get__levelAuthorName();

  constexpr ::StringW const& __get__levelAuthorName() const;

  constexpr void __set__levelAuthorName(::StringW value);

  constexpr ::UnityEngine::AudioClip*& __get__previewAudioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__previewAudioClip() const;

  constexpr void __set__previewAudioClip(::UnityEngine::AudioClip* value);

  constexpr float_t& __get__beatsPerMinute();

  constexpr float_t const& __get__beatsPerMinute() const;

  constexpr void __set__beatsPerMinute(float_t value);

  constexpr float_t& __get__songTimeOffset();

  constexpr float_t const& __get__songTimeOffset() const;

  constexpr void __set__songTimeOffset(float_t value);

  constexpr float_t& __get__shuffle();

  constexpr float_t const& __get__shuffle() const;

  constexpr void __set__shuffle(float_t value);

  constexpr float_t& __get__shufflePeriod();

  constexpr float_t const& __get__shufflePeriod() const;

  constexpr void __set__shufflePeriod(float_t value);

  constexpr float_t& __get__previewStartTime();

  constexpr float_t const& __get__previewStartTime() const;

  constexpr void __set__previewStartTime(float_t value);

  constexpr float_t& __get__previewDuration();

  constexpr float_t const& __get__previewDuration() const;

  constexpr void __set__previewDuration(float_t value);

  constexpr float_t& __get__songDuration();

  constexpr float_t const& __get__songDuration() const;

  constexpr void __set__songDuration(float_t value);

  constexpr ::UnityEngine::Sprite*& __get__coverImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__coverImage() const;

  constexpr void __set__coverImage(::UnityEngine::Sprite* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__environmentInfo() const;

  constexpr void __set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__allDirectionsEnvironmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__allDirectionsEnvironmentInfo() const;

  constexpr void __set__allDirectionsEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>& __get__environmentInfos();

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> const& __get__environmentInfos() const;

  constexpr void __set__environmentInfos(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>& __get__previewDifficultyBeatmapSets();

  constexpr ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> const& __get__previewDifficultyBeatmapSets() const;

  constexpr void __set__previewDifficultyBeatmapSets(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> value);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__contentRating();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__contentRating() const;

  constexpr void __set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr bool& __get__ignore360MovementBeatmaps();

  constexpr bool const& __get__ignore360MovementBeatmaps() const;

  constexpr void __set__ignore360MovementBeatmaps(bool value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*& __get__no360MovementPreviewDifficultyBeatmapSets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> const&
  __get__no360MovementPreviewDifficultyBeatmapSets() const;

  constexpr void __set__no360MovementPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);

  /// @brief Method get_levelID, addr 0x234baf8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelID();

  /// @brief Method get_songName, addr 0x234bb00, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songName();

  /// @brief Method get_songSubName, addr 0x234bb08, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName, addr 0x234bb10, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName, addr 0x234bb18, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute, addr 0x234bb20, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset, addr 0x234bb28, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songTimeOffset();

  /// @brief Method get_songDuration, addr 0x234bb30, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songDuration();

  /// @brief Method get_shuffle, addr 0x234bb38, size 0x8, virtual true, abstract: false, final true
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod, addr 0x234bb40, size 0x8, virtual true, abstract: false, final true
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime, addr 0x234bb48, size 0x8, virtual true, abstract: false, final true
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration, addr 0x234bb50, size 0x8, virtual true, abstract: false, final true
  inline float_t get_previewDuration();

  /// @brief Method get_environmentInfo, addr 0x234bb58, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_allDirectionsEnvironmentInfo, addr 0x234bb60, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();

  /// @brief Method get_environmentInfos, addr 0x234bb68, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos();

  /// @brief Method get_songPreviewAudioClip, addr 0x234bb70, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::AudioClip* get_songPreviewAudioClip();

  /// @brief Method get_contentRating, addr 0x234bb78, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method get_previewDifficultyBeatmapSets, addr 0x234bb80, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method OnEnable, addr 0x234bb9c, size 0x28, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method InitData, addr 0x234bbc4, size 0x20, virtual false, abstract: false, final false
  inline void InitData();

  /// @brief Method GetPreviewAudioClipAsync, addr 0x234bbe4, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetCoverImageAsync, addr 0x234bce0, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::PreviewBeatmapLevelSO* New_ctor();

  /// @brief Method .ctor, addr 0x234bddc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreviewBeatmapLevelSO(PreviewBeatmapLevelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreviewBeatmapLevelSO(PreviewBeatmapLevelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreviewBeatmapLevelSO();

public:
  /// @brief Field _levelID, offset: 0x18, size: 0x8, def value: None
  ::StringW ____levelID;

  /// @brief Field _songName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____songName;

  /// @brief Field _songSubName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____songSubName;

  /// @brief Field _songAuthorName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____songAuthorName;

  /// @brief Field _levelAuthorName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____levelAuthorName;

  /// @brief Field _previewAudioClip, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____previewAudioClip;

  /// @brief Field _beatsPerMinute, offset: 0x48, size: 0x4, def value: None
  float_t ____beatsPerMinute;

  /// @brief Field _songTimeOffset, offset: 0x4c, size: 0x4, def value: None
  float_t ____songTimeOffset;

  /// @brief Field _shuffle, offset: 0x50, size: 0x4, def value: None
  float_t ____shuffle;

  /// @brief Field _shufflePeriod, offset: 0x54, size: 0x4, def value: None
  float_t ____shufflePeriod;

  /// @brief Field _previewStartTime, offset: 0x58, size: 0x4, def value: None
  float_t ____previewStartTime;

  /// @brief Field _previewDuration, offset: 0x5c, size: 0x4, def value: None
  float_t ____previewDuration;

  /// @brief Field _songDuration, offset: 0x60, size: 0x4, def value: None
  float_t ____songDuration;

  /// @brief Field _coverImage, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____coverImage;

  /// @brief Field _environmentInfo, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____environmentInfo;

  /// @brief Field _allDirectionsEnvironmentInfo, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____allDirectionsEnvironmentInfo;

  /// @brief Field _environmentInfos, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> ____environmentInfos;

  /// @brief Field _previewDifficultyBeatmapSets, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> ____previewDifficultyBeatmapSets;

  /// @brief Field _contentRating, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____contentRating;

  /// @brief Field _ignore360MovementBeatmaps, offset: 0x94, size: 0x1, def value: None
  bool ____ignore360MovementBeatmaps;

  /// @brief Field _no360MovementPreviewDifficultyBeatmapSets, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* ____no360MovementPreviewDifficultyBeatmapSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PreviewBeatmapLevelSO, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____levelID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____songName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____songSubName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____songAuthorName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____levelAuthorName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____previewAudioClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____beatsPerMinute) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____songTimeOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____shuffle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____shufflePeriod) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____previewStartTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____previewDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____songDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____coverImage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____environmentInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____allDirectionsEnvironmentInfo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____environmentInfos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____previewDifficultyBeatmapSets) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____contentRating) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____ignore360MovementBeatmaps) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewBeatmapLevelSO, ____no360MovementPreviewDifficultyBeatmapSets) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PreviewBeatmapLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewBeatmapLevelSO*, "", "PreviewBeatmapLevelSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60, "", "PreviewBeatmapLevelSO/<GetCoverImageAsync>d__60");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59, "", "PreviewBeatmapLevelSO/<GetPreviewAudioClipAsync>d__59");
