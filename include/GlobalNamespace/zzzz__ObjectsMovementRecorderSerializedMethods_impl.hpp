#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectsMovementRecorderSerializedMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorderSerializedMethods_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorderSerializedMethods.SerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::ObjectsMovementRecorder_Mode)>(&::GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58e69b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                                                                           { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::ObjectsMovementRecorder_Mode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorderSerializedMethods.ModeFromSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::ObjectsMovementRecorder_Mode>)>(
    &::GlobalNamespace::ObjectsMovementRecorderSerializedMethods::ModeFromSerializedName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58e6a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                                { "ModeFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ObjectsMovementRecorder_Mode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorderSerializedMethods.SerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::ObjectsMovementRecorder_CameraView)>(
    &::GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58e6b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                                                                           { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::ObjectsMovementRecorder_CameraView>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorderSerializedMethods.CameraViewFromSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::ObjectsMovementRecorder_CameraView>)>(
    &::GlobalNamespace::ObjectsMovementRecorderSerializedMethods::CameraViewFromSerializedName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58e6b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                         { "CameraViewFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ObjectsMovementRecorder_CameraView>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorderSerializedMethods.SerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type)>(
    &::GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58e6c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                                             { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorderSerializedMethods.PlaybackScreenshotTypeFromSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type>)>(
    &::GlobalNamespace::ObjectsMovementRecorderSerializedMethods::PlaybackScreenshotTypeFromSerializedName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58e6c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
            { "PlaybackScreenshotTypeFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type>>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName(::GlobalNamespace::ObjectsMovementRecorder_Mode mode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                                                                         { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::ObjectsMovementRecorder_Mode>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mode);
}
inline bool GlobalNamespace::ObjectsMovementRecorderSerializedMethods::ModeFromSerializedName(::StringW name, ::by_ref<::GlobalNamespace::ObjectsMovementRecorder_Mode> mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                              { "ModeFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ObjectsMovementRecorder_Mode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, mode);
}
inline ::StringW GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName(::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                                                                         { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::ObjectsMovementRecorder_CameraView>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, cameraView);
}
inline bool GlobalNamespace::ObjectsMovementRecorderSerializedMethods::CameraViewFromSerializedName(::StringW name, ::by_ref<::GlobalNamespace::ObjectsMovementRecorder_CameraView> cameraView) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                       { "CameraViewFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ObjectsMovementRecorder_CameraView>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, cameraView);
}
inline ::StringW GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName(::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                                                                                         { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline bool GlobalNamespace::ObjectsMovementRecorderSerializedMethods::PlaybackScreenshotTypeFromSerializedName(::StringW name,
                                                                                                                ::by_ref<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type> type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*>(),
                       { "PlaybackScreenshotTypeFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, type);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectsMovementRecorderSerializedMethods::ObjectsMovementRecorderSerializedMethods() {}
