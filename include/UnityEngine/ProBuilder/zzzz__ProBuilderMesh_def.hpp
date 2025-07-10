#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__HideFlags_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProBuilderMesh)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct MeshArrays;
}
namespace UnityEngine::ProBuilder {
struct MeshSyncState;
}
namespace UnityEngine::ProBuilder {
struct ProBuilderMesh_CacheValidState;
}
namespace UnityEngine::ProBuilder {
struct ProBuilderMesh_NonVersionedEditScope;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh___c;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh___c__DisplayClass174_0;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh___c__DisplayClass176_0;
}
namespace UnityEngine::ProBuilder {
struct RefreshMask;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
class UnwrapParameters;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ProBuilderMesh_CacheValidState;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh___c;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh___c__DisplayClass174_0;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh___c__DisplayClass176_0;
}
namespace UnityEngine::ProBuilder {
struct ProBuilderMesh_NonVersionedEditScope;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ProBuilderMesh);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ProBuilderMesh___c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass174_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass176_0);
MARK_VAL_T(::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh/CacheValidState
struct CORDL_TYPE ProBuilderMesh_CacheValidState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __ProBuilderMesh_CacheValidState_Unwrapped
  enum struct __ProBuilderMesh_CacheValidState_Unwrapped : uint8_t {
    __E_SharedVertex = static_cast<uint8_t>(0x1u),
    __E_SharedTexture = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProBuilderMesh_CacheValidState_Unwrapped() const noexcept {
    return static_cast<__ProBuilderMesh_CacheValidState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderMesh_CacheValidState();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ProBuilderMesh_CacheValidState(uint8_t value__) noexcept;

  /// @brief Field SharedTexture value: U8(2)
  static ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState const SharedTexture;

  /// @brief Field SharedVertex value: U8(1)
  static ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState const SharedVertex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14288 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState, 0x1>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.IDisposable
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh/NonVersionedEditScope
struct CORDL_TYPE ProBuilderMesh_NonVersionedEditScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x4727078, size 0x28, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x4721c1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderMesh_NonVersionedEditScope();

  // Ctor Parameters [CppParam { name: "m_Mesh", ty: "::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>", modifiers: "", def_value: None }, CppParam { name: "m_VersionIndex", ty: "uint16_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_InstanceVersionIndex", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr ProBuilderMesh_NonVersionedEditScope(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> m_Mesh, uint16_t m_VersionIndex, uint16_t m_InstanceVersionIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14289 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> m_Mesh;

  /// @brief Field m_VersionIndex, offset: 0x8, size: 0x2, def value: None
  uint16_t m_VersionIndex;

  /// @brief Field m_InstanceVersionIndex, offset: 0xa, size: 0x2, def value: None
  uint16_t m_InstanceVersionIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope, m_Mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope, m_VersionIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope, m_InstanceVersionIndex) == 0xa, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh/<>c
class CORDL_TYPE ProBuilderMesh___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::ProBuilderMesh___c* __9;

  /// @brief Field <>9__118_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__118_0, put = setStaticF___9__118_0)) ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* __9__118_0;

  /// @brief Field <>9__118_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__118_1, put = setStaticF___9__118_1)) ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* __9__118_1;

  /// @brief Field <>9__126_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__126_0, put = setStaticF___9__126_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__126_0;

  /// @brief Field <>9__128_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__128_0, put = setStaticF___9__128_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__128_0;

  /// @brief Field <>9__171_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__171_0, put = setStaticF___9__171_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* __9__171_0;

  static inline ::UnityEngine::ProBuilder::ProBuilderMesh___c* New_ctor();

  /// @brief Method <CopyFrom>b__171_0, addr 0x472714c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _CopyFrom_b__171_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <SetUVs>b__118_0, addr 0x4727104, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 _SetUVs_b__118_0(::UnityEngine::Vector4 x);

  /// @brief Method <SetUVs>b__118_1, addr 0x4727108, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 _SetUVs_b__118_1(::UnityEngine::Vector4 x);

  /// @brief Method .ctor, addr 0x47270fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_indexCount>b__126_0, addr 0x472710c, size 0x20, virtual false, abstract: false, final false
  inline int32_t _get_indexCount_b__126_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <get_triangleCount>b__128_0, addr 0x472712c, size 0x20, virtual false, abstract: false, final false
  inline int32_t _get_triangleCount_b__128_0(::UnityEngine::ProBuilder::Face* x);

  static inline ::UnityEngine::ProBuilder::ProBuilderMesh___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* getStaticF___9__118_0();

  static inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* getStaticF___9__118_1();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__126_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__128_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__171_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::ProBuilderMesh___c* value);

  static inline void setStaticF___9__118_0(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value);

  static inline void setStaticF___9__118_1(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value);

  static inline void setStaticF___9__126_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline void setStaticF___9__128_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline void setStaticF___9__171_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderMesh___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProBuilderMesh___c(ProBuilderMesh___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProBuilderMesh___c(ProBuilderMesh___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14290 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProBuilderMesh___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh/<>c__DisplayClass174_0
class CORDL_TYPE ProBuilderMesh___c__DisplayClass174_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field i, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) int32_t i;

  static inline ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass174_0* New_ctor();

  /// @brief Method <GetUnusedTextureGroup>b__0, addr 0x47271a8, size 0x24, virtual false, abstract: false, final false
  inline bool _GetUnusedTextureGroup_b__0(::UnityEngine::ProBuilder::Face* element);

  constexpr int32_t const& __cordl_internal_get_i() const;

  constexpr int32_t& __cordl_internal_get_i();

  constexpr void __cordl_internal_set_i(int32_t value);

  /// @brief Method .ctor, addr 0x4723a08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderMesh___c__DisplayClass174_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh___c__DisplayClass174_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProBuilderMesh___c__DisplayClass174_0(ProBuilderMesh___c__DisplayClass174_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh___c__DisplayClass174_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProBuilderMesh___c__DisplayClass174_0(ProBuilderMesh___c__DisplayClass174_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14291 };

  /// @brief Field i, offset: 0x10, size: 0x4, def value: None
  int32_t ___i;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass174_0, ___i) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass174_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh/<>c__DisplayClass176_0
class CORDL_TYPE ProBuilderMesh___c__DisplayClass176_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field i, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) int32_t i;

  static inline ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass176_0* New_ctor();

  /// @brief Method <UnusedElementGroup>b__0, addr 0x47271cc, size 0x24, virtual false, abstract: false, final false
  inline bool _UnusedElementGroup_b__0(::UnityEngine::ProBuilder::Face* element);

  constexpr int32_t const& __cordl_internal_get_i() const;

  constexpr int32_t& __cordl_internal_get_i();

  constexpr void __cordl_internal_set_i(int32_t value);

  /// @brief Method .ctor, addr 0x4723b0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderMesh___c__DisplayClass176_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh___c__DisplayClass176_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProBuilderMesh___c__DisplayClass176_0(ProBuilderMesh___c__DisplayClass176_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh___c__DisplayClass176_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProBuilderMesh___c__DisplayClass176_0(ProBuilderMesh___c__DisplayClass176_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14292 };

  /// @brief Field i, offset: 0x10, size: 0x4, def value: None
  int32_t ___i;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass176_0, ___i) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass176_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies UnityEngine.HideFlags, UnityEngine.MonoBehaviour, UnityEngine.ProBuilder.ProBuilderMesh::CacheValidState
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh
class CORDL_TYPE ProBuilderMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CacheValidState = ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState;

  using NonVersionedEditScope = ::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope;

  using __c = ::UnityEngine::ProBuilder::ProBuilderMesh___c;

  using __c__DisplayClass174_0 = ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass174_0;

  using __c__DisplayClass176_0 = ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass176_0;

  /// @brief Field <userCollisions>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__userCollisions_k__BackingField, put = __cordl_internal_set__userCollisions_k__BackingField)) bool _userCollisions_k__BackingField;

  /// @brief Field assetGuid, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_assetGuid, put = __cordl_internal_set_assetGuid)) ::StringW assetGuid;

  __declspec(property(get = get_colors, put = set_colors)) ::System::Collections::Generic::IList_1<::UnityEngine::Color>* colors;

  __declspec(property(get = get_colorsInternal, put = set_colorsInternal)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colorsInternal;

  /// @brief Field componentHasBeenReset, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_componentHasBeenReset, put = setStaticF_componentHasBeenReset)) ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* componentHasBeenReset;

  /// @brief Field componentWillBeDestroyed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_componentWillBeDestroyed,
                      put = setStaticF_componentWillBeDestroyed)) ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* componentWillBeDestroyed;

  __declspec(property(get = get_edgeCount)) int32_t edgeCount;

  /// @brief Field elementSelectionChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_elementSelectionChanged,
                      put = setStaticF_elementSelectionChanged)) ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* elementSelectionChanged;

  __declspec(property(get = get_faceCount)) int32_t faceCount;

  __declspec(property(get = get_faces, put = set_faces)) ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces;

  __declspec(property(get = get_facesInternal, put = set_facesInternal)) ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> facesInternal;

  __declspec(property(get = get_filter)) ::UnityW<::UnityEngine::MeshFilter> filter;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_indexCount)) int32_t indexCount;

  /// @brief Field m_CacheValid, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CacheValid, put = __cordl_internal_set_m_CacheValid)) ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState m_CacheValid;

  /// @brief Field m_Colors, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Colors, put = __cordl_internal_set_m_Colors)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> m_Colors;

  /// @brief Field m_Faces, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Faces, put = __cordl_internal_set_m_Faces)) ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> m_Faces;

  /// @brief Field m_InstanceVersionIndex, offset 0xca, size 0x2
  __declspec(property(get = __cordl_internal_get_m_InstanceVersionIndex, put = __cordl_internal_set_m_InstanceVersionIndex)) uint16_t m_InstanceVersionIndex;

  /// @brief Field m_IsSelectable, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsSelectable, put = __cordl_internal_set_m_IsSelectable)) bool m_IsSelectable;

  /// @brief Field m_Mesh, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::Mesh> m_Mesh;

  /// @brief Field m_MeshFilter, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshFilter, put = __cordl_internal_set_m_MeshFilter)) ::UnityW<::UnityEngine::MeshFilter> m_MeshFilter;

  /// @brief Field m_MeshFormatVersion, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MeshFormatVersion, put = __cordl_internal_set_m_MeshFormatVersion)) int32_t m_MeshFormatVersion;

  /// @brief Field m_MeshRenderer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshRenderer, put = __cordl_internal_set_m_MeshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> m_MeshRenderer;

  /// @brief Field m_Normals, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Normals, put = __cordl_internal_set_m_Normals)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Normals;

  /// @brief Field m_Positions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Positions, put = __cordl_internal_set_m_Positions)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Positions;

  /// @brief Field m_PreserveMeshAssetOnDestroy, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PreserveMeshAssetOnDestroy, put = __cordl_internal_set_m_PreserveMeshAssetOnDestroy)) bool m_PreserveMeshAssetOnDestroy;

  /// @brief Field m_SelectedCacheDirty, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SelectedCacheDirty, put = __cordl_internal_set_m_SelectedCacheDirty)) bool m_SelectedCacheDirty;

  /// @brief Field m_SelectedCoincidentVertexCount, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectedCoincidentVertexCount, put = __cordl_internal_set_m_SelectedCoincidentVertexCount)) int32_t m_SelectedCoincidentVertexCount;

  /// @brief Field m_SelectedCoincidentVertices, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedCoincidentVertices,
                      put = __cordl_internal_set_m_SelectedCoincidentVertices)) ::System::Collections::Generic::List_1<int32_t>* m_SelectedCoincidentVertices;

  /// @brief Field m_SelectedEdges, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedEdges, put = __cordl_internal_set_m_SelectedEdges)) ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>
      m_SelectedEdges;

  /// @brief Field m_SelectedFaces, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedFaces, put = __cordl_internal_set_m_SelectedFaces)) ::ArrayW<int32_t, ::Array<int32_t>*> m_SelectedFaces;

  /// @brief Field m_SelectedSharedVertices, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedSharedVertices,
                      put = __cordl_internal_set_m_SelectedSharedVertices)) ::System::Collections::Generic::HashSet_1<int32_t>* m_SelectedSharedVertices;

  /// @brief Field m_SelectedSharedVerticesCount, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectedSharedVerticesCount, put = __cordl_internal_set_m_SelectedSharedVerticesCount)) int32_t m_SelectedSharedVerticesCount;

  /// @brief Field m_SelectedVertices, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedVertices, put = __cordl_internal_set_m_SelectedVertices)) ::ArrayW<int32_t, ::Array<int32_t>*> m_SelectedVertices;

  /// @brief Field m_SharedTextureLookup, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SharedTextureLookup,
                      put = __cordl_internal_set_m_SharedTextureLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_SharedTextureLookup;

  /// @brief Field m_SharedTextures, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SharedTextures,
                      put = __cordl_internal_set_m_SharedTextures)) ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
      m_SharedTextures;

  /// @brief Field m_SharedVertexLookup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SharedVertexLookup,
                      put = __cordl_internal_set_m_SharedVertexLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_SharedVertexLookup;

  /// @brief Field m_SharedVertices, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SharedVertices,
                      put = __cordl_internal_set_m_SharedVertices)) ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
      m_SharedVertices;

  /// @brief Field m_Tangents, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tangents, put = __cordl_internal_set_m_Tangents)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_Tangents;

  /// @brief Field m_Textures0, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Textures0, put = __cordl_internal_set_m_Textures0)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> m_Textures0;

  /// @brief Field m_Textures2, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Textures2, put = __cordl_internal_set_m_Textures2)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Textures2;

  /// @brief Field m_Textures3, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Textures3, put = __cordl_internal_set_m_Textures3)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Textures3;

  /// @brief Field m_UnwrapParameters, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnwrapParameters, put = __cordl_internal_set_m_UnwrapParameters)) ::UnityEngine::ProBuilder::UnwrapParameters* m_UnwrapParameters;

  /// @brief Field m_VersionIndex, offset 0xc8, size 0x2
  __declspec(property(get = __cordl_internal_get_m_VersionIndex, put = __cordl_internal_set_m_VersionIndex)) uint16_t m_VersionIndex;

  __declspec(property(get = get_mesh, put = set_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_meshFormatVersion)) int32_t meshFormatVersion;

  __declspec(property(get = get_meshSyncState)) ::UnityEngine::ProBuilder::MeshSyncState meshSyncState;

  /// @brief Field meshWasInitialized, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_meshWasInitialized, put = setStaticF_meshWasInitialized)) ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshWasInitialized;

  /// @brief Field meshWillBeDestroyed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_meshWillBeDestroyed, put = setStaticF_meshWillBeDestroyed)) ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshWillBeDestroyed;

  __declspec(property(get = get_nonSerializedVersionIndex)) uint16_t nonSerializedVersionIndex;

  __declspec(property(get = get_normals)) ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* normals;

  __declspec(property(get = get_normalsInternal, put = set_normalsInternal)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normalsInternal;

  __declspec(property(get = get_positions, put = set_positions)) ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions;

  __declspec(property(get = get_positionsInternal, put = set_positionsInternal)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positionsInternal;

  __declspec(property(get = get_preserveMeshAssetOnDestroy, put = set_preserveMeshAssetOnDestroy)) bool preserveMeshAssetOnDestroy;

  __declspec(property(get = get_renderer)) ::UnityW<::UnityEngine::MeshRenderer> renderer;

  /// @brief Field s_CachedHashSet, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CachedHashSet, put = setStaticF_s_CachedHashSet)) ::System::Collections::Generic::HashSet_1<int32_t>* s_CachedHashSet;

  __declspec(property(get = get_selectable, put = set_selectable)) bool selectable;

  __declspec(property(get = get_selectedCoincidentVertexCount)) int32_t selectedCoincidentVertexCount;

  __declspec(property(get = get_selectedCoincidentVertices)) ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedCoincidentVertices;

  __declspec(property(get = get_selectedEdgeCount)) int32_t selectedEdgeCount;

  __declspec(property(get = get_selectedEdges)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* selectedEdges;

  __declspec(property(get = get_selectedEdgesInternal, put = set_selectedEdgesInternal)) ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> selectedEdgesInternal;

  __declspec(property(get = get_selectedFaceCount)) int32_t selectedFaceCount;

  __declspec(property(get = get_selectedFaceIndexes)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* selectedFaceIndexes;

  __declspec(property(get = get_selectedFaceIndicesInternal, put = set_selectedFaceIndicesInternal)) ::ArrayW<int32_t, ::Array<int32_t>*> selectedFaceIndicesInternal;

  __declspec(property(get = get_selectedFacesInternal, put = set_selectedFacesInternal)) ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> selectedFacesInternal;

  __declspec(property(get = get_selectedIndexesInternal, put = set_selectedIndexesInternal)) ::ArrayW<int32_t, ::Array<int32_t>*> selectedIndexesInternal;

  __declspec(property(get = get_selectedSharedVertices)) ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedSharedVertices;

  __declspec(property(get = get_selectedSharedVerticesCount)) int32_t selectedSharedVerticesCount;

  __declspec(property(get = get_selectedVertexCount)) int32_t selectedVertexCount;

  __declspec(property(get = get_selectedVertices)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* selectedVertices;

  __declspec(property(get = get_sharedTextureLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedTextureLookup;

  __declspec(property(get = get_sharedTextures, put = set_sharedTextures)) ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> sharedTextures;

  __declspec(property(get = get_sharedVertexLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedVertexLookup;

  __declspec(property(get = get_sharedVertices, put = set_sharedVertices)) ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices;

  __declspec(property(get = get_sharedVerticesInternal, put = set_sharedVerticesInternal)) ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
      sharedVerticesInternal;

  __declspec(property(get = get_tangents, put = set_tangents)) ::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* tangents;

  __declspec(property(get = get_tangentsInternal, put = set_tangentsInternal)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangentsInternal;

  __declspec(property(get = get_textures, put = set_textures)) ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* textures;

  __declspec(property(get = get_textures2Internal, put = set_textures2Internal)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* textures2Internal;

  __declspec(property(get = get_textures3Internal, put = set_textures3Internal)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* textures3Internal;

  __declspec(property(get = get_texturesInternal, put = set_texturesInternal)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> texturesInternal;

  __declspec(property(get = get_triangleCount)) int32_t triangleCount;

  __declspec(property(get = get_unwrapParameters, put = set_unwrapParameters)) ::UnityEngine::ProBuilder::UnwrapParameters* unwrapParameters;

  __declspec(property(get = get_userCollisions, put = set_userCollisions)) bool userCollisions;

  __declspec(property(get = get_versionIndex)) uint16_t versionIndex;

  __declspec(property(get = get_vertexCount)) int32_t vertexCount;

  /// @brief Method AddSharedVertex, addr 0x4725f30, size 0xa8, virtual false, abstract: false, final false
  inline void AddSharedVertex(::UnityEngine::ProBuilder::SharedVertex* vertex);

  /// @brief Method AddToFaceSelection, addr 0x472679c, size 0x6c, virtual false, abstract: false, final false
  inline void AddToFaceSelection(int32_t index);

  /// @brief Method AddToSharedVertex, addr 0x4725e98, size 0x98, virtual false, abstract: false, final false
  inline void AddToSharedVertex(int32_t sharedVertexHandle, int32_t vertex);

  /// @brief Method Awake, addr 0x4721810, size 0x154, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CacheSelection, addr 0x4726058, size 0x2a0, virtual false, abstract: false, final false
  inline void CacheSelection();

  /// @brief Method Clear, addr 0x471fe9c, size 0x11c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearSelection, addr 0x4721b88, size 0x94, virtual false, abstract: false, final false
  inline void ClearSelection();

  /// @brief Method CopyFrom, addr 0x4722f84, size 0x2dc, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::ProBuilder::ProBuilderMesh* other);

  /// @brief Method Create, addr 0x47222bc, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> Create();

  /// @brief Method Create, addr 0x472234c, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> Create(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* positions,
                                                                           ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method Create, addr 0x472252c, size 0x198, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> Create(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                           ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                                           ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
                                                                           ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures,
                                                                           ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>* materials);

  /// @brief Method CreateInstanceWithPoints, addr 0x4721fa0, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> CreateInstanceWithPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions);

  /// @brief Method DestroyUnityMesh, addr 0x4721e94, size 0x10c, virtual false, abstract: false, final false
  inline void DestroyUnityMesh();

  /// @brief Method EnsureMeshColliderIsAssigned, addr 0x4721a88, size 0x100, virtual false, abstract: false, final false
  inline void EnsureMeshColliderIsAssigned();

  /// @brief Method EnsureMeshFilterIsAssigned, addr 0x4721964, size 0x124, virtual false, abstract: false, final false
  inline void EnsureMeshFilterIsAssigned();

  /// @brief Method FinalizeToMesh, addr 0x4722d80, size 0x48, virtual false, abstract: false, final false
  inline void FinalizeToMesh(bool usedInParticleSystem);

  /// @brief Method GeometryWithPoints, addr 0x47220b8, size 0x204, virtual false, abstract: false, final false
  inline void GeometryWithPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points);

  /// @brief Method GetActiveEdge, addr 0x47266d8, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge GetActiveEdge();

  /// @brief Method GetActiveFace, addr 0x472667c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* GetActiveFace();

  /// @brief Method GetActiveVertex, addr 0x4726760, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetActiveVertex();

  /// @brief Method GetCoincidentVertices, addr 0x4724998, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method GetCoincidentVertices, addr 0x472555c, size 0x67c, virtual false, abstract: false, final false
  inline void GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::List_1<int32_t>* coincident);

  /// @brief Method GetCoincidentVertices, addr 0x4724fa4, size 0x5b8, virtual false, abstract: false, final false
  inline void GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::List_1<int32_t>* coincident);

  /// @brief Method GetCoincidentVertices, addr 0x4725bd8, size 0x1c8, virtual false, abstract: false, final false
  inline void GetCoincidentVertices(int32_t vertex, ::System::Collections::Generic::List_1<int32_t>* coincident);

  /// @brief Method GetCoincidentVertices, addr 0x4724a64, size 0x540, virtual false, abstract: false, final false
  inline void GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices, ::System::Collections::Generic::List_1<int32_t>* coincident);

  /// @brief Method GetColors, addr 0x4720290, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColors();

  /// @brief Method GetNormals, addr 0x471a6e4, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetNormals();

  /// @brief Method GetSelectedFaces, addr 0x4726340, size 0xcc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> GetSelectedFaces();

  /// @brief Method GetSharedVertexHandle, addr 0x47244b4, size 0x160, virtual false, abstract: false, final false
  inline int32_t GetSharedVertexHandle(int32_t vertex);

  /// @brief Method GetSharedVertexHandles, addr 0x4724614, size 0x384, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<int32_t>* GetSharedVertexHandles(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method GetTangents, addr 0x471a76c, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetTangents();

  /// @brief Method GetUVs, addr 0x47206f0, size 0x120, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>* GetUVs(int32_t channel);

  /// @brief Method GetUVs, addr 0x471a3d0, size 0x314, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method GetUnusedTextureGroup, addr 0x4723918, size 0xf0, virtual false, abstract: false, final false
  inline int32_t GetUnusedTextureGroup(int32_t i);

  /// @brief Method GetVertices, addr 0x471aff0, size 0x640, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> GetVertices(::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method GetVerticesInList, addr 0x471f3c4, size 0x80c, virtual false, abstract: false, final false
  inline void GetVerticesInList(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices);

  /// @brief Method HasArrays, addr 0x471a198, size 0x238, virtual false, abstract: false, final false
  inline bool HasArrays(::UnityEngine::ProBuilder::MeshArrays channels);

  /// @brief Method IncrementVersionIndex, addr 0x471ffb8, size 0x20, virtual false, abstract: false, final false
  inline void IncrementVersionIndex();

  /// @brief Method InvalidateCaches, addr 0x471eda0, size 0x2c, virtual false, abstract: false, final false
  inline void InvalidateCaches();

  /// @brief Method InvalidateFaces, addr 0x471ea94, size 0x30c, virtual false, abstract: false, final false
  inline void InvalidateFaces();

  /// @brief Method InvalidateSharedTextureLookup, addr 0x471e9ec, size 0xa8, virtual false, abstract: false, final false
  inline void InvalidateSharedTextureLookup();

  /// @brief Method InvalidateSharedVertexLookup, addr 0x471e944, size 0xa8, virtual false, abstract: false, final false
  inline void InvalidateSharedVertexLookup();

  /// @brief Method IsValidTextureGroup, addr 0x4723a10, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidTextureGroup(int32_t group);

  /// @brief Method MakeUnique, addr 0x4722dc8, size 0x1bc, virtual false, abstract: false, final false
  inline void MakeUnique();

  static inline ::UnityEngine::ProBuilder::ProBuilderMesh* New_ctor();

  /// @brief Method OnDestroy, addr 0x4721d04, size 0x190, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Rebuild, addr 0x471afb4, size 0x20, virtual false, abstract: false, final false
  inline void Rebuild();

  /// @brief Method RebuildWithPositionsAndFaces, addr 0x472241c, size 0x110, virtual false, abstract: false, final false
  inline void RebuildWithPositionsAndFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* vertices,
                                           ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method Refresh, addr 0x4722c70, size 0x110, virtual false, abstract: false, final false
  inline void Refresh(::UnityEngine::ProBuilder::RefreshMask mask);

  /// @brief Method RefreshColors, addr 0x4723808, size 0x30, virtual false, abstract: false, final false
  inline void RefreshColors();

  /// @brief Method RefreshNormals, addr 0x4723838, size 0x70, virtual false, abstract: false, final false
  inline void RefreshNormals();

  /// @brief Method RefreshTangents, addr 0x47238a8, size 0x70, virtual false, abstract: false, final false
  inline void RefreshTangents();

  /// @brief Method RefreshUV, addr 0x4723260, size 0x5a8, virtual false, abstract: false, final false
  inline void RefreshUV(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* facesToRefresh);

  /// @brief Method RemoveFromFaceSelectionAtIndex, addr 0x4726d3c, size 0x64, virtual false, abstract: false, final false
  inline void RemoveFromFaceSelectionAtIndex(int32_t index);

  /// @brief Method Reset, addr 0x4721c44, size 0xc0, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetFaceColor, addr 0x4723bd8, size 0x370, virtual false, abstract: false, final false
  inline void SetFaceColor(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Color color);

  /// @brief Method SetGroupUV, addr 0x4723b14, size 0xc4, virtual false, abstract: false, final false
  inline void SetGroupUV(::UnityEngine::ProBuilder::AutoUnwrapSettings settings, int32_t group);

  /// @brief Method SetMaterial, addr 0x4723f48, size 0x56c, virtual false, abstract: false, final false
  inline void SetMaterial(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Material* material);

  /// @brief Method SetSelectedEdges, addr 0x4726ad4, size 0x118, virtual false, abstract: false, final false
  inline void SetSelectedEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method SetSelectedFaces, addr 0x4726a18, size 0xbc, virtual false, abstract: false, final false
  inline void SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* selected);

  /// @brief Method SetSelectedFaces, addr 0x4726808, size 0x210, virtual false, abstract: false, final false
  inline void SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<int32_t>* selected);

  /// @brief Method SetSelectedVertices, addr 0x4726bec, size 0x150, virtual false, abstract: false, final false
  inline void SetSelectedVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method SetSharedTextures, addr 0x471f228, size 0x70, virtual false, abstract: false, final false
  inline void SetSharedTextures(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* indexes);

  /// @brief Method SetSharedVertices, addr 0x471f110, size 0x70, virtual false, abstract: false, final false
  inline void SetSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* indexes);

  /// @brief Method SetTexturesCoincident, addr 0x4725e58, size 0x40, virtual false, abstract: false, final false
  inline void SetTexturesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method SetUVs, addr 0x4720810, size 0x2e0, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method SetVertices, addr 0x471fbd0, size 0x2cc, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, bool applyMesh);

  /// @brief Method SetVerticesCoincident, addr 0x4725da0, size 0xb8, virtual false, abstract: false, final false
  inline void SetVerticesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method ToMesh, addr 0x47226c4, size 0x5ac, virtual false, abstract: false, final false
  inline void ToMesh(::UnityEngine::MeshTopology preferredTopology);

  /// @brief Method UnusedElementGroup, addr 0x4723a1c, size 0xf0, virtual false, abstract: false, final false
  inline int32_t UnusedElementGroup(int32_t i);

  /// @brief Method <SetSelectedFaces>b__245_0, addr 0x4726fb0, size 0x58, virtual false, abstract: false, final false
  inline int32_t _SetSelectedFaces_b__245_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <SetSelectedFaces>b__246_0, addr 0x4727008, size 0x38, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _SetSelectedFaces_b__246_0(int32_t x);

  /// @brief Method <SetSelectedFaces>b__246_1, addr 0x4727040, size 0x38, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _SetSelectedFaces_b__246_1(int32_t x);

  constexpr bool const& __cordl_internal_get__userCollisions_k__BackingField() const;

  constexpr bool& __cordl_internal_get__userCollisions_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_assetGuid() const;

  constexpr ::StringW& __cordl_internal_get_assetGuid();

  constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState const& __cordl_internal_get_m_CacheValid() const;

  constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState& __cordl_internal_get_m_CacheValid();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get_m_Colors() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get_m_Colors();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> const& __cordl_internal_get_m_Faces() const;

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>& __cordl_internal_get_m_Faces();

  constexpr uint16_t const& __cordl_internal_get_m_InstanceVersionIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_InstanceVersionIndex();

  constexpr bool const& __cordl_internal_get_m_IsSelectable() const;

  constexpr bool& __cordl_internal_get_m_IsSelectable();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_m_MeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_m_MeshFilter();

  constexpr int32_t const& __cordl_internal_get_m_MeshFormatVersion() const;

  constexpr int32_t& __cordl_internal_get_m_MeshFormatVersion();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_m_MeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_m_MeshRenderer();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_Normals() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_Normals();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_Positions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_Positions();

  constexpr bool const& __cordl_internal_get_m_PreserveMeshAssetOnDestroy() const;

  constexpr bool& __cordl_internal_get_m_PreserveMeshAssetOnDestroy();

  constexpr bool const& __cordl_internal_get_m_SelectedCacheDirty() const;

  constexpr bool& __cordl_internal_get_m_SelectedCacheDirty();

  constexpr int32_t const& __cordl_internal_get_m_SelectedCoincidentVertexCount() const;

  constexpr int32_t& __cordl_internal_get_m_SelectedCoincidentVertexCount();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_SelectedCoincidentVertices() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_SelectedCoincidentVertices();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> const& __cordl_internal_get_m_SelectedEdges() const;

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>& __cordl_internal_get_m_SelectedEdges();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_SelectedFaces() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_SelectedFaces();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_SelectedSharedVertices() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_SelectedSharedVertices();

  constexpr int32_t const& __cordl_internal_get_m_SelectedSharedVerticesCount() const;

  constexpr int32_t& __cordl_internal_get_m_SelectedSharedVerticesCount();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_SelectedVertices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_SelectedVertices();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get_m_SharedTextureLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_SharedTextureLookup();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const& __cordl_internal_get_m_SharedTextures() const;

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& __cordl_internal_get_m_SharedTextures();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get_m_SharedVertexLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_SharedVertexLookup();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const& __cordl_internal_get_m_SharedVertices() const;

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& __cordl_internal_get_m_SharedVertices();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_Tangents() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_Tangents();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get_m_Textures0() const;

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __cordl_internal_get_m_Textures0();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_m_Textures2() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_m_Textures2();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_m_Textures3() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_m_Textures3();

  constexpr ::UnityEngine::ProBuilder::UnwrapParameters* const& __cordl_internal_get_m_UnwrapParameters() const;

  constexpr ::UnityEngine::ProBuilder::UnwrapParameters*& __cordl_internal_get_m_UnwrapParameters();

  constexpr uint16_t const& __cordl_internal_get_m_VersionIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_VersionIndex();

  constexpr void __cordl_internal_set__userCollisions_k__BackingField(bool value);

  constexpr void __cordl_internal_set_assetGuid(::StringW value);

  constexpr void __cordl_internal_set_m_CacheValid(::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState value);

  constexpr void __cordl_internal_set_m_Colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set_m_Faces(::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> value);

  constexpr void __cordl_internal_set_m_InstanceVersionIndex(uint16_t value);

  constexpr void __cordl_internal_set_m_IsSelectable(bool value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_MeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set_m_MeshFormatVersion(int32_t value);

  constexpr void __cordl_internal_set_m_MeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_m_Normals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_Positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_PreserveMeshAssetOnDestroy(bool value);

  constexpr void __cordl_internal_set_m_SelectedCacheDirty(bool value);

  constexpr void __cordl_internal_set_m_SelectedCoincidentVertexCount(int32_t value);

  constexpr void __cordl_internal_set_m_SelectedCoincidentVertices(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_SelectedEdges(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> value);

  constexpr void __cordl_internal_set_m_SelectedFaces(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_SelectedSharedVertices(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_SelectedSharedVerticesCount(int32_t value);

  constexpr void __cordl_internal_set_m_SelectedVertices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_SharedTextureLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_SharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  constexpr void __cordl_internal_set_m_SharedVertexLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_SharedVertices(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  constexpr void __cordl_internal_set_m_Tangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_Textures0(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr void __cordl_internal_set_m_Textures2(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr void __cordl_internal_set_m_Textures3(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr void __cordl_internal_set_m_UnwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* value);

  constexpr void __cordl_internal_set_m_VersionIndex(uint16_t value);

  /// @brief Method .ctor, addr 0x4726da0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_selectedFacesInternal>b__231_0, addr 0x4726f58, size 0x58, virtual false, abstract: false, final false
  inline int32_t _set_selectedFacesInternal_b__231_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method add_componentHasBeenReset, addr 0x4721354, size 0xf4, virtual false, abstract: false, final false
  static inline void add_componentHasBeenReset(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  /// @brief Method add_componentWillBeDestroyed, addr 0x472116c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_componentWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  /// @brief Method add_elementSelectionChanged, addr 0x472153c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_elementSelectionChanged(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  /// @brief Method add_meshWasInitialized, addr 0x4720f84, size 0xf4, virtual false, abstract: false, final false
  static inline void add_meshWasInitialized(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  /// @brief Method add_meshWillBeDestroyed, addr 0x4720da4, size 0xf0, virtual false, abstract: false, final false
  static inline void add_meshWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  static inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* getStaticF_componentHasBeenReset();

  static inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* getStaticF_componentWillBeDestroyed();

  static inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* getStaticF_elementSelectionChanged();

  static inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* getStaticF_meshWasInitialized();

  static inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* getStaticF_meshWillBeDestroyed();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_s_CachedHashSet();

  /// @brief Method get_colors, addr 0x4720078, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Color>* get_colors();

  /// @brief Method get_colorsInternal, addr 0x4720068, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_colorsInternal();

  /// @brief Method get_edgeCount, addr 0x4720af0, size 0x8c, virtual false, abstract: false, final false
  inline int32_t get_edgeCount();

  /// @brief Method get_faceCount, addr 0x471cfa4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_faceCount();

  /// @brief Method get_faces, addr 0x471e828, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* get_faces();

  /// @brief Method get_facesInternal, addr 0x471e818, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> get_facesInternal();

  /// @brief Method get_filter, addr 0x471e73c, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshFilter> get_filter();

  /// @brief Method get_id, addr 0x472172c, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_indexCount, addr 0x4720b7c, size 0x10c, virtual false, abstract: false, final false
  inline int32_t get_indexCount();

  /// @brief Method get_mesh, addr 0x471bb88, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_meshFormatVersion, addr 0x4721808, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_meshFormatVersion();

  /// @brief Method get_meshSyncState, addr 0x472174c, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::MeshSyncState get_meshSyncState();

  /// @brief Method get_nonSerializedVersionIndex, addr 0x471e7fc, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_nonSerializedVersionIndex();

  /// @brief Method get_normals, addr 0x471ffd8, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* get_normals();

  /// @brief Method get_normalsInternal, addr 0x4720058, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_normalsInternal();

  /// @brief Method get_positions, addr 0x471f2a8, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* get_positions();

  /// @brief Method get_positionsInternal, addr 0x471f298, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_positionsInternal();

  /// @brief Method get_preserveMeshAssetOnDestroy, addr 0x471e804, size 0x8, virtual false, abstract: false, final false
  inline bool get_preserveMeshAssetOnDestroy();

  /// @brief Method get_renderer, addr 0x471b9b4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshRenderer> get_renderer();

  /// @brief Method get_selectable, addr 0x4725fd8, size 0x8, virtual false, abstract: false, final false
  inline bool get_selectable();

  /// @brief Method get_selectedCoincidentVertexCount, addr 0x47262f8, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectedCoincidentVertexCount();

  /// @brief Method get_selectedCoincidentVertices, addr 0x4726328, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_selectedCoincidentVertices();

  /// @brief Method get_selectedEdgeCount, addr 0x4726024, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectedEdgeCount();

  /// @brief Method get_selectedEdges, addr 0x4726504, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* get_selectedEdges();

  /// @brief Method get_selectedEdgesInternal, addr 0x472665c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> get_selectedEdgesInternal();

  /// @brief Method get_selectedFaceCount, addr 0x4725fec, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectedFaceCount();

  /// @brief Method get_selectedFaceIndexes, addr 0x472640c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* get_selectedFaceIndexes();

  /// @brief Method get_selectedFaceIndicesInternal, addr 0x472664c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_selectedFaceIndicesInternal();

  /// @brief Method get_selectedFacesInternal, addr 0x4726580, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> get_selectedFacesInternal();

  /// @brief Method get_selectedIndexesInternal, addr 0x472666c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_selectedIndexesInternal();

  /// @brief Method get_selectedSharedVertices, addr 0x4726310, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_selectedSharedVertices();

  /// @brief Method get_selectedSharedVerticesCount, addr 0x4726040, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectedSharedVerticesCount();

  /// @brief Method get_selectedVertexCount, addr 0x4726008, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectedVertexCount();

  /// @brief Method get_selectedVertices, addr 0x4726488, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* get_selectedVertices();

  /// @brief Method get_sharedTextureLookup, addr 0x471f190, size 0x98, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* get_sharedTextureLookup();

  /// @brief Method get_sharedTextures, addr 0x471f180, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> get_sharedTextures();

  /// @brief Method get_sharedVertexLookup, addr 0x471f074, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* get_sharedVertexLookup();

  /// @brief Method get_sharedVertices, addr 0x471eddc, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* get_sharedVertices();

  /// @brief Method get_sharedVerticesInternal, addr 0x471edcc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> get_sharedVerticesInternal();

  /// @brief Method get_tangents, addr 0x4720334, size 0x98, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* get_tangents();

  /// @brief Method get_tangentsInternal, addr 0x4720508, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> get_tangentsInternal();

  /// @brief Method get_textures, addr 0x4720548, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* get_textures();

  /// @brief Method get_textures2Internal, addr 0x4720528, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_textures2Internal();

  /// @brief Method get_textures3Internal, addr 0x4720538, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_textures3Internal();

  /// @brief Method get_texturesInternal, addr 0x4720518, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_texturesInternal();

  /// @brief Method get_triangleCount, addr 0x4720c88, size 0x11c, virtual false, abstract: false, final false
  inline int32_t get_triangleCount();

  /// @brief Method get_unwrapParameters, addr 0x471e72c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::UnwrapParameters* get_unwrapParameters();

  /// @brief Method get_userCollisions, addr 0x471e718, size 0x8, virtual false, abstract: false, final false
  inline bool get_userCollisions();

  /// @brief Method get_versionIndex, addr 0x471e7f4, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_versionIndex();

  /// @brief Method get_vertexCount, addr 0x471af9c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_vertexCount();

  /// @brief Method remove_componentHasBeenReset, addr 0x4721448, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_componentHasBeenReset(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  /// @brief Method remove_componentWillBeDestroyed, addr 0x4721260, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_componentWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  /// @brief Method remove_elementSelectionChanged, addr 0x4721630, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_elementSelectionChanged(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  /// @brief Method remove_meshWasInitialized, addr 0x4721078, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_meshWasInitialized(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  /// @brief Method remove_meshWillBeDestroyed, addr 0x4720e94, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_meshWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  static inline void setStaticF_componentHasBeenReset(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  static inline void setStaticF_componentWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  static inline void setStaticF_elementSelectionChanged(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  static inline void setStaticF_meshWasInitialized(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  static inline void setStaticF_meshWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value);

  static inline void setStaticF_s_CachedHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method set_colors, addr 0x47200f8, size 0x198, virtual false, abstract: false, final false
  inline void set_colors(::System::Collections::Generic::IList_1<::UnityEngine::Color>* value);

  /// @brief Method set_colorsInternal, addr 0x4720070, size 0x8, virtual false, abstract: false, final false
  inline void set_colorsInternal(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  /// @brief Method set_faces, addr 0x471e8a4, size 0xa0, virtual false, abstract: false, final false
  inline void set_faces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* value);

  /// @brief Method set_facesInternal, addr 0x471e820, size 0x8, virtual false, abstract: false, final false
  inline void set_facesInternal(::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> value);

  /// @brief Method set_mesh, addr 0x4721724, size 0x8, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method set_normalsInternal, addr 0x4720060, size 0x8, virtual false, abstract: false, final false
  inline void set_normalsInternal(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method set_positions, addr 0x471f324, size 0xa0, virtual false, abstract: false, final false
  inline void set_positions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* value);

  /// @brief Method set_positionsInternal, addr 0x471f2a0, size 0x8, virtual false, abstract: false, final false
  inline void set_positionsInternal(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method set_preserveMeshAssetOnDestroy, addr 0x471e80c, size 0xc, virtual false, abstract: false, final false
  inline void set_preserveMeshAssetOnDestroy(bool value);

  /// @brief Method set_selectable, addr 0x4725fe0, size 0xc, virtual false, abstract: false, final false
  inline void set_selectable(bool value);

  /// @brief Method set_selectedEdgesInternal, addr 0x4726664, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedEdgesInternal(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> value);

  /// @brief Method set_selectedFaceIndicesInternal, addr 0x4726654, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedFaceIndicesInternal(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_selectedFacesInternal, addr 0x4726584, size 0xc8, virtual false, abstract: false, final false
  inline void set_selectedFacesInternal(::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> value);

  /// @brief Method set_selectedIndexesInternal, addr 0x4726674, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedIndexesInternal(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_sharedTextures, addr 0x471f188, size 0x8, virtual false, abstract: false, final false
  inline void set_sharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  /// @brief Method set_sharedVertices, addr 0x471ee58, size 0x21c, virtual false, abstract: false, final false
  inline void set_sharedVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* value);

  /// @brief Method set_sharedVerticesInternal, addr 0x471edd4, size 0x8, virtual false, abstract: false, final false
  inline void set_sharedVerticesInternal(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  /// @brief Method set_tangents, addr 0x47203cc, size 0x13c, virtual false, abstract: false, final false
  inline void set_tangents(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* value);

  /// @brief Method set_tangentsInternal, addr 0x4720510, size 0x8, virtual false, abstract: false, final false
  inline void set_tangentsInternal(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method set_textures, addr 0x47205c8, size 0x128, virtual false, abstract: false, final false
  inline void set_textures(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* value);

  /// @brief Method set_textures2Internal, addr 0x4720530, size 0x8, virtual false, abstract: false, final false
  inline void set_textures2Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  /// @brief Method set_textures3Internal, addr 0x4720540, size 0x8, virtual false, abstract: false, final false
  inline void set_textures3Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  /// @brief Method set_texturesInternal, addr 0x4720520, size 0x8, virtual false, abstract: false, final false
  inline void set_texturesInternal(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_unwrapParameters, addr 0x471e734, size 0x8, virtual false, abstract: false, final false
  inline void set_unwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* value);

  /// @brief Method set_userCollisions, addr 0x471e720, size 0xc, virtual false, abstract: false, final false
  inline void set_userCollisions(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProBuilderMesh(ProBuilderMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProBuilderMesh(ProBuilderMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14293 };

  /// @brief Field k_MeshFilterHideFlags value: I32(10)
  static ::UnityEngine::HideFlags const k_MeshFilterHideFlags;

  /// @brief Field k_MeshFormatVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_MeshFormatVersion{ static_cast<int32_t>(0x2) };

  /// @brief Field k_MeshFormatVersionAutoUVScaleOffset offset 0xffffffff size 0x4
  static constexpr int32_t k_MeshFormatVersionAutoUVScaleOffset{ static_cast<int32_t>(0x2) };

  /// @brief Field k_MeshFormatVersionSubmeshMaterialRefactor offset 0xffffffff size 0x4
  static constexpr int32_t k_MeshFormatVersionSubmeshMaterialRefactor{ static_cast<int32_t>(0x1) };

  /// @brief Field k_UVChannelCount offset 0xffffffff size 0x4
  static constexpr int32_t k_UVChannelCount{ static_cast<int32_t>(0x4) };

  /// @brief Field k_UnitializedVersionIndex offset 0xffffffff size 0x2
  static constexpr uint16_t k_UnitializedVersionIndex{ static_cast<uint16_t>(0x0u) };

  /// @brief Field maxVertexCount offset 0xffffffff size 0x4
  static constexpr uint32_t maxVertexCount{ static_cast<uint32_t>(0xffffu) };

  /// @brief Field m_MeshFormatVersion, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_MeshFormatVersion;

  /// @brief Field m_Faces, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> ___m_Faces;

  /// @brief Field m_SharedVertices, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> ___m_SharedVertices;

  /// @brief Field m_CacheValid, offset: 0x38, size: 0x1, def value: None
  ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState ___m_CacheValid;

  /// @brief Field m_SharedVertexLookup, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_SharedVertexLookup;

  /// @brief Field m_SharedTextures, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> ___m_SharedTextures;

  /// @brief Field m_SharedTextureLookup, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_SharedTextureLookup;

  /// @brief Field m_Positions, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Positions;

  /// @brief Field m_Textures0, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ___m_Textures0;

  /// @brief Field m_Textures2, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___m_Textures2;

  /// @brief Field m_Textures3, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___m_Textures3;

  /// @brief Field m_Tangents, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_Tangents;

  /// @brief Field m_Normals, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Normals;

  /// @brief Field m_Colors, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ___m_Colors;

  /// @brief Field <userCollisions>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____userCollisions_k__BackingField;

  /// @brief Field m_UnwrapParameters, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::UnwrapParameters* ___m_UnwrapParameters;

  /// @brief Field m_PreserveMeshAssetOnDestroy, offset: 0xa0, size: 0x1, def value: None
  bool ___m_PreserveMeshAssetOnDestroy;

  /// @brief Field assetGuid, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___assetGuid;

  /// @brief Field m_Mesh, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_Mesh;

  /// @brief Field m_MeshRenderer, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___m_MeshRenderer;

  /// @brief Field m_MeshFilter, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___m_MeshFilter;

  /// @brief Field m_VersionIndex, offset: 0xc8, size: 0x2, def value: None
  uint16_t ___m_VersionIndex;

  /// @brief Field m_InstanceVersionIndex, offset: 0xca, size: 0x2, def value: None
  uint16_t ___m_InstanceVersionIndex;

  /// @brief Field m_IsSelectable, offset: 0xcc, size: 0x1, def value: None
  bool ___m_IsSelectable;

  /// @brief Field m_SelectedFaces, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_SelectedFaces;

  /// @brief Field m_SelectedEdges, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> ___m_SelectedEdges;

  /// @brief Field m_SelectedVertices, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_SelectedVertices;

  /// @brief Field m_SelectedCacheDirty, offset: 0xe8, size: 0x1, def value: None
  bool ___m_SelectedCacheDirty;

  /// @brief Field m_SelectedSharedVerticesCount, offset: 0xec, size: 0x4, def value: None
  int32_t ___m_SelectedSharedVerticesCount;

  /// @brief Field m_SelectedCoincidentVertexCount, offset: 0xf0, size: 0x4, def value: None
  int32_t ___m_SelectedCoincidentVertexCount;

  /// @brief Field m_SelectedSharedVertices, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_SelectedSharedVertices;

  /// @brief Field m_SelectedCoincidentVertices, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_SelectedCoincidentVertices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_MeshFormatVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Faces) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SharedVertices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_CacheValid) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SharedVertexLookup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SharedTextures) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SharedTextureLookup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Positions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Textures0) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Textures2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Textures3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Tangents) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Normals) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Colors) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ____userCollisions_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_UnwrapParameters) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_PreserveMeshAssetOnDestroy) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___assetGuid) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Mesh) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_MeshRenderer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_MeshFilter) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_VersionIndex) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_InstanceVersionIndex) == 0xca, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_IsSelectable) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedFaces) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedEdges) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedVertices) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedCacheDirty) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedSharedVerticesCount) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedCoincidentVertexCount) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedSharedVertices) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedCoincidentVertices) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProBuilderMesh, 0x108>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState, "UnityEngine.ProBuilder", "ProBuilderMesh/CacheValidState");
NEED_NO_BOX(::UnityEngine::ProBuilder::ProBuilderMesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProBuilderMesh*, "UnityEngine.ProBuilder", "ProBuilderMesh");
NEED_NO_BOX(::UnityEngine::ProBuilder::ProBuilderMesh___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProBuilderMesh___c*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass174_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass174_0*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c__DisplayClass174_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass176_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass176_0*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c__DisplayClass176_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope, "UnityEngine.ProBuilder", "ProBuilderMesh/NonVersionedEditScope");
