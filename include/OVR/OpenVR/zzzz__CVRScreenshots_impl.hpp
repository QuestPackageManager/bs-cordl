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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRScreenshots::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRScreenshots::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x4075c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.RequestScreenshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(
    ::ByRef<uint32_t>, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&::OVR::OpenVR::CVRScreenshots::RequestScreenshot)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4075d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "RequestScreenshot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRScreenshotType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.HookScreenshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(
    ::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>)>(&::OVR::OpenVR::CVRScreenshots::HookScreenshot)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4075d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "HookScreenshot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.GetScreenshotPropertyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVRScreenshotType (::OVR::OpenVR::CVRScreenshots::*)(uint32_t, ::ByRef<::OVR::OpenVR::EVRScreenshotError>)>(&::OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "GetScreenshotPropertyType", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRScreenshotError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.GetScreenshotPropertyFilename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRScreenshots::*)(
    uint32_t, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVRScreenshotError>)>(
    &::OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyFilename)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "GetScreenshotPropertyFilename", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRScreenshotPropertyFilenames>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRScreenshotError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.UpdateScreenshotProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(uint32_t, float_t)>(
    &::OVR::OpenVR::CVRScreenshots::UpdateScreenshotProgress)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "UpdateScreenshotProgress", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.TakeStereoScreenshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(::ByRef<uint32_t>, ::StringW, ::StringW)>(
    &::OVR::OpenVR::CVRScreenshots::TakeStereoScreenshot)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4075e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "TakeStereoScreenshot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRScreenshots.SubmitScreenshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::CVRScreenshots::*)(
    uint32_t, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&::OVR::OpenVR::CVRScreenshots::SubmitScreenshot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "SubmitScreenshot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRScreenshotType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::RequestScreenshot(::ByRef<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename,
                                                                                        ::StringW pchVRFilename) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "RequestScreenshot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRScreenshotType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::HookScreenshot(::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*> pSupportedTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "HookScreenshot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pSupportedTypes);
}
inline ::OVR::OpenVR::EVRScreenshotType OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyType(uint32_t screenshotHandle, ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "GetScreenshotPropertyType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRScreenshotError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotType, false>(this, ___internal_method, screenshotHandle, pError);
}
inline uint32_t OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyFilename(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType,
                                                                           ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename, ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "GetScreenshotPropertyFilename", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRScreenshotPropertyFilenames>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRScreenshotError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::UpdateScreenshotProgress(uint32_t screenshotHandle, float_t flProgress) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "UpdateScreenshotProgress", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, screenshotHandle, flProgress);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::TakeStereoScreenshot(::ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "TakeStereoScreenshot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::SubmitScreenshot(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename,
                                                                                       ::StringW pchSourceVRFilename) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRScreenshots*>::get(), "SubmitScreenshot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRScreenshotType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
}
inline ::OVR::OpenVR::CVRScreenshots* OVR::OpenVR::CVRScreenshots::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRScreenshots*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRScreenshots::CVRScreenshots() {}
