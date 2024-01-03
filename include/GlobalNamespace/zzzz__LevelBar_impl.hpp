#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LevelBar___Setup_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelBar___Setup_d__17::*)()>(&::GlobalNamespace::__LevelBar___Setup_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x22e3230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelBar___Setup_d__17>::get(), "MoveNext",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelBar___Setup_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelBar___Setup_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::__LevelBar___Setup_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x100c;
  constexpr static std::size_t addrs = 0x22e3b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelBar___Setup_d__17>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__LevelBar___Setup_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__LevelBar___Setup_d__17::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelBar___Setup_d__17>::get(), "MoveNext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LevelBar___Setup_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelBar___Setup_d__17>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelBar*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "beatmapDifficulty", ty:
// "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapCharacteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelBar___Setup_d__17::__LevelBar___Setup_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                ::GlobalNamespace::LevelBar* __4__this, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                                ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                                ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->previewBeatmapLevel = previewBeatmapLevel;
  this->beatmapDifficulty = beatmapDifficulty;
  this->beatmapCharacteristic = beatmapCharacteristic;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelBar___Setup_d__17::__LevelBar___Setup_d__17() {}
//  Writing Method size for method: ::GlobalNamespace::LevelBar.set_hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)(bool)>(&::GlobalNamespace::LevelBar::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22dfa2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "set_hide", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(
    &::GlobalNamespace::LevelBar::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22e3208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)(
    ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::LevelBar::Setup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22cff58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)()>(&::GlobalNamespace::LevelBar::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22e3214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)()>(&::GlobalNamespace::LevelBar::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e3228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::ImageView*& GlobalNamespace::LevelBar::__get__songArtworkImageView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songArtworkImageView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& GlobalNamespace::LevelBar::__get__songArtworkImageView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songArtworkImageView;
}
constexpr void GlobalNamespace::LevelBar::__set__songArtworkImageView(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songArtworkImageView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::LevelBar::__get__songNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songNameText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::LevelBar::__get__songNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songNameText;
}
constexpr void GlobalNamespace::LevelBar::__set__songNameText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::LevelBar::__get__authorNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authorNameText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::LevelBar::__get__authorNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authorNameText;
}
constexpr void GlobalNamespace::LevelBar::__set__authorNameText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____authorNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelBar::__get__showSongSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showSongSubName;
}
constexpr bool const& GlobalNamespace::LevelBar::__get__showSongSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showSongSubName;
}
constexpr void GlobalNamespace::LevelBar::__set__showSongSubName(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showSongSubName = value;
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::LevelBar::__get__singleLineSongInfoContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleLineSongInfoContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::LevelBar::__get__singleLineSongInfoContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleLineSongInfoContainer;
}
constexpr void GlobalNamespace::LevelBar::__set__singleLineSongInfoContainer(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____singleLineSongInfoContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::LevelBar::__get__multiLineSongInfoContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineSongInfoContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::LevelBar::__get__multiLineSongInfoContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineSongInfoContainer;
}
constexpr void GlobalNamespace::LevelBar::__set__multiLineSongInfoContainer(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiLineSongInfoContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::LevelBar::__get__multiLineSongNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineSongNameText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::LevelBar::__get__multiLineSongNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineSongNameText;
}
constexpr void GlobalNamespace::LevelBar::__set__multiLineSongNameText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiLineSongNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::LevelBar::__get__multiLineAuthorNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineAuthorNameText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::LevelBar::__get__multiLineAuthorNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineAuthorNameText;
}
constexpr void GlobalNamespace::LevelBar::__set__multiLineAuthorNameText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiLineAuthorNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelBar::__get__showDifficultyAndCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showDifficultyAndCharacteristic;
}
constexpr bool const& GlobalNamespace::LevelBar::__get__showDifficultyAndCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showDifficultyAndCharacteristic;
}
constexpr void GlobalNamespace::LevelBar::__set__showDifficultyAndCharacteristic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showDifficultyAndCharacteristic = value;
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::LevelBar::__get__difficultyText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::LevelBar::__get__difficultyText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyText;
}
constexpr void GlobalNamespace::LevelBar::__set__difficultyText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ImageView*& GlobalNamespace::LevelBar::__get__characteristicIconImageView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicIconImageView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& GlobalNamespace::LevelBar::__get__characteristicIconImageView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicIconImageView;
}
constexpr void GlobalNamespace::LevelBar::__set__characteristicIconImageView(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____characteristicIconImageView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelBar::__get__useArtworkBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useArtworkBackground;
}
constexpr bool const& GlobalNamespace::LevelBar::__get__useArtworkBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useArtworkBackground;
}
constexpr void GlobalNamespace::LevelBar::__set__useArtworkBackground(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useArtworkBackground = value;
}
constexpr ::HMUI::ImageView*& GlobalNamespace::LevelBar::__get__artworkBackgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____artworkBackgroundImage;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& GlobalNamespace::LevelBar::__get__artworkBackgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____artworkBackgroundImage;
}
constexpr void GlobalNamespace::LevelBar::__set__artworkBackgroundImage(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____artworkBackgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LevelBar::__get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::LevelBar::__get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::LevelBar::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelBar::set_hide(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "set_hide", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelBar::Setup(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previewBeatmapLevel);
}
inline void GlobalNamespace::LevelBar::Setup(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                             ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previewBeatmapLevel, beatmapCharacteristic, beatmapDifficulty);
}
inline void GlobalNamespace::LevelBar::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelBar* GlobalNamespace::LevelBar::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelBar*>());
}
inline void GlobalNamespace::LevelBar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelBar::LevelBar() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
