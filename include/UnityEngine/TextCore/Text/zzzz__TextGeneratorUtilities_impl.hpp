#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGeneratorUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGeneratorUtilities_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextBackingContainer_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingElement_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyle_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.Approximately
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::Approximately)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x48e3808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "Approximately", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.HexCharsToColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::HexCharsToColor)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x48e3838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "HexCharsToColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.HexCharsToColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::HexCharsToColor)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x48e3e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "HexCharsToColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.HexToInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(char16_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::HexToInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x48e3e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "HexToInt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ConvertToFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToFloat)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x48e40f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ConvertToFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ConvertToFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ByRef<int32_t>)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToFloat)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x48e4178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ConvertToFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.PackUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::PackUV)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x48e42d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "PackUV", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertOpeningTextStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::TextCore::Text::TextStyle*, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>, ByRef<int32_t>,
    ByRef<int32_t>, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertOpeningTextStyle)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x48e4338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertOpeningTextStyle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextStyle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertClosingTextStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::TextCore::Text::TextStyle*, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>, ByRef<int32_t>,
    ByRef<int32_t>, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertClosingTextStyle)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x48e48d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertClosingTextStyle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextStyle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ReplaceOpeningStyleTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::UnityEngine::TextCore::Text::TextBackingContainer>, int32_t, ByRef<int32_t>,
                         ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>, ByRef<int32_t>, ByRef<int32_t>,
                         ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>,
                         ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceOpeningStyleTag)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x48e49d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ReplaceOpeningStyleTag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextBackingContainer>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ReplaceOpeningStyleTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, int32_t, ByRef<int32_t>,
                         ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>, ByRef<int32_t>, ByRef<int32_t>,
                         ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>,
                         ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceOpeningStyleTag)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x48e4cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ReplaceOpeningStyleTag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ReplaceClosingStyleTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>, ByRef<int32_t>, ByRef<int32_t>,
                         ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>,
                         ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceClosingStyleTag)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x48e4f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ReplaceClosingStyleTag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertOpeningStyleTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::TextCore::Text::TextStyle*, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>, ByRef<int32_t>,
    ByRef<int32_t>, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertOpeningStyleTag)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x48e5058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertOpeningStyleTag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextStyle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertClosingStyleTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>, ByRef<int32_t>, ByRef<int32_t>,
                         ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>,
                         ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertClosingStyleTag)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x48e5130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertClosingStyleTag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.InsertTextStyleInTextProcessingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>, ByRef<int32_t>, ::ArrayW<uint32_t, ::Array<uint32_t>*>,
    ByRef<int32_t>, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertTextStyleInTextProcessingArray)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x48e4440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertTextStyleInTextProcessingArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextStyle* (*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyle)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x48e4c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetStyle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetStyleHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, int32_t, ByRef<int32_t>)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyleHashCode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x48e4e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetStyleHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetStyleHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::UnityEngine::TextCore::Text::TextBackingContainer>, int32_t, ByRef<int32_t>)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyleHashCode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x48e4b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetStyleHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextBackingContainer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetUTF16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF16)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x48e5214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetUTF16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetUTF16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF16)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x48e5690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetUTF16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetUTF32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF32)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x48e52fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetUTF32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetUTF32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF32)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x48e574c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetUTF32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.FillCharacterVertexBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t, bool, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(
        &::UnityEngine::TextCore::Text::TextGeneratorUtilities::FillCharacterVertexBuffers)> {
  constexpr static std::size_t size = 0x99c;
  constexpr static std::size_t addrs = 0x48e5858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "FillCharacterVertexBuffers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.FillSpriteVertexBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t, bool, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(
        &::UnityEngine::TextCore::Text::TextGeneratorUtilities::FillSpriteVertexBuffers)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x48e6290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "FillSpriteVertexBuffers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.AdjustLineOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, float_t, ::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::AdjustLineOffset)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x48e6b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "AdjustLineOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ResizeLineExtents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::ResizeLineExtents)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x48e6cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ResizeLineExtents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.LegacyStyleToNewStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontStyles (*)(::UnityEngine::FontStyle)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::LegacyStyleToNewStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x48e6e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "LegacyStyleToNewStyle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FontStyle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.LegacyAlignmentToNewAlignment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextAlignment (*)(::UnityEngine::TextAnchor)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::LegacyAlignmentToNewAlignment)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x48e6e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "LegacyAlignmentToNewAlignment",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ConvertToUTF32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToUTF32)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x48e6e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ConvertToUTF32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetMarkupTagHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetMarkupTagHashCode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x48e6ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetMarkupTagHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetMarkupTagHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetMarkupTagHashCode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x48e547c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetMarkupTagHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ToUpperASCIIFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperASCIIFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x48e561c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ToUpperASCIIFast",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ToUpperASCIIFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperASCIIFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x48e6fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ToUpperASCIIFast",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.ToUpperFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x48e701c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ToUpperFast",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GetAttributeParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ByRef<::ArrayW<float_t, ::Array<float_t>*>>)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GetAttributeParameters)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x48e7090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetAttributeParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsBitmapRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::TextCore::LowLevel::GlyphRenderMode)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsBitmapRendering)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x48e7174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsBitmapRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsBaseGlyph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsBaseGlyph)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x48e71b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsBaseGlyph",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.MinAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::MinAlpha)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48e72dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "MinAlpha", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GammaToLinear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::GammaToLinear)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48e61f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GammaToLinear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.GammaToLinear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(uint8_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::GammaToLinear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x48e72e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GammaToLinear",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsValidUTF16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsValidUTF16)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48e7398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsValidUTF16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsValidUTF32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::TextCore::Text::TextBackingContainer, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsValidUTF32)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48e7434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsValidUTF32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsHangul
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsHangul)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x48e74d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsHangul",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGeneratorUtilities.IsCJK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextGeneratorUtilities::IsCJK)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x48e7540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsCJK",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::setStaticF_largePositiveVector2(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "largePositiveVector2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGeneratorUtilities::getStaticF_largePositiveVector2() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "largePositiveVector2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get>();
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::setStaticF_largeNegativeVector2(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "largeNegativeVector2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGeneratorUtilities::getStaticF_largeNegativeVector2() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "largeNegativeVector2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get>();
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::Approximately(float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "Approximately", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Color32 UnityEngine::TextCore::Text::TextGeneratorUtilities::HexCharsToColor(::ArrayW<char16_t, ::Array<char16_t>*> hexChars, int32_t tagCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "HexCharsToColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(nullptr, ___internal_method, hexChars, tagCount);
}
inline ::UnityEngine::Color32 UnityEngine::TextCore::Text::TextGeneratorUtilities::HexCharsToColor(::ArrayW<char16_t, ::Array<char16_t>*> hexChars, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "HexCharsToColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(nullptr, ___internal_method, hexChars, startIndex, length);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::HexToInt(char16_t hex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "HexToInt",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, hex);
}
inline float_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToFloat(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ConvertToFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, chars, startIndex, length);
}
inline float_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToFloat(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startIndex, int32_t length, ByRef<int32_t> lastIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ConvertToFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, chars, startIndex, length, lastIndex);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGeneratorUtilities::PackUV(float_t x, float_t y, float_t scale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "PackUV", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, x, y, scale);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::ResizeInternalArray(ByRef<::ArrayW<T, ::Array<T>*>> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ResizeInternalArray",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T, ::Array<T>*>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::ResizeInternalArray(ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ResizeInternalArray",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T, ::Array<T>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, size);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertOpeningTextStyle(
    ::UnityEngine::TextCore::Text::TextStyle* style, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>> charBuffer,
    ByRef<int32_t> writeIndex, ByRef<int32_t> textStyleStackDepth,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>> textStyleStacks,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertOpeningTextStyle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextStyle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, style, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertClosingTextStyle(
    ::UnityEngine::TextCore::Text::TextStyle* style, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>> charBuffer,
    ByRef<int32_t> writeIndex, ByRef<int32_t> textStyleStackDepth,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>> textStyleStacks,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertClosingTextStyle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextStyle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, style, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceOpeningStyleTag(
    ByRef<::UnityEngine::TextCore::Text::TextBackingContainer> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>> charBuffer, ByRef<int32_t> writeIndex,
    ByRef<int32_t> textStyleStackDepth,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>> textStyleStacks,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ReplaceOpeningStyleTag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextBackingContainer>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourceText, srcIndex, srcOffset, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks,
                                                          generationSettings);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceOpeningStyleTag(
    ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>> charBuffer, ByRef<int32_t> writeIndex,
    ByRef<int32_t> textStyleStackDepth,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>> textStyleStacks,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ReplaceOpeningStyleTag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourceText, srcIndex, srcOffset, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks,
                                                          generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::ReplaceClosingStyleTag(
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>> charBuffer, ByRef<int32_t> writeIndex,
    ByRef<int32_t> textStyleStackDepth,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>> textStyleStacks,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ReplaceClosingStyleTag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertOpeningStyleTag(
    ::UnityEngine::TextCore::Text::TextStyle* style, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>> charBuffer,
    ByRef<int32_t> writeIndex, ByRef<int32_t> textStyleStackDepth,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>> textStyleStacks,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertOpeningStyleTag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextStyle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, style, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertClosingStyleTag(
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>> charBuffer, ByRef<int32_t> writeIndex,
    ByRef<int32_t> textStyleStackDepth,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>> textStyleStacks,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertClosingStyleTag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, charBuffer, writeIndex, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::InsertTextStyleInTextProcessingArray(
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>> charBuffer, ByRef<int32_t> writeIndex,
    ::ArrayW<uint32_t, ::Array<uint32_t>*> styleDefinition, ByRef<int32_t> textStyleStackDepth,
    ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>> textStyleStacks,
    ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "InsertTextStyleInTextProcessingArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, charBuffer, writeIndex, styleDefinition, textStyleStackDepth, textStyleStacks, generationSettings);
}
inline ::UnityEngine::TextCore::Text::TextStyle* UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyle(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSetting,
                                                                                                               int32_t hashCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetStyle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextStyle*, false>(nullptr, ___internal_method, generationSetting, hashCode);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyleHashCode(ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> text, int32_t index, ByRef<int32_t> closeIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetStyleHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, index, closeIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetStyleHashCode(ByRef<::UnityEngine::TextCore::Text::TextBackingContainer> text, int32_t index, ByRef<int32_t> closeIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetStyleHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::TextBackingContainer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, index, closeIndex);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF16(::ArrayW<uint32_t, ::Array<uint32_t>*> text, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetUTF16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, text, i);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF16(::UnityEngine::TextCore::Text::TextBackingContainer text, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetUTF16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, text, i);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF32(::ArrayW<uint32_t, ::Array<uint32_t>*> text, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetUTF32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, text, i);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetUTF32(::UnityEngine::TextCore::Text::TextBackingContainer text, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetUTF32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, text, i);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::FillCharacterVertexBuffers(int32_t i, bool convertToLinearSpace,
                                                                                            ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                                            ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "FillCharacterVertexBuffers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, i, convertToLinearSpace, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::FillSpriteVertexBuffers(int32_t i, bool convertToLinearSpace,
                                                                                         ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                                         ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "FillSpriteVertexBuffers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, i, convertToLinearSpace, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::AdjustLineOffset(int32_t startIndex, int32_t endIndex, float_t offset, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "AdjustLineOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, startIndex, endIndex, offset, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGeneratorUtilities::ResizeLineExtents(int32_t size, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ResizeLineExtents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, size, textInfo);
}
inline ::UnityEngine::TextCore::Text::FontStyles UnityEngine::TextCore::Text::TextGeneratorUtilities::LegacyStyleToNewStyle(::UnityEngine::FontStyle fontStyle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "LegacyStyleToNewStyle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FontStyle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontStyles, false>(nullptr, ___internal_method, fontStyle);
}
inline ::UnityEngine::TextCore::Text::TextAlignment UnityEngine::TextCore::Text::TextGeneratorUtilities::LegacyAlignmentToNewAlignment(::UnityEngine::TextAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "LegacyAlignmentToNewAlignment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextAlignment, false>(nullptr, ___internal_method, anchor);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ConvertToUTF32(uint32_t highSurrogate, uint32_t lowSurrogate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ConvertToUTF32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, highSurrogate, lowSurrogate);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetMarkupTagHashCode(::UnityEngine::TextCore::Text::TextBackingContainer styleDefinition, int32_t readIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetMarkupTagHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, styleDefinition, readIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetMarkupTagHashCode(::ArrayW<uint32_t, ::Array<uint32_t>*> styleDefinition, int32_t readIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetMarkupTagHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, styleDefinition, readIndex);
}
inline char16_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperASCIIFast(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ToUpperASCIIFast",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
inline uint32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperASCIIFast(uint32_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ToUpperASCIIFast",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, c);
}
inline char16_t UnityEngine::TextCore::Text::TextGeneratorUtilities::ToUpperFast(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "ToUpperFast",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
inline int32_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GetAttributeParameters(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startIndex, int32_t length,
                                                                                           ByRef<::ArrayW<float_t, ::Array<float_t>*>> parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GetAttributeParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, chars, startIndex, length, parameters);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsBitmapRendering(::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsBitmapRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphRenderMode);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsBaseGlyph(uint32_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsBaseGlyph",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::Color UnityEngine::TextCore::Text::TextGeneratorUtilities::MinAlpha(::UnityEngine::Color c1, ::UnityEngine::Color c2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "MinAlpha", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, c1, c2);
}
inline ::UnityEngine::Color32 UnityEngine::TextCore::Text::TextGeneratorUtilities::GammaToLinear(::UnityEngine::Color32 c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GammaToLinear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(nullptr, ___internal_method, c);
}
inline uint8_t UnityEngine::TextCore::Text::TextGeneratorUtilities::GammaToLinear(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "GammaToLinear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsValidUTF16(::UnityEngine::TextCore::Text::TextBackingContainer text, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsValidUTF16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, index);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsValidUTF32(::UnityEngine::TextCore::Text::TextBackingContainer text, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsValidUTF32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextBackingContainer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, index);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsHangul(uint32_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsHangul",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool UnityEngine::TextCore::Text::TextGeneratorUtilities::IsCJK(uint32_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGeneratorUtilities*>::get(), "IsCJK",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextGeneratorUtilities::TextGeneratorUtilities() {}
