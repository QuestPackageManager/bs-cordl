#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\PolyShape.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__PolyShape_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PolyShape_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode::PolyShape_PolyEditMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode::PolyShape_PolyEditMode() {}
constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode UnityEngine::ProBuilder::PolyShape_PolyEditMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode UnityEngine::ProBuilder::PolyShape_PolyEditMode::Path{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode UnityEngine::ProBuilder::PolyShape_PolyEditMode::Height{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode UnityEngine::ProBuilder::PolyShape_PolyEditMode::Edit{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_controlPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>* (::UnityEngine::ProBuilder::PolyShape::*)()>(
    &::UnityEngine::ProBuilder::PolyShape::get_controlPoints)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66d15c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_controlPoints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.SetControlPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*)>(
    &::UnityEngine::ProBuilder::PolyShape::SetControlPoints)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66d1638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(),
                                                             { "SetControlPoints", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_extrude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::get_extrude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d1698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_extrude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.set_extrude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(float_t)>(&::UnityEngine::ProBuilder::PolyShape::set_extrude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d16a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "set_extrude", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_polyEditMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::PolyShape_PolyEditMode (::UnityEngine::ProBuilder::PolyShape::*)()>(
    &::UnityEngine::ProBuilder::PolyShape::get_polyEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d16a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_polyEditMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.set_polyEditMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(::UnityEngine::ProBuilder::PolyShape_PolyEditMode)>(
    &::UnityEngine::ProBuilder::PolyShape::set_polyEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d16b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(),
                                                                                           { "set_polyEditMode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PolyShape_PolyEditMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_flipNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::get_flipNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d16b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_flipNormals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.set_flipNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(bool)>(&::UnityEngine::ProBuilder::PolyShape::set_flipNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d16c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "set_flipNormals", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (::UnityEngine::ProBuilder::PolyShape::*)()>(
    &::UnityEngine::ProBuilder::PolyShape::get_mesh)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66d16c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.set_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::PolyShape::set_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d1764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "set_mesh", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.IsSnapEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::IsSnapEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d176c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "IsSnapEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66d1774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::ProBuilder::PolyShape::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mesh = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_Points() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_Points() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Points;
}
constexpr void UnityEngine::ProBuilder::PolyShape::__cordl_internal_set_m_Points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Points = value;
}
constexpr float_t& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_Extrude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Extrude;
}
constexpr float_t const& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_Extrude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Extrude;
}
constexpr void UnityEngine::ProBuilder::PolyShape::__cordl_internal_set_m_Extrude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Extrude = value;
}
constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_EditMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditMode;
}
constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode const& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_EditMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditMode;
}
constexpr void UnityEngine::ProBuilder::PolyShape::__cordl_internal_set_m_EditMode(::UnityEngine::ProBuilder::PolyShape_PolyEditMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EditMode = value;
}
constexpr bool& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_FlipNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlipNormals;
}
constexpr bool const& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_m_FlipNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlipNormals;
}
constexpr void UnityEngine::ProBuilder::PolyShape::__cordl_internal_set_m_FlipNormals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FlipNormals = value;
}
constexpr bool& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_isOnGrid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOnGrid;
}
constexpr bool const& UnityEngine::ProBuilder::PolyShape::__cordl_internal_get_isOnGrid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOnGrid;
}
constexpr void UnityEngine::ProBuilder::PolyShape::__cordl_internal_set_isOnGrid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOnGrid = value;
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>* UnityEngine::ProBuilder::PolyShape::get_controlPoints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_controlPoints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::SetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(),
                                                           { "SetControlPoints", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline float_t UnityEngine::ProBuilder::PolyShape::get_extrude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_extrude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::set_extrude(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "set_extrude", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::PolyShape_PolyEditMode UnityEngine::ProBuilder::PolyShape::get_polyEditMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_polyEditMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::PolyShape_PolyEditMode>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::set_polyEditMode(::UnityEngine::ProBuilder::PolyShape_PolyEditMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "set_polyEditMode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PolyShape_PolyEditMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::PolyShape::get_flipNormals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_flipNormals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::set_flipNormals(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "set_flipNormals", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::PolyShape::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "set_mesh", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::PolyShape::IsSnapEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { "IsSnapEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PolyShape*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::PolyShape* UnityEngine::ProBuilder::PolyShape::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::PolyShape*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::PolyShape::PolyShape() {}
