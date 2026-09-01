#pragma once
// IWYU pragma private; include "GlobalNamespace\BlocksBlade.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__BlocksBlade_def.hpp"
#include "GlobalNamespace/zzzz__BlocksBlade_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade_Element._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlocksBlade_Element::*)()>(&::GlobalNamespace::BlocksBlade_Element::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59edb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade_Element*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BlocksBlade_Element::__cordl_internal_get_idx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idx;
}
constexpr int32_t const& GlobalNamespace::BlocksBlade_Element::__cordl_internal_get_idx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idx;
}
constexpr void GlobalNamespace::BlocksBlade_Element::__cordl_internal_set_idx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idx = value;
}
constexpr float_t& GlobalNamespace::BlocksBlade_Element::__cordl_internal_get_velocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocity;
}
constexpr float_t const& GlobalNamespace::BlocksBlade_Element::__cordl_internal_get_velocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocity;
}
constexpr void GlobalNamespace::BlocksBlade_Element::__cordl_internal_set_velocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___velocity = value;
}
inline void GlobalNamespace::BlocksBlade_Element::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade_Element*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BlocksBlade_Element* GlobalNamespace::BlocksBlade_Element::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlocksBlade_Element*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlocksBlade_Element::BlocksBlade_Element() {}
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BlocksBlade::*)()>(&::GlobalNamespace::BlocksBlade::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59ed894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlocksBlade::*)(::UnityEngine::Color)>(&::GlobalNamespace::BlocksBlade::set_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59ed8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlocksBlade::*)()>(&::GlobalNamespace::BlocksBlade::Start)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x59ed8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlocksBlade::*)()>(&::GlobalNamespace::BlocksBlade::Update)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x59edcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.SetUpElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlocksBlade::*)(::GlobalNamespace::BlocksBlade_Element*, float_t, ::UnityEngine::Color)>(
    &::GlobalNamespace::BlocksBlade::SetUpElement)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x59edb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(),
                                         { "SetUpElement", {}, { ::i2c::type_of<::GlobalNamespace::BlocksBlade_Element*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.RandomPointOnCircle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::BlocksBlade::*)(float_t)>(&::GlobalNamespace::BlocksBlade::RandomPointOnCircle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59ee0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "RandomPointOnCircle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlocksBlade::*)()>(&::GlobalNamespace::BlocksBlade::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59ee148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::BlocksBlade::__cordl_internal_get__elementMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::BlocksBlade::__cordl_internal_get__elementMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementMesh;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__elementMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BlocksBlade::__cordl_internal_get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BlocksBlade::__cordl_internal_get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____material = value;
}
constexpr int32_t& GlobalNamespace::BlocksBlade::__cordl_internal_get__numberOfElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElements;
}
constexpr int32_t const& GlobalNamespace::BlocksBlade::__cordl_internal_get__numberOfElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElements;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__numberOfElements(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfElements = value;
}
constexpr float_t& GlobalNamespace::BlocksBlade::__cordl_internal_get__radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__cordl_internal_get__radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius = value;
}
constexpr float_t& GlobalNamespace::BlocksBlade::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__length(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
constexpr float_t& GlobalNamespace::BlocksBlade::__cordl_internal_get__minVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minVelocity;
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__cordl_internal_get__minVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minVelocity;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__minVelocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minVelocity = value;
}
constexpr float_t& GlobalNamespace::BlocksBlade::__cordl_internal_get__maxVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVelocity;
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__cordl_internal_get__maxVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVelocity;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__maxVelocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxVelocity = value;
}
constexpr float_t& GlobalNamespace::BlocksBlade::__cordl_internal_get__elementWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementWidth;
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__cordl_internal_get__elementWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementWidth;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__elementWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementWidth = value;
}
constexpr float_t& GlobalNamespace::BlocksBlade::__cordl_internal_get__minElementLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minElementLength;
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__cordl_internal_get__minElementLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minElementLength;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__minElementLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minElementLength = value;
}
constexpr float_t& GlobalNamespace::BlocksBlade::__cordl_internal_get__maxElementLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxElementLength;
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__cordl_internal_get__maxElementLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxElementLength;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__maxElementLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxElementLength = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BlocksBlade::__cordl_internal_get__color_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color_k__BackingField;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BlocksBlade::__cordl_internal_get__color_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color_k__BackingField;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__color_k__BackingField(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlocksBlade_Element*>*& GlobalNamespace::BlocksBlade::__cordl_internal_get__elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlocksBlade_Element*>* const& GlobalNamespace::BlocksBlade::__cordl_internal_get__elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__elements(::System::Collections::Generic::List_1<::GlobalNamespace::BlocksBlade_Element*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elements = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::BlocksBlade::__cordl_internal_get__positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positions;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::BlocksBlade::__cordl_internal_get__positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positions;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positions = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::BlocksBlade::__cordl_internal_get__sizes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sizes;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::BlocksBlade::__cordl_internal_get__sizes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sizes;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__sizes(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sizes = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::BlocksBlade::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::BlocksBlade::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colors = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& GlobalNamespace::BlocksBlade::__cordl_internal_get__matrices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matrices;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& GlobalNamespace::BlocksBlade::__cordl_internal_get__matrices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matrices;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__matrices(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____matrices = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::BlocksBlade::__cordl_internal_get__materialPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::BlocksBlade::__cordl_internal_get__materialPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlock;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlock = value;
}
constexpr int32_t& GlobalNamespace::BlocksBlade::__cordl_internal_get__layer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layer;
}
constexpr int32_t const& GlobalNamespace::BlocksBlade::__cordl_internal_get__layer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layer;
}
constexpr void GlobalNamespace::BlocksBlade::__cordl_internal_set__layer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layer = value;
}
inline void GlobalNamespace::BlocksBlade::setStaticF__positionPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_positionPropertyID", ::GlobalNamespace::BlocksBlade*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlocksBlade::getStaticF__positionPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "_positionPropertyID", ::GlobalNamespace::BlocksBlade*>();
}
inline void GlobalNamespace::BlocksBlade::setStaticF__sizePropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_sizePropertyID", ::GlobalNamespace::BlocksBlade*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlocksBlade::getStaticF__sizePropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "_sizePropertyID", ::GlobalNamespace::BlocksBlade*>();
}
inline void GlobalNamespace::BlocksBlade::setStaticF__colorPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorPropertyID", ::GlobalNamespace::BlocksBlade*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlocksBlade::getStaticF__colorPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "_colorPropertyID", ::GlobalNamespace::BlocksBlade*>();
}
inline void GlobalNamespace::BlocksBlade::setStaticF__zClipPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_zClipPropertyID", ::GlobalNamespace::BlocksBlade*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlocksBlade::getStaticF__zClipPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "_zClipPropertyID", ::GlobalNamespace::BlocksBlade*>();
}
inline ::UnityEngine::Color GlobalNamespace::BlocksBlade::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::BlocksBlade::set_color(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BlocksBlade::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BlocksBlade::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BlocksBlade::SetUpElement(::GlobalNamespace::BlocksBlade_Element* element, float_t velocity, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(),
                                       { "SetUpElement", {}, { ::i2c::type_of<::GlobalNamespace::BlocksBlade_Element*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, velocity, color);
}
inline ::UnityEngine::Vector2 GlobalNamespace::BlocksBlade::RandomPointOnCircle(float_t radius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { "RandomPointOnCircle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, radius);
}
inline void GlobalNamespace::BlocksBlade::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlocksBlade*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BlocksBlade* GlobalNamespace::BlocksBlade::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlocksBlade*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlocksBlade::BlocksBlade() {}
