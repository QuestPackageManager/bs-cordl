#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MeshInfo.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCoreVertex_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCoreVertex_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)(int32_t, bool)>(&::UnityEngine::TextCore::Text::MeshInfo::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x702fc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MeshInfo>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo.ResizeMeshInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)(int32_t, bool)>(&::UnityEngine::TextCore::Text::MeshInfo::ResizeMeshInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x702fcc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MeshInfo>(), { "ResizeMeshInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)(bool)>(&::UnityEngine::TextCore::Text::MeshInfo::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x702fd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MeshInfo>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MeshInfo.ClearUnusedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MeshInfo::*)()>(&::UnityEngine::TextCore::Text::MeshInfo::ClearUnusedVertices)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x702fd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MeshInfo>(), { "ClearUnusedVertices", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::MeshInfo::_ctor(int32_t size, bool isIMGUI) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MeshInfo>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size, isIMGUI);
}
inline void UnityEngine::TextCore::Text::MeshInfo::ResizeMeshInfo(int32_t size, bool isIMGUI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MeshInfo>(), { "ResizeMeshInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size, isIMGUI);
}
inline void UnityEngine::TextCore::Text::MeshInfo::Clear(bool uploadChanges) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MeshInfo>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, uploadChanges);
}
inline void UnityEngine::TextCore::Text::MeshInfo::ClearUnusedVertices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MeshInfo>(), { "ClearUnusedVertices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexData", ty:
// "::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexBufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "applySDF", ty: "bool",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "glyphRenderMode", ty: "::UnityEngine::TextCore::LowLevel::GlyphRenderMode", modifiers: "", def_value: Some("{}"), comment:
// None }]
constexpr ::UnityEngine::TextCore::Text::MeshInfo::MeshInfo(int32_t vertexCount, ::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex> vertexData, ::UnityW<::UnityEngine::Material> material,
                                                            int32_t vertexBufferSize, bool applySDF, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode) noexcept {
  this->vertexCount = vertexCount;
  this->vertexData = vertexData;
  this->material = material;
  this->vertexBufferSize = vertexBufferSize;
  this->applySDF = applySDF;
  this->glyphRenderMode = glyphRenderMode;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::MeshInfo::MeshInfo() {}
