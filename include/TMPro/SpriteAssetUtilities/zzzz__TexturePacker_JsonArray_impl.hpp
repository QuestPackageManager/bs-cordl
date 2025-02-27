#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_def.hpp"
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame::*)()>(
    &::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame::ToString)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x48193d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "w", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame::TexturePacker_JsonArray_SpriteFrame(float_t x, float_t y, float_t w, float_t h) noexcept {
  this->x = x;
  this->y = y;
  this->w = w;
  this->h = h;
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame::TexturePacker_JsonArray_SpriteFrame() {}
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize::*)()>(
    &::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4819558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize::TexturePacker_JsonArray_SpriteSize(float_t w, float_t h) noexcept {
  this->w = w;
  this->h = h;
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize::TexturePacker_JsonArray_SpriteSize() {}
// Ctor Parameters [CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "frame", ty:
// "::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotated", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "trimmed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteSourceSize", ty: "::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "sourceSize", ty: "::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "pivot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame::TexturePacker_JsonArray_Frame(::StringW filename, ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame frame,
                                                                                                      bool rotated, bool trimmed,
                                                                                                      ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame spriteSourceSize,
                                                                                                      ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize sourceSize,
                                                                                                      ::UnityEngine::Vector2 pivot) noexcept {
  this->filename = filename;
  this->frame = frame;
  this->rotated = rotated;
  this->trimmed = trimmed;
  this->spriteSourceSize = spriteSourceSize;
  this->sourceSize = sourceSize;
  this->pivot = pivot;
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame::TexturePacker_JsonArray_Frame() {}
// Ctor Parameters [CppParam { name: "app", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "image", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty:
// "::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "smartupdate", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta::TexturePacker_JsonArray_Meta(::StringW app, ::StringW version, ::StringW image, ::StringW format,
                                                                                                    ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize size, float_t scale,
                                                                                                    ::StringW smartupdate) noexcept {
  this->app = app;
  this->version = version;
  this->image = image;
  this->format = format;
  this->size = size;
  this->scale = scale;
  this->smartupdate = smartupdate;
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta::TexturePacker_JsonArray_Meta() {}
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::*)()>(
    &::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4819604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>*&
TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_get_frames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>* const&
TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_get_frames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr void TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_set_frames(
    ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta& TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_get_meta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meta;
}
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta const& TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_get_meta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meta;
}
constexpr void TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_set_meta(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___meta = value;
}
inline void TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject* TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject*>());
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::TexturePacker_JsonArray_SpriteDataObject() {}
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::*)()>(
    &::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48193c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray* TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*>());
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::TexturePacker_JsonArray() {}
