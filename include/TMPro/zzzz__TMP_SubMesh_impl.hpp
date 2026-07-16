#pragma once
// IWYU pragma private; include "TMPro/TMP_SubMesh.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "TMPro/zzzz__TMP_SubMesh_def.hpp"
#include "TMPro/zzzz__MaterialReference_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_fontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_fontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_fontAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.set_fontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_SubMesh::set_fontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_fontAsset", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_spriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_spriteAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_spriteAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.set_spriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(::TMPro::TMP_SpriteAsset*)>(&::TMPro::TMP_SubMesh::set_spriteAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_spriteAsset", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_material", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.set_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&::TMPro::TMP_SubMesh::set_material)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x699d448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_sharedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_sharedMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_sharedMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.set_sharedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&::TMPro::TMP_SubMesh::set_sharedMaterial)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x699d53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_sharedMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_fallbackMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_fallbackMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_fallbackMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.set_fallbackMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&::TMPro::TMP_SubMesh::set_fallbackMaterial)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x699d584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_fallbackMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_fallbackSourceMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_fallbackSourceMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_fallbackSourceMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.set_fallbackSourceMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&::TMPro::TMP_SubMesh::set_fallbackSourceMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_fallbackSourceMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_isDefaultMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_isDefaultMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_isDefaultMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.set_isDefaultMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(bool)>(&::TMPro::TMP_SubMesh::set_isDefaultMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_isDefaultMaterial", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_padding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_padding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_padding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.set_padding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(float_t)>(&::TMPro::TMP_SubMesh::set_padding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_padding", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_renderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_renderer)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x699d6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_renderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_meshFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshFilter> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_meshFilter)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x699d790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_meshFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_mesh)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x699d89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.set_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(::UnityEngine::Mesh*)>(&::TMPro::TMP_SubMesh::set_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699d954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_mesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.get_textComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_Text> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::get_textComponent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x699d95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_textComponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.AddSubTextObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SubMesh> (*)(::TMPro::TextMeshPro*, ::TMPro::MaterialReference)>(&::TMPro::TMP_SubMesh::AddSubTextObject)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x699d9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "AddSubTextObject", {}, { ::i2c::type_of<::TMPro::TextMeshPro*>(), ::i2c::type_of<::TMPro::MaterialReference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x699dcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::OnDisable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x699de2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::OnDestroy)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x699dee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.DestroySelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::DestroySelf)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x699e04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "DestroySelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.GetMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&::TMPro::TMP_SubMesh::GetMaterial)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x699d320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "GetMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.CreateMaterialInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&::TMPro::TMP_SubMesh::CreateMaterialInstance)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x699e0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "CreateMaterialInstance", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.GetSharedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::GetSharedMaterial)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x699e178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "GetSharedMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.SetSharedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&::TMPro::TMP_SubMesh::SetSharedMaterial)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x699d55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "SetSharedMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.GetPaddingForMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::GetPaddingForMaterial)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x699d4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "GetPaddingForMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.UpdateMeshPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)(bool, bool)>(&::TMPro::TMP_SubMesh::UpdateMeshPadding)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x699e21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "UpdateMeshPadding", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.SetVerticesDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::SetVerticesDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x699d52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "SetVerticesDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.SetMaterialDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::SetMaterialDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x699d530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "SetMaterialDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh.UpdateMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::UpdateMaterial)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x699e294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "UpdateMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SubMesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SubMesh::*)()>(&::TMPro::TMP_SubMesh::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x699e480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_FontAsset>& TMPro::TMP_SubMesh::__cordl_internal_get_m_fontAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontAsset;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_fontAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontAsset;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_fontAsset(::UnityW<::TMPro::TMP_FontAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fontAsset = value;
}
constexpr ::UnityW<::TMPro::TMP_SpriteAsset>& TMPro::TMP_SubMesh::__cordl_internal_get_m_spriteAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_spriteAsset;
}
constexpr ::UnityW<::TMPro::TMP_SpriteAsset> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_spriteAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_spriteAsset;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_spriteAsset(::UnityW<::TMPro::TMP_SpriteAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_spriteAsset = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_SubMesh::__cordl_internal_get_m_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_material;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_material;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_material = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_SubMesh::__cordl_internal_get_m_sharedMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_sharedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_sharedMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_sharedMaterial;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_sharedMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_sharedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_SubMesh::__cordl_internal_get_m_fallbackMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fallbackMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_fallbackMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fallbackMaterial;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_fallbackMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fallbackMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_SubMesh::__cordl_internal_get_m_fallbackSourceMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fallbackSourceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_fallbackSourceMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fallbackSourceMaterial;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_fallbackSourceMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fallbackSourceMaterial = value;
}
constexpr bool& TMPro::TMP_SubMesh::__cordl_internal_get_m_isDefaultMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isDefaultMaterial;
}
constexpr bool const& TMPro::TMP_SubMesh::__cordl_internal_get_m_isDefaultMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isDefaultMaterial;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_isDefaultMaterial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isDefaultMaterial = value;
}
constexpr float_t& TMPro::TMP_SubMesh::__cordl_internal_get_m_padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_padding;
}
constexpr float_t const& TMPro::TMP_SubMesh::__cordl_internal_get_m_padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_padding;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_padding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_padding = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& TMPro::TMP_SubMesh::__cordl_internal_get_m_renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_renderer;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_renderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_renderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& TMPro::TMP_SubMesh::__cordl_internal_get_m_meshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_meshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_meshFilter;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_meshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_meshFilter = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& TMPro::TMP_SubMesh::__cordl_internal_get_m_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_mesh;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_mesh = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& TMPro::TMP_SubMesh::__cordl_internal_get_m_TextComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponent;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& TMPro::TMP_SubMesh::__cordl_internal_get_m_TextComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponent;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_TextComponent(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextComponent = value;
}
constexpr bool& TMPro::TMP_SubMesh::__cordl_internal_get_m_isRegisteredForEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isRegisteredForEvents;
}
constexpr bool const& TMPro::TMP_SubMesh::__cordl_internal_get_m_isRegisteredForEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isRegisteredForEvents;
}
constexpr void TMPro::TMP_SubMesh::__cordl_internal_set_m_isRegisteredForEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isRegisteredForEvents = value;
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_SubMesh::get_fontAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_fontAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::set_fontAsset(::TMPro::TMP_FontAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_fontAsset", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_SubMesh::get_spriteAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_spriteAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::set_spriteAsset(::TMPro::TMP_SpriteAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_spriteAsset", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_SubMesh::get_material() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_material", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::set_material(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_SubMesh::get_sharedMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_sharedMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::set_sharedMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_sharedMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_SubMesh::get_fallbackMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_fallbackMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::set_fallbackMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_fallbackMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_SubMesh::get_fallbackSourceMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_fallbackSourceMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::set_fallbackSourceMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_fallbackSourceMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool TMPro::TMP_SubMesh::get_isDefaultMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_isDefaultMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::set_isDefaultMaterial(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_isDefaultMaterial", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t TMPro::TMP_SubMesh::get_padding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_padding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::set_padding(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_padding", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Renderer> TMPro::TMP_SubMesh::get_renderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_renderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MeshFilter> TMPro::TMP_SubMesh::get_meshFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_meshFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshFilter>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> TMPro::TMP_SubMesh::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::set_mesh(::UnityEngine::Mesh* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "set_mesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_Text> TMPro::TMP_SubMesh::get_textComponent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "get_textComponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Text>>(this, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_SubMesh> TMPro::TMP_SubMesh::AddSubTextObject(::TMPro::TextMeshPro* textComponent, ::TMPro::MaterialReference materialReference) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "AddSubTextObject", {}, { ::i2c::type_of<::TMPro::TextMeshPro*>(), ::i2c::type_of<::TMPro::MaterialReference>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SubMesh>>(nullptr, ___internal_method, textComponent, materialReference);
}
inline void TMPro::TMP_SubMesh::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::DestroySelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "DestroySelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_SubMesh::GetMaterial(::UnityEngine::Material* mat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "GetMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, mat);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_SubMesh::CreateMaterialInstance(::UnityEngine::Material* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "CreateMaterialInstance", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, source);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_SubMesh::GetSharedMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "GetSharedMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::SetSharedMaterial(::UnityEngine::Material* mat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "SetSharedMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat);
}
inline float_t TMPro::TMP_SubMesh::GetPaddingForMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "GetPaddingForMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::UpdateMeshPadding(bool isExtraPadding, bool isUsingBold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "UpdateMeshPadding", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isExtraPadding, isUsingBold);
}
inline void TMPro::TMP_SubMesh::SetVerticesDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "SetVerticesDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::SetMaterialDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "SetMaterialDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::UpdateMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { "UpdateMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SubMesh::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SubMesh*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_SubMesh* TMPro::TMP_SubMesh::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SubMesh*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_SubMesh::TMP_SubMesh() {}
