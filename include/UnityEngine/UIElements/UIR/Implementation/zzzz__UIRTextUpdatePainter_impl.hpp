#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRTextUpdatePainter_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePainter_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.get_meshGenerationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshGenerationContext* (
    ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::get_meshGenerationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eedca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                                                 "get_meshGenerationContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2eedcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.Begin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::UIRenderDevice*)>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::Begin)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2eedd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.End
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::End)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2eedf64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "End",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)()>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::Dispose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2eedff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.DrawRectangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawRectangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2eee0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "DrawRectangle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.DrawImmediate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)(::System::Action*, bool)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawImmediate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2eee0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "DrawImmediate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.DrawText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, ::UnityEngine::UIElements::ITextHandle*, float_t)>(
    &::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawText)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2eee0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "DrawText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IStylePainter"
constexpr UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::operator ::UnityEngine::UIElements::IStylePainter*() noexcept {
  return static_cast<::UnityEngine::UIElements::IStylePainter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IStylePainter"
constexpr ::UnityEngine::UIElements::IStylePainter* UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::i___UnityEngine__UIElements__IStylePainter() noexcept {
  return static_cast<::UnityEngine::UIElements::IStylePainter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_CurrentElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const&
UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_CurrentElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentElement;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set_m_CurrentElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_TextEntryIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextEntryIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_TextEntryIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextEntryIndex;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set_m_TextEntryIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextEntryIndex = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_DudVerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DudVerts;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_DudVerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DudVerts;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set_m_DudVerts(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DudVerts = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t>& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_DudIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DudIndices;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_DudIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DudIndices;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set_m_DudIndices(::Unity::Collections::NativeArray_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DudIndices = value;
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_MeshDataVerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshDataVerts;
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const&
UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_MeshDataVerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshDataVerts;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set_m_MeshDataVerts(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MeshDataVerts = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_XFormClipPages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XFormClipPages;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_XFormClipPages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XFormClipPages;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set_m_XFormClipPages(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XFormClipPages = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_IDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IDs;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_IDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IDs;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set_m_IDs(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IDs = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set_m_Flags(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_OpacityColorPages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpacityColorPages;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get_m_OpacityColorPages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpacityColorPages;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set_m_OpacityColorPages(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpacityColorPages = value;
}
constexpr ::UnityEngine::UIElements::MeshGenerationContext*& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get__meshGenerationContext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshGenerationContext_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::MeshGenerationContext*> const&
UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_get__meshGenerationContext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshGenerationContext_k__BackingField;
}
constexpr void
UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__cordl_internal_set__meshGenerationContext_k__BackingField(::UnityEngine::UIElements::MeshGenerationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshGenerationContext_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::MeshGenerationContext* UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::get_meshGenerationContext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                                               "get_meshGenerationContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationContext*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter* UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>());
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::Begin(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::UIRenderDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, device);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::End() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "End",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawRectangle(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "DrawRectangle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rectParams);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawImmediate(::System::Action* callback, bool cullingEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "DrawImmediate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, cullingEnabled);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawText(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams,
                                                                                         ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(), "DrawText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textParams, handle, pixelsPerPoint);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::UIRTextUpdatePainter() {}
