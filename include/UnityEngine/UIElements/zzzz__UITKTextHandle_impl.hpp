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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* (
    ::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_Links)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c9d924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_Links", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeNativeTextSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::by_ref<::UnityEngine::TextCore::Text::RenderedText>, float_t, float_t)>(
    &::UnityEngine::UIElements::UITKTextHandle::ComputeNativeTextSize)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6c9d9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                            { "ComputeNativeTextSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.UpdateNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ValueW<8, "UnityEngine.TextCore.Text", "NativeTextInfo"> (::UnityEngine::UIElements::UITKTextHandle::*)(::by_ref<bool>)>(
    &::UnityEngine::UIElements::UITKTextHandle::UpdateNative)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6c9e6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "UpdateNative", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.hasLinkAndHyperlink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool, bool> (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::hasLinkAndHyperlink)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6c9e994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "hasLinkAndHyperlink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ATGFindIntersectingLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW> (::UnityEngine::UIElements::UITKTextHandle::*)(
    ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UITKTextHandle::ATGFindIntersectingLink)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6c9c5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ATGFindIntersectingLink", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.UpdateATGTextEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::TextCore::NativeTextGenerationSettings)>(
    &::UnityEngine::UIElements::UITKTextHandle::UpdateATGTextEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c9e924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                                             { "UpdateATGTextEventHandler", {}, { ::i2c::type_of<::UnityEngine::TextCore::NativeTextGenerationSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ConvertUssToNativeTextGenerationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::ConvertUssToNativeTextGenerationSettings)> {
  constexpr static std::size_t size = 0xb60;
  constexpr static std::size_t addrs = 0x6c9db90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ConvertUssToNativeTextGenerationSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetICUAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::GetICUAsset)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6c9f12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetICUAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetICUAssetStaticFalback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (*)()>(&::UnityEngine::UIElements::UITKTextHandle::GetICUAssetStaticFalback)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6c9f340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetICUAssetStaticFalback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_TextLib
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_TextLib)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6c9f3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_TextLib", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::UITKTextHandle::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c9f4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_MeasuredSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_MeasuredSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9f5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_MeasuredSizes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_MeasuredSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UITKTextHandle::set_MeasuredSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9f5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_MeasuredSizes", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_RoundedSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_RoundedSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9f5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_RoundedSizes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_RoundedSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UITKTextHandle::set_RoundedSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9f5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_RoundedSizes", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_ATGMeasuredSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_ATGMeasuredSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9f5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_ATGMeasuredSizes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_ATGMeasuredSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UITKTextHandle::set_ATGMeasuredSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9f5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_ATGMeasuredSizes", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_ATGRoundedSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_ATGRoundedSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9f600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_ATGRoundedSizes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.set_ATGRoundedSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UITKTextHandle::set_ATGRoundedSizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9f608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_ATGRoundedSizes", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeTextSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UITKTextHandle::*)(::by_ref<::UnityEngine::TextCore::Text::RenderedText>, float_t, float_t)>(
    &::UnityEngine::UIElements::UITKTextHandle::ComputeTextSize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6c9f610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                            { "ComputeTextSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ComputeSettingsAndUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::ComputeSettingsAndUpdate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6c9f7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ComputeSettingsAndUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HandleATag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::HandleATag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c9f8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "HandleATag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HandleLinkTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::HandleLinkTag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c9f908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "HandleLinkTag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.HandleLinkAndATagCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::HandleLinkAndATagCallbacks)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c9f91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "HandleLinkAndATagCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.UpdateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::UpdateMesh)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c9f82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "UpdateMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.AddTextInfoToPermanentCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::AddTextInfoToPermanentCache)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c9fefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.GetTextOverflowMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextOverflowMode (::UnityEngine::UIElements::UITKTextHandle::*)()>(
    &::UnityEngine::UIElements::UITKTextHandle::GetTextOverflowMode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6c9ff88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetTextOverflowMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.ConvertUssToTextGenerationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::ConvertUssToTextGenerationSettings)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x6ca0010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.TextLibraryCanElide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::TextLibraryCanElide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c9ecb4;

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
  constexpr static std::size_t addrs = 0x6c9eeb4;

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
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6ca0600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextHandle.get_IsPlaceholder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UITKTextHandle::*)()>(&::UnityEngine::UIElements::UITKTextHandle::get_IsPlaceholder)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ca0734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 5 }));
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
inline void UnityEngine::UIElements::UITKTextHandle::ComputeNativeTextSize(::by_ref<::UnityEngine::TextCore::Text::RenderedText> textToMeasure, float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                          { "ComputeNativeTextSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToMeasure, width, height);
}
inline ::ValueW<8, "UnityEngine.TextCore.Text", "NativeTextInfo"> UnityEngine::UIElements::UITKTextHandle::UpdateNative(::by_ref<bool> success) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "UpdateNative", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ValueW<8, "UnityEngine.TextCore.Text", "NativeTextInfo">>(this, ___internal_method, success);
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
inline void UnityEngine::UIElements::UITKTextHandle::UpdateATGTextEventHandler(::UnityEngine::TextCore::NativeTextGenerationSettings setting) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                                           { "UpdateATGTextEventHandler", {}, { ::i2c::type_of<::UnityEngine::TextCore::NativeTextGenerationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setting);
}
inline bool UnityEngine::UIElements::UITKTextHandle::ConvertUssToNativeTextGenerationSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "ConvertUssToNativeTextGenerationSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> UnityEngine::UIElements::UITKTextHandle::GetICUAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetICUAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> UnityEngine::UIElements::UITKTextHandle::GetICUAssetStaticFalback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetICUAssetStaticFalback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(nullptr, ___internal_method);
}
inline Il2CppObject* UnityEngine::UIElements::UITKTextHandle::get_TextLib() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_TextLib", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::_ctor(::UnityEngine::UIElements::TextElement* te) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, te);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::get_MeasuredSizes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_MeasuredSizes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_MeasuredSizes(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_MeasuredSizes", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::get_RoundedSizes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_RoundedSizes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_RoundedSizes(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_RoundedSizes", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::get_ATGMeasuredSizes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_ATGMeasuredSizes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_ATGMeasuredSizes(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_ATGMeasuredSizes", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::get_ATGRoundedSizes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "get_ATGRoundedSizes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextHandle::set_ATGRoundedSizes(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "set_ATGRoundedSizes", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UITKTextHandle::ComputeTextSize(::by_ref<::UnityEngine::TextCore::Text::RenderedText> textToMeasure, float_t width, float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(),
                                       { "ComputeTextSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, textToMeasure, width, height);
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
inline void UnityEngine::UIElements::UITKTextHandle::AddTextInfoToPermanentCache() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextOverflowMode UnityEngine::UIElements::UITKTextHandle::GetTextOverflowMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), { "GetTextOverflowMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextOverflowMode>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UITKTextHandle::ConvertUssToTextGenerationSettings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
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
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UITKTextHandle::get_IsPlaceholder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UITKTextHandle*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UITKTextHandle* UnityEngine::UIElements::UITKTextHandle::New_ctor(::UnityEngine::UIElements::TextElement* te) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UITKTextHandle*>(te));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextHandle::UITKTextHandle() {}
