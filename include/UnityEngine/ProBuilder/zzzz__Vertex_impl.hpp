#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Vertex.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshArrays_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshArrays_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f6678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::Vertex::set_position)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f6684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f66ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::Color)>(&::UnityEngine::ProBuilder::Vertex::set_color)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f66b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f66f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_normal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::Vertex::set_normal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f66fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_normal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_tangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_tangent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f6734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_tangent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_tangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::Vector4)>(&::UnityEngine::ProBuilder::Vertex::set_tangent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f6740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_tangent", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_uv0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_uv0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f6778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_uv0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_uv0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::Vector2)>(&::UnityEngine::ProBuilder::Vertex::set_uv0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66f6780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_uv0", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_uv2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_uv2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f67b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_uv2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_uv2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::Vector2)>(&::UnityEngine::ProBuilder::Vertex::set_uv2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66f67bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_uv2", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_uv3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_uv3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f67f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_uv3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_uv3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::Vector4)>(&::UnityEngine::ProBuilder::Vertex::set_uv3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f67fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_uv3", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_uv4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_uv4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f6834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_uv4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_uv4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::Vector4)>(&::UnityEngine::ProBuilder::Vertex::set_uv4)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f6840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_uv4", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::MeshArrays (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f6878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_attributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.HasArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::ProBuilder::MeshArrays)>(&::UnityEngine::ProBuilder::Vertex::HasArrays)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66f6880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "HasArrays", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshArrays>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_hasPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_hasPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f6890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_hasPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(bool)>(&::UnityEngine::ProBuilder::Vertex::set_hasPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66f669c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasPosition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_hasColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_hasColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f689c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_hasColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(bool)>(&::UnityEngine::ProBuilder::Vertex::set_hasColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66f66d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasColor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_hasNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_hasNormal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f68a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasNormal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_hasNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(bool)>(&::UnityEngine::ProBuilder::Vertex::set_hasNormal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66f6714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasNormal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_hasTangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_hasTangent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f68b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasTangent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_hasTangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(bool)>(&::UnityEngine::ProBuilder::Vertex::set_hasTangent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66f6758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasTangent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_hasUV0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_hasUV0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f68c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasUV0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_hasUV0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(bool)>(&::UnityEngine::ProBuilder::Vertex::set_hasUV0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66f6794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasUV0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_hasUV2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_hasUV2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f68cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasUV2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_hasUV2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(bool)>(&::UnityEngine::ProBuilder::Vertex::set_hasUV2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66f67d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasUV2", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_hasUV3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_hasUV3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f68d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasUV3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_hasUV3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(bool)>(&::UnityEngine::ProBuilder::Vertex::set_hasUV3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66f6814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasUV3", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.get_hasUV4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::get_hasUV4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f68e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasUV4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.set_hasUV4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(bool)>(&::UnityEngine::ProBuilder::Vertex::set_hasUV4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66f6858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasUV4", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f68f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)(::System::Object*)>(&::UnityEngine::ProBuilder::Vertex::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66f68f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::ProBuilder::Vertex*)>(&::UnityEngine::ProBuilder::Vertex::Equals)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x66f6974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::MeshArrays)>(
    &::UnityEngine::ProBuilder::Vertex::Equals)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x66f6b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                             { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::MeshArrays>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::GetHashCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x66f6e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::ProBuilder::Vertex*)>(&::UnityEngine::ProBuilder::Vertex::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x66f6ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*)>(&::UnityEngine::ProBuilder::Vertex::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66f700c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*)>(&::UnityEngine::ProBuilder::Vertex::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66f7034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::Vertex::op_Addition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f7068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::Vertex::Add)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66f706c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                             { "Add", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::ProBuilder::Vertex*)>(&::UnityEngine::ProBuilder::Vertex::Add)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66f70e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::Vertex::op_Subtraction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f71d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::Vertex::Subtract)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66f71dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                             { "Subtract", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(::UnityEngine::ProBuilder::Vertex*)>(&::UnityEngine::ProBuilder::Vertex::Subtract)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66f7258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Subtract", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::Vertex*, float_t)>(&::UnityEngine::ProBuilder::Vertex::op_Multiply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f7348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::Vertex*, float_t)>(&::UnityEngine::ProBuilder::Vertex::Multiply)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66f734c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                                                           { "Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(float_t)>(&::UnityEngine::ProBuilder::Vertex::Multiply)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66f73c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Multiply", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::Vertex*, float_t)>(&::UnityEngine::ProBuilder::Vertex::op_Division)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f740c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "op_Division", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Divide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::Vertex*, float_t)>(&::UnityEngine::ProBuilder::Vertex::Divide)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66f7410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                                                           { "Divide", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Divide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)(float_t)>(&::UnityEngine::ProBuilder::Vertex::Divide)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66f748c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Divide", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Normalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vertex::*)()>(&::UnityEngine::ProBuilder::Vertex::Normalize)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x66f74d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Normalize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Vertex::*)(::StringW)>(&::UnityEngine::ProBuilder::Vertex::ToString)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x66f7a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.GetArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<::UnityEngine::Color>>,
                         ::by_ref<::ArrayW<::UnityEngine::Vector2>>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<::UnityEngine::Vector4>>, ::by_ref<::ArrayW<::UnityEngine::Vector2>>,
                         ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>)>(
        &::UnityEngine::ProBuilder::Vertex::GetArrays)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66f7dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                            { "GetArrays",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(),
                                ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(),
                                ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(),
                                ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.GetArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<::UnityEngine::Color>>,
    ::by_ref<::ArrayW<::UnityEngine::Vector2>>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<::UnityEngine::Vector4>>, ::by_ref<::ArrayW<::UnityEngine::Vector2>>,
    ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>, ::UnityEngine::ProBuilder::MeshArrays)>(
    &::UnityEngine::ProBuilder::Vertex::GetArrays)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x66f7de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                            { "GetArrays",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(),
                                ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(),
                                ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(),
                                ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>>(), ::i2c::type_of<::UnityEngine::ProBuilder::MeshArrays>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.SetMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*)>(
    &::UnityEngine::ProBuilder::Vertex::SetMesh)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x66f877c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                            { "SetMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Average
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                                              ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::Vertex::Average)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x66f8a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Average",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vertex.Mix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*, float_t)>(
    &::UnityEngine::ProBuilder::Vertex::Mix)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x66f9610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                         { "Mix", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr void UnityEngine::ProBuilder::Vertex::__cordl_internal_set_m_Position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Position = value;
}
constexpr ::UnityEngine::Color& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr ::UnityEngine::Color const& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr void UnityEngine::ProBuilder::Vertex::__cordl_internal_set_m_Color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Color = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Normal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normal;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Normal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normal;
}
constexpr void UnityEngine::ProBuilder::Vertex::__cordl_internal_set_m_Normal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Normal = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Tangent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tangent;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Tangent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tangent;
}
constexpr void UnityEngine::ProBuilder::Vertex::__cordl_internal_set_m_Tangent(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tangent = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_UV0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV0;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_UV0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV0;
}
constexpr void UnityEngine::ProBuilder::Vertex::__cordl_internal_set_m_UV0(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UV0 = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_UV2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV2;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_UV2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV2;
}
constexpr void UnityEngine::ProBuilder::Vertex::__cordl_internal_set_m_UV2(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UV2 = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_UV3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV3;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_UV3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV3;
}
constexpr void UnityEngine::ProBuilder::Vertex::__cordl_internal_set_m_UV3(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UV3 = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_UV4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV4;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_UV4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV4;
}
constexpr void UnityEngine::ProBuilder::Vertex::__cordl_internal_set_m_UV4(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UV4 = value;
}
constexpr ::UnityEngine::ProBuilder::MeshArrays& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Attributes;
}
constexpr ::UnityEngine::ProBuilder::MeshArrays const& UnityEngine::ProBuilder::Vertex::__cordl_internal_get_m_Attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Attributes;
}
constexpr void UnityEngine::ProBuilder::Vertex::__cordl_internal_set_m_Attributes(::UnityEngine::ProBuilder::MeshArrays value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Attributes = value;
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Vertex::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::Vertex::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_color(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Vertex::get_normal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_normal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_normal(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_normal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::ProBuilder::Vertex::get_tangent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_tangent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_tangent(::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_tangent", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Vertex::get_uv0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_uv0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_uv0(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_uv0", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Vertex::get_uv2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_uv2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_uv2(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_uv2", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::ProBuilder::Vertex::get_uv3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_uv3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_uv3(::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_uv3", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::ProBuilder::Vertex::get_uv4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_uv4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_uv4(::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_uv4", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::Vertex::get_attributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_attributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::MeshArrays>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Vertex::HasArrays(::UnityEngine::ProBuilder::MeshArrays attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "HasArrays", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshArrays>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attribute);
}
inline bool UnityEngine::ProBuilder::Vertex::get_hasPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_hasPosition(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasPosition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::Vertex::get_hasColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_hasColor(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasColor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::Vertex::get_hasNormal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasNormal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_hasNormal(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasNormal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::Vertex::get_hasTangent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasTangent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_hasTangent(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasTangent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::Vertex::get_hasUV0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasUV0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_hasUV0(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasUV0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::Vertex::get_hasUV2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasUV2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_hasUV2(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasUV2", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::Vertex::get_hasUV3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasUV3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_hasUV3(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasUV3", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::Vertex::get_hasUV4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "get_hasUV4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::set_hasUV4(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "set_hasUV4", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Vertex::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Vertex::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::ProBuilder::Vertex::Equals(::UnityEngine::ProBuilder::Vertex* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool UnityEngine::ProBuilder::Vertex::Equals(::UnityEngine::ProBuilder::Vertex* other, ::UnityEngine::ProBuilder::MeshArrays mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::MeshArrays>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, mask);
}
inline int32_t UnityEngine::ProBuilder::Vertex::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vertex::_ctor(::UnityEngine::ProBuilder::Vertex* vertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertex);
}
inline bool UnityEngine::ProBuilder::Vertex::op_Equality(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::ProBuilder::Vertex::op_Inequality(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::op_Addition(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::Add(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                           { "Add", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::ProBuilder::Vertex::Add(::UnityEngine::ProBuilder::Vertex* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::op_Subtraction(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::Subtract(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                           { "Subtract", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::ProBuilder::Vertex::Subtract(::UnityEngine::ProBuilder::Vertex* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Subtract", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::op_Multiply(::UnityEngine::ProBuilder::Vertex* a, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                                                         { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, a, value);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::Multiply(::UnityEngine::ProBuilder::Vertex* a, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                                                         { "Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, a, value);
}
inline void UnityEngine::ProBuilder::Vertex::Multiply(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Multiply", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::op_Division(::UnityEngine::ProBuilder::Vertex* a, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                                                                         { "op_Division", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, a, value);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::Divide(::UnityEngine::ProBuilder::Vertex* a, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Divide", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, a, value);
}
inline void UnityEngine::ProBuilder::Vertex::Divide(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Divide", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Vertex::Normalize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "Normalize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::Vertex::ToString(::StringW args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, args);
}
inline void UnityEngine::ProBuilder::Vertex::GetArrays(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::by_ref<::ArrayW<::UnityEngine::Vector3>> position,
                                                       ::by_ref<::ArrayW<::UnityEngine::Color>> color, ::by_ref<::ArrayW<::UnityEngine::Vector2>> uv0,
                                                       ::by_ref<::ArrayW<::UnityEngine::Vector3>> normal, ::by_ref<::ArrayW<::UnityEngine::Vector4>> tangent,
                                                       ::by_ref<::ArrayW<::UnityEngine::Vector2>> uv2, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> uv3,
                                                       ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> uv4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                       { "GetArrays",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(),
                                           ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(),
                                           ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(),
                                           ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, position, color, uv0, normal, tangent, uv2, uv3, uv4);
}
inline void UnityEngine::ProBuilder::Vertex::GetArrays(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::by_ref<::ArrayW<::UnityEngine::Vector3>> position,
                                                       ::by_ref<::ArrayW<::UnityEngine::Color>> color, ::by_ref<::ArrayW<::UnityEngine::Vector2>> uv0,
                                                       ::by_ref<::ArrayW<::UnityEngine::Vector3>> normal, ::by_ref<::ArrayW<::UnityEngine::Vector4>> tangent,
                                                       ::by_ref<::ArrayW<::UnityEngine::Vector2>> uv2, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> uv3,
                                                       ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> uv4, ::UnityEngine::ProBuilder::MeshArrays attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                       { "GetArrays",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(),
                                           ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(),
                                           ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(),
                                           ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>>(), ::i2c::type_of<::UnityEngine::ProBuilder::MeshArrays>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, position, color, uv0, normal, tangent, uv2, uv3, uv4, attributes);
}
inline void UnityEngine::ProBuilder::Vertex::SetMesh(::UnityEngine::Mesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                       { "SetMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, vertices);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::Average(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                                   ::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
          { "Average", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, vertices, indexes);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::Mix(::UnityEngine::ProBuilder::Vertex* x, ::UnityEngine::ProBuilder::Vertex* y, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vertex*>(),
                                       { "Mix", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, x, y, weight);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Vertex*>());
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::Vertex::New_ctor(::UnityEngine::ProBuilder::Vertex* vertex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Vertex*>(vertex));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Vertex*>"
constexpr UnityEngine::ProBuilder::Vertex::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Vertex*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Vertex*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::Vertex*>"
constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::Vertex*>* UnityEngine::ProBuilder::Vertex::i___System__IEquatable_1___UnityEngine__ProBuilder__Vertex__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Vertex*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Vertex::Vertex() {}
