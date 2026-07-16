#pragma once
// IWYU pragma private; include "UnityEngine/IMGUITextHandle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_impl.hpp"
#include "UnityEngine/zzzz__IMGUITextHandle_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__IMGUITextHandle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TextClipping_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle_TextHandleTuple._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::IMGUITextHandle_TextHandleTuple::*)(float_t, int32_t)>(&::UnityEngine::IMGUITextHandle_TextHandleTuple::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b4b448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle_TextHandleTuple*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::IMGUITextHandle_TextHandleTuple::__cordl_internal_get_lastTimeUsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTimeUsed;
}
constexpr float_t const& UnityEngine::IMGUITextHandle_TextHandleTuple::__cordl_internal_get_lastTimeUsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTimeUsed;
}
constexpr void UnityEngine::IMGUITextHandle_TextHandleTuple::__cordl_internal_set_lastTimeUsed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastTimeUsed = value;
}
constexpr int32_t& UnityEngine::IMGUITextHandle_TextHandleTuple::__cordl_internal_get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr int32_t const& UnityEngine::IMGUITextHandle_TextHandleTuple::__cordl_internal_get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr void UnityEngine::IMGUITextHandle_TextHandleTuple::__cordl_internal_set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
inline void UnityEngine::IMGUITextHandle_TextHandleTuple::_ctor(float_t lastTimeUsed, int32_t hashCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle_TextHandleTuple*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lastTimeUsed, hashCode);
}
inline ::UnityEngine::IMGUITextHandle_TextHandleTuple* UnityEngine::IMGUITextHandle_TextHandleTuple::New_ctor(float_t lastTimeUsed, int32_t hashCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::IMGUITextHandle_TextHandleTuple*>(lastTimeUsed, hashCode));
}
// Ctor Parameters []
constexpr ::UnityEngine::IMGUITextHandle_TextHandleTuple::IMGUITextHandle_TextHandleTuple() {}
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.EmptyManagedCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::IMGUITextHandle::EmptyManagedCache)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b48a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "EmptyManagedCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.GetTextHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::IMGUITextHandle* (*)(::UnityEngine::GUIStyle*, ::UnityEngine::Rect, ::StringW, ::UnityEngine::Color32)>(
    &::UnityEngine::IMGUITextHandle::GetTextHandle)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6b482f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::IMGUITextHandle*>(),
            { "GetTextHandle", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.GetTextHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::IMGUITextHandle* (*)(::UnityEngine::GUIStyle*, ::UnityEngine::Rect, ::StringW, ::UnityEngine::Color32, ::by_ref<bool>)>(
    &::UnityEngine::IMGUITextHandle::GetTextHandle)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6b488c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "GetTextHandle",
                                                                                  {},
                                                                                  { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(),
                                                                                    ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.ShouldCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, float_t)>(&::UnityEngine::IMGUITextHandle::ShouldCleanup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b4b138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "ShouldCleanup", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.ClearUnusedTextHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::IMGUITextHandle::ClearUnusedTextHandles)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6b4b150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "ClearUnusedTextHandles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.GetTextHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::IMGUITextHandle* (*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, bool, ::by_ref<bool>)>(
    &::UnityEngine::IMGUITextHandle::GetTextHandle)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x6b4adb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(),
                            { "GetTextHandle", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.GetLineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::IMGUITextHandle::GetLineHeight)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b47f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "GetLineHeight", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.GetPreferredSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::IMGUITextHandle::*)()>(&::UnityEngine::IMGUITextHandle::GetPreferredSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b48528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "GetPreferredSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.ConvertGUIStyleToGenerationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::GUIStyle*, ::UnityEngine::Color, ::StringW,
                                                                ::UnityEngine::Rect)>(&::UnityEngine::IMGUITextHandle::ConvertGUIStyleToGenerationSettings)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x6b4a96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(),
                                                             { "ConvertGUIStyleToGenerationSettings",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle.LegacyClippingToNewOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextOverflowMode (*)(::UnityEngine::TextClipping)>(
    &::UnityEngine::IMGUITextHandle::LegacyClippingToNewOverflow)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b4b454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "LegacyClippingToNewOverflow", {}, { ::i2c::type_of<::UnityEngine::TextClipping>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IMGUITextHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::IMGUITextHandle::*)()>(&::UnityEngine::IMGUITextHandle::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b4b3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>*& UnityEngine::IMGUITextHandle::__cordl_internal_get_tuple() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tuple;
}
constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* const& UnityEngine::IMGUITextHandle::__cordl_internal_get_tuple() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tuple;
}
constexpr void UnityEngine::IMGUITextHandle::__cordl_internal_set_tuple(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tuple = value;
}
constexpr bool& UnityEngine::IMGUITextHandle::__cordl_internal_get_isCachedOnNative() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCachedOnNative;
}
constexpr bool const& UnityEngine::IMGUITextHandle::__cordl_internal_get_isCachedOnNative() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCachedOnNative;
}
constexpr void UnityEngine::IMGUITextHandle::__cordl_internal_set_isCachedOnNative(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCachedOnNative = value;
}
inline void UnityEngine::IMGUITextHandle::setStaticF_textHandles(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::IMGUITextHandle*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::IMGUITextHandle*>*, "textHandles", ::UnityEngine::IMGUITextHandle*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::IMGUITextHandle*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::IMGUITextHandle*>* UnityEngine::IMGUITextHandle::getStaticF_textHandles() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::IMGUITextHandle*>*, "textHandles", ::UnityEngine::IMGUITextHandle*>();
}
inline void UnityEngine::IMGUITextHandle::setStaticF_textHandlesTuple(::System::Collections::Generic::LinkedList_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::LinkedList_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>*, "textHandlesTuple", ::UnityEngine::IMGUITextHandle*>(
      std::forward<::System::Collections::Generic::LinkedList_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>*>(value));
}
inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* UnityEngine::IMGUITextHandle::getStaticF_textHandlesTuple() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::LinkedList_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>*, "textHandlesTuple", ::UnityEngine::IMGUITextHandle*>();
}
inline void UnityEngine::IMGUITextHandle::setStaticF_lastCleanupTime(float_t value) {
  ::cordl_internals::setStaticField<float_t, "lastCleanupTime", ::UnityEngine::IMGUITextHandle*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::IMGUITextHandle::getStaticF_lastCleanupTime() {
  return ::cordl_internals::getStaticField<float_t, "lastCleanupTime", ::UnityEngine::IMGUITextHandle*>();
}
inline void UnityEngine::IMGUITextHandle::setStaticF_newHandlesSinceCleanup(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "newHandlesSinceCleanup", ::UnityEngine::IMGUITextHandle*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::IMGUITextHandle::getStaticF_newHandlesSinceCleanup() {
  return ::cordl_internals::getStaticField<int32_t, "newHandlesSinceCleanup", ::UnityEngine::IMGUITextHandle*>();
}
inline void UnityEngine::IMGUITextHandle::EmptyManagedCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "EmptyManagedCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::IMGUITextHandle* UnityEngine::IMGUITextHandle::GetTextHandle(::UnityEngine::GUIStyle* style, ::UnityEngine::Rect position, ::StringW content, ::UnityEngine::Color32 textColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::IMGUITextHandle*>(),
          { "GetTextHandle", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::IMGUITextHandle*>(nullptr, ___internal_method, style, position, content, textColor);
}
inline ::UnityEngine::IMGUITextHandle* UnityEngine::IMGUITextHandle::GetTextHandle(::UnityEngine::GUIStyle* style, ::UnityEngine::Rect position, ::StringW content, ::UnityEngine::Color32 textColor,
                                                                                   ::by_ref<bool> isCached) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "GetTextHandle",
                                                                                {},
                                                                                { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(),
                                                                                  ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::IMGUITextHandle*>(nullptr, ___internal_method, style, position, content, textColor, isCached);
}
inline bool UnityEngine::IMGUITextHandle::ShouldCleanup(float_t currentTime, float_t lastTime, float_t cleanupThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "ShouldCleanup", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentTime, lastTime, cleanupThreshold);
}
inline void UnityEngine::IMGUITextHandle::ClearUnusedTextHandles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "ClearUnusedTextHandles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::IMGUITextHandle* UnityEngine::IMGUITextHandle::GetTextHandle(::UnityEngine::TextCore::Text::TextGenerationSettings* settings, bool isCalledFromNative, ::by_ref<bool> isCached) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(),
                          { "GetTextHandle", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::IMGUITextHandle*>(nullptr, ___internal_method, settings, isCalledFromNative, isCached);
}
inline float_t UnityEngine::IMGUITextHandle::GetLineHeight(::UnityEngine::GUIStyle* style) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "GetLineHeight", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, style);
}
inline ::UnityEngine::Vector2 UnityEngine::IMGUITextHandle::GetPreferredSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "GetPreferredSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::IMGUITextHandle::ConvertGUIStyleToGenerationSettings(::UnityEngine::TextCore::Text::TextGenerationSettings* settings, ::UnityEngine::GUIStyle* style,
                                                                              ::UnityEngine::Color textColor, ::StringW text, ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "ConvertGUIStyleToGenerationSettings",
                                                                                {},
                                                                                { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(),
                                                                                  ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings, style, textColor, text, rect);
}
inline ::UnityEngine::TextCore::Text::TextOverflowMode UnityEngine::IMGUITextHandle::LegacyClippingToNewOverflow(::UnityEngine::TextClipping clipping) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { "LegacyClippingToNewOverflow", {}, { ::i2c::type_of<::UnityEngine::TextClipping>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextOverflowMode>(nullptr, ___internal_method, clipping);
}
inline void UnityEngine::IMGUITextHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IMGUITextHandle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::IMGUITextHandle* UnityEngine::IMGUITextHandle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::IMGUITextHandle*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::IMGUITextHandle::IMGUITextHandle() {}
