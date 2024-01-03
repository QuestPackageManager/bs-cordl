#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshUtility_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshUtility_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::__MeshUtility____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__MeshUtility____c::*)()>(&::UnityEngine::ProBuilder::__MeshUtility____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b54a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__MeshUtility____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__MeshUtility____c._CollapseSharedVertices_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>* (
    ::UnityEngine::ProBuilder::__MeshUtility____c::*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*)>(
    &::UnityEngine::ProBuilder::__MeshUtility____c::_CollapseSharedVertices_b__11_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b54a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__MeshUtility____c*>::get(), "<CollapseSharedVertices>b__11_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::__MeshUtility____c::setStaticF___9(::UnityEngine::ProBuilder::__MeshUtility____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::__MeshUtility____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__MeshUtility____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::__MeshUtility____c*>(value));
}
inline ::UnityEngine::ProBuilder::__MeshUtility____c* UnityEngine::ProBuilder::__MeshUtility____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::__MeshUtility____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__MeshUtility____c*>::get>();
}
inline void UnityEngine::ProBuilder::__MeshUtility____c::setStaticF___9__11_0(::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*,
                                                                                               ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>*,
      "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__MeshUtility____c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*,
                                    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>*
UnityEngine::ProBuilder::__MeshUtility____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>*,
      "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__MeshUtility____c*>::get>();
}
inline ::UnityEngine::ProBuilder::__MeshUtility____c* UnityEngine::ProBuilder::__MeshUtility____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::__MeshUtility____c*>());
}
inline void UnityEngine::ProBuilder::__MeshUtility____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__MeshUtility____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*
UnityEngine::ProBuilder::__MeshUtility____c::_CollapseSharedVertices_b__11_0(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__MeshUtility____c*>::get(), "<CollapseSharedVertices>b__11_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__MeshUtility____c::__MeshUtility____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GeneratePerTriangleMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> (*)(::UnityEngine::Mesh*)>(
    &::UnityEngine::ProBuilder::MeshUtility::GeneratePerTriangleMesh)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2b509fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GeneratePerTriangleMesh",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GenerateTangent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::GenerateTangent)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x2b51314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GenerateTangent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.DeepCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::DeepCopy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b51848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "DeepCopy", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::CopyTo)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x2b518b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.Print
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::Print)> {
  constexpr static std::size_t size = 0xbb8;
  constexpr static std::size_t addrs = 0x2b51d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "Print", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GetIndexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::GetIndexCount)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2b5291c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GetIndexCount", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GetPrimitiveCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::GetPrimitiveCount)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2b529dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GetPrimitiveCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.Compile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::UnityEngine::MeshTopology)>(
    &::UnityEngine::ProBuilder::MeshUtility::Compile)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2b52af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "Compile", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> (*)(::UnityEngine::Mesh*)>(
    &::UnityEngine::ProBuilder::MeshUtility::GetVertices)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x2b50d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GetVertices", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.CollapseSharedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>)>(&::UnityEngine::ProBuilder::MeshUtility::CollapseSharedVertices)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x2b534a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "CollapseSharedVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.FitToSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Bounds, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::MeshUtility::FitToSize)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2b539a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "FitToSize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.SanityCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshUtility::SanityCheck)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b53cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "SanityCheck", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.SanityCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::MeshUtility::SanityCheck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b5290c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "SanityCheck", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.SanityCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*)>(
    &::UnityEngine::ProBuilder::MeshUtility::SanityCheck)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2b543cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "SanityCheck", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.IsUsedInParticleSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshUtility::IsUsedInParticleSystem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2b54658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "IsUsedInParticleSystem", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.RestoreParticleSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshUtility::RestoreParticleSystem)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b547bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "RestoreParticleSystem", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshUtility.GetBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshUtility::GetBounds)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2b54854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GetBounds", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> UnityEngine::ProBuilder::MeshUtility::GeneratePerTriangleMesh(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GeneratePerTriangleMesh",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>, false>(nullptr, ___internal_method, mesh);
}
inline void UnityEngine::ProBuilder::MeshUtility::GenerateTangent(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GenerateTangent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
inline ::UnityEngine::Mesh* UnityEngine::ProBuilder::MeshUtility::DeepCopy(::UnityEngine::Mesh* source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "DeepCopy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::ProBuilder::MeshUtility::CopyTo(::UnityEngine::Mesh* source, ::UnityEngine::Mesh* destination) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, destination);
}
template <typename T> inline T UnityEngine::ProBuilder::MeshUtility::GetMeshChannel(::UnityEngine::GameObject* gameObject, ::System::Func_2<::UnityEngine::Mesh*, T>* attributeGetter) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GetMeshChannel",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Mesh*, T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, gameObject, attributeGetter);
}
template <typename T>
inline void UnityEngine::ProBuilder::MeshUtility::PrintAttribute(::System::Text::StringBuilder* sb, ::StringW title, ::System::Collections::Generic::IEnumerable_1<T>* attrib, ::StringW fmt) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "PrintAttribute",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, title, attrib, fmt);
}
inline ::StringW UnityEngine::ProBuilder::MeshUtility::Print(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "Print", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, mesh);
}
inline uint32_t UnityEngine::ProBuilder::MeshUtility::GetIndexCount(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GetIndexCount", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, mesh);
}
inline uint32_t UnityEngine::ProBuilder::MeshUtility::GetPrimitiveCount(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GetPrimitiveCount", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, mesh);
}
/// @param preferredTopology: ::UnityEngine::MeshTopology (default: static_cast<int32_t>(0x0))
inline void UnityEngine::ProBuilder::MeshUtility::Compile(::UnityEngine::ProBuilder::ProBuilderMesh* probuilderMesh, ::UnityEngine::Mesh* targetMesh, ::UnityEngine::MeshTopology preferredTopology) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "Compile", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, probuilderMesh, targetMesh, preferredTopology);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> UnityEngine::ProBuilder::MeshUtility::GetVertices(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GetVertices", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>, false>(nullptr, ___internal_method, mesh);
}
/// @param vertices: ::ArrayW<::UnityEngine::ProBuilder::Vertex*,::Array<::UnityEngine::ProBuilder::Vertex*>*> (default: nullptr)
inline void UnityEngine::ProBuilder::MeshUtility::CollapseSharedVertices(::UnityEngine::Mesh* mesh,
                                                                         ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "CollapseSharedVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, vertices);
}
inline void UnityEngine::ProBuilder::MeshUtility::FitToSize(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Bounds currentSize, ::UnityEngine::Vector3 sizeToFit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "FitToSize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, currentSize, sizeToFit);
}
inline ::StringW UnityEngine::ProBuilder::MeshUtility::SanityCheck(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "SanityCheck", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, mesh);
}
inline ::StringW UnityEngine::ProBuilder::MeshUtility::SanityCheck(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "SanityCheck", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, mesh);
}
inline ::StringW UnityEngine::ProBuilder::MeshUtility::SanityCheck(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "SanityCheck", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, vertices);
}
inline bool UnityEngine::ProBuilder::MeshUtility::IsUsedInParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* pbmesh) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "IsUsedInParticleSystem", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pbmesh);
}
inline void UnityEngine::ProBuilder::MeshUtility::RestoreParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* pbmesh) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "RestoreParticleSystem", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pbmesh);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::MeshUtility::GetBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshUtility*>::get(), "GetBounds", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, mesh);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshUtility::MeshUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
