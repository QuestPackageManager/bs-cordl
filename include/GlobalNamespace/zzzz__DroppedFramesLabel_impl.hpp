#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DroppedFramesLabel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DroppedFramesLabel.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroppedFramesLabel::*)()>(&::GlobalNamespace::DroppedFramesLabel::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x20f04bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroppedFramesLabel.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroppedFramesLabel::*)()>(&::GlobalNamespace::DroppedFramesLabel::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x20f0530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroppedFramesLabel.RefreshText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroppedFramesLabel::*)()>(&::GlobalNamespace::DroppedFramesLabel::RefreshText)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x20f05c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "RefreshText",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroppedFramesLabel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroppedFramesLabel::*)()>(&::GlobalNamespace::DroppedFramesLabel::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20f0728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::DroppedFramesLabel::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::DroppedFramesLabel::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__set__text(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::DroppedFramesLabel::__get__expectedFrameRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expectedFrameRate;
}
constexpr int32_t const& GlobalNamespace::DroppedFramesLabel::__get__expectedFrameRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expectedFrameRate;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__set__expectedFrameRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expectedFrameRate = value;
}
constexpr int32_t& GlobalNamespace::DroppedFramesLabel::__get__resetInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resetInterval;
}
constexpr int32_t const& GlobalNamespace::DroppedFramesLabel::__get__resetInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resetInterval;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__set__resetInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resetInterval = value;
}
constexpr int32_t& GlobalNamespace::DroppedFramesLabel::__get__totalNumberOfDroppedFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalNumberOfDroppedFrames;
}
constexpr int32_t const& GlobalNamespace::DroppedFramesLabel::__get__totalNumberOfDroppedFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalNumberOfDroppedFrames;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__set__totalNumberOfDroppedFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalNumberOfDroppedFrames = value;
}
constexpr float_t& GlobalNamespace::DroppedFramesLabel::__get__syncedFrameTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncedFrameTime;
}
constexpr float_t const& GlobalNamespace::DroppedFramesLabel::__get__syncedFrameTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncedFrameTime;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__set__syncedFrameTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncedFrameTime = value;
}
constexpr float_t& GlobalNamespace::DroppedFramesLabel::__get__intervalTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intervalTime;
}
constexpr float_t const& GlobalNamespace::DroppedFramesLabel::__get__intervalTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intervalTime;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__set__intervalTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intervalTime = value;
}
constexpr float_t& GlobalNamespace::DroppedFramesLabel::__get__maxFrameTimeInInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxFrameTimeInInterval;
}
constexpr float_t const& GlobalNamespace::DroppedFramesLabel::__get__maxFrameTimeInInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxFrameTimeInInterval;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__set__maxFrameTimeInInterval(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxFrameTimeInInterval = value;
}
constexpr int32_t& GlobalNamespace::DroppedFramesLabel::__get__frameCountInInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameCountInInterval;
}
constexpr int32_t const& GlobalNamespace::DroppedFramesLabel::__get__frameCountInInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameCountInInterval;
}
constexpr void GlobalNamespace::DroppedFramesLabel::__set__frameCountInInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameCountInInterval = value;
}
inline void GlobalNamespace::DroppedFramesLabel::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DroppedFramesLabel::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DroppedFramesLabel::RefreshText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), "RefreshText",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DroppedFramesLabel* GlobalNamespace::DroppedFramesLabel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DroppedFramesLabel*>());
}
inline void GlobalNamespace::DroppedFramesLabel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroppedFramesLabel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DroppedFramesLabel::DroppedFramesLabel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
