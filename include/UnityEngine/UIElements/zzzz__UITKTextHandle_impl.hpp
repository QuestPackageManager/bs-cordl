#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextHandle.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UITKTextHandle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_def.hpp"
#include "UnityEngine/TextCore/zzzz__NativeTextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_def.hpp"
#include "UnityEngine/UIElements/zzzz__ATGTextEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEventHandler_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_Links
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::get_Links)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a6c768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "get_Links",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeNativeTextSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(
    ::ByRef<::UnityEngine::TextCore::Text::RenderedText>, float_t, float_t)>(&::UnityEngine::UIElements::UITKTextHandle::ComputeNativeTextSize)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6a6c7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "ComputeNativeTextSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::RenderedText>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.UpdateNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::ValueTypeWrapper<8> (::UnityEngine::UIElements::UITKTextHandle::*)(::ByRef<bool>)>(
    &::UnityEngine::UIElements::UITKTextHandle::UpdateNative)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6a6d534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "UpdateNative", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.hasLinkAndHyperlink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<bool, bool> (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::hasLinkAndHyperlink)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6a6d7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "hasLinkAndHyperlink", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ATGFindIntersectingLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW> (
    ::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UITKTextHandle::ATGFindIntersectingLink)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6a6b3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "ATGFindIntersectingLink", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.UpdateATGTextEventHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::TextCore::NativeTextGenerationSettings)>(
    &::UnityEngine::UIElements::UITKTextHandle::UpdateATGTextEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a6d768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "UpdateATGTextEventHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::NativeTextGenerationSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ConvertUssToNativeTextGenerationSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::ConvertUssToNativeTextGenerationSettings)> {
  constexpr static std::size_t size = 0xb60;
  constexpr static std::size_t addrs = 0x6a6c9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "ConvertUssToNativeTextGenerationSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetICUAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::GetICUAsset)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6a6df70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "GetICUAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetICUAssetStaticFalback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (*)()>(&::UnityEngine::UIElements::UITKTextHandle::GetICUAssetStaticFalback)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a6e184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "GetICUAssetStaticFalback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_TextLib
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::get_TextLib)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a6e240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "get_TextLib",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::UITKTextHandle::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6a6e330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_MeasuredSizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::get_MeasuredSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "get_MeasuredSizes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_MeasuredSizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::UITKTextHandle::set_MeasuredSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "set_MeasuredSizes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_RoundedSizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::get_RoundedSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "get_RoundedSizes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_RoundedSizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::UITKTextHandle::set_RoundedSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "set_RoundedSizes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_ATGMeasuredSizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::get_ATGMeasuredSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "get_ATGMeasuredSizes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_ATGMeasuredSizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::UITKTextHandle::set_ATGMeasuredSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "set_ATGMeasuredSizes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_ATGRoundedSizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::get_ATGRoundedSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "get_ATGRoundedSizes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_ATGRoundedSizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::UITKTextHandle::set_ATGRoundedSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6e44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "set_ATGRoundedSizes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeTextSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)(
    ::ByRef<::UnityEngine::TextCore::Text::RenderedText>, float_t, float_t)>(&::UnityEngine::UIElements::UITKTextHandle::ComputeTextSize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a6e454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "ComputeTextSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::RenderedText>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeSettingsAndUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::ComputeSettingsAndUpdate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6a6e638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "ComputeSettingsAndUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HandleATag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::HandleATag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a6e738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "HandleATag",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HandleLinkTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::HandleLinkTag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a6e74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "HandleLinkTag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HandleLinkAndATagCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::HandleLinkAndATagCallbacks)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a6e760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "HandleLinkAndATagCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.UpdateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::UpdateMesh)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6a6e670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "UpdateMesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.AddTextInfoToPermanentCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::AddTextInfoToPermanentCache)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a6ed40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetTextOverflowMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextOverflowMode (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::GetTextOverflowMode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a6edcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "GetTextOverflowMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ConvertUssToTextGenerationSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::ConvertUssToTextGenerationSettings)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x6a6ee54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.TextLibraryCanElide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::TextLibraryCanElide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a6daf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                               "TextLibraryCanElide", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetVertexPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::UIElements::UITKTextHandle::GetVertexPadding)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6a6dcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "GetVertexPadding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.IsAdvancedTextEnabledForElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::IsAdvancedTextEnabledForElement)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a6f444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_IsPlaceholder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::get_IsPlaceholder)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6a6f578;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::ATGTextEventHandler*& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_m_ATGTextEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATGTextEventHandler;
}
constexpr ::UnityEngine::UIElements::ATGTextEventHandler* const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_m_ATGTextEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATGTextEventHandler;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set_m_ATGTextEventHandler(::UnityEngine::UIElements::ATGTextEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ATGTextEventHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*&
UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_m_Links() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Links;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* const&
UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_m_Links() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Links;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set_m_Links(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Links)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__MeasuredSizes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeasuredSizes_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__MeasuredSizes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeasuredSizes_k__BackingField;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set__MeasuredSizes_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MeasuredSizes_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__RoundedSizes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoundedSizes_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__RoundedSizes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoundedSizes_k__BackingField;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set__RoundedSizes_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RoundedSizes_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__ATGMeasuredSizes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ATGMeasuredSizes_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__ATGMeasuredSizes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ATGMeasuredSizes_k__BackingField;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set__ATGMeasuredSizes_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ATGMeasuredSizes_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__ATGRoundedSizes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ATGRoundedSizes_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__ATGRoundedSizes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ATGRoundedSizes_k__BackingField;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set__ATGRoundedSizes_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ATGRoundedSizes_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::TextEventHandler*& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_m_TextEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextEventHandler;
}
constexpr ::UnityEngine::UIElements::TextEventHandler* const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_m_TextEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextEventHandler;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set_m_TextEventHandler(::UnityEngine::UIElements::TextEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextEventHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_m_TextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_m_TextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_wasAdvancedTextEnabledForElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasAdvancedTextEnabledForElement;
}
constexpr bool const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_wasAdvancedTextEnabledForElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasAdvancedTextEnabledForElement;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set_wasAdvancedTextEnabledForElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wasAdvancedTextEnabledForElement = value;
}
inline void UnityEngine::UIElements::UITKTextHandle::setStaticF_s_TextLib(Il2CppObject* value) {
  ::cordl_internals::setStaticField<Il2CppObject*, "s_TextLib", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get>(
      std::forward<Il2CppObject*>(value));
}
inline Il2CppObject* UnityEngine::UIElements::UITKTextHandle::getStaticF_s_TextLib() {
  return ::cordl_internals::getStaticField<Il2CppObject*, "s_TextLib", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get>();
}
inline void UnityEngine::UIElements::UITKTextHandle::setStaticF_k_MinPadding(float_t value) {
  ::cordl_internals::setStaticField<float_t, "k_MinPadding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::UITKTextHandle::getStaticF_k_MinPadding() {
  return ::cordl_internals::getStaticField<float_t, "k_MinPadding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get>();
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* UnityEngine::UIElements::UITKTextHandle::get_Links() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "get_Links",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*, false>(
      this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::ComputeNativeTextSize(::ByRef<::UnityEngine::TextCore::Text::RenderedText> textToMeasure, float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "ComputeNativeTextSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::RenderedText>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textToMeasure, width, height);
}
inline ::bs_hook::ValueTypeWrapper<8> UnityEngine::UIElements::UITKTextHandle::UpdateNative(::ByRef<bool> success) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "UpdateNative", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::bs_hook::ValueTypeWrapper<8>, false>(this, ___internal_method, success);
}
inline ::System::ValueTuple_2<bool, bool> UnityEngine::UIElements::UITKTextHandle::hasLinkAndHyperlink() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "hasLinkAndHyperlink", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool, bool>, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW> UnityEngine::UIElements::UITKTextHandle::ATGFindIntersectingLink(::UnityEngine::Vector2 point) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "ATGFindIntersectingLink", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>, false>(this, ___internal_method, point);
}
inline void UnityEngine::UIElements::UITKTextHandle::UpdateATGTextEventHandler(::UnityEngine::TextCore::NativeTextGenerationSettings setting) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "UpdateATGTextEventHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::NativeTextGenerationSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setting);
}
inline bool UnityEngine::UIElements::UITKTextHandle::ConvertUssToNativeTextGenerationSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "ConvertUssToNativeTextGenerationSettings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> UnityEngine::UIElements::UITKTextHandle::GetICUAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "GetICUAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> UnityEngine::UIElements::UITKTextHandle::GetICUAssetStaticFalback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "GetICUAssetStaticFalback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(nullptr, ___internal_method);
}
inline Il2CppObject* UnityEngine::UIElements::UITKTextHandle::get_TextLib() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "get_TextLib",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::_ctor(::UnityEngine::UIElements::TextElement* te) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, te);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::get_MeasuredSizes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "get_MeasuredSizes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_MeasuredSizes(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "set_MeasuredSizes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::get_RoundedSizes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "get_RoundedSizes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_RoundedSizes(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "set_RoundedSizes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::get_ATGMeasuredSizes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "get_ATGMeasuredSizes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_ATGMeasuredSizes(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "set_ATGMeasuredSizes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::get_ATGRoundedSizes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "get_ATGRoundedSizes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_ATGRoundedSizes(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "set_ATGRoundedSizes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::ComputeTextSize(::ByRef<::UnityEngine::TextCore::Text::RenderedText> textToMeasure, float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "ComputeTextSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::RenderedText>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, textToMeasure, width, height);
}
inline void UnityEngine::UIElements::UITKTextHandle::ComputeSettingsAndUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "ComputeSettingsAndUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::HandleATag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "HandleATag",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::HandleLinkTag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "HandleLinkTag",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::HandleLinkAndATagCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "HandleLinkAndATagCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::UpdateMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "UpdateMesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::AddTextInfoToPermanentCache() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextOverflowMode UnityEngine::UIElements::UITKTextHandle::GetTextOverflowMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "GetTextOverflowMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextOverflowMode, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UITKTextHandle::ConvertUssToTextGenerationSettings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UITKTextHandle::TextLibraryCanElide() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(),
                                                                             "TextLibraryCanElide", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::UITKTextHandle::GetVertexPadding(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), "GetVertexPadding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, fontAsset);
}
inline bool UnityEngine::UIElements::UITKTextHandle::IsAdvancedTextEnabledForElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UITKTextHandle::get_IsPlaceholder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextHandle*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UITKTextHandle* UnityEngine::UIElements::UITKTextHandle::New_ctor(::UnityEngine::UIElements::TextElement* te) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UITKTextHandle*>(te));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextHandle::UITKTextHandle() {}
