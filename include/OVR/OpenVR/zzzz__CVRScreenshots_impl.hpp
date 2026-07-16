#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRScreenshots.hpp"
#include "OVR/OpenVR/zzzz__IVRScreenshots_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRScreenshots_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotPropertyFilenames_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotType_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRScreenshots::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRScreenshots::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5e44e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.RequestScreenshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(::by_ref<uint32_t>, ::OVR::OpenVR::EVRScreenshotType, ::StringW,
                                                                                                                            ::StringW)>(&::OVR::OpenVR::CVRScreenshots::RequestScreenshot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e44f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
            { "RequestScreenshot", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::OVR::OpenVR::EVRScreenshotType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.HookScreenshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(::ArrayW<::OVR::OpenVR::EVRScreenshotType>)>(
    &::OVR::OpenVR::CVRScreenshots::HookScreenshot)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e44f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(), { "HookScreenshot", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::EVRScreenshotType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.GetScreenshotPropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotType (::OVR::OpenVR::CVRScreenshots::*)(uint32_t, ::by_ref<::OVR::OpenVR::EVRScreenshotError>)>(
    &::OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
                                                             { "GetScreenshotPropertyType", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRScreenshotError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.GetScreenshotPropertyFilename
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRScreenshots::*)(uint32_t, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint32_t,
                                                                                                   ::by_ref<::OVR::OpenVR::EVRScreenshotError>)>(
    &::OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyFilename)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
                                                { "GetScreenshotPropertyFilename",
                                                  {},
                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRScreenshotPropertyFilenames>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRScreenshotError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.UpdateScreenshotProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(uint32_t, float_t)>(
    &::OVR::OpenVR::CVRScreenshots::UpdateScreenshotProgress)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(), { "UpdateScreenshotProgress", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.TakeStereoScreenshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(::by_ref<uint32_t>, ::StringW, ::StringW)>(
    &::OVR::OpenVR::CVRScreenshots::TakeStereoScreenshot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e44fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
                                                             { "TakeStereoScreenshot", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.SubmitScreenshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(uint32_t, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(
    &::OVR::OpenVR::CVRScreenshots::SubmitScreenshot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
                            { "SubmitScreenshot", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRScreenshotType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRScreenshots& OVR::OpenVR::CVRScreenshots::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRScreenshots const& OVR::OpenVR::CVRScreenshots::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRScreenshots::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRScreenshots value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRScreenshots::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::RequestScreenshot(::by_ref<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename,
                                                                                        ::StringW pchVRFilename) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
          { "RequestScreenshot", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::OVR::OpenVR::EVRScreenshotType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::HookScreenshot(::ArrayW<::OVR::OpenVR::EVRScreenshotType> pSupportedTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(), { "HookScreenshot", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::EVRScreenshotType>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, pSupportedTypes);
}
inline ::OVR::OpenVR::EVRScreenshotType OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyType(uint32_t screenshotHandle, ::by_ref<::OVR::OpenVR::EVRScreenshotError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
                                                           { "GetScreenshotPropertyType", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRScreenshotError>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotType>(this, ___internal_method, screenshotHandle, pError);
}
inline uint32_t OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyFilename(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType,
                                                                           ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename, ::by_ref<::OVR::OpenVR::EVRScreenshotError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
                                              { "GetScreenshotPropertyFilename",
                                                {},
                                                { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRScreenshotPropertyFilenames>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRScreenshotError>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::UpdateScreenshotProgress(uint32_t screenshotHandle, float_t flProgress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(), { "UpdateScreenshotProgress", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, screenshotHandle, flProgress);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::TakeStereoScreenshot(::by_ref<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
                                                           { "TakeStereoScreenshot", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::SubmitScreenshot(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename,
                                                                                       ::StringW pchSourceVRFilename) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRScreenshots*>(),
                          { "SubmitScreenshot", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRScreenshotType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
}
inline ::OVR::OpenVR::CVRScreenshots* OVR::OpenVR::CVRScreenshots::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRScreenshots*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRScreenshots::CVRScreenshots() {}
