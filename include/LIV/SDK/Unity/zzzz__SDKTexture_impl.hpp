#pragma once
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_FORMAT_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_TYPE_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTexture_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_FORMAT_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_TYPE_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTexture.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKTexture (*)()>(&::LIV::SDK::Unity::SDKTexture::get_empty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24f48b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTexture>::get(), "get_empty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTexture.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKTexture::*)()>(&::LIV::SDK::Unity::SDKTexture::ToString)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x24fab90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTexture>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTexture>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKTexture LIV::SDK::Unity::SDKTexture::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTexture>::get(), "get_empty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTexture, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKTexture::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTexture>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "id", ty: "::LIV::SDK::Unity::TEXTURE_ID", modifiers: "", def_value: Some("{}") }, CppParam { name: "texturePtr", ty: "void*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "SharedHandle", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "device", ty: "::LIV::SDK::Unity::TEXTURE_DEVICE", modifiers: "", def_value: Some("{}") },
// CppParam { name: "dummy", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::LIV::SDK::Unity::TEXTURE_TYPE", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "format", ty: "::LIV::SDK::Unity::TEXTURE_FORMAT", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorSpace", ty: "::LIV::SDK::Unity::TEXTURE_COLOR_SPACE", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKTexture::SDKTexture(::LIV::SDK::Unity::TEXTURE_ID id, void* texturePtr, void* SharedHandle, ::LIV::SDK::Unity::TEXTURE_DEVICE device, int32_t dummy,
                                                    ::LIV::SDK::Unity::TEXTURE_TYPE type, ::LIV::SDK::Unity::TEXTURE_FORMAT format, ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace, int32_t width,
                                                    int32_t height) noexcept {
  this->id = id;
  this->texturePtr = texturePtr;
  this->SharedHandle = SharedHandle;
  this->device = device;
  this->dummy = dummy;
  this->type = type;
  this->format = format;
  this->colorSpace = colorSpace;
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKTexture::SDKTexture() {}
