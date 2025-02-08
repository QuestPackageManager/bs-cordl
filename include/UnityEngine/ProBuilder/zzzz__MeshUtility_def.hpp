#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
class MeshUtility___c;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MeshUtility;
}
namespace UnityEngine::ProBuilder {
class MeshUtility___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshUtility);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshUtility___c);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshUtility/<>c
class CORDL_TYPE MeshUtility___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshUtility___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*,
                                                                                                ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>* __9__11_0;

  static inline ::UnityEngine::ProBuilder::MeshUtility___c* New_ctor();

  /// @brief Method <CollapseSharedVertices>b__11_0, addr 0x4720504, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*
  _CollapseSharedVertices_b__11_0(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>* x);

  /// @brief Method .ctor, addr 0x47204fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshUtility___c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*,
                                 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>*
  getStaticF___9__11_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshUtility___c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int32_t>*,
                                                           ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshUtility___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshUtility___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshUtility___c(MeshUtility___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshUtility___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshUtility___c(MeshUtility___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14260 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshUtility___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshUtility
class CORDL_TYPE MeshUtility : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshUtility___c;

  /// @brief Method CollapseSharedVertices, addr 0x471f050, size 0x4d4, virtual false, abstract: false, final false
  static inline void CollapseSharedVertices(::UnityEngine::Mesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> vertices);

  /// @brief Method Compile, addr 0x471e6e0, size 0x314, virtual false, abstract: false, final false
  static inline void Compile(::UnityEngine::ProBuilder::ProBuilderMesh* probuilderMesh, ::UnityEngine::Mesh* targetMesh, ::UnityEngine::MeshTopology preferredTopology);

  /// @brief Method CopyTo, addr 0x471d4f0, size 0x45c, virtual false, abstract: false, final false
  static inline void CopyTo(::UnityEngine::Mesh* source, ::UnityEngine::Mesh* destination);

  /// @brief Method DeepCopy, addr 0x471d48c, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> DeepCopy(::UnityEngine::Mesh* source);

  /// @brief Method FitToSize, addr 0x471f524, size 0x2d4, virtual false, abstract: false, final false
  static inline void FitToSize(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Bounds currentSize, ::UnityEngine::Vector3 sizeToFit);

  /// @brief Method GeneratePerTriangleMesh, addr 0x471c704, size 0x304, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> GeneratePerTriangleMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method GenerateTangent, addr 0x471cf58, size 0x534, virtual false, abstract: false, final false
  static inline void GenerateTangent(::UnityEngine::Mesh* mesh);

  /// @brief Method GetBounds, addr 0x472031c, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method GetIndexCount, addr 0x471e50c, size 0xc0, virtual false, abstract: false, final false
  static inline uint32_t GetIndexCount(::UnityEngine::Mesh* mesh);

  /// @brief Method GetMeshChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetMeshChannel(::UnityEngine::GameObject* gameObject, ::System::Func_2<::UnityW<::UnityEngine::Mesh>, T>* attributeGetter);

  /// @brief Method GetPrimitiveCount, addr 0x471e5cc, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t GetPrimitiveCount(::UnityEngine::Mesh* mesh);

  /// @brief Method GetVertices, addr 0x471ca08, size 0x550, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> GetVertices(::UnityEngine::Mesh* mesh);

  /// @brief Method IsUsedInParticleSystem, addr 0x472011c, size 0xf4, virtual false, abstract: false, final false
  static inline bool IsUsedInParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* pbmesh);

  /// @brief Method Print, addr 0x471d94c, size 0xbb0, virtual false, abstract: false, final false
  static inline ::StringW Print(::UnityEngine::Mesh* mesh);

  /// @brief Method PrintAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void PrintAttribute(::System::Text::StringBuilder* sb, ::StringW title, ::System::Collections::Generic::IEnumerable_1<T>* attrib, ::StringW fmt);

  /// @brief Method RestoreParticleSystem, addr 0x4720284, size 0x98, virtual false, abstract: false, final false
  static inline void RestoreParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* pbmesh);

  /// @brief Method SanityCheck, addr 0x471e4fc, size 0x10, virtual false, abstract: false, final false
  static inline ::StringW SanityCheck(::UnityEngine::Mesh* mesh);

  /// @brief Method SanityCheck, addr 0x471f830, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW SanityCheck(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method SanityCheck, addr 0x471fe8c, size 0x290, virtual false, abstract: false, final false
  static inline ::StringW SanityCheck(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshUtility(MeshUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshUtility(MeshUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14261 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshUtility*, "UnityEngine.ProBuilder", "MeshUtility");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshUtility___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshUtility___c*, "UnityEngine.ProBuilder", "MeshUtility/<>c");
