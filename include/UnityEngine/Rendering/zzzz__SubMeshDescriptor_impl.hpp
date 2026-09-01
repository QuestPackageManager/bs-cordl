#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SubMeshDescriptor.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SubMeshDescriptor::*)(int32_t, int32_t, ::UnityEngine::MeshTopology)>(
    &::UnityEngine::Rendering::SubMeshDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b08e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.get_bounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::Rendering::SubMeshDescriptor::*)()>(&::UnityEngine::Rendering::SubMeshDescriptor::get_bounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b08e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_bounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.set_bounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SubMeshDescriptor::*)(::UnityEngine::Bounds)>(&::UnityEngine::Rendering::SubMeshDescriptor::set_bounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b08e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_bounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.get_topology
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshTopology (::UnityEngine::Rendering::SubMeshDescriptor::*)()>(&::UnityEngine::Rendering::SubMeshDescriptor::get_topology)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_topology", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.set_topology
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SubMeshDescriptor::*)(::UnityEngine::MeshTopology)>(
    &::UnityEngine::Rendering::SubMeshDescriptor::set_topology)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_topology", {}, { ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.get_indexStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SubMeshDescriptor::*)()>(&::UnityEngine::Rendering::SubMeshDescriptor::get_indexStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_indexStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.set_indexStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SubMeshDescriptor::*)(int32_t)>(&::UnityEngine::Rendering::SubMeshDescriptor::set_indexStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_indexStart", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.get_indexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SubMeshDescriptor::*)()>(&::UnityEngine::Rendering::SubMeshDescriptor::get_indexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_indexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.set_indexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SubMeshDescriptor::*)(int32_t)>(&::UnityEngine::Rendering::SubMeshDescriptor::set_indexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_indexCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.get_baseVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SubMeshDescriptor::*)()>(&::UnityEngine::Rendering::SubMeshDescriptor::get_baseVertex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_baseVertex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.set_baseVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SubMeshDescriptor::*)(int32_t)>(&::UnityEngine::Rendering::SubMeshDescriptor::set_baseVertex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_baseVertex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.get_firstVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SubMeshDescriptor::*)()>(&::UnityEngine::Rendering::SubMeshDescriptor::get_firstVertex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_firstVertex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.set_firstVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SubMeshDescriptor::*)(int32_t)>(&::UnityEngine::Rendering::SubMeshDescriptor::set_firstVertex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_firstVertex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.get_vertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SubMeshDescriptor::*)()>(&::UnityEngine::Rendering::SubMeshDescriptor::get_vertexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_vertexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.set_vertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SubMeshDescriptor::*)(int32_t)>(&::UnityEngine::Rendering::SubMeshDescriptor::set_vertexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b08efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_vertexCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SubMeshDescriptor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::SubMeshDescriptor::*)()>(&::UnityEngine::Rendering::SubMeshDescriptor::ToString)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6b08f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { ::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SubMeshDescriptor::_ctor(int32_t indexStart, int32_t indexCount, ::UnityEngine::MeshTopology topology) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indexStart, indexCount, topology);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::SubMeshDescriptor::get_bounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_bounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SubMeshDescriptor::set_bounds(::UnityEngine::Bounds value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_bounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::MeshTopology UnityEngine::Rendering::SubMeshDescriptor::get_topology() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_topology", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SubMeshDescriptor::set_topology(::UnityEngine::MeshTopology value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_topology", {}, { ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::SubMeshDescriptor::get_indexStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_indexStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SubMeshDescriptor::set_indexStart(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_indexStart", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::SubMeshDescriptor::get_indexCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_indexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SubMeshDescriptor::set_indexCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_indexCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::SubMeshDescriptor::get_baseVertex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_baseVertex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SubMeshDescriptor::set_baseVertex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_baseVertex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::SubMeshDescriptor::get_firstVertex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_firstVertex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SubMeshDescriptor::set_firstVertex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_firstVertex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::SubMeshDescriptor::get_vertexCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "get_vertexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SubMeshDescriptor::set_vertexCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), { "set_vertexCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::SubMeshDescriptor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SubMeshDescriptor>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_bounds_k__BackingField", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}") }, CppParam { name: "_topology_k__BackingField", ty:
// "::UnityEngine::MeshTopology", modifiers: "", def_value: Some("{}") }, CppParam { name: "_indexStart_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_indexCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_baseVertex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_firstVertex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_vertexCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::Rendering::SubMeshDescriptor::SubMeshDescriptor(::UnityEngine::Bounds _bounds_k__BackingField, ::UnityEngine::MeshTopology _topology_k__BackingField,
                                                                         int32_t _indexStart_k__BackingField, int32_t _indexCount_k__BackingField, int32_t _baseVertex_k__BackingField,
                                                                         int32_t _firstVertex_k__BackingField, int32_t _vertexCount_k__BackingField) noexcept {
  this->_bounds_k__BackingField = _bounds_k__BackingField;
  this->_topology_k__BackingField = _topology_k__BackingField;
  this->_indexStart_k__BackingField = _indexStart_k__BackingField;
  this->_indexCount_k__BackingField = _indexCount_k__BackingField;
  this->_baseVertex_k__BackingField = _baseVertex_k__BackingField;
  this->_firstVertex_k__BackingField = _firstVertex_k__BackingField;
  this->_vertexCount_k__BackingField = _vertexCount_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SubMeshDescriptor::SubMeshDescriptor() {}
