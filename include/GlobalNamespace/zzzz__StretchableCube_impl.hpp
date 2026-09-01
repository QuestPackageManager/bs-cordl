#pragma once
// IWYU pragma private; include "GlobalNamespace\StretchableCube.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__StretchableCube_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StretchableCube.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableCube::*)()>(&::GlobalNamespace::StretchableCube::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58db658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableCube.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableCube::*)()>(&::GlobalNamespace::StretchableCube::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58db814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableCube.CreateBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::StretchableCube::*)()>(&::GlobalNamespace::StretchableCube::CreateBox)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58db6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "CreateBox", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableCube.RecalculateUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableCube::*)(::ArrayW<::UnityEngine::Vector2>)>(&::GlobalNamespace::StretchableCube::RecalculateUVs)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x58db820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "RecalculateUVs", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableCube.RefreshUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableCube::*)()>(&::GlobalNamespace::StretchableCube::RefreshUVs)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58dba14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "RefreshUVs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableCube._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableCube::*)()>(&::GlobalNamespace::StretchableCube::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dbaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::StretchableCube::__cordl_internal_get__uvs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uvs;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::StretchableCube::__cordl_internal_get__uvs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uvs;
}
constexpr void GlobalNamespace::StretchableCube::__cordl_internal_set__uvs(::ArrayW<::UnityEngine::Vector2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uvs = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::StretchableCube::__cordl_internal_get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::StretchableCube::__cordl_internal_get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void GlobalNamespace::StretchableCube::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mesh = value;
}
inline void GlobalNamespace::StretchableCube::setStaticF_p0(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "p0", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_p0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "p0", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_p1(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "p1", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_p1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "p1", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_p2(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "p2", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_p2() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "p2", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_p3(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "p3", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_p3() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "p3", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_p4(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "p4", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_p4() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "p4", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_p5(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "p5", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_p5() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "p5", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_p6(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "p6", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_p6() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "p6", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_p7(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "p7", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_p7() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "p7", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_vertices(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "vertices", ::GlobalNamespace::StretchableCube*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::StretchableCube::getStaticF_vertices() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "vertices", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_up(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "up", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_up() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "up", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_down(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "down", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_down() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "down", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_front(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "front", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_front() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "front", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_back(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "back", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_back() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "back", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_left(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "left", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_left() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "left", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_right(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "right", ::GlobalNamespace::StretchableCube*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::StretchableCube::getStaticF_right() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "right", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_normals(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "normals", ::GlobalNamespace::StretchableCube*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::StretchableCube::getStaticF_normals() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "normals", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::setStaticF_triangles(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "triangles", ::GlobalNamespace::StretchableCube*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::StretchableCube::getStaticF_triangles() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "triangles", ::GlobalNamespace::StretchableCube*>();
}
inline void GlobalNamespace::StretchableCube::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StretchableCube::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::StretchableCube::CreateBox() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "CreateBox", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void GlobalNamespace::StretchableCube::RecalculateUVs(::ArrayW<::UnityEngine::Vector2> uvs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "RecalculateUVs", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvs);
}
inline void GlobalNamespace::StretchableCube::RefreshUVs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { "RefreshUVs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StretchableCube::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableCube*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StretchableCube* GlobalNamespace::StretchableCube::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StretchableCube*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StretchableCube::StretchableCube() {}
