#pragma once
// IWYU pragma private; include "UnityEngine/MeshRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::MeshRenderer.DontStripMeshRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshRenderer::*)()>(&::UnityEngine::MeshRenderer::DontStripMeshRenderer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6efc000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "DontStripMeshRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.get_additionalVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::MeshRenderer::*)()>(&::UnityEngine::MeshRenderer::get_additionalVertexStreams)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6efc004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_additionalVertexStreams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.set_additionalVertexStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshRenderer::*)(::UnityEngine::Mesh*)>(&::UnityEngine::MeshRenderer::set_additionalVertexStreams)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6efc190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "set_additionalVertexStreams", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.get_enlightenVertexStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::MeshRenderer::*)()>(&::UnityEngine::MeshRenderer::get_enlightenVertexStream)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6efc294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_enlightenVertexStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.set_enlightenVertexStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshRenderer::*)(::UnityEngine::Mesh*)>(&::UnityEngine::MeshRenderer::set_enlightenVertexStream)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6efc420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "set_enlightenVertexStream", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.get_subMeshStartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::MeshRenderer::*)()>(&::UnityEngine::MeshRenderer::get_subMeshStartIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6efc524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_subMeshStartIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.Internal_SetShaderUserValueUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshRenderer::*)(uint32_t)>(&::UnityEngine::MeshRenderer::Internal_SetShaderUserValueUInt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6efc5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "Internal_SetShaderUserValueUInt", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.SetShaderUserValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshRenderer::*)(uint32_t)>(&::UnityEngine::MeshRenderer::SetShaderUserValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6efc6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "SetShaderUserValue", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.Internal_GetShaderUserValueUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::MeshRenderer::*)()>(&::UnityEngine::MeshRenderer::Internal_GetShaderUserValueUInt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6efc6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "Internal_GetShaderUserValueUInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.GetShaderUserValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::MeshRenderer::*)()>(&::UnityEngine::MeshRenderer::GetShaderUserValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6efc774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "GetShaderUserValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshRenderer::*)()>(&::UnityEngine::MeshRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6efc778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.get_additionalVertexStreams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::MeshRenderer::get_additionalVertexStreams_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efc154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_additionalVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.set_additionalVertexStreams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::MeshRenderer::set_additionalVertexStreams_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efc250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(),
                                                             { "set_additionalVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.get_enlightenVertexStream_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::MeshRenderer::get_enlightenVertexStream_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efc3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_enlightenVertexStream_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.set_enlightenVertexStream_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::MeshRenderer::set_enlightenVertexStream_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efc4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(),
                                                             { "set_enlightenVertexStream_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.get_subMeshStartIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::MeshRenderer::get_subMeshStartIndex_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efc5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_subMeshStartIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.Internal_SetShaderUserValueUInt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::UnityEngine::MeshRenderer::Internal_SetShaderUserValueUInt_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efc670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "Internal_SetShaderUserValueUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshRenderer.Internal_GetShaderUserValueUInt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::MeshRenderer::Internal_GetShaderUserValueUInt_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efc738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "Internal_GetShaderUserValueUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::MeshRenderer::DontStripMeshRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "DontStripMeshRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::MeshRenderer::get_additionalVertexStreams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_additionalVertexStreams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::MeshRenderer::set_additionalVertexStreams(::UnityEngine::Mesh* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "set_additionalVertexStreams", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::MeshRenderer::get_enlightenVertexStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_enlightenVertexStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::MeshRenderer::set_enlightenVertexStream(::UnityEngine::Mesh* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "set_enlightenVertexStream", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::MeshRenderer::get_subMeshStartIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_subMeshStartIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::MeshRenderer::Internal_SetShaderUserValueUInt(uint32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "Internal_SetShaderUserValueUInt", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void UnityEngine::MeshRenderer::SetShaderUserValue(uint32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "SetShaderUserValue", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline uint32_t UnityEngine::MeshRenderer::Internal_GetShaderUserValueUInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "Internal_GetShaderUserValueUInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::MeshRenderer::GetShaderUserValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "GetShaderUserValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::MeshRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::MeshRenderer::get_additionalVertexStreams_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_additionalVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::MeshRenderer::set_additionalVertexStreams_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(),
                                                           { "set_additionalVertexStreams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::MeshRenderer::get_enlightenVertexStream_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_enlightenVertexStream_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::MeshRenderer::set_enlightenVertexStream_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "set_enlightenVertexStream_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::MeshRenderer::get_subMeshStartIndex_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "get_subMeshStartIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::MeshRenderer::Internal_SetShaderUserValueUInt_Injected(::System::IntPtr _unity_self, uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "Internal_SetShaderUserValueUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, v);
}
inline uint32_t UnityEngine::MeshRenderer::Internal_GetShaderUserValueUInt_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshRenderer*>(), { "Internal_GetShaderUserValueUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::MeshRenderer* UnityEngine::MeshRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::MeshRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::MeshRenderer::MeshRenderer() {}
