#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame::*)()>(
    &::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame::ToString)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x47a91d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "w", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame::__TexturePacker_JsonArray__SpriteFrame(float_t x, float_t y, float_t w, float_t h) noexcept {
  this->x = x;
  this->y = y;
  this->w = w;
  this->h = h;
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame::__TexturePacker_JsonArray__SpriteFrame() {}
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize::*)()>(
    &::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x47a9358;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize::__TexturePacker_JsonArray__SpriteSize(float_t w, float_t h) noexcept {
  this->w = w;
  this->h = h;
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize::__TexturePacker_JsonArray__SpriteSize() {}
// Ctor Parameters [CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "frame", ty:
// "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotated", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "trimmed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteSourceSize", ty: "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "sourceSize", ty: "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "pivot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame::__TexturePacker_JsonArray__Frame(::StringW filename,
                                                                                                            ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame frame, bool rotated,
                                                                                                            bool trimmed,
                                                                                                            ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame spriteSourceSize,
                                                                                                            ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize sourceSize,
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
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame::__TexturePacker_JsonArray__Frame() {}
// Ctor Parameters [CppParam { name: "app", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "image", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "size", ty: "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "smartupdate", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta::__TexturePacker_JsonArray__Meta(::StringW app, ::StringW version, ::StringW image, ::StringW format,
                                                                                                          ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize size, float_t scale,
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
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta::__TexturePacker_JsonArray__Meta() {}
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::*)()>(
    &::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47a9404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>*&
TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::__cordl_internal_get_frames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>*> const&
TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::__cordl_internal_get_frames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr void TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::__cordl_internal_set_frames(
    ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta& TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::__cordl_internal_get_meta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meta;
}
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta const& TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::__cordl_internal_get_meta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meta;
}
constexpr void TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::__cordl_internal_set_meta(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___meta = value;
}
inline ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject* TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject*>());
}
inline void TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject::__TexturePacker_JsonArray__SpriteDataObject() {}
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::*)()>(
    &::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47a91c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray* TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*>());
}
inline void TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::TexturePacker_JsonArray() {}
