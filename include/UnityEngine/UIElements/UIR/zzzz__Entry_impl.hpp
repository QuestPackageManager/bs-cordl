#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\Entry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryFlags_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Entry.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::Entry::*)()>(&::UnityEngine::UIElements::UIR::Entry::Reset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6cd94c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Entry*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Entry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::Entry::*)()>(&::UnityEngine::UIElements::UIR::Entry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd949c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Entry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::EntryType& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::UnityEngine::UIElements::UIR::EntryType const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_type(::UnityEngine::UIElements::UIR::EntryType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::UnityEngine::UIElements::UIR::EntryFlags& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::UnityEngine::UIElements::UIR::EntryFlags const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_flags(::UnityEngine::UIElements::UIR::EntryFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_vertices(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertices = value;
}
constexpr ::Unity::Collections::NativeSlice_1<uint16_t>& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr ::Unity::Collections::NativeSlice_1<uint16_t> const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_indices(::Unity::Collections::NativeSlice_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indices = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texture;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___texture = value;
}
constexpr float_t& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_textScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textScale;
}
constexpr float_t const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_textScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textScale;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_textScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textScale = value;
}
constexpr float_t& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_fontSharpness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSharpness;
}
constexpr float_t const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_fontSharpness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSharpness;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_fontSharpness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fontSharpness = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VectorImage>& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_gradientsOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gradientsOwner;
}
constexpr ::UnityW<::UnityEngine::UIElements::VectorImage> const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_gradientsOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gradientsOwner;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_gradientsOwner(::UnityW<::UnityEngine::UIElements::VectorImage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gradientsOwner = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_immediateCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediateCallback;
}
constexpr ::System::Action* const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_immediateCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediateCallback;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_immediateCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediateCallback = value;
}
constexpr ::UnityEngine::UIElements::UIR::Entry*& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_nextSibling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextSibling;
}
constexpr ::UnityEngine::UIElements::UIR::Entry* const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_nextSibling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextSibling;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_nextSibling(::UnityEngine::UIElements::UIR::Entry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextSibling = value;
}
constexpr ::UnityEngine::UIElements::UIR::Entry*& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_firstChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstChild;
}
constexpr ::UnityEngine::UIElements::UIR::Entry* const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_firstChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstChild;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_firstChild(::UnityEngine::UIElements::UIR::Entry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstChild = value;
}
constexpr ::UnityEngine::UIElements::UIR::Entry*& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_lastChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr ::UnityEngine::UIElements::UIR::Entry* const& UnityEngine::UIElements::UIR::Entry::__cordl_internal_get_lastChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr void UnityEngine::UIElements::UIR::Entry::__cordl_internal_set_lastChild(::UnityEngine::UIElements::UIR::Entry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastChild = value;
}
inline void UnityEngine::UIElements::UIR::Entry::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Entry*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Entry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Entry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Entry* UnityEngine::UIElements::UIR::Entry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::Entry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Entry::Entry() {}
