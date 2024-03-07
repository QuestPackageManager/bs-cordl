#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "GlobalNamespace/zzzz__BlurredCoverImageView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BlurredCoverImageView_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::*)()>(
    &::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x24429f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24430c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::BlurredCoverImageView>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "level", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__BlurredCoverImageView___SetTextureAsync_d__6(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::BlurredCoverImageView> __4__this, ::GlobalNamespace::BeatmapLevel* level,
    ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->level = level;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__BlurredCoverImageView___SetTextureAsync_d__6() {}
//  Writing Method size for method: ::GlobalNamespace::BlurredCoverImageView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlurredCoverImageView::*)()>(&::GlobalNamespace::BlurredCoverImageView::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24428a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurredCoverImageView.SetTextureAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlurredCoverImageView::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BlurredCoverImageView::SetTextureAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x244294c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(), "SetTextureAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurredCoverImageView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlurredCoverImageView::*)()>(&::GlobalNamespace::BlurredCoverImageView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24429ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__coverImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__coverImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr void GlobalNamespace::BlurredCoverImageView::__cordl_internal_set__coverImage(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coverImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__kawaseBlurRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__kawaseBlurRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr void GlobalNamespace::BlurredCoverImageView::__cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kawaseBlurRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__settingTextureForLevelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingTextureForLevelId;
}
constexpr ::StringW const& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__settingTextureForLevelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingTextureForLevelId;
}
constexpr void GlobalNamespace::BlurredCoverImageView::__cordl_internal_set__settingTextureForLevelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingTextureForLevelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::BlurredCoverImageView::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__blurredCoverTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurredCoverTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BlurredCoverImageView::__cordl_internal_get__blurredCoverTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurredCoverTexture;
}
constexpr void GlobalNamespace::BlurredCoverImageView::__cordl_internal_set__blurredCoverTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blurredCoverTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BlurredCoverImageView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BlurredCoverImageView::SetTextureAsync(::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(), "SetTextureAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline ::GlobalNamespace::BlurredCoverImageView* GlobalNamespace::BlurredCoverImageView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BlurredCoverImageView*>());
}
inline void GlobalNamespace::BlurredCoverImageView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlurredCoverImageView::BlurredCoverImageView() {}
