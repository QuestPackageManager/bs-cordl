#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRPassthroughColorLut.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::*)(int32_t)>(
    &::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::Execute)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f19c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1a028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_Width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_Height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1a030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_Height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_Resolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1a038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_Resolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_SlicesPerRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_SlicesPerRow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1a040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_SlicesPerRow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_ChannelCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_ChannelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1a048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_ChannelCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings.get_FlipY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)()>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_FlipY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1a050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_FlipY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::*)(int32_t, int32_t, int32_t, int32_t, int32_t, bool)>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f19f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Width() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_Width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Height() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_Height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_Resolution() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_Resolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_SlicesPerRow() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_SlicesPerRow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_ChannelCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_ChannelCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::get_FlipY() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(), { "get_FlipY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings::_ctor(int32_t width, int32_t height, int32_t resolution, int32_t slicesPerRow, int32_t channelCount,
                                                                                                    bool flipY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, width, height, resolution, slicesPerRow, channelCount, flipY);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::*)(int32_t)>(
    &::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::Execute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f19f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*, int32_t, ::ArrayW<uint8_t>, bool)>(
    &::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::TextureToColorByteMap)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f19188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>(),
                            { "TextureToColorByteMap", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter.MapColorValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, ::Unity::Collections::NativeArray_1<uint8_t>,
                                                                ::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::MapColorValues)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5f19dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>(),
                                                             { "MapColorValues",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter.GetTextureSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings (*)(::UnityEngine::Texture2D*, int32_t, bool)>(
    &::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::GetTextureSettings)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f19cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>(),
                                                             { "GetTextureSettings", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter.TryGetTextureLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::StringW>)>(
    &::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::TryGetTextureLayout)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5f19670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>(),
                                                                                           { "TryGetTextureLayout",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::TextureToColorByteMap(::UnityEngine::Texture2D* lut, int32_t channelCount, ::ArrayW<uint8_t> target, bool flipY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>(),
                          { "TextureToColorByteMap", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lut, channelCount, target, flipY);
}
inline void GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::MapColorValues(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings settings,
                                                                                             ::Unity::Collections::NativeArray_1<uint8_t> source, ::ArrayW<uint8_t> target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>(),
                                                                                         { "MapColorValues",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(),
                                                                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings, source, target);
}
inline ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings
GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::GetTextureSettings(::UnityEngine::Texture2D* lut, int32_t channelCount, bool flipY) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>(),
                                                           { "GetTextureSettings", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings>(nullptr, ___internal_method, lut, channelCount, flipY);
}
inline bool GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::TryGetTextureLayout(int32_t width, int32_t height, ::by_ref<int32_t> resolution, ::by_ref<int32_t> slicesPerRow,
                                                                                                  ::by_ref<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*>(),
                                                                                         { "TryGetTextureLayout",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                             ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, width, height, resolution, slicesPerRow, errorMessage);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter::OVRPassthroughColorLut_ColorLutTextureConverter() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState::OVRPassthroughColorLut_CreateState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState::OVRPassthroughColorLut_CreateState() {}
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState GlobalNamespace::OVRPassthroughColorLut_CreateState::Invalid{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState GlobalNamespace::OVRPassthroughColorLut_CreateState::Pending{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState GlobalNamespace::OVRPassthroughColorLut_CreateState::Created{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_Resolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::get_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "get_Resolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.set_Resolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(uint32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::set_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "set_Resolution", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_Channels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels (::GlobalNamespace::OVRPassthroughColorLut::*)()>(
    &::GlobalNamespace::OVRPassthroughColorLut::get_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f18004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "get_Channels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.set_Channels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(
    &::GlobalNamespace::OVRPassthroughColorLut::set_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1800c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                                                           { "set_Channels", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_IsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::get_IsInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f18014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "get_IsInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f18024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::UnityEngine::Texture2D*, bool)>(&::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f18034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color>, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(
    &::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f18664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color32>, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(
    &::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f18750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<uint8_t>, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(
    &::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f1883c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color>)>(&::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f18a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "UpdateFrom", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color32>)>(&::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f18d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "UpdateFrom", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f18eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "UpdateFrom", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.UpdateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::UnityEngine::Texture2D*, bool)>(&::GlobalNamespace::OVRPassthroughColorLut::UpdateFrom)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f18f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                                                           { "UpdateFrom", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Dispose)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5f19248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.FreeAllocHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::FreeAllocHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f194d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "FreeAllocHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsTextureSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::by_ref<::StringW>)>(&::GlobalNamespace::OVRPassthroughColorLut::IsTextureSupported)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5f194ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                             { "IsTextureSupported", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(int32_t, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(
    &::GlobalNamespace::OVRPassthroughColorLut::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f18240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsValidUpdateResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughColorLut::*)(int32_t, int32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::IsValidUpdateResolution)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f19044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "IsValidUpdateResolution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetChannelsForTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels (*)(::UnityEngine::TextureFormat)>(
    &::GlobalNamespace::OVRPassthroughColorLut::GetChannelsForTextureFormat)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f181a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "GetChannelsForTextureFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetTextureSizeFromByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(
    &::GlobalNamespace::OVRPassthroughColorLut::GetTextureSizeFromByteArray)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f18898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                         { "GetTextureSizeFromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::OVRPassthroughColorLut::GetTextureSize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f180c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "GetTextureSize", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.ChannelsToCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels)>(&::GlobalNamespace::OVRPassthroughColorLut::ChannelsToCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f19a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                                                           { "ChannelsToCount", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsResolutionAccepted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, int32_t, ::by_ref<::StringW>)>(&::GlobalNamespace::OVRPassthroughColorLut::IsResolutionAccepted)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f1994c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                             { "IsResolutionAccepted", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.IsPowerOfTwo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::IsPowerOfTwo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f19a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "IsPowerOfTwo", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::GlobalNamespace::OVRPlugin_PassthroughColorLutData)>(
    &::GlobalNamespace::OVRPassthroughColorLut::Create)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5f184d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "Create", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_PassthroughColorLutData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.RefreshIfInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(bool)>(&::GlobalNamespace::OVRPassthroughColorLut::RefreshIfInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f19b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "RefreshIfInitialized", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Recreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Recreate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f19b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "Recreate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.InternalCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::InternalCreate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f19a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "InternalCreate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.GetResolutionFromSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int32_t)>(&::GlobalNamespace::OVRPassthroughColorLut::GetResolutionFromSize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f19898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "GetResolutionFromSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(::by_ref<::ArrayW<uint8_t>>)>(
    &::GlobalNamespace::OVRPassthroughColorLut::CreateLutData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f19b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "CreateLutData", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(::UnityEngine::Texture2D*, bool)>(
    &::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromTexture)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f1847c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                             { "CreateLutDataFromTexture", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color>)>(
    &::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f18704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "CreateLutDataFromArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color32>)>(
    &::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f187f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "CreateLutDataFromArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.CreateLutDataFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_PassthroughColorLutData (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<uint8_t>)>(
    &::GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f189a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "CreateLutDataFromArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.WriteColorsAsBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color>, ::ArrayW<uint8_t>)>(
    &::GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5f18ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                             { "WriteColorsAsBytes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.WriteColorsAsBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)(::ArrayW<::UnityEngine::Color32>, ::ArrayW<uint8_t>)>(
    &::GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f18df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                             { "WriteColorsAsBytes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Finalize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f19be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { ::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut::*)()>(&::GlobalNamespace::OVRPassthroughColorLut::Destroy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f193c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "Destroy", {}, {} })));
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
constexpr ::ArrayW<uint8_t>& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__colorBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBytes;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__colorBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBytes;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__colorBytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorBytes = value;
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
  this->____locker = value;
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__createState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createState;
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState const& GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_get__createState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createState;
}
constexpr void GlobalNamespace::OVRPassthroughColorLut::__cordl_internal_set__createState(::GlobalNamespace::OVRPassthroughColorLut_CreateState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____createState = value;
}
inline uint32_t GlobalNamespace::OVRPassthroughColorLut::get_Resolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "get_Resolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::set_Resolution(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "set_Resolution", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels GlobalNamespace::OVRPassthroughColorLut::get_Channels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "get_Channels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::set_Channels(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                                                         { "set_Channels", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::get_IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "get_IsInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::UnityEngine::Texture2D* initialLutTexture, bool flipY) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialLutTexture, flipY);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::ArrayW<::UnityEngine::Color> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialColorLut, channels);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::ArrayW<::UnityEngine::Color32> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialColorLut, channels);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(::ArrayW<uint8_t> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialColorLut, channels);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::ArrayW<::UnityEngine::Color> colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "UpdateFrom", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::ArrayW<::UnityEngine::Color32> colors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "UpdateFrom", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::ArrayW<uint8_t> colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "UpdateFrom", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::UpdateFrom(::UnityEngine::Texture2D* lutTexture, bool flipY) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "UpdateFrom", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lutTexture, flipY);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::FreeAllocHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "FreeAllocHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsTextureSupported(::UnityEngine::Texture2D* texture, ::by_ref<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                           { "IsTextureSupported", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, texture, errorMessage);
}
inline void GlobalNamespace::OVRPassthroughColorLut::_ctor(int32_t size, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, channels);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsValidUpdateResolution(int32_t lutSize, int32_t elementByteSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "IsValidUpdateResolution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lutSize, elementByteSize);
}
template <typename T> inline bool GlobalNamespace::OVRPassthroughColorLut::IsValidLutUpdate(::ArrayW<T> colorArray, int32_t elementByteSize) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                           { "IsValidLutUpdate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colorArray, elementByteSize);
}
inline ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels GlobalNamespace::OVRPassthroughColorLut::GetChannelsForTextureFormat(::UnityEngine::TextureFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "GetChannelsForTextureFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>(nullptr, ___internal_method, format);
}
inline int32_t GlobalNamespace::OVRPassthroughColorLut::GetTextureSizeFromByteArray(::ArrayW<uint8_t> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                       { "GetTextureSizeFromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, initialColorLut, channels);
}
inline int32_t GlobalNamespace::OVRPassthroughColorLut::GetTextureSize(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "GetTextureSize", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, texture);
}
template <typename T> inline int32_t GlobalNamespace::OVRPassthroughColorLut::GetArraySize(::ArrayW<T> array) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "GetArraySize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array);
}
inline int32_t GlobalNamespace::OVRPassthroughColorLut::ChannelsToCount(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                                                         { "ChannelsToCount", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, channels);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsResolutionAccepted(uint32_t resolution, int32_t size, ::by_ref<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                           { "IsResolutionAccepted", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resolution, size, errorMessage);
}
inline bool GlobalNamespace::OVRPassthroughColorLut::IsPowerOfTwo(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "IsPowerOfTwo", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Create(::GlobalNamespace::OVRPlugin_PassthroughColorLutData lutData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "Create", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_PassthroughColorLutData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lutData);
}
inline void GlobalNamespace::OVRPassthroughColorLut::RefreshIfInitialized(bool isInitialized) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "RefreshIfInitialized", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isInitialized);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Recreate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "Recreate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::InternalCreate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "InternalCreate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::OVRPassthroughColorLut::GetResolutionFromSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "GetResolutionFromSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, size);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutData(::by_ref<::ArrayW<uint8_t>> colorBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "CreateLutData", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData>(this, ___internal_method, colorBytes);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromTexture(::UnityEngine::Texture2D* lut, bool flipY) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                                                         { "CreateLutDataFromTexture", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData>(this, ___internal_method, lut, flipY);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray(::ArrayW<::UnityEngine::Color> colors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "CreateLutDataFromArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData>(this, ___internal_method, colors);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray(::ArrayW<::UnityEngine::Color32> colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "CreateLutDataFromArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData>(this, ___internal_method, colors);
}
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData GlobalNamespace::OVRPassthroughColorLut::CreateLutDataFromArray(::ArrayW<uint8_t> colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "CreateLutDataFromArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_PassthroughColorLutData>(this, ___internal_method, colors);
}
inline void GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes(::ArrayW<::UnityEngine::Color> colors, ::ArrayW<uint8_t> target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                           { "WriteColorsAsBytes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, target);
}
inline void GlobalNamespace::OVRPassthroughColorLut::WriteColorsAsBytes(::ArrayW<::UnityEngine::Color32> colors, ::ArrayW<uint8_t> target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                           { "WriteColorsAsBytes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, target);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughColorLut::Destroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::UnityEngine::Texture2D* initialLutTexture, bool flipY) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughColorLut*>(initialLutTexture, flipY));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::ArrayW<::UnityEngine::Color> initialColorLut,
                                                                                                    ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughColorLut*>(initialColorLut, channels));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::ArrayW<::UnityEngine::Color32> initialColorLut,
                                                                                                    ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughColorLut*>(initialColorLut, channels));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(::ArrayW<uint8_t> initialColorLut,
                                                                                                    ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughColorLut*>(initialColorLut, channels));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughColorLut::New_ctor(int32_t size, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughColorLut*>(size, channels));
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
