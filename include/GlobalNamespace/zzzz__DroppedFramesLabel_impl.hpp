#pragma once
// IWYU pragma private; include "GlobalNamespace/DroppedFramesLabel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DroppedFramesLabel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DroppedFramesLabel.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroppedFramesLabel::*)()>(&::GlobalNamespace::DroppedFramesLabel::Start)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x569f664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroppedFramesLabel.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroppedFramesLabel::*)()>(&::GlobalNamespace::DroppedFramesLabel::Update)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x569f6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroppedFramesLabel.RefreshText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroppedFramesLabel::*)()>(&::GlobalNamespace::DroppedFramesLabel::RefreshText)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x569f7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "RefreshText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroppedFramesLabel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroppedFramesLabel::*)()>(&::GlobalNamespace::DroppedFramesLabel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x569f90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__expectedFrameRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expectedFrameRate;
}
constexpr int32_t const& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__expectedFrameRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expectedFrameRate;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__cordl_internal_set__expectedFrameRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expectedFrameRate = value;
}
constexpr int32_t& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__resetInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resetInterval;
}
constexpr int32_t const& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__resetInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resetInterval;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__cordl_internal_set__resetInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resetInterval = value;
}
constexpr int32_t& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__totalNumberOfDroppedFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalNumberOfDroppedFrames;
}
constexpr int32_t const& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__totalNumberOfDroppedFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalNumberOfDroppedFrames;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__cordl_internal_set__totalNumberOfDroppedFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalNumberOfDroppedFrames = value;
}
constexpr float_t& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__syncedFrameTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncedFrameTime;
}
constexpr float_t const& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__syncedFrameTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncedFrameTime;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__cordl_internal_set__syncedFrameTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncedFrameTime = value;
}
constexpr float_t& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__intervalTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intervalTime;
}
constexpr float_t const& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__intervalTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intervalTime;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__cordl_internal_set__intervalTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intervalTime = value;
}
constexpr float_t& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__maxFrameTimeInInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxFrameTimeInInterval;
}
constexpr float_t const& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__maxFrameTimeInInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxFrameTimeInInterval;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__cordl_internal_set__maxFrameTimeInInterval(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxFrameTimeInInterval = value;
}
constexpr int32_t& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__frameCountInInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameCountInInterval;
}
constexpr int32_t const& GlobalNamespace::DroppedFramesLabel::__cordl_internal_get__frameCountInInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameCountInInterval;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__cordl_internal_set__frameCountInInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameCountInInterval = value;
}
inline void GlobalNamespace::DroppedFramesLabel::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DroppedFramesLabel::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DroppedFramesLabel::RefreshText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "RefreshText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DroppedFramesLabel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DroppedFramesLabel* GlobalNamespace::DroppedFramesLabel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DroppedFramesLabel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DroppedFramesLabel::DroppedFramesLabel() {}
