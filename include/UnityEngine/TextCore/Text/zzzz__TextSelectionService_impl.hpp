#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextSelectionService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSelectionService_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.Substring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::Substring)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6c09b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                             { "Substring", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.SelectCurrentWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::TextSelectionService::SelectCurrentWord)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c09c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                            { "SelectCurrentWord", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.PreviousCodePointIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::PreviousCodePointIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c09ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "PreviousCodePointIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.NextCodePointIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::NextCodePointIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c09d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "NextCodePointIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetCursorLogicalIndexFromPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityEngine::Vector2)>(
    &::UnityEngine::TextCore::Text::TextSelectionService::GetCursorLogicalIndexFromPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6c09d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                             { "GetCursorLogicalIndexFromPosition", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetCursorPositionFromLogicalIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::System::IntPtr, int32_t)>(
    &::UnityEngine::TextCore::Text::TextSelectionService::GetCursorPositionFromLogicalIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c09de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                             { "GetCursorPositionFromLogicalIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.LineUpCharacterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::LineUpCharacterPosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c09e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "LineUpCharacterPosition", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.LineDownCharacterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::LineDownCharacterPosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c09ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "LineDownCharacterPosition", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetHighlightRectangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rect> (*)(::System::IntPtr, int32_t, int32_t)>(
    &::UnityEngine::TextCore::Text::TextSelectionService::GetHighlightRectangles)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6c09f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                             { "GetHighlightRectangles", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetCharacterHeightFromIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::GetCharacterHeightFromIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "GetCharacterHeightFromIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetStartOfNextWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::GetStartOfNextWord)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "GetStartOfNextWord", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::GetEndOfPreviousWord)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "GetEndOfPreviousWord", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetFirstCharacterIndexOnLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::GetFirstCharacterIndexOnLine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "GetFirstCharacterIndexOnLine", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetLastCharacterIndexOnLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::GetLastCharacterIndexOnLine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "GetLastCharacterIndexOnLine", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetLineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::GetLineHeight)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "GetLineHeight", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetLineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextCore::Text::TextSelectionService::GetLineNumber)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "GetLineNumber", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.SelectToPreviousParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::UnityEngine::TextCore::Text::TextSelectionService::SelectToPreviousParagraph)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                             { "SelectToPreviousParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.SelectToStartOfParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::UnityEngine::TextCore::Text::TextSelectionService::SelectToStartOfParagraph)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                             { "SelectToStartOfParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.SelectToEndOfParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::UnityEngine::TextCore::Text::TextSelectionService::SelectToEndOfParagraph)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                             { "SelectToEndOfParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.SelectToNextParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::UnityEngine::TextCore::Text::TextSelectionService::SelectToNextParagraph)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c0a344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                             { "SelectToNextParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.SelectCurrentParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::TextSelectionService::SelectCurrentParagraph)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c0a388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                { "SelectCurrentParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.Substring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::Text::TextSelectionService::Substring_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c09c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "Substring_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetCursorLogicalIndexFromPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::TextCore::Text::TextSelectionService::GetCursorLogicalIndexFromPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c09d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                { "GetCursorLogicalIndexFromPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetCursorPositionFromLogicalIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::TextCore::Text::TextSelectionService::GetCursorPositionFromLogicalIndex_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c09e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                         { "GetCursorPositionFromLogicalIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSelectionService.GetHighlightRectangles_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::TextCore::Text::TextSelectionService::GetHighlightRectangles_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c0a040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                           { "GetHighlightRectangles_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::TextCore::Text::TextSelectionService::Substring(::System::IntPtr textGenerationInfo, int32_t startIndex, int32_t endIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                           { "Substring", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, textGenerationInfo, startIndex, endIndex);
}
inline void UnityEngine::TextCore::Text::TextSelectionService::SelectCurrentWord(::System::IntPtr textGenerationInfo, int32_t currentIndex, ::by_ref<int32_t> startIndex, ::by_ref<int32_t> endIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                          { "SelectCurrentWord", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textGenerationInfo, currentIndex, startIndex, endIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::PreviousCodePointIndex(::System::IntPtr textGenerationInfo, int32_t currentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "PreviousCodePointIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::NextCodePointIndex(::System::IntPtr textGenerationInfo, int32_t currentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "NextCodePointIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::GetCursorLogicalIndexFromPosition(::System::IntPtr textGenerationInfo, ::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                           { "GetCursorLogicalIndexFromPosition", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, position);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextSelectionService::GetCursorPositionFromLogicalIndex(::System::IntPtr textGenerationInfo, int32_t logicalIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                           { "GetCursorPositionFromLogicalIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, textGenerationInfo, logicalIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::LineUpCharacterPosition(::System::IntPtr textGenerationInfo, int32_t originalPos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "LineUpCharacterPosition", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, originalPos);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::LineDownCharacterPosition(::System::IntPtr textGenerationInfo, int32_t originalPos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "LineDownCharacterPosition", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, originalPos);
}
inline ::ArrayW<::UnityEngine::Rect> UnityEngine::TextCore::Text::TextSelectionService::GetHighlightRectangles(::System::IntPtr textGenerationInfo, int32_t cursorIndex, int32_t selectIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                           { "GetHighlightRectangles", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rect>>(nullptr, ___internal_method, textGenerationInfo, cursorIndex, selectIndex);
}
inline float_t UnityEngine::TextCore::Text::TextSelectionService::GetCharacterHeightFromIndex(::System::IntPtr textGenerationInfo, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "GetCharacterHeightFromIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, textGenerationInfo, index);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::GetStartOfNextWord(::System::IntPtr textGenerationInfo, int32_t currentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "GetStartOfNextWord", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::GetEndOfPreviousWord(::System::IntPtr textGenerationInfo, int32_t currentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "GetEndOfPreviousWord", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::GetFirstCharacterIndexOnLine(::System::IntPtr textGenerationInfo, int32_t currentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "GetFirstCharacterIndexOnLine", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::GetLastCharacterIndexOnLine(::System::IntPtr textGenerationInfo, int32_t currentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "GetLastCharacterIndexOnLine", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, currentIndex);
}
inline float_t UnityEngine::TextCore::Text::TextSelectionService::GetLineHeight(::System::IntPtr textGenerationInfo, int32_t lineIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "GetLineHeight", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, textGenerationInfo, lineIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::GetLineNumber(::System::IntPtr textGenerationInfo, int32_t logicalIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "GetLineNumber", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, logicalIndex);
}
inline void UnityEngine::TextCore::Text::TextSelectionService::SelectToPreviousParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                           { "SelectToPreviousParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textGenerationInfo, cursorIndex);
}
inline void UnityEngine::TextCore::Text::TextSelectionService::SelectToStartOfParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                           { "SelectToStartOfParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textGenerationInfo, cursorIndex);
}
inline void UnityEngine::TextCore::Text::TextSelectionService::SelectToEndOfParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                           { "SelectToEndOfParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textGenerationInfo, cursorIndex);
}
inline void UnityEngine::TextCore::Text::TextSelectionService::SelectToNextParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                           { "SelectToNextParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textGenerationInfo, cursorIndex);
}
inline void UnityEngine::TextCore::Text::TextSelectionService::SelectCurrentParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex, ::by_ref<int32_t> selectIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                              { "SelectCurrentParagraph", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textGenerationInfo, cursorIndex, selectIndex);
}
inline void UnityEngine::TextCore::Text::TextSelectionService::Substring_Injected(::System::IntPtr textGenerationInfo, int32_t startIndex, int32_t endIndex,
                                                                                  ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                          { "Substring_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textGenerationInfo, startIndex, endIndex, ret);
}
inline int32_t UnityEngine::TextCore::Text::TextSelectionService::GetCursorLogicalIndexFromPosition_Injected(::System::IntPtr textGenerationInfo, ::by_ref<::UnityEngine::Vector2> position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                              { "GetCursorLogicalIndexFromPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textGenerationInfo, position);
}
inline void UnityEngine::TextCore::Text::TextSelectionService::GetCursorPositionFromLogicalIndex_Injected(::System::IntPtr textGenerationInfo, int32_t logicalIndex,
                                                                                                          ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                       { "GetCursorPositionFromLogicalIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textGenerationInfo, logicalIndex, ret);
}
inline void UnityEngine::TextCore::Text::TextSelectionService::GetHighlightRectangles_Injected(::System::IntPtr textGenerationInfo, int32_t cursorIndex, int32_t selectIndex,
                                                                                               ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSelectionService*>(),
                                                                                         { "GetHighlightRectangles_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textGenerationInfo, cursorIndex, selectIndex, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextSelectionService::TextSelectionService() {}
