#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels::OVRPassthroughColorLut_ColorChannels(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels::OVRPassthroughColorLut_ColorChannels() {}
constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels GlobalNamespace::OVRPassthroughColorLut_ColorChannels::Rgb{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels GlobalNamespace::OVRPassthroughColorLut_ColorChannels::Rgba{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::*)(int32_t)>(
    &::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::Execute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x404d2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: Some("{}") }, CppParam { name: "channelCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::OVRPassthroughColorLut_WriteColorsAsBytesJob(::Unity::Collections::NativeArray_1<uint8_t> target,
                                                                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Color> source,
                                                                                                                        int32_t channelCount) noexcept {
  this->target = target;
  this->source = source;
  this->channelCount = channelCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::OVRPassthroughColorLut_WriteColorsAsBytesJob() {}
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_Width
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404d6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                                 "get_Width", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_Height
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404d6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                                 "get_Height", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_Resolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404d6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                                 "get_Resolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_SlicesPerRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_SlicesPerRow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404d6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                                 "get_SlicesPerRow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_ChannelCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_ChannelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404d6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                                 "get_ChannelCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_FlipY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_FlipY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404d6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                                 "get_FlipY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)(
    int32_t, int32_t, int32_t, int32_t, int32_t, bool)>(&::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x404d608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Width() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                               "get_Width", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Height() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                               "get_Height", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Resolution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                               "get_Resolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_SlicesPerRow() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                               "get_SlicesPerRow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_ChannelCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                               "get_ChannelCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_FlipY() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                               "get_FlipY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::_ctor(int32_t width, int32_t height, int32_t resolution, int32_t slicesPerRow, int32_t channelCount,
                                                                                                    bool flipY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, resolution, slicesPerRow, channelCount, flipY);
}
// Ctor Parameters [CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_Resolution_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SlicesPerRow_k__BackingField", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_ChannelCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_FlipY_k__BackingField", ty:
// "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings(
    int32_t _Width_k__BackingField, int32_t _Height_k__BackingField, int32_t _Resolution_k__BackingField, int32_t _SlicesPerRow_k__BackingField, int32_t _ChannelCount_k__BackingField,
    bool _FlipY_k__BackingField) noexcept {
  this->_Width_k__BackingField = _Width_k__BackingField;
  this->_Height_k__BackingField = _Height_k__BackingField;
  this->_Resolution_k__BackingField = _Resolution_k__BackingField;
  this->_SlicesPerRow_k__BackingField = _SlicesPerRow_k__BackingField;
  this->_ChannelCount_k__BackingField = _ChannelCount_k__BackingField;
  this->_FlipY_k__BackingField = _FlipY_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings() {}
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::*)(int32_t)>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::Execute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x404d620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob>::get(), "Execute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "settings", ty: "::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob(
    ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings settings, ::Unity::Collections::NativeArray_1<uint8_t> target,
    ::Unity::Collections::NativeArray_1<uint8_t> source) noexcept {
  this->settings = settings;
  this->target = target;
  this->source = source;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter.TextureToColorByteMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture2D*, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
    &::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::TextureToColorByteMap)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x404ca28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>::get(),
                                                 "TextureToColorByteMap", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter.MapColorValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, ::Unity::Collections::NativeArray_1<uint8_t>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::MapColorValues)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x404d46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>::get(), "MapColorValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter.GetTextureSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings (*)(
    ::UnityEngine::Texture2D*, int32_t, bool)>(&::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::GetTextureSettings)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x404d370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>::get(), "GetTextureSettings",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter.TryGetTextureLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, ::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<::StringW>)>(
    &::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::TryGetTextureLayout)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x404cddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>::get(), "TryGetTextureLayout",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::TextureToColorByteMap(::UnityEngine::Texture2D* lut, int32_t channelCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> target,
                                                                                                    bool flipY) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>::get(),
                                               "TextureToColorByteMap", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lut, channelCount, target, flipY);
}
inline void GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::MapColorValues(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings settings,
                                                                                             ::Unity::Collections::NativeArray_1<uint8_t> source, ::ArrayW<uint8_t, ::Array<uint8_t>*> target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>::get(), "MapColorValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, source, target);
}
inline ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings
GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::GetTextureSettings(::UnityEngine::Texture2D* lut, int32_t channelCount, bool flipY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>::get(), "GetTextureSettings",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, false>(nullptr, ___internal_method, lut, channelCount, flipY);
}
inline bool GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::TryGetTextureLayout(int32_t width, int32_t height, ::ByRef<int32_t> resolution, ::ByRef<int32_t> slicesPerRow,
                                                                                                  ::ByRef<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>::get(), "TryGetTextureLayout",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, width, height, resolution, slicesPerRow, errorMessage);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::OVRPassthroughColorLut_ColorLutTextureConverter() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_Resolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughColorLut::*)()>(
    &::GlobalNamespace::OVRPassthroughColorLut::get_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404b99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                               "get_Resolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.set_Resolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(uint32_t)>(
    &::GlobalNamespace::OVRPassthroughColorLut::set_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404b9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "set_Resolution",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_Channels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels (::GlobalNamespace::OVRPassthroughColorLut::*)()>(
    &::GlobalNamespace::OVRPassthroughColorLut::get_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404b9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                               "get_Channels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.set_Channels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(
    &::GlobalNamespace::OVRPassthroughColorLut::set_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404b9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "set_Channels", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_IsInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughColorLut::*)()>(
    &::GlobalNamespace::OVRPassthroughColorLut::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404b9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                               "get_IsInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.set_IsInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(bool)>(
    &::GlobalNamespace::OVRPassthroughColorLut::set_IsInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x404b9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "set_IsInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::UnityEngine::Texture2D*, bool)>(
    &::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x404b9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x404bf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x404c050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x404c138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(
    &::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x404c2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "UpdateFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x404c5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "UpdateFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x404c780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "UpdateFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::UnityEngine::Texture2D*, bool)>(
    &::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x404c84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "UpdateFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x404cadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsTextureSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::ByRef<::StringW>)>(
    &::GlobalNamespace::OVRPassthroughColorLut::IsTextureSupported)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x404cc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "IsTextureSupported", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(int32_t, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x404bbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsValidUpdateResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughColorLut::*)(int32_t, int32_t)>(
    &::GlobalNamespace::OVRPassthroughColorLut::IsValidUpdateResolution)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x404c904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "IsValidUpdateResolution", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetChannelsForTextureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels (*)(::UnityEngine::TextureFormat)>(
    &::GlobalNamespace::OVRPassthroughColorLut::GetChannelsForTextureFormat)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x404bb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "GetChannelsForTextureFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetTextureSizeFromByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(
    &::GlobalNamespace::OVRPassthroughColorLut::GetTextureSizeFromByteArray)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x404c194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "GetTextureSizeFromByteArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetTextureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::OVRPassthroughColorLut::GetTextureSize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x404ba64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "GetTextureSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.ChannelsToCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(
    &::GlobalNamespace::OVRPassthroughColorLut::ChannelsToCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x404d178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "ChannelsToCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsResolutionAccepted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, int32_t, ::ByRef<::StringW>)>(&::GlobalNamespace::OVRPassthroughColorLut::IsResolutionAccepted)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x404d0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "IsResolutionAccepted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsPowerOfTwo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::IsPowerOfTwo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x404d188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "IsPowerOfTwo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::GlobalNamespace::OVRPlugin_PassthroughColorLutData)>(
    &::GlobalNamespace::OVRPassthroughColorLut::Create)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x404be78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_PassthroughColorLutData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetResolutionFromSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(int32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::GetResolutionFromSize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x404d000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "GetResolutionFromSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x404d1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutData", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::UnityEngine::Texture2D*, bool)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromTexture)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x404be20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutDataFromTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x404c004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutDataFromArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x404c0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutDataFromArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x404c2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutDataFromArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.WriteColorsAsBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x404c3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "WriteColorsAsBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.WriteColorsAsBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(
    ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x404c6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "WriteColorsAsBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x404d23c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Destroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x404cb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "Destroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__Resolution_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Resolution_k__BackingField;
}
constexpr uint32_t const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__Resolution_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Resolution_k__BackingField;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__Resolution_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Resolution_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__Channels_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Channels_k__BackingField;
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__Channels_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Channels_k__BackingField;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__Channels_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Channels_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__IsInitialized_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__IsInitialized_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__IsInitialized_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsInitialized_k__BackingField = value;
}
constexpr uint64_t& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__colorLutHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorLutHandle;
}
constexpr uint64_t const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__colorLutHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorLutHandle;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__colorLutHandle(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorLutHandle = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__allocHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allocHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__allocHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allocHandle;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__allocHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allocHandle = value;
}
constexpr ::GlobalNamespace::OVRPlugin_PassthroughColorLutData& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__lutData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lutData;
}
constexpr ::GlobalNamespace::OVRPlugin_PassthroughColorLutData const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__lutData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lutData;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__lutData(::GlobalNamespace::OVRPlugin_PassthroughColorLutData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lutData = value;
}
constexpr int32_t& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__channelCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelCount;
}
constexpr int32_t const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__channelCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelCount;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__channelCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____channelCount = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__colorBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__colorBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBytes;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__colorBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__locker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locker;
}
constexpr ::System::Object* const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__locker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locker;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__locker(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____locker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::OVRPassthroughColorLut::get_Resolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                             "get_Resolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::set_Resolution(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "set_Resolution", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels GlobalNamespace::OVRPassthroughColorLut::get_Channels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "get_Channels",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::set_Channels(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "set_Channels", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::get_IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                             "get_IsInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::set_IsInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "set_IsInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::UnityEngine::Texture2D* initialLutTexture, bool flipY) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialLutTexture, flipY);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> initialColorLut,
                                                           ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialColorLut, channels);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> initialColorLut,
                                                           ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialColorLut, channels);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialColorLut, channels);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "UpdateFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "UpdateFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::ArrayW<uint8_t, ::Array<uint8_t>*> colors) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "UpdateFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::UnityEngine::Texture2D* lutTexture, bool flipY) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "UpdateFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lutTexture, flipY);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsTextureSupported(::UnityEngine::Texture2D* texture, ::ByRef<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "IsTextureSupported", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, texture, errorMessage);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(int32_t size, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, channels);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsValidUpdateResolution(int32_t lutSize, int32_t elementByteSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "IsValidUpdateResolution", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lutSize, elementByteSize);
}
template <typename T> inline bool GlobalNamespace::OVRPassthroughColorLut::IsValidLutUpdate(::ArrayW<T, ::Array<T>*> colorArray, int32_t elementByteSize) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "IsValidLutUpdate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, colorArray, elementByteSize);
}
inline ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels GlobalNamespace::OVRPassthroughColorLut::GetChannelsForTextureFormat(::UnityEngine::TextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "GetChannelsForTextureFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels, false>(nullptr, ___internal_method, format);
}
inline int32_t GlobalNamespace::OVRPassthroughColorLut::GetTextureSizeFromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> initialColorLut,
                                                                                    ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "GetTextureSizeFromByteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, initialColorLut, channels);
}
inline int32_t GlobalNamespace::OVRPassthroughColorLut::GetTextureSize(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "GetTextureSize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, texture);
}
template <typename T> inline int32_t GlobalNamespace::OVRPassthroughColorLut::GetArraySize(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "GetArraySize",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array);
}
inline int32_t GlobalNamespace::OVRPassthroughColorLut::ChannelsToCount(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "ChannelsToCount", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, channels);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsResolutionAccepted(uint32_t resolution, int32_t size, ::ByRef<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "IsResolutionAccepted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, resolution, size, errorMessage);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsPowerOfTwo(uint32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "IsPowerOfTwo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, x);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Create(::GlobalNamespace::OVRPlugin_PassthroughColorLutData lutData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_PassthroughColorLutData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lutData);
}
inline uint32_t GlobalNamespace::OVRPassthroughColorLut::GetResolutionFromSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "GetResolutionFromSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, size);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutData(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> colorBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData, false>(this, ___internal_method, colorBytes);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromTexture(::UnityEngine::Texture2D* lut, bool flipY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutDataFromTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData, false>(this, ___internal_method, lut, flipY);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutDataFromArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData, false>(this, ___internal_method, colors);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutDataFromArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData, false>(this, ___internal_method, colors);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray(::ArrayW<uint8_t, ::Array<uint8_t>*> colors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "CreateLutDataFromArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData, false>(this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::ArrayW<uint8_t, ::Array<uint8_t>*> target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "WriteColorsAsBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors, target);
}
inline void GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, ::ArrayW<uint8_t, ::Array<uint8_t>*> target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "WriteColorsAsBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors, target);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Destroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughColorLut*>::get(), "Destroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::UnityEngine::Texture2D* initialLutTexture, bool flipY) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughColorLut*>(initialLutTexture, flipY));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> initialColorLut,
                                                                                                    ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughColorLut*>(initialColorLut, channels));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> initialColorLut,
                                                                                                    ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughColorLut*>(initialColorLut, channels));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> initialColorLut,
                                                                                                    ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughColorLut*>(initialColorLut, channels));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(int32_t size, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughColorLut*>(size, channels));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRPassthroughColorLut::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRPassthroughColorLut::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughColorLut::OVRPassthroughColorLut() {}
