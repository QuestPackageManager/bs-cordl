#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/MeshImporter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MeshImporter)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImportSettings;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImporter___c;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImporter;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImporter___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshImporter);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshImporter/<>c
class CORDL_TYPE MeshImporter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* __9__9_0;

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c* New_ctor();

  /// @brief Method <Import>b__9_0, addr 0x65168bc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 _Import_b__9_0(::UnityEngine::ProBuilder::Vertex* x);

  /// @brief Method .ctor, addr 0x65168b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* getStaticF___9__9_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshImporter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshImporter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshImporter___c(MeshImporter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshImporter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshImporter___c(MeshImporter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshImporter
class CORDL_TYPE MeshImporter : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c;

  /// @brief Field k_DefaultImportSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DefaultImportSettings, put = setStaticF_k_DefaultImportSettings)) ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* k_DefaultImportSettings;

  /// @brief Field m_Destination, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Destination, put = __cordl_internal_set_m_Destination)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> m_Destination;

  /// @brief Field m_SourceMaterials, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceMaterials,
                      put = __cordl_internal_set_m_SourceMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      m_SourceMaterials;

  /// @brief Field m_SourceMesh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceMesh, put = __cordl_internal_set_m_SourceMesh)) ::UnityW<::UnityEngine::Mesh> m_SourceMesh;

  /// @brief Field m_Vertices, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Vertices, put = __cordl_internal_set_m_Vertices)) ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>
      m_Vertices;

  /// @brief Method Import, addr 0x651539c, size 0x190, virtual false, abstract: false, final false
  inline bool Import(::UnityEngine::GameObject* go, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);

  /// @brief Method Import, addr 0x651552c, size 0xabc, virtual false, abstract: false, final false
  inline void Import(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* destination);

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* New_ctor(::UnityEngine::GameObject* gameObject);

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter*
  New_ctor(::UnityEngine::Mesh* sourceMesh, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> sourceMaterials, ::UnityEngine::ProBuilder::ProBuilderMesh* destination);

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_m_Destination() const;

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_m_Destination();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_m_SourceMaterials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_m_SourceMaterials();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_SourceMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_SourceMesh();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> const& __cordl_internal_get_m_Vertices() const;

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>& __cordl_internal_get_m_Vertices();

  constexpr void __cordl_internal_set_m_Destination(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value);

  constexpr void __cordl_internal_set_m_SourceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_m_SourceMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_Vertices(::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> value);

  /// @brief Method .ctor, addr 0x6515394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* destination);

  /// @brief Method .ctor, addr 0x6515110, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* gameObject);

  /// @brief Method .ctor, addr 0x651527c, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* sourceMesh, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> sourceMaterials, ::UnityEngine::ProBuilder::ProBuilderMesh* destination);

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* getStaticF_k_DefaultImportSettings();

  static inline void setStaticF_k_DefaultImportSettings(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshImporter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshImporter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshImporter(MeshImporter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshImporter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshImporter(MeshImporter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16837 };

  /// @brief Field m_SourceMesh, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_SourceMesh;

  /// @brief Field m_SourceMaterials, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___m_SourceMaterials;

  /// @brief Field m_Destination, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> ___m_Destination;

  /// @brief Field m_Vertices, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> ___m_Vertices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshImporter, ___m_SourceMesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshImporter, ___m_SourceMaterials) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshImporter, ___m_Destination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshImporter, ___m_Vertices) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshImporter, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshImporter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshImporter*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter/<>c");
