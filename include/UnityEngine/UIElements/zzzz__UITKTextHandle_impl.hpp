#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextHandle.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UITKTextHandle_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_def.hpp"
#include "UnityEngine/UIElements/zzzz__ATGTextEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_Links
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* (
    ::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_Links)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x711e40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_Links", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeNativeTextSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(
    ::by_ref<::StringW const>, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, ::System::Nullable_1<float_t>)>(
    &::UnityEngine::UIElements::UITKTextHandle::ComputeNativeTextSize)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x711e48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                         { "ComputeNativeTextSize",
                                           {},
                                           { ::i2c::type_of<::by_ref<::StringW const>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.UpdateNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">, bool> (::UnityEngine::UIElements::UITKTextHandle::*)(bool)>(
    &::UnityEngine::UIElements::UITKTextHandle::UpdateNative)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x711f078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "UpdateNative", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.CacheTextGenerationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::CacheTextGenerationInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x711f374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "CacheTextGenerationInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ShapeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::ShapeText)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x711f4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ShapeText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ProcessMeshInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(
    ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">,
    ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*>,
    ::by_ref<::System::Collections::Generic::List_1<bool>*>)>(&::UnityEngine::UIElements::UITKTextHandle::ProcessMeshInfos)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x711f5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                            { "ProcessMeshInfos",
                              {},
                              { ::i2c::type_of<::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*>>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<bool>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HasMissingGlyphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)(
    ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">, ::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>)>(
    &::UnityEngine::UIElements::UITKTextHandle::HasMissingGlyphs)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x711f6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                                { "HasMissingGlyphs",
                                                  {},
                                                  { ::i2c::type_of<::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.hasLinkAndHyperlink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool, bool> (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::hasLinkAndHyperlink)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x711f768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "hasLinkAndHyperlink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ATGFindIntersectingLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW> (::UnityEngine::UIElements::UITKTextHandle::*)(
    ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UITKTextHandle::ATGFindIntersectingLink)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x711cca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ATGFindIntersectingLink", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.UpdateATGTextEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::UpdateATGTextEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x711f8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "UpdateATGTextEventHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.EnsureIsReadyForJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::EnsureIsReadyForJobs)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x711f934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "EnsureIsReadyForJobs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ConvertUssToNativeTextGenerationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)(::StringW, ::System::Nullable_1<float_t>)>(
    &::UnityEngine::UIElements::UITKTextHandle::ConvertUssToNativeTextGenerationSettings)> {
  constexpr static std::size_t size = 0x998;
  constexpr static std::size_t addrs = 0x711e6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                                             { "ConvertUssToNativeTextGenerationSettings", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetICUAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::GetICUAsset)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x711fd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetICUAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetICUAssetStaticFalback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (*)()>(&::UnityEngine::UIElements::UITKTextHandle::GetICUAssetStaticFalback)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x711ff98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetICUAssetStaticFalback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_textLib
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_textLib)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x7120054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_textLib", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.InitTextLib
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::InitTextLib)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x711f9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "InitTextLib", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.RemoveFromPermanentCacheATG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::RemoveFromPermanentCacheATG)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x71200bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::UITKTextHandle::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x71200ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetPixelsPerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::GetPixelsPerPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x71201e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_LastPixelPerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_LastPixelPerPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71201fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_LastPixelPerPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_LastPixelPerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(float_t)>(&::UnityEngine::UIElements::UITKTextHandle::set_LastPixelPerPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7120204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_LastPixelPerPoint", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::SetDirty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x712020c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_MeasuredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_MeasuredWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7120220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_MeasuredWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_MeasuredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::System::Nullable_1<float_t>)>(
    &::UnityEngine::UIElements::UITKTextHandle::set_MeasuredWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7120228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_MeasuredWidth", {}, { ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_RoundedWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_RoundedWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7120230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_RoundedWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_RoundedWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(float_t)>(&::UnityEngine::UIElements::UITKTextHandle::set_RoundedWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7120238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_RoundedWidth", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_ATGMeasuredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::get_ATGMeasuredWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7120240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_ATGMeasuredWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_ATGMeasuredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::System::Nullable_1<float_t>)>(
    &::UnityEngine::UIElements::UITKTextHandle::set_ATGMeasuredWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7120248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_ATGMeasuredWidth", {}, { ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_ATGRoundedWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_ATGRoundedWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7120250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_ATGRoundedWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_ATGRoundedWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(float_t)>(&::UnityEngine::UIElements::UITKTextHandle::set_ATGRoundedWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7120258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_ATGRoundedWidth", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeTextSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)(
    ::StringW, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, ::System::Nullable_1<float_t>)>(
    &::UnityEngine::UIElements::UITKTextHandle::ComputeTextSize)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x7120260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                         { "ComputeTextSize",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeTextSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)(
    ::by_ref<::UnityEngine::TextCore::Text::RenderedText const>, float_t, float_t, ::System::Nullable_1<float_t>)>(&::UnityEngine::UIElements::UITKTextHandle::ComputeTextSize)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x7120368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                                                                           { "ComputeTextSize",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText const>>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeSettingsAndUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::ComputeSettingsAndUpdate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x71204d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ComputeSettingsAndUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HandleATag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::HandleATag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7120620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "HandleATag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HandleLinkTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::HandleLinkTag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7120630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "HandleLinkTag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HandleLinkAndATagCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::HandleLinkAndATagCallbacks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7120640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "HandleLinkAndATagCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.UpdateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::UpdateMesh)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x7120550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "UpdateMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.AddToPermanentCacheAndGenerateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::AddToPermanentCacheAndGenerateMesh)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x7120c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetTextOverflowMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextOverflowMode (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::GetTextOverflowMode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x7120d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetTextOverflowMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ConvertUssToTextGenerationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)(bool, ::System::Nullable_1<float_t>)>(
    &::UnityEngine::UIElements::UITKTextHandle::ConvertUssToTextGenerationSettings)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x7120e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.TextLibraryCanElide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::TextLibraryCanElide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x711facc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "TextLibraryCanElide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetVertexPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::UIElements::UITKTextHandle::GetVertexPadding)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x711fba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetVertexPadding", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.IsAdvancedTextEnabledForElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::IsAdvancedTextEnabledForElement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7121838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ReleaseResourcesIfPossible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::ReleaseResourcesIfPossible)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x7120cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ReleaseResourcesIfPossible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_IsPlaceholder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_IsPlaceholder)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x71219cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.IsElided
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::IsElided)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7121a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "IsElided", {}, {} })));
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
  this->___m_ATGTextEventHandler = value;
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
  this->___m_Links = value;
}
constexpr ::UnityEngine::Color& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_atgHyperlinkColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atgHyperlinkColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_atgHyperlinkColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atgHyperlinkColor;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set_atgHyperlinkColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atgHyperlinkColor = value;
}
constexpr bool& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_uvsAreGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvsAreGenerated;
}
constexpr bool const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get_uvsAreGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvsAreGenerated;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set_uvsAreGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uvsAreGenerated = value;
}
constexpr float_t& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__LastPixelPerPoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastPixelPerPoint_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__LastPixelPerPoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastPixelPerPoint_k__BackingField;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set__LastPixelPerPoint_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastPixelPerPoint_k__BackingField = value;
}
constexpr ::System::Nullable_1<float_t>& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__MeasuredWidth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeasuredWidth_k__BackingField;
}
constexpr ::System::Nullable_1<float_t> const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__MeasuredWidth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeasuredWidth_k__BackingField;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set__MeasuredWidth_k__BackingField(::System::Nullable_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MeasuredWidth_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__RoundedWidth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoundedWidth_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__RoundedWidth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoundedWidth_k__BackingField;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set__RoundedWidth_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RoundedWidth_k__BackingField = value;
}
constexpr ::System::Nullable_1<float_t>& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__ATGMeasuredWidth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ATGMeasuredWidth_k__BackingField;
}
constexpr ::System::Nullable_1<float_t> const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__ATGMeasuredWidth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ATGMeasuredWidth_k__BackingField;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set__ATGMeasuredWidth_k__BackingField(::System::Nullable_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ATGMeasuredWidth_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__ATGRoundedWidth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ATGRoundedWidth_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::UITKTextHandle::__cordl_internal_get__ATGRoundedWidth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ATGRoundedWidth_k__BackingField;
}
constexpr void UnityEngine::UIElements::UITKTextHandle::__cordl_internal_set__ATGRoundedWidth_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ATGRoundedWidth_k__BackingField = value;
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
  this->___m_TextEventHandler = value;
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
  this->___m_TextElement = value;
}
inline void UnityEngine::UIElements::UITKTextHandle::setStaticF_s_TextLib(Il2CppObject* value) {
  ::cordl_internals::setStaticField<Il2CppObject*, "s_TextLib", ::UnityEngine::UIElements::UITKTextHandle*>(std::forward<Il2CppObject*>(value));
}
inline Il2CppObject* UnityEngine::UIElements::UITKTextHandle::getStaticF_s_TextLib() {
  return ::cordl_internals::getStaticField<Il2CppObject*, "s_TextLib", ::UnityEngine::UIElements::UITKTextHandle*>();
}
inline void UnityEngine::UIElements::UITKTextHandle::setStaticF_k_MinPadding(float_t value) {
  ::cordl_internals::setStaticField<float_t, "k_MinPadding", ::UnityEngine::UIElements::UITKTextHandle*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::UITKTextHandle::getStaticF_k_MinPadding() {
  return ::cordl_internals::getStaticField<float_t, "k_MinPadding", ::UnityEngine::UIElements::UITKTextHandle*>();
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* UnityEngine::UIElements::UITKTextHandle::get_Links() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_Links", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>(
      this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::ComputeNativeTextSize(/* [IsReadOnly] */ ::by_ref<::StringW const> textToMeasure, float_t width,
                                                                           ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t height,
                                                                           ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode, ::System::Nullable_1<float_t> fontsize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                       { "ComputeNativeTextSize",
                                         {},
                                         { ::i2c::type_of<::by_ref<::StringW const>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToMeasure, width, widthMode, height, heightMode, fontsize);
}
inline ::System::ValueTuple_2<::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">, bool> UnityEngine::UIElements::UITKTextHandle::UpdateNative(bool generateNativeSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "UpdateNative", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">, bool>>(this, ___internal_method, generateNativeSettings);
}
inline void UnityEngine::UIElements::UITKTextHandle::CacheTextGenerationInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "CacheTextGenerationInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::ShapeText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ShapeText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::ProcessMeshInfos(
    ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> textInfo,
    ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*> textElementIndicesByMesh,
    ::by_ref<::System::Collections::Generic::List_1<bool>*> hasMultipleColorsByMesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                          { "ProcessMeshInfos",
                            {},
                            { ::i2c::type_of<::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*>>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<bool>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textInfo, textElementIndicesByMesh, hasMultipleColorsByMesh);
}
inline bool UnityEngine::UIElements::UITKTextHandle::HasMissingGlyphs(
    ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> textInfo,
    ::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*> missingGlyphsPerFontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                              { "HasMissingGlyphs",
                                                {},
                                                { ::i2c::type_of<::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, textInfo, missingGlyphsPerFontAsset);
}
inline ::System::ValueTuple_2<bool, bool> UnityEngine::UIElements::UITKTextHandle::hasLinkAndHyperlink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "hasLinkAndHyperlink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool, bool>>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW> UnityEngine::UIElements::UITKTextHandle::ATGFindIntersectingLink(::UnityEngine::Vector2 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ATGFindIntersectingLink", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>(this, ___internal_method, point);
}
inline void UnityEngine::UIElements::UITKTextHandle::UpdateATGTextEventHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "UpdateATGTextEventHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::EnsureIsReadyForJobs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "EnsureIsReadyForJobs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UITKTextHandle::ConvertUssToNativeTextGenerationSettings(::StringW textToMeasure, ::System::Nullable_1<float_t> fontsize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                                           { "ConvertUssToNativeTextGenerationSettings", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, textToMeasure, fontsize);
}
inline ::UnityW<::UnityEngine::TextAsset> UnityEngine::UIElements::UITKTextHandle::GetICUAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetICUAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> UnityEngine::UIElements::UITKTextHandle::GetICUAssetStaticFalback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetICUAssetStaticFalback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(nullptr, ___internal_method);
}
inline Il2CppObject* UnityEngine::UIElements::UITKTextHandle::get_textLib() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_textLib", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::InitTextLib() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "InitTextLib", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::RemoveFromPermanentCacheATG() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::_ctor(::UnityEngine::UIElements::TextElement* te) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, te);
}
inline float_t UnityEngine::UIElements::UITKTextHandle::GetPixelsPerPoint() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::UITKTextHandle::get_LastPixelPerPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_LastPixelPerPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_LastPixelPerPoint(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_LastPixelPerPoint", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UITKTextHandle::SetDirty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<float_t> UnityEngine::UIElements::UITKTextHandle::get_MeasuredWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_MeasuredWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_MeasuredWidth(::System::Nullable_1<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_MeasuredWidth", {}, { ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::UITKTextHandle::get_RoundedWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_RoundedWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_RoundedWidth(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_RoundedWidth", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<float_t> UnityEngine::UIElements::UITKTextHandle::get_ATGMeasuredWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_ATGMeasuredWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_ATGMeasuredWidth(::System::Nullable_1<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_ATGMeasuredWidth", {}, { ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::UITKTextHandle::get_ATGRoundedWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_ATGRoundedWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_ATGRoundedWidth(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_ATGRoundedWidth", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::ComputeTextSize(::StringW textToMeasure, float_t width, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode,
                                                                                       float_t height, ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode,
                                                                                       ::System::Nullable_1<float_t> fontsize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                       { "ComputeTextSize",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, textToMeasure, width, widthMode, height, heightMode, fontsize);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::ComputeTextSize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::TextCore::Text::RenderedText const> textToMeasure, float_t width,
                                                                                       float_t height, ::System::Nullable_1<float_t> fontsize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                                                                         { "ComputeTextSize",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText const>>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, textToMeasure, width, height, fontsize);
}
inline void UnityEngine::UIElements::UITKTextHandle::ComputeSettingsAndUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ComputeSettingsAndUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::HandleATag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "HandleATag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::HandleLinkTag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "HandleLinkTag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::HandleLinkAndATagCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "HandleLinkAndATagCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::UpdateMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "UpdateMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::AddToPermanentCacheAndGenerateMesh() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextOverflowMode UnityEngine::UIElements::UITKTextHandle::GetTextOverflowMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetTextOverflowMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextOverflowMode>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UITKTextHandle::ConvertUssToTextGenerationSettings(bool populateScreenRect, ::System::Nullable_1<float_t> fontsize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, populateScreenRect, fontsize);
}
inline bool UnityEngine::UIElements::UITKTextHandle::TextLibraryCanElide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "TextLibraryCanElide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::UITKTextHandle::GetVertexPadding(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetVertexPadding", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fontAsset);
}
inline bool UnityEngine::UIElements::UITKTextHandle::IsAdvancedTextEnabledForElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::ReleaseResourcesIfPossible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ReleaseResourcesIfPossible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UITKTextHandle::get_IsPlaceholder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UITKTextHandle::IsElided() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "IsElided", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UITKTextHandle* UnityEngine::UIElements::UITKTextHandle::New_ctor(::UnityEngine::UIElements::TextElement* te) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UITKTextHandle*>(te));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextHandle::UITKTextHandle() {}
