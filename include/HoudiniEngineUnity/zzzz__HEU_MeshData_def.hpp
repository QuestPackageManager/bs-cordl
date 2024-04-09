#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_MeshData)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_MeshData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_MeshData);
// Type: HoudiniEngineUnity::HEU_MeshData
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_MeshData*
class CORDL_TYPE HEU_MeshData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colors, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colors, put = __cordl_internal_set__colors))::System::Collections::Generic::List_1<::UnityEngine::Color32>* _colors;

  /// @brief Field _indices, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indices, put = __cordl_internal_set__indices))::System::Collections::Generic::List_1<int32_t>* _indices;

  /// @brief Field _meshTopology, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__meshTopology, put = __cordl_internal_set__meshTopology))::UnityEngine::MeshTopology _meshTopology;

  /// @brief Field _normals, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__normals, put = __cordl_internal_set__normals))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _normals;

  /// @brief Field _pointIndexToMeshIndexMap, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pointIndexToMeshIndexMap,
                      put = __cordl_internal_set__pointIndexToMeshIndexMap))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* _pointIndexToMeshIndexMap;

  /// @brief Field _tangents, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tangents, put = __cordl_internal_set__tangents))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _tangents;

  /// @brief Field _triangleNormals, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__triangleNormals, put = __cordl_internal_set__triangleNormals))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _triangleNormals;

  /// @brief Field _uvs, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__uvs,
      put = __cordl_internal_set__uvs))::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*> _uvs;

  /// @brief Field _vertices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__vertices, put = __cordl_internal_set__vertices))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _vertices;

  static inline ::HoudiniEngineUnity::HEU_MeshData* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>*& __cordl_internal_get__colors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color32>*> const& __cordl_internal_get__colors() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__indices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get__indices() const;

  constexpr ::UnityEngine::MeshTopology const& __cordl_internal_get__meshTopology() const;

  constexpr ::UnityEngine::MeshTopology& __cordl_internal_get__meshTopology();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__normals();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__normals() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get__pointIndexToMeshIndexMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __cordl_internal_get__pointIndexToMeshIndexMap() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get__tangents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __cordl_internal_get__tangents() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__triangleNormals();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__triangleNormals() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*> const&
  __cordl_internal_get__uvs() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>& __cordl_internal_get__uvs();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__vertices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__vertices() const;

  constexpr void __cordl_internal_set__colors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* value);

  constexpr void __cordl_internal_set__indices(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__meshTopology(::UnityEngine::MeshTopology value);

  constexpr void __cordl_internal_set__normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__pointIndexToMeshIndexMap(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set__tangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr void __cordl_internal_set__triangleNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__uvs(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*> value);

  constexpr void __cordl_internal_set__vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x24b2228, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_MeshData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_MeshData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_MeshData(HEU_MeshData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_MeshData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_MeshData(HEU_MeshData const&) = delete;

  /// @brief Field _indices, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____indices;

  /// @brief Field _vertices, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____vertices;

  /// @brief Field _colors, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Color32>* ____colors;

  /// @brief Field _normals, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____normals;

  /// @brief Field _tangents, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ____tangents;

  /// @brief Field _uvs, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*> ____uvs;

  /// @brief Field _triangleNormals, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____triangleNormals;

  /// @brief Field _pointIndexToMeshIndexMap, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ____pointIndexToMeshIndexMap;

  /// @brief Field _meshTopology, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::MeshTopology ____meshTopology;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_MeshData, 0x58>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshData, ____indices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshData, ____vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshData, ____colors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshData, ____normals) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshData, ____tangents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshData, ____uvs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshData, ____triangleNormals) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshData, ____pointIndexToMeshIndexMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshData, ____meshTopology) == 0x50, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MeshData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MeshData*, "HoudiniEngineUnity", "HEU_MeshData");
