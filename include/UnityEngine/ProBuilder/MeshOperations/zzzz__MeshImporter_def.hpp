#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MeshImporter)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshImporter____c;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImportSettings;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImporter;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshImporter____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshImporter);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12271))
// CS Name: ::MeshImporter::<>c*
class CORDL_TYPE __MeshImporter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0))::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* __9__9_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c* getStaticF___9();

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* getStaticF___9__9_0();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c* New_ctor();

  /// @brief Method .ctor addr 0x2bbb4a8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Import>b__9_0 addr 0x2bbb4b0 size 0x1c virtual false final false
  inline ::UnityEngine::Vector3 _Import_b__9_0(::UnityEngine::ProBuilder::Vertex* x);

  // Ctor Parameters [CppParam { name: "", ty: "__MeshImporter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshImporter____c(__MeshImporter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshImporter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshImporter____c(__MeshImporter____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshImporter____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::MeshImporter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12272))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::MeshImporter*
class CORDL_TYPE MeshImporter : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c;

  /// @brief Field m_SourceMesh, offset 0x10, size 0x8
  __declspec(property(get = __get_m_SourceMesh, put = __set_m_SourceMesh))::UnityEngine::Mesh* m_SourceMesh;

  /// @brief Field m_SourceMaterials, offset 0x18, size 0x8
  __declspec(property(get = __get_m_SourceMaterials, put = __set_m_SourceMaterials))::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> m_SourceMaterials;

  /// @brief Field m_Destination, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Destination, put = __set_m_Destination))::UnityEngine::ProBuilder::ProBuilderMesh* m_Destination;

  /// @brief Field m_Vertices, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Vertices, put = __set_m_Vertices))::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> m_Vertices;

  /// @brief Field k_DefaultImportSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DefaultImportSettings, put = setStaticF_k_DefaultImportSettings))::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* k_DefaultImportSettings;

  constexpr ::UnityEngine::Mesh*& __get_m_SourceMesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get_m_SourceMesh() const;

  constexpr void __set_m_SourceMesh(::UnityEngine::Mesh* value);

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>& __get_m_SourceMaterials();

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> const& __get_m_SourceMaterials() const;

  constexpr void __set_m_SourceMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  constexpr ::UnityEngine::ProBuilder::ProBuilderMesh*& __get_m_Destination();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> const& __get_m_Destination() const;

  constexpr void __set_m_Destination(::UnityEngine::ProBuilder::ProBuilderMesh* value);

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>& __get_m_Vertices();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> const& __get_m_Vertices() const;

  constexpr void __set_m_Vertices(::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> value);

  static inline void setStaticF_k_DefaultImportSettings(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* getStaticF_k_DefaultImportSettings();

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* New_ctor(::UnityEngine::GameObject* gameObject);

  /// @brief Method .ctor addr 0x2bb9c60 size 0x16c virtual false final false
  inline void _ctor(::UnityEngine::GameObject* gameObject);

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter*
  New_ctor(::UnityEngine::Mesh* sourceMesh, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> sourceMaterials, ::UnityEngine::ProBuilder::ProBuilderMesh* destination);

  /// @brief Method .ctor addr 0x2bb9dcc size 0x128 virtual false final false
  inline void _ctor(::UnityEngine::Mesh* sourceMesh, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> sourceMaterials, ::UnityEngine::ProBuilder::ProBuilderMesh* destination);

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* destination);

  /// @brief Method .ctor addr 0x2bb9ef4 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* destination);

  /// @brief Method Import addr 0x2bb9f1c size 0x184 virtual false final false
  inline bool Import(::UnityEngine::GameObject* go, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);

  /// @brief Method Import addr 0x2bba0a0 size 0xab8 virtual false final false
  inline void Import(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);

  // Ctor Parameters [CppParam { name: "", ty: "MeshImporter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshImporter(MeshImporter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshImporter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshImporter(MeshImporter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshImporter();

public:
  /// @brief Field m_SourceMesh, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Mesh* ___m_SourceMesh;

  /// @brief Field m_SourceMaterials, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> ___m_SourceMaterials;

  /// @brief Field m_Destination, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::ProBuilderMesh* ___m_Destination;

  /// @brief Field m_Vertices, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> ___m_Vertices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshImporter, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshImporter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshImporter*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter/<>c");
