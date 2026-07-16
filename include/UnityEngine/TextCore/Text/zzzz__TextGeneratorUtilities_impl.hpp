#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGeneratorUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGeneratorUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextBackingContainer_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingElement_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyle_def.hpp"
#include "UnityEngine/TextCore/zzzz__HorizontalAlignment_def.hpp"
#include "UnityEngine/TextCore/zzzz__VerticalAlignment_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::Approximately)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c04808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                           { "Approximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.HexCharsToColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::HexCharsToColor)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x6c04830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "HexCharsToColor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.HexToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(char16_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::HexToInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c04c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "HexToInt", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ConvertToFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToFloat)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c04c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "ConvertToFloat", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ConvertToFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<char16_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToFloat)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6c04cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                            { "ConvertToFloat", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertOpeningTextStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::TextCore::Text::TextStyle*, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>, ::by_ref<int32_t>, ::by_ref<int32_t>,
                         ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(
        &::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertOpeningTextStyle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6c04e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                { "InsertOpeningTextStyle",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::TextCore::Text::TextStyle*>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertClosingTextStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::TextCore::Text::TextStyle*, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>, ::by_ref<int32_t>, ::by_ref<int32_t>,
                         ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(
        &::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertClosingTextStyle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6c053f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                { "InsertClosingTextStyle",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::TextCore::Text::TextStyle*>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ReplaceOpeningStyleTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer>, int32_t, ::by_ref<int32_t>, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>, ::by_ref<int32_t>,
    ::by_ref<int32_t>, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceOpeningStyleTag)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6c054f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                { "ReplaceOpeningStyleTag",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ReplaceOpeningStyleTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::ArrayW<uint32_t>>, int32_t, ::by_ref<int32_t>, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>, ::by_ref<int32_t>, ::by_ref<int32_t>,
                         ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(
        &::UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceOpeningStyleTag)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6c05830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                { "ReplaceOpeningStyleTag",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ReplaceClosingStyleTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>,
    ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceClosingStyleTag)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6c05a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                { "ReplaceClosingStyleTag",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertOpeningStyleTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::TextCore::Text::TextStyle*, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>, ::by_ref<int32_t>, ::by_ref<int32_t>,
                         ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(
        &::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertOpeningStyleTag)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6c05b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                { "InsertOpeningStyleTag",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::TextCore::Text::TextStyle*>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertClosingStyleTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>,
    ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertClosingStyleTag)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c05c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                { "InsertClosingStyleTag",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertTextStyleInTextProcessingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>, ::by_ref<int32_t>, ::ArrayW<uint32_t>, ::by_ref<int32_t>,
                         ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(
        &::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertTextStyleInTextProcessingArray)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x6c04f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                            { "InsertTextStyleInTextProcessingArray",
                              {},
                              { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(),
                                ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextStyle* (*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6c05748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "GetStyle", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetStyleHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ArrayW<uint32_t>>, int32_t, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyleHashCode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c05990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                { "GetStyleHashCode", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetStyleHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer>, int32_t, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyleHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6c05658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
            { "GetStyleHashCode", {}, { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetUTF16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint32_t>, int32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF16)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c05d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                           { "GetUTF16", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetUTF16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF16)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c06160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "GetUTF16", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetUTF32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint32_t>, int32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF32)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6c05e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                           { "GetUTF32", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetUTF32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF32)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6c06220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "GetUTF32", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.FillCharacterVertexBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::FillCharacterVertexBuffers)> {
  constexpr static std::size_t size = 0x1228;
  constexpr static std::size_t addrs = 0x6c06330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "FillCharacterVertexBuffers",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.FillSpriteVertexBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::FillSpriteVertexBuffers)> {
  constexpr static std::size_t size = 0x113c;
  constexpr static std::size_t addrs = 0x6c075f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "FillSpriteVertexBuffers",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.AdjustLineOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, float_t, ::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::AdjustLineOffset)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6c0872c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                         { "AdjustLineOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ResizeLineExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ResizeLineExtents)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c088b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "ResizeLineExtents", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.LegacyStyleToNewStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::FontStyles (*)(::UnityEngine::FontStyle)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::LegacyStyleToNewStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c08a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "LegacyStyleToNewStyle", {}, { ::i2c::type_of<::UnityEngine::FontStyle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.LegacyAlignmentToNewAlignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextAlignment (*)(::UnityEngine::TextAnchor)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::LegacyAlignmentToNewAlignment)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c08a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                           { "LegacyAlignmentToNewAlignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetHorizontalAlignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::HorizontalAlignment (*)(::UnityEngine::TextAnchor)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetHorizontalAlignment)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c08a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                           { "GetHorizontalAlignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetVerticalAlignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::VerticalAlignment (*)(::UnityEngine::TextAnchor)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetVerticalAlignment)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c08abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "GetVerticalAlignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ConvertToUTF32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToUTF32)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c08ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                           { "ConvertToUTF32", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetMarkupTagHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetMarkupTagHashCode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6c08af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "GetMarkupTagHashCode", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetMarkupTagHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, int32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetMarkupTagHashCode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6c05fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                           { "GetMarkupTagHashCode", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ToUpperASCIIFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperASCIIFast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c060e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "ToUpperASCIIFast", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ToUpperASCIIFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperASCIIFast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c08be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "ToUpperASCIIFast", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ToUpperFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperFast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c08c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "ToUpperFast", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetAttributeParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<char16_t>, int32_t, int32_t, ::by_ref<::ArrayW<float_t>>)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetAttributeParameters)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6c08ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
            { "GetAttributeParameters", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsBitmapRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextCore::LowLevel::GlyphRenderMode)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsBitmapRendering)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6c08dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                           { "IsBitmapRendering", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsBaseGlyph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsBaseGlyph)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6c08e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsBaseGlyph", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.MinAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::MinAlpha)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c08f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                           { "MinAlpha", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GammaToLinear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::GammaToLinear)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6c07558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "GammaToLinear", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GammaToLinear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint8_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::GammaToLinear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c08f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "GammaToLinear", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsValidUTF16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsValidUTF16)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c09030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "IsValidUTF16", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsValidUTF32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsValidUTF32)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c090cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                             { "IsValidUTF32", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsEmoji
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsEmoji)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6c09168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsEmoji", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsEmojiPresentationForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsEmojiPresentationForm)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6c091f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsEmojiPresentationForm", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsHangul
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsHangul)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c09278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsHangul", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsCJK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsCJK)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6c0930c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsCJK", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::setStaticF_largePositiveVector2(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "largePositiveVector2", ::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGeneratorUtilities::getStaticF_largePositiveVector2() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "largePositiveVector2", ::UnityEngine::TextCore::Text::TextGeneratorUtilities*>();
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::setStaticF_largeNegativeVector2(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "largeNegativeVector2", ::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGeneratorUtilities::getStaticF_largeNegativeVector2() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "largeNegativeVector2", ::UnityEngine::TextCore::Text::TextGeneratorUtilities*>();
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::setStaticF_k_EmojiLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<uint32_t>*, "k_EmojiLookup", ::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(
      std::forward<::System::Collections::Generic::HashSet_1<uint32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::TextGeneratorUtilities::getStaticF_k_EmojiLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<uint32_t>*, "k_EmojiLookup", ::UnityEngine::TextCore::Text::TextGeneratorUtilities*>();
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::setStaticF_k_EmojiPresentationFormLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<uint32_t>*, "k_EmojiPresentationFormLookup", ::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(
      std::forward<::System::Collections::Generic::HashSet_1<uint32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::TextGeneratorUtilities::getStaticF_k_EmojiPresentationFormLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<uint32_t>*, "k_EmojiPresentationFormLookup", ::UnityEngine::TextCore::Text::TextGeneratorUtilities*>();
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::Approximately(float_t a, float_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "Approximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Color32 UnityEngine::TextCore::Text::TextGeneratorUtilities::HexCharsToColor(::ArrayW<char16_t> hexChars, int32_t startIndex, int32_t tagCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "HexCharsToColor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, hexChars, startIndex, tagCount);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::HexToInt(char16_t hex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "HexToInt", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, hex);
}
inline float_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToFloat(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "ConvertToFloat", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, chars, startIndex, length);
}
inline float_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToFloat(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length, ::by_ref<int32_t> lastIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                       { "ConvertToFloat", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, chars, startIndex, length, lastIndex);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::ResizeInternalArray(::by_ref<::ArrayW<T>> array) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                              { "ResizeInternalArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::ResizeInternalArray(::by_ref<::ArrayW<T>> array, int32_t size) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "ResizeInternalArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, size);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertOpeningTextStyle(::UnityEngine::TextCore::Text::TextStyle* style,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>> charBuffer,
                                                                                        ::by_ref<int32_t> writeIndex, ::by_ref<int32_t> textStyleStackDepth,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>> textStyleStacks,
                                                                                        ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "InsertOpeningTextStyle",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::TextCore::Text::TextStyle*>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, style, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertClosingTextStyle(::UnityEngine::TextCore::Text::TextStyle* style,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>> charBuffer,
                                                                                        ::by_ref<int32_t> writeIndex, ::by_ref<int32_t> textStyleStackDepth,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>> textStyleStacks,
                                                                                        ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "InsertClosingTextStyle",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::TextCore::Text::TextStyle*>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, style, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceOpeningStyleTag(::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer> sourceText, int32_t srcIndex,
                                                                                        ::by_ref<int32_t> srcOffset,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>> charBuffer,
                                                                                        ::by_ref<int32_t> writeIndex, ::by_ref<int32_t> textStyleStackDepth,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>> textStyleStacks,
                                                                                        ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                              { "ReplaceOpeningStyleTag",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                  ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                  ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceText, srcIndex, srcOffset, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceOpeningStyleTag(::by_ref<::ArrayW<uint32_t>> sourceText, int32_t srcIndex, ::by_ref<int32_t> srcOffset,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>> charBuffer,
                                                                                        ::by_ref<int32_t> writeIndex, ::by_ref<int32_t> textStyleStackDepth,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>> textStyleStacks,
                                                                                        ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "ReplaceOpeningStyleTag",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceText, srcIndex, srcOffset, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceClosingStyleTag(::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>> charBuffer,
                                                                                        ::by_ref<int32_t> writeIndex, ::by_ref<int32_t> textStyleStackDepth,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>> textStyleStacks,
                                                                                        ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "ReplaceClosingStyleTag",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertOpeningStyleTag(::UnityEngine::TextCore::Text::TextStyle* style,
                                                                                       ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>> charBuffer,
                                                                                       ::by_ref<int32_t> writeIndex, ::by_ref<int32_t> textStyleStackDepth,
                                                                                       ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>> textStyleStacks,
                                                                                       ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "InsertOpeningStyleTag",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::TextCore::Text::TextStyle*>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, style, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertClosingStyleTag(::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>> charBuffer,
                                                                                       ::by_ref<int32_t> writeIndex, ::by_ref<int32_t> textStyleStackDepth,
                                                                                       ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>> textStyleStacks,
                                                                                       ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "InsertClosingStyleTag",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertTextStyleInTextProcessingArray(::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>> charBuffer,
                                                                                                      ::by_ref<int32_t> writeIndex, ::ArrayW<uint32_t> styleDefinition,
                                                                                                      ::by_ref<int32_t> textStyleStackDepth,
                                                                                                      ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>> textStyleStacks,
                                                                                                      ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                          { "InsertTextStyleInTextProcessingArray",
                            {},
                            { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(),
                              ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, charBuffer, writeIndex, styleDefinition, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline ::UnityEngine::TextCore::Text::TextStyle* UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyle(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSetting,
                                                                                                               int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "GetStyle", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextStyle*>(nullptr, ___internal_method, generationSetting, hashCode);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyleHashCode(::by_ref<::ArrayW<uint32_t>> text, int32_t index, ::by_ref<int32_t> closeIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                              { "GetStyleHashCode", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, index, closeIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyleHashCode(::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer> text, int32_t index, ::by_ref<int32_t> closeIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
          { "GetStyleHashCode", {}, { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, index, closeIndex);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF16(::ArrayW<uint32_t> text, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                         { "GetUTF16", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, text, i);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF16(::UnityEngine::TextCore::Text::TextBackingContainer text, int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "GetUTF16", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, text, i);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF32(::ArrayW<uint32_t> text, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                         { "GetUTF32", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, text, i);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF32(::UnityEngine::TextCore::Text::TextBackingContainer text, int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "GetUTF32", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, text, i);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::FillCharacterVertexBuffers(int32_t i, bool convertToLinearSpace,
                                                                                            ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                                            ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "FillCharacterVertexBuffers",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, convertToLinearSpace, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::FillSpriteVertexBuffers(int32_t i, bool convertToLinearSpace,
                                                                                         ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                                         ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "FillSpriteVertexBuffers",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, convertToLinearSpace, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::AdjustLineOffset(int32_t startIndex, int32_t endIndex, float_t offset, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                       { "AdjustLineOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startIndex, endIndex, offset, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::ResizeLineExtents(int32_t size, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "ResizeLineExtents", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, size, textInfo);
}
inline ::UnityEngine::TextCore::Text::FontStyles UnityEngine::TextCore::Text::TextGeneratorUtilities::LegacyStyleToNewStyle(::UnityEngine::FontStyle fontStyle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "LegacyStyleToNewStyle", {}, { ::i2c::type_of<::UnityEngine::FontStyle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontStyles>(nullptr, ___internal_method, fontStyle);
}
inline ::UnityEngine::TextCore::Text::TextAlignment UnityEngine::TextCore::Text::TextGeneratorUtilities::LegacyAlignmentToNewAlignment(::UnityEngine::TextAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                         { "LegacyAlignmentToNewAlignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextAlignment>(nullptr, ___internal_method, anchor);
}
inline ::UnityEngine::TextCore::HorizontalAlignment UnityEngine::TextCore::Text::TextGeneratorUtilities::GetHorizontalAlignment(::UnityEngine::TextAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "GetHorizontalAlignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::HorizontalAlignment>(nullptr, ___internal_method, anchor);
}
inline ::UnityEngine::TextCore::VerticalAlignment UnityEngine::TextCore::Text::TextGeneratorUtilities::GetVerticalAlignment(::UnityEngine::TextAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "GetVerticalAlignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::VerticalAlignment>(nullptr, ___internal_method, anchor);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToUTF32(uint32_t highSurrogate, uint32_t lowSurrogate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                         { "ConvertToUTF32", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, highSurrogate, lowSurrogate);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetMarkupTagHashCode(::UnityEngine::TextCore::Text::TextBackingContainer styleDefinition, int32_t readIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "GetMarkupTagHashCode", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, styleDefinition, readIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetMarkupTagHashCode(::ArrayW<uint32_t> styleDefinition, int32_t readIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                         { "GetMarkupTagHashCode", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, styleDefinition, readIndex);
}
inline char16_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperASCIIFast(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "ToUpperASCIIFast", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperASCIIFast(uint32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "ToUpperASCIIFast", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, c);
}
inline char16_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperFast(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "ToUpperFast", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetAttributeParameters(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length, ::by_ref<::ArrayW<float_t>> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
          { "GetAttributeParameters", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chars, startIndex, length, parameters);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsBitmapRendering(::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                         { "IsBitmapRendering", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glyphRenderMode);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsBaseGlyph(uint32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsBaseGlyph", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::Color UnityEngine::TextCore::Text::TextGeneratorUtilities::MinAlpha(::UnityEngine::Color c1, ::UnityEngine::Color c2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                                                         { "MinAlpha", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, c1, c2);
}
inline ::UnityEngine::Color32 UnityEngine::TextCore::Text::TextGeneratorUtilities::GammaToLinear(::UnityEngine::Color32 c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "GammaToLinear", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c);
}
inline uint8_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GammaToLinear(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "GammaToLinear", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsValidUTF16(::UnityEngine::TextCore::Text::TextBackingContainer text, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "IsValidUTF16", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, index);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsValidUTF32(::UnityEngine::TextCore::Text::TextBackingContainer text, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(),
                                                           { "IsValidUTF32", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextBackingContainer>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, index);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsEmoji(uint32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsEmoji", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsEmojiPresentationForm(uint32_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsEmojiPresentationForm", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsHangul(uint32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsHangul", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsCJK(uint32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>(), { "IsCJK", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextGeneratorUtilities::TextGeneratorUtilities() {}
