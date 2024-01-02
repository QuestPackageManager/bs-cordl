#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputInterfaceMesh)
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceMesh__HEU_InputDataMesh;
}
namespace HoudiniEngineUnity {
class HEU_InputData;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Mesh;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceMesh__HEU_InputDataMeshes;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceMesh;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceMesh__HEU_InputDataMesh;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceMesh__HEU_InputDataMeshes;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputInterfaceMesh);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes);
// Type: ::HEU_InputDataMeshes
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9840))
// CS Name: ::HEU_InputInterfaceMesh::HEU_InputDataMeshes*
class CORDL_TYPE __HEU_InputInterfaceMesh__HEU_InputDataMeshes : public ::HoudiniEngineUnity::HEU_InputData {
public:
  // Declarations
  /// @brief Field _inputMeshes, offset 0x18, size 0x8
  __declspec(property(get = __get__inputMeshes, put = __set__inputMeshes))::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>* _inputMeshes;

  /// @brief Field _hasLOD, offset 0x20, size 0x1
  __declspec(property(get = __get__hasLOD, put = __set__hasLOD)) bool _hasLOD;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>*& __get__inputMeshes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>*> const& __get__inputMeshes() const;

  constexpr void __set__inputMeshes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>* value);

  constexpr bool& __get__hasLOD();

  constexpr bool const& __get__hasLOD() const;

  constexpr void __set__hasLOD(bool value);

  static inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes* New_ctor();

  /// @brief Method .ctor, addr 0x21c8f0c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceMesh__HEU_InputDataMeshes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_InputInterfaceMesh__HEU_InputDataMeshes(__HEU_InputInterfaceMesh__HEU_InputDataMeshes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceMesh__HEU_InputDataMeshes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_InputInterfaceMesh__HEU_InputDataMeshes(__HEU_InputInterfaceMesh__HEU_InputDataMeshes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputInterfaceMesh__HEU_InputDataMeshes();

public:
  /// @brief Field _inputMeshes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>* ____inputMeshes;

  /// @brief Field _hasLOD, offset: 0x20, size: 0x1, def value: None
  bool ____hasLOD;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes, ____inputMeshes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes, ____hasLOD) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::HEU_InputDataMesh
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9841))
// CS Name: ::HEU_InputInterfaceMesh::HEU_InputDataMesh*
class CORDL_TYPE __HEU_InputInterfaceMesh__HEU_InputDataMesh : public ::System::Object {
public:
  // Declarations
  /// @brief Field _mesh, offset 0x10, size 0x8
  __declspec(property(get = __get__mesh, put = __set__mesh))::UnityEngine::Mesh* _mesh;

  /// @brief Field _materials, offset 0x18, size 0x8
  __declspec(property(get = __get__materials, put = __set__materials))::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> _materials;

  /// @brief Field _meshPath, offset 0x20, size 0x8
  __declspec(property(get = __get__meshPath, put = __set__meshPath))::StringW _meshPath;

  /// @brief Field _meshName, offset 0x28, size 0x8
  __declspec(property(get = __get__meshName, put = __set__meshName))::StringW _meshName;

  /// @brief Field _numVertices, offset 0x30, size 0x4
  __declspec(property(get = __get__numVertices, put = __set__numVertices)) int32_t _numVertices;

  /// @brief Field _numSubMeshes, offset 0x34, size 0x4
  __declspec(property(get = __get__numSubMeshes, put = __set__numSubMeshes)) int32_t _numSubMeshes;

  /// @brief Field _indexStart, offset 0x38, size 0x8
  __declspec(property(get = __get__indexStart, put = __set__indexStart))::ArrayW<uint32_t, ::Array<uint32_t>*> _indexStart;

  /// @brief Field _indexCount, offset 0x40, size 0x8
  __declspec(property(get = __get__indexCount, put = __set__indexCount))::ArrayW<uint32_t, ::Array<uint32_t>*> _indexCount;

  /// @brief Field _LODScreenTransition, offset 0x48, size 0x4
  __declspec(property(get = __get__LODScreenTransition, put = __set__LODScreenTransition)) float_t _LODScreenTransition;

  /// @brief Field _transform, offset 0x50, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  constexpr ::UnityEngine::Mesh*& __get__mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__mesh() const;

  constexpr void __set__mesh(::UnityEngine::Mesh* value);

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>& __get__materials();

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> const& __get__materials() const;

  constexpr void __set__materials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  constexpr ::StringW& __get__meshPath();

  constexpr ::StringW const& __get__meshPath() const;

  constexpr void __set__meshPath(::StringW value);

  constexpr ::StringW& __get__meshName();

  constexpr ::StringW const& __get__meshName() const;

  constexpr void __set__meshName(::StringW value);

  constexpr int32_t& __get__numVertices();

  constexpr int32_t const& __get__numVertices() const;

  constexpr void __set__numVertices(int32_t value);

  constexpr int32_t& __get__numSubMeshes();

  constexpr int32_t const& __get__numSubMeshes() const;

  constexpr void __set__numSubMeshes(int32_t value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get__indexStart();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get__indexStart() const;

  constexpr void __set__indexStart(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get__indexCount();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get__indexCount() const;

  constexpr void __set__indexCount(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr float_t& __get__LODScreenTransition();

  constexpr float_t const& __get__LODScreenTransition() const;

  constexpr void __set__LODScreenTransition(float_t value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  static inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh* New_ctor();

  /// @brief Method .ctor, addr 0x21c8f88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceMesh__HEU_InputDataMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_InputInterfaceMesh__HEU_InputDataMesh(__HEU_InputInterfaceMesh__HEU_InputDataMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceMesh__HEU_InputDataMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_InputInterfaceMesh__HEU_InputDataMesh(__HEU_InputInterfaceMesh__HEU_InputDataMesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputInterfaceMesh__HEU_InputDataMesh();

public:
  /// @brief Field _mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____mesh;

  /// @brief Field _materials, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> ____materials;

  /// @brief Field _meshPath, offset: 0x20, size: 0x8, def value: None
  ::StringW ____meshPath;

  /// @brief Field _meshName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____meshName;

  /// @brief Field _numVertices, offset: 0x30, size: 0x4, def value: None
  int32_t ____numVertices;

  /// @brief Field _numSubMeshes, offset: 0x34, size: 0x4, def value: None
  int32_t ____numSubMeshes;

  /// @brief Field _indexStart, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____indexStart;

  /// @brief Field _indexCount, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____indexCount;

  /// @brief Field _LODScreenTransition, offset: 0x48, size: 0x4, def value: None
  float_t ____LODScreenTransition;

  /// @brief Field _transform, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, 0x58>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____mesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____materials) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____meshPath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____meshName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____numVertices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____numSubMeshes) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____indexStart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____indexCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____LODScreenTransition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, ____transform) == 0x50, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputInterfaceMesh
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9839))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9842))
// CS Name: ::HoudiniEngineUnity::HEU_InputInterfaceMesh*
class CORDL_TYPE HEU_InputInterfaceMesh : public ::HoudiniEngineUnity::HEU_InputInterface {
public:
  // Declarations
  using HEU_InputDataMesh = ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh;

  using HEU_InputDataMeshes = ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes;

  static inline ::HoudiniEngineUnity::HEU_InputInterfaceMesh* New_ctor();

  /// @brief Method .ctor, addr 0x21c5304, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method CreateInputNodeWithDataUpload, addr 0x21c5324, size 0x188, virtual true, abstract: false, final false
  inline bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t connectNodeID, ::UnityEngine::GameObject* inputObject, ByRef<int32_t> inputNodeID);

  /// @brief Method IsThisInputObjectSupported, addr 0x21c7a0c, size 0x164, virtual true, abstract: false, final false
  inline bool IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject);

  /// @brief Method GetUVsFromMesh, addr 0x21c7b70, size 0x90, virtual false, abstract: false, final false
  static inline void GetUVsFromMesh(::UnityEngine::Mesh* mesh, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> srcUVs,
                                    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* destUVs, int32_t index);

  /// @brief Method UploadData, addr 0x21c581c, size 0x21f0, virtual false, abstract: false, final false
  inline bool UploadData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t inputNodeID, ::HoudiniEngineUnity::HEU_InputData* inputData);

  /// @brief Method GenerateMeshDatasFromGameObject, addr 0x21c54ac, size 0x370, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes* GenerateMeshDatasFromGameObject(::UnityEngine::GameObject* inputObject);

  /// @brief Method CreateSingleMeshData, addr 0x21c7c00, size 0x1d4, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh* CreateSingleMeshData(::UnityEngine::GameObject* meshGameObject);

  /// @brief Method GetMeshFromObject, addr 0x21c7dd4, size 0x1138, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh* GetMeshFromObject(::UnityEngine::GameObject* meshGameObject);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputInterfaceMesh(HEU_InputInterfaceMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputInterfaceMesh(HEU_InputInterfaceMesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputInterfaceMesh();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputInterfaceMesh, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceMesh);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceMesh*, "HoudiniEngineUnity", "HEU_InputInterfaceMesh");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*, "HoudiniEngineUnity", "HEU_InputInterfaceMesh/HEU_InputDataMesh");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes*, "HoudiniEngineUnity", "HEU_InputInterfaceMesh/HEU_InputDataMeshes");
