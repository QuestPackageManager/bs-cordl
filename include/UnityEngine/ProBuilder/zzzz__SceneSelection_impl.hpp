#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SceneSelection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__SceneSelection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.get_vertexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::ProBuilder::SceneSelection::*)()>(
    &::UnityEngine::ProBuilder::SceneSelection::get_vertexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66e0f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "get_vertexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.set_vertexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::SceneSelection::set_vertexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66e0f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                                                           { "set_vertexes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.get_edges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* (::UnityEngine::ProBuilder::SceneSelection::*)()>(
    &::UnityEngine::ProBuilder::SceneSelection::get_edges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66e0f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "get_edges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.set_edges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::SceneSelection::set_edges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66e0f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                             { "set_edges", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.get_faces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* (::UnityEngine::ProBuilder::SceneSelection::*)()>(
    &::UnityEngine::ProBuilder::SceneSelection::get_faces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66e0f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "get_faces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.set_faces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::SceneSelection::set_faces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66e0f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                             { "set_faces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::GameObject*)>(&::UnityEngine::ProBuilder::SceneSelection::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x66e0f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int32_t)>(
    &::UnityEngine::ProBuilder::SceneSelection::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x66e1050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::SceneSelection::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x66e1280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::SceneSelection::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x66e14b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::ProBuilder::SceneSelection::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x66e1150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*)>(&::UnityEngine::ProBuilder::SceneSelection::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x66e1380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*)>(&::UnityEngine::ProBuilder::SceneSelection::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x66e15b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.SetSingleFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::SceneSelection::SetSingleFace)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x66e16e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "SetSingleFace", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.SetSingleVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(int32_t)>(&::UnityEngine::ProBuilder::SceneSelection::SetSingleVertex)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x66e17d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "SetSingleVertex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.SetSingleEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::SceneSelection::SetSingleEdge)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x66e1894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "SetSingleEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)()>(&::UnityEngine::ProBuilder::SceneSelection::Clear)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x66e1950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::SceneSelection*)>(
    &::UnityEngine::ProBuilder::SceneSelection::CopyTo)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x66e1a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "CopyTo", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::SceneSelection::*)()>(&::UnityEngine::ProBuilder::SceneSelection::ToString)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x66e1b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::SceneSelection*)>(
    &::UnityEngine::ProBuilder::SceneSelection::Equals)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x66e1e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::SceneSelection::*)(::System::Object*)>(&::UnityEngine::ProBuilder::SceneSelection::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x66e1f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::SceneSelection::*)()>(&::UnityEngine::ProBuilder::SceneSelection::GetHashCode)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x66e2054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::SceneSelection*, ::UnityEngine::ProBuilder::SceneSelection*)>(
    &::UnityEngine::ProBuilder::SceneSelection::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66e21ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>(), ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SceneSelection.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::SceneSelection*, ::UnityEngine::ProBuilder::SceneSelection*)>(
    &::UnityEngine::ProBuilder::SceneSelection::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66e21d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                         { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>(), ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void UnityEngine::ProBuilder::SceneSelection::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObject = value;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::ProBuilder::SceneSelection::__cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mesh = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_m_Vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_m_Vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr void UnityEngine::ProBuilder::SceneSelection::__cordl_internal_set_m_Vertices(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Vertices = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_m_Edges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Edges;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* const& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_m_Edges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Edges;
}
constexpr void UnityEngine::ProBuilder::SceneSelection::__cordl_internal_set_m_Edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Edges = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_m_Faces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Faces;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* const& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_m_Faces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Faces;
}
constexpr void UnityEngine::ProBuilder::SceneSelection::__cordl_internal_set_m_Faces(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Faces = value;
}
constexpr int32_t& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_vertex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertex;
}
constexpr int32_t const& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_vertex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertex;
}
constexpr void UnityEngine::ProBuilder::SceneSelection::__cordl_internal_set_vertex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertex = value;
}
constexpr ::UnityEngine::ProBuilder::Edge& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_edge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edge;
}
constexpr ::UnityEngine::ProBuilder::Edge const& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_edge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edge;
}
constexpr void UnityEngine::ProBuilder::SceneSelection::__cordl_internal_set_edge(::UnityEngine::ProBuilder::Edge value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___edge = value;
}
constexpr ::UnityEngine::ProBuilder::Face*& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_face() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr ::UnityEngine::ProBuilder::Face* const& UnityEngine::ProBuilder::SceneSelection::__cordl_internal_get_face() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr void UnityEngine::ProBuilder::SceneSelection::__cordl_internal_set_face(::UnityEngine::ProBuilder::Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___face = value;
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::SceneSelection::get_vertexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "get_vertexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::SceneSelection::set_vertexes(::System::Collections::Generic::List_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "set_vertexes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::SceneSelection::get_edges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "get_edges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::SceneSelection::set_edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                           { "set_edges", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::SceneSelection::get_faces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "get_faces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::SceneSelection::set_faces(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                           { "set_faces", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::SceneSelection::_ctor(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject);
}
inline void UnityEngine::ProBuilder::SceneSelection::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t vertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, vertex);
}
inline void UnityEngine::ProBuilder::SceneSelection::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, edge);
}
inline void UnityEngine::ProBuilder::SceneSelection::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, face);
}
inline void UnityEngine::ProBuilder::SceneSelection::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int32_t>* vertexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, vertexes);
}
inline void UnityEngine::ProBuilder::SceneSelection::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, edges);
}
inline void UnityEngine::ProBuilder::SceneSelection::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, faces);
}
inline void UnityEngine::ProBuilder::SceneSelection::SetSingleFace(::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "SetSingleFace", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, face);
}
inline void UnityEngine::ProBuilder::SceneSelection::SetSingleVertex(int32_t vertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "SetSingleVertex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertex);
}
inline void UnityEngine::ProBuilder::SceneSelection::SetSingleEdge(::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "SetSingleEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge);
}
inline void UnityEngine::ProBuilder::SceneSelection::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::SceneSelection::CopyTo(::UnityEngine::ProBuilder::SceneSelection* dst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "CopyTo", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dst);
}
inline ::StringW UnityEngine::ProBuilder::SceneSelection::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::SceneSelection::Equals(::UnityEngine::ProBuilder::SceneSelection* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool UnityEngine::ProBuilder::SceneSelection::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::ProBuilder::SceneSelection::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::SceneSelection::op_Equality(::UnityEngine::ProBuilder::SceneSelection* left, ::UnityEngine::ProBuilder::SceneSelection* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>(), ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::ProBuilder::SceneSelection::op_Inequality(::UnityEngine::ProBuilder::SceneSelection* left, ::UnityEngine::ProBuilder::SceneSelection* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SceneSelection*>(),
                                       { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>(), ::i2c::type_of<::UnityEngine::ProBuilder::SceneSelection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::ProBuilder::SceneSelection* UnityEngine::ProBuilder::SceneSelection::New_ctor(::UnityEngine::GameObject* gameObject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SceneSelection*>(gameObject));
}
inline ::UnityEngine::ProBuilder::SceneSelection* UnityEngine::ProBuilder::SceneSelection::New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t vertex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SceneSelection*>(mesh, vertex));
}
inline ::UnityEngine::ProBuilder::SceneSelection* UnityEngine::ProBuilder::SceneSelection::New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SceneSelection*>(mesh, edge));
}
inline ::UnityEngine::ProBuilder::SceneSelection* UnityEngine::ProBuilder::SceneSelection::New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SceneSelection*>(mesh, face));
}
inline ::UnityEngine::ProBuilder::SceneSelection* UnityEngine::ProBuilder::SceneSelection::New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                    ::System::Collections::Generic::List_1<int32_t>* vertexes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SceneSelection*>(mesh, vertexes));
}
inline ::UnityEngine::ProBuilder::SceneSelection* UnityEngine::ProBuilder::SceneSelection::New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SceneSelection*>(mesh, edges));
}
inline ::UnityEngine::ProBuilder::SceneSelection* UnityEngine::ProBuilder::SceneSelection::New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SceneSelection*>(mesh, faces));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>"
constexpr UnityEngine::ProBuilder::SceneSelection::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>"
constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>* UnityEngine::ProBuilder::SceneSelection::i___System__IEquatable_1___UnityEngine__ProBuilder__SceneSelection__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SceneSelection::SceneSelection() {}
