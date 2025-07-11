#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenCaptureAfterDelay.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureCache_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureAfterDelay_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectController_def.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureAfterDelay_def.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureCache_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay_InitData::*)(
    ::GlobalNamespace::ScreenCaptureCache_ScreenshotType, float_t, int32_t, int32_t)>(&::GlobalNamespace::ScreenCaptureAfterDelay_InitData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4086084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScreenCaptureCache_ScreenshotType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ScreenCaptureCache_ScreenshotType& GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_get_screenshotType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotType;
}
constexpr ::GlobalNamespace::ScreenCaptureCache_ScreenshotType const& GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_get_screenshotType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenshotType;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_set_screenshotType(::GlobalNamespace::ScreenCaptureCache_ScreenshotType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenshotType = value;
}
constexpr float_t& GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_get_screenCaptureTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenCaptureTime;
}
constexpr float_t const& GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_get_screenCaptureTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenCaptureTime;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_set_screenCaptureTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenCaptureTime = value;
}
constexpr int32_t& GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_get_pixelsWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelsWidth;
}
constexpr int32_t const& GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_get_pixelsWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelsWidth;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_set_pixelsWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pixelsWidth = value;
}
constexpr int32_t& GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_get_pixelsHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelsHeight;
}
constexpr int32_t const& GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_get_pixelsHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelsHeight;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay_InitData::__cordl_internal_set_pixelsHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pixelsHeight = value;
}
inline void GlobalNamespace::ScreenCaptureAfterDelay_InitData::_ctor(::GlobalNamespace::ScreenCaptureCache_ScreenshotType screenshotType, float_t screenCaptureTime, int32_t pixelsWidth,
                                                                     int32_t pixelsHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScreenCaptureCache_ScreenshotType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screenshotType, screenCaptureTime, pixelsWidth, pixelsHeight);
}
inline ::GlobalNamespace::ScreenCaptureAfterDelay_InitData* GlobalNamespace::ScreenCaptureAfterDelay_InitData::New_ctor(::GlobalNamespace::ScreenCaptureCache_ScreenshotType screenshotType,
                                                                                                                        float_t screenCaptureTime, int32_t pixelsWidth, int32_t pixelsHeight) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenCaptureAfterDelay_InitData*>(screenshotType, screenCaptureTime, pixelsWidth, pixelsHeight));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenCaptureAfterDelay_InitData::ScreenCaptureAfterDelay_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::*)(int32_t)>(
    &::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4085cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::*)()>(
    &::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x40860e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::*)()>(
    &::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x40860e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::*)()>(
    &::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40862b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::*)()>(
    &::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x40862c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::*)()>(
    &::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40862f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>& GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> const& GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6* GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6::ScreenCaptureAfterDelay__Start_d__6() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ScreenCaptureAfterDelay::*)()>(
    &::GlobalNamespace::ScreenCaptureAfterDelay::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4085c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay::*)()>(&::GlobalNamespace::ScreenCaptureAfterDelay::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4085cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay.HandleMainEffectControllerAfterImageEffectEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay::*)(::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::ScreenCaptureAfterDelay::HandleMainEffectControllerAfterImageEffectEvent)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x4085dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(), "HandleMainEffectControllerAfterImageEffectEvent",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay::*)()>(&::GlobalNamespace::ScreenCaptureAfterDelay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x408607c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainEffectController>& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__mainEffectController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectController;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectController> const& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__mainEffectController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectController;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_set__mainEffectController(::UnityW<::GlobalNamespace::MainEffectController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ScreenCaptureCache*& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__screenCaptureCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenCaptureCache;
}
constexpr ::GlobalNamespace::ScreenCaptureCache* const& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__screenCaptureCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenCaptureCache;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_set__screenCaptureCache(::GlobalNamespace::ScreenCaptureCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenCaptureCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ScreenCaptureAfterDelay_InitData*& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::ScreenCaptureAfterDelay_InitData* const& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_set__initData(::GlobalNamespace::ScreenCaptureAfterDelay_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__captureTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captureTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__captureTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captureTexture;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_set__captureTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____captureTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__captureRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captureRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_get__captureRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captureRenderTexture;
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__cordl_internal_set__captureRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____captureRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ScreenCaptureAfterDelay::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenCaptureAfterDelay::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenCaptureAfterDelay::HandleMainEffectControllerAfterImageEffectEvent(::UnityEngine::RenderTexture* renderTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(), "HandleMainEffectControllerAfterImageEffectEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderTexture);
}
inline void GlobalNamespace::ScreenCaptureAfterDelay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenCaptureAfterDelay* GlobalNamespace::ScreenCaptureAfterDelay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenCaptureAfterDelay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenCaptureAfterDelay::ScreenCaptureAfterDelay() {}
