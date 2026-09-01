#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MeshUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshUtility_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshUtility___c::*)()>(&::UnityEngine::ProBuilder::MeshUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66d0188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility___c._CollapseSharedVertices_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>* (
    ::UnityEngine::ProBuilder::MeshUtility___c::*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshUtility___c::_CollapseSharedVertices_b__11_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66d018c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility___c*>(),
                                         { "<CollapseSharedVertices>b__11_0", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshUtility___c::setStaticF___9(::UnityEngine::ProBuilder::MeshUtility___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshUtility___c*, "<>9", ::UnityEngine::ProBuilder::MeshUtility___c*>(std::forward<::UnityEngine::ProBuilder::MeshUtility___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshUtility___c* UnityEngine::ProBuilder::MeshUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshUtility___c*, "<>9", ::UnityEngine::ProBuilder::MeshUtility___c*>();
}
inline void UnityEngine::ProBuilder::MeshUtility___c::setStaticF___9__11_0(::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*,
                                                                                            ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>*,
      "<>9__11_0", ::UnityEngine::ProBuilder::MeshUtility___c*>(std::forward<::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*,
                                                                                              ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>*
UnityEngine::ProBuilder::MeshUtility___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>*,
      "<>9__11_0", ::UnityEngine::ProBuilder::MeshUtility___c*>();
}
inline void UnityEngine::ProBuilder::MeshUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*
UnityEngine::ProBuilder::MeshUtility___c::_CollapseSharedVertices_b__11_0(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility___c*>(),
                                       { "<CollapseSharedVertices>b__11_0", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshUtility___c* UnityEngine::ProBuilder::MeshUtility___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshUtility___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshUtility___c::MeshUtility___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GeneratePerTriangleMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Vertex*> (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::GeneratePerTriangleMesh)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x66cbe9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GeneratePerTriangleMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GenerateTangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::GenerateTangent)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x66cc718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GenerateTangent", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.DeepCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::DeepCopy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66ccc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "DeepCopy", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::CopyTo)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x66ccce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                                                                                           { "CopyTo", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.Print
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::Print)> {
  constexpr static std::size_t size = 0xdb4;
  constexpr static std::size_t addrs = 0x66cd14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "Print", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GetIndexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::GetIndexCount)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x66cdf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GetIndexCount", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GetPrimitiveCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::GetPrimitiveCount)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x66cdfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GetPrimitiveCount", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.Compile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::UnityEngine::MeshTopology)>(
    &::UnityEngine::ProBuilder::MeshUtility::Compile)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x66ce0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                         { "Compile", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Vertex*> (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::GetVertices)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x66cc1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GetVertices", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.CollapseSharedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::ProBuilder::Vertex*>)>(&::UnityEngine::ProBuilder::MeshUtility::CollapseSharedVertices)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x66cea40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                                                { "CollapseSharedVertices", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Vertex*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.FitToSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Bounds, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::MeshUtility::FitToSize)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x66cef94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                            { "FitToSize", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.SanityCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshUtility::SanityCheck)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66cf300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "SanityCheck", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.SanityCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::SanityCheck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66cdf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "SanityCheck", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.SanityCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*)>(
    &::UnityEngine::ProBuilder::MeshUtility::SanityCheck)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x66cf9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                                                             { "SanityCheck", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.IsUsedInParticleSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshUtility::IsUsedInParticleSystem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66cfdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                                                                                           { "IsUsedInParticleSystem", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.RestoreParticleSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshUtility::RestoreParticleSystem)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66cff14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                                                                                           { "RestoreParticleSystem", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GetBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshUtility::GetBounds)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x66cffa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GetBounds", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*> UnityEngine::ProBuilder::MeshUtility::GeneratePerTriangleMesh(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GeneratePerTriangleMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Vertex*>>(nullptr, ___internal_method, mesh);
}
inline void UnityEngine::ProBuilder::MeshUtility::GenerateTangent(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GenerateTangent", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ProBuilder::MeshUtility::DeepCopy(::UnityEngine::Mesh* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "DeepCopy", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, source);
}
inline void UnityEngine::ProBuilder::MeshUtility::CopyTo(::UnityEngine::Mesh* source, ::UnityEngine::Mesh* destination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination);
}
template <typename T> inline T UnityEngine::ProBuilder::MeshUtility::GetMeshChannel(::UnityEngine::GameObject* gameObject, ::System::Func_2<::UnityW<::UnityEngine::Mesh>, T>* attributeGetter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                          { "GetMeshChannel", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Mesh>, T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject, attributeGetter);
}
template <typename T>
inline void UnityEngine::ProBuilder::MeshUtility::PrintAttribute(::System::Text::StringBuilder* sb, ::StringW title, ::System::Collections::Generic::IEnumerable_1<T>* attrib, ::StringW fmt) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "PrintAttribute",
                                                                                        { ::i2c::class_of<T>() },
                                                                                        { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(),
                                                                                          ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, title, attrib, fmt);
}
inline ::StringW UnityEngine::ProBuilder::MeshUtility::Print(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "Print", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mesh);
}
inline uint32_t UnityEngine::ProBuilder::MeshUtility::GetIndexCount(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GetIndexCount", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, mesh);
}
inline uint32_t UnityEngine::ProBuilder::MeshUtility::GetPrimitiveCount(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GetPrimitiveCount", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, mesh);
}
inline void UnityEngine::ProBuilder::MeshUtility::Compile(::UnityEngine::ProBuilder::ProBuilderMesh* probuilderMesh, ::UnityEngine::Mesh* targetMesh, ::UnityEngine::MeshTopology preferredTopology) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                          { "Compile", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, probuilderMesh, targetMesh, preferredTopology);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*> UnityEngine::ProBuilder::MeshUtility::GetVertices(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GetVertices", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Vertex*>>(nullptr, ___internal_method, mesh);
}
inline void UnityEngine::ProBuilder::MeshUtility::CollapseSharedVertices(::UnityEngine::Mesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Vertex*> vertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                                              { "CollapseSharedVertices", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Vertex*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, vertices);
}
inline void UnityEngine::ProBuilder::MeshUtility::FitToSize(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Bounds currentSize, ::UnityEngine::Vector3 sizeToFit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                          { "FitToSize", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, currentSize, sizeToFit);
}
inline ::StringW UnityEngine::ProBuilder::MeshUtility::SanityCheck(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "SanityCheck", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mesh);
}
inline ::StringW UnityEngine::ProBuilder::MeshUtility::SanityCheck(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "SanityCheck", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mesh);
}
inline ::StringW UnityEngine::ProBuilder::MeshUtility::SanityCheck(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                                                           { "SanityCheck", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, vertices);
}
inline bool UnityEngine::ProBuilder::MeshUtility::IsUsedInParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* pbmesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(),
                                                                                         { "IsUsedInParticleSystem", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pbmesh);
}
inline void UnityEngine::ProBuilder::MeshUtility::RestoreParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* pbmesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "RestoreParticleSystem", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pbmesh);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::MeshUtility::GetBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshUtility*>(), { "GetBounds", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, mesh);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshUtility::MeshUtility() {}
