#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__HideFlags_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System {
class IDisposable;
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
namespace UnityEngine::ProBuilder {
struct __ProBuilderMesh__CacheValidState;
}
namespace UnityEngine::ProBuilder {
struct __ProBuilderMesh__NonVersionedEditScope;
}
namespace UnityEngine::ProBuilder {
class __ProBuilderMesh____c;
}
namespace UnityEngine::ProBuilder {
class __ProBuilderMesh____c__DisplayClass168_0;
}
namespace UnityEngine::ProBuilder {
class __ProBuilderMesh____c__DisplayClass170_0;
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
struct __ProBuilderMesh__CacheValidState;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class __ProBuilderMesh____c;
}
namespace UnityEngine::ProBuilder {
class __ProBuilderMesh____c__DisplayClass168_0;
}
namespace UnityEngine::ProBuilder {
class __ProBuilderMesh____c__DisplayClass170_0;
}
namespace UnityEngine::ProBuilder {
struct __ProBuilderMesh__NonVersionedEditScope;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ProBuilderMesh);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__ProBuilderMesh____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0);
MARK_VAL_T(::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope);
// Type: ::CacheValidState
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12170))
// CS Name: ::ProBuilderMesh::CacheValidState
struct CORDL_TYPE __ProBuilderMesh__CacheValidState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____ProBuilderMesh__CacheValidState_Unwrapped
  enum struct ____ProBuilderMesh__CacheValidState_Unwrapped : uint8_t {
    __E_SharedVertex = static_cast<uint8_t>(0x1u),
    __E_SharedTexture = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ProBuilderMesh__CacheValidState_Unwrapped() const noexcept {
    return static_cast<____ProBuilderMesh__CacheValidState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ProBuilderMesh__CacheValidState(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProBuilderMesh__CacheValidState();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field SharedVertex value: static_cast<uint8_t>(0x1u)
  static ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState const SharedVertex;

  /// @brief Field SharedTexture value: static_cast<uint8_t>(0x2u)
  static ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState const SharedTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: ::NonVersionedEditScope
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12171))
// CS Name: ::ProBuilderMesh::NonVersionedEditScope
struct CORDL_TYPE __ProBuilderMesh__NonVersionedEditScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method .ctor, addr 0x2b5ac04, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method Dispose, addr 0x2b5ff8c, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "m_Mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh*", modifiers: "", def_value: None }, CppParam { name: "m_VersionIndex", ty: "uint16_t", modifiers: "",
  // def_value: None }]
  constexpr __ProBuilderMesh__NonVersionedEditScope(::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh, uint16_t m_VersionIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProBuilderMesh__NonVersionedEditScope();

  /// @brief Field m_Mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh;

  /// @brief Field m_VersionIndex, offset: 0x8, size: 0x2, def value: None
  uint16_t m_VersionIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope, m_Mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope, m_VersionIndex) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12172))
// CS Name: ::ProBuilderMesh::<>c*
class CORDL_TYPE __ProBuilderMesh____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::__ProBuilderMesh____c* __9;

  /// @brief Field <>9__114_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__114_0, put = setStaticF___9__114_0))::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* __9__114_0;

  /// @brief Field <>9__114_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__114_1, put = setStaticF___9__114_1))::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* __9__114_1;

  /// @brief Field <>9__122_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__122_0, put = setStaticF___9__122_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__122_0;

  /// @brief Field <>9__124_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__124_0, put = setStaticF___9__124_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__124_0;

  /// @brief Field <>9__165_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__165_0, put = setStaticF___9__165_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* __9__165_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__ProBuilderMesh____c* value);

  static inline ::UnityEngine::ProBuilder::__ProBuilderMesh____c* getStaticF___9();

  static inline void setStaticF___9__114_0(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value);

  static inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* getStaticF___9__114_0();

  static inline void setStaticF___9__114_1(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value);

  static inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* getStaticF___9__114_1();

  static inline void setStaticF___9__122_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__122_0();

  static inline void setStaticF___9__124_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__124_0();

  static inline void setStaticF___9__165_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__165_0();

  static inline ::UnityEngine::ProBuilder::__ProBuilderMesh____c* New_ctor();

  /// @brief Method .ctor, addr 0x2b60010, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SetUVs>b__114_0, addr 0x2b60018, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 _SetUVs_b__114_0(::UnityEngine::Vector4 x);

  /// @brief Method <SetUVs>b__114_1, addr 0x2b6001c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 _SetUVs_b__114_1(::UnityEngine::Vector4 x);

  /// @brief Method <get_indexCount>b__122_0, addr 0x2b60020, size 0x20, virtual false, abstract: false, final false
  inline int32_t _get_indexCount_b__122_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <get_triangleCount>b__124_0, addr 0x2b60040, size 0x20, virtual false, abstract: false, final false
  inline int32_t _get_triangleCount_b__124_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <CopyFrom>b__165_0, addr 0x2b60060, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _CopyFrom_b__165_0(::UnityEngine::ProBuilder::Face* x);

  // Ctor Parameters [CppParam { name: "", ty: "__ProBuilderMesh____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProBuilderMesh____c(__ProBuilderMesh____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProBuilderMesh____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProBuilderMesh____c(__ProBuilderMesh____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProBuilderMesh____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__ProBuilderMesh____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass168_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12173))
// CS Name: ::ProBuilderMesh::<>c__DisplayClass168_0*
class CORDL_TYPE __ProBuilderMesh____c__DisplayClass168_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field i, offset 0x10, size 0x4
  __declspec(property(get = __get_i, put = __set_i)) int32_t i;

  constexpr int32_t& __get_i();

  constexpr int32_t const& __get_i() const;

  constexpr void __set_i(int32_t value);

  static inline ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0* New_ctor();

  /// @brief Method .ctor, addr 0x2b5c5d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetUnusedTextureGroup>b__0, addr 0x2b600c4, size 0x24, virtual false, abstract: false, final false
  inline bool _GetUnusedTextureGroup_b__0(::UnityEngine::ProBuilder::Face* element);

  // Ctor Parameters [CppParam { name: "", ty: "__ProBuilderMesh____c__DisplayClass168_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProBuilderMesh____c__DisplayClass168_0(__ProBuilderMesh____c__DisplayClass168_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProBuilderMesh____c__DisplayClass168_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProBuilderMesh____c__DisplayClass168_0(__ProBuilderMesh____c__DisplayClass168_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProBuilderMesh____c__DisplayClass168_0();

public:
  /// @brief Field i, offset: 0x10, size: 0x4, def value: None
  int32_t ___i;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0, ___i) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass170_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12174))
// CS Name: ::ProBuilderMesh::<>c__DisplayClass170_0*
class CORDL_TYPE __ProBuilderMesh____c__DisplayClass170_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field i, offset 0x10, size 0x4
  __declspec(property(get = __get_i, put = __set_i)) int32_t i;

  constexpr int32_t& __get_i();

  constexpr int32_t const& __get_i() const;

  constexpr void __set_i(int32_t value);

  static inline ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0* New_ctor();

  /// @brief Method .ctor, addr 0x2b5c6f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UnusedElementGroup>b__0, addr 0x2b600e8, size 0x24, virtual false, abstract: false, final false
  inline bool _UnusedElementGroup_b__0(::UnityEngine::ProBuilder::Face* element);

  // Ctor Parameters [CppParam { name: "", ty: "__ProBuilderMesh____c__DisplayClass170_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProBuilderMesh____c__DisplayClass170_0(__ProBuilderMesh____c__DisplayClass170_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProBuilderMesh____c__DisplayClass170_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProBuilderMesh____c__DisplayClass170_0(__ProBuilderMesh____c__DisplayClass170_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProBuilderMesh____c__DisplayClass170_0();

public:
  /// @brief Field i, offset: 0x10, size: 0x4, def value: None
  int32_t ___i;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0, ___i) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::ProBuilderMesh
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 256, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12170)), TypeDefinitionIndex(TypeDefinitionIndex(10199)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12175))
// CS Name: ::UnityEngine.ProBuilder::ProBuilderMesh*
class CORDL_TYPE ProBuilderMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass170_0 = ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0;

  using __c__DisplayClass168_0 = ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0;

  using __c = ::UnityEngine::ProBuilder::__ProBuilderMesh____c;

  using NonVersionedEditScope = ::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope;

  using CacheValidState = ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState;

  /// @brief Field m_MeshFormatVersion, offset 0x18, size 0x4
  __declspec(property(get = __get_m_MeshFormatVersion, put = __set_m_MeshFormatVersion)) int32_t m_MeshFormatVersion;

  /// @brief Field m_Faces, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Faces, put = __set_m_Faces))::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> m_Faces;

  /// @brief Field m_SharedVertices, offset 0x28, size 0x8
  __declspec(property(get = __get_m_SharedVertices,
                      put = __set_m_SharedVertices))::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> m_SharedVertices;

  /// @brief Field m_CacheValid, offset 0x30, size 0x1
  __declspec(property(get = __get_m_CacheValid, put = __set_m_CacheValid))::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState m_CacheValid;

  /// @brief Field m_SharedVertexLookup, offset 0x38, size 0x8
  __declspec(property(get = __get_m_SharedVertexLookup, put = __set_m_SharedVertexLookup))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_SharedVertexLookup;

  /// @brief Field m_SharedTextures, offset 0x40, size 0x8
  __declspec(property(get = __get_m_SharedTextures,
                      put = __set_m_SharedTextures))::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> m_SharedTextures;

  /// @brief Field m_SharedTextureLookup, offset 0x48, size 0x8
  __declspec(property(get = __get_m_SharedTextureLookup, put = __set_m_SharedTextureLookup))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_SharedTextureLookup;

  /// @brief Field m_Positions, offset 0x50, size 0x8
  __declspec(property(get = __get_m_Positions, put = __set_m_Positions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Positions;

  /// @brief Field m_Textures0, offset 0x58, size 0x8
  __declspec(property(get = __get_m_Textures0, put = __set_m_Textures0))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> m_Textures0;

  /// @brief Field m_Textures2, offset 0x60, size 0x8
  __declspec(property(get = __get_m_Textures2, put = __set_m_Textures2))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Textures2;

  /// @brief Field m_Textures3, offset 0x68, size 0x8
  __declspec(property(get = __get_m_Textures3, put = __set_m_Textures3))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Textures3;

  /// @brief Field m_Tangents, offset 0x70, size 0x8
  __declspec(property(get = __get_m_Tangents, put = __set_m_Tangents))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_Tangents;

  /// @brief Field m_Normals, offset 0x78, size 0x8
  __declspec(property(get = __get_m_Normals, put = __set_m_Normals))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Normals;

  /// @brief Field m_Colors, offset 0x80, size 0x8
  __declspec(property(get = __get_m_Colors, put = __set_m_Colors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> m_Colors;

  /// @brief Field <userCollisions>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __get__userCollisions_k__BackingField, put = __set__userCollisions_k__BackingField)) bool _userCollisions_k__BackingField;

  /// @brief Field m_UnwrapParameters, offset 0x90, size 0x8
  __declspec(property(get = __get_m_UnwrapParameters, put = __set_m_UnwrapParameters))::UnityEngine::ProBuilder::UnwrapParameters* m_UnwrapParameters;

  /// @brief Field m_PreserveMeshAssetOnDestroy, offset 0x98, size 0x1
  __declspec(property(get = __get_m_PreserveMeshAssetOnDestroy, put = __set_m_PreserveMeshAssetOnDestroy)) bool m_PreserveMeshAssetOnDestroy;

  /// @brief Field assetGuid, offset 0xa0, size 0x8
  __declspec(property(get = __get_assetGuid, put = __set_assetGuid))::StringW assetGuid;

  /// @brief Field m_Mesh, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_Mesh, put = __set_m_Mesh))::UnityEngine::Mesh* m_Mesh;

  /// @brief Field m_MeshRenderer, offset 0xb0, size 0x8
  __declspec(property(get = __get_m_MeshRenderer, put = __set_m_MeshRenderer))::UnityEngine::MeshRenderer* m_MeshRenderer;

  /// @brief Field m_MeshFilter, offset 0xb8, size 0x8
  __declspec(property(get = __get_m_MeshFilter, put = __set_m_MeshFilter))::UnityEngine::MeshFilter* m_MeshFilter;

  /// @brief Field m_VersionIndex, offset 0xc0, size 0x2
  __declspec(property(get = __get_m_VersionIndex, put = __set_m_VersionIndex)) uint16_t m_VersionIndex;

  /// @brief Field m_IsSelectable, offset 0xc2, size 0x1
  __declspec(property(get = __get_m_IsSelectable, put = __set_m_IsSelectable)) bool m_IsSelectable;

  /// @brief Field m_SelectedFaces, offset 0xc8, size 0x8
  __declspec(property(get = __get_m_SelectedFaces, put = __set_m_SelectedFaces))::ArrayW<int32_t, ::Array<int32_t>*> m_SelectedFaces;

  /// @brief Field m_SelectedEdges, offset 0xd0, size 0x8
  __declspec(property(get = __get_m_SelectedEdges, put = __set_m_SelectedEdges))::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> m_SelectedEdges;

  /// @brief Field m_SelectedVertices, offset 0xd8, size 0x8
  __declspec(property(get = __get_m_SelectedVertices, put = __set_m_SelectedVertices))::ArrayW<int32_t, ::Array<int32_t>*> m_SelectedVertices;

  /// @brief Field m_SelectedCacheDirty, offset 0xe0, size 0x1
  __declspec(property(get = __get_m_SelectedCacheDirty, put = __set_m_SelectedCacheDirty)) bool m_SelectedCacheDirty;

  /// @brief Field m_SelectedSharedVerticesCount, offset 0xe4, size 0x4
  __declspec(property(get = __get_m_SelectedSharedVerticesCount, put = __set_m_SelectedSharedVerticesCount)) int32_t m_SelectedSharedVerticesCount;

  /// @brief Field m_SelectedCoincidentVertexCount, offset 0xe8, size 0x4
  __declspec(property(get = __get_m_SelectedCoincidentVertexCount, put = __set_m_SelectedCoincidentVertexCount)) int32_t m_SelectedCoincidentVertexCount;

  /// @brief Field m_SelectedSharedVertices, offset 0xf0, size 0x8
  __declspec(property(get = __get_m_SelectedSharedVertices, put = __set_m_SelectedSharedVertices))::System::Collections::Generic::HashSet_1<int32_t>* m_SelectedSharedVertices;

  /// @brief Field m_SelectedCoincidentVertices, offset 0xf8, size 0x8
  __declspec(property(get = __get_m_SelectedCoincidentVertices, put = __set_m_SelectedCoincidentVertices))::System::Collections::Generic::List_1<int32_t>* m_SelectedCoincidentVertices;

  /// @brief Field meshWillBeDestroyed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_meshWillBeDestroyed, put = setStaticF_meshWillBeDestroyed))::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshWillBeDestroyed;

  /// @brief Field meshWasInitialized, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_meshWasInitialized, put = setStaticF_meshWasInitialized))::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshWasInitialized;

  /// @brief Field componentWillBeDestroyed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_componentWillBeDestroyed,
                             put = setStaticF_componentWillBeDestroyed))::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* componentWillBeDestroyed;

  /// @brief Field componentHasBeenReset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_componentHasBeenReset, put = setStaticF_componentHasBeenReset))::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* componentHasBeenReset;

  /// @brief Field elementSelectionChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_elementSelectionChanged,
                             put = setStaticF_elementSelectionChanged))::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* elementSelectionChanged;

  /// @brief Field s_CachedHashSet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CachedHashSet, put = setStaticF_s_CachedHashSet))::System::Collections::Generic::HashSet_1<int32_t>* s_CachedHashSet;

  __declspec(property(get = get_userCollisions, put = set_userCollisions)) bool userCollisions;

  __declspec(property(get = get_unwrapParameters, put = set_unwrapParameters))::UnityEngine::ProBuilder::UnwrapParameters* unwrapParameters;

  __declspec(property(get = get_renderer))::UnityEngine::MeshRenderer* renderer;

  __declspec(property(get = get_filter))::UnityEngine::MeshFilter* filter;

  __declspec(property(get = get_versionIndex)) uint16_t versionIndex;

  __declspec(property(get = get_preserveMeshAssetOnDestroy, put = set_preserveMeshAssetOnDestroy)) bool preserveMeshAssetOnDestroy;

  __declspec(property(get = get_facesInternal, put = set_facesInternal))::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> facesInternal;

  __declspec(property(get = get_faces, put = set_faces))::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces;

  __declspec(property(get = get_sharedVerticesInternal,
                      put = set_sharedVerticesInternal))::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> sharedVerticesInternal;

  __declspec(property(get = get_sharedVertices, put = set_sharedVertices))::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices;

  __declspec(property(get = get_sharedVertexLookup))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedVertexLookup;

  __declspec(property(get = get_sharedTextures, put = set_sharedTextures))::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> sharedTextures;

  __declspec(property(get = get_sharedTextureLookup))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedTextureLookup;

  __declspec(property(get = get_positionsInternal, put = set_positionsInternal))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positionsInternal;

  __declspec(property(get = get_positions, put = set_positions))::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions;

  __declspec(property(get = get_normals))::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* normals;

  __declspec(property(get = get_normalsInternal, put = set_normalsInternal))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normalsInternal;

  __declspec(property(get = get_colorsInternal, put = set_colorsInternal))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colorsInternal;

  __declspec(property(get = get_colors, put = set_colors))::System::Collections::Generic::IList_1<::UnityEngine::Color>* colors;

  __declspec(property(get = get_tangents, put = set_tangents))::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* tangents;

  __declspec(property(get = get_tangentsInternal, put = set_tangentsInternal))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangentsInternal;

  __declspec(property(get = get_texturesInternal, put = set_texturesInternal))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> texturesInternal;

  __declspec(property(get = get_textures2Internal, put = set_textures2Internal))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* textures2Internal;

  __declspec(property(get = get_textures3Internal, put = set_textures3Internal))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* textures3Internal;

  __declspec(property(get = get_textures, put = set_textures))::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* textures;

  __declspec(property(get = get_faceCount)) int32_t faceCount;

  __declspec(property(get = get_vertexCount)) int32_t vertexCount;

  __declspec(property(get = get_edgeCount)) int32_t edgeCount;

  __declspec(property(get = get_indexCount)) int32_t indexCount;

  __declspec(property(get = get_triangleCount)) int32_t triangleCount;

  __declspec(property(get = get_mesh, put = set_mesh))::UnityEngine::Mesh* mesh;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_meshSyncState))::UnityEngine::ProBuilder::MeshSyncState meshSyncState;

  __declspec(property(get = get_meshFormatVersion)) int32_t meshFormatVersion;

  __declspec(property(get = get_selectable, put = set_selectable)) bool selectable;

  __declspec(property(get = get_selectedFaceCount)) int32_t selectedFaceCount;

  __declspec(property(get = get_selectedVertexCount)) int32_t selectedVertexCount;

  __declspec(property(get = get_selectedEdgeCount)) int32_t selectedEdgeCount;

  __declspec(property(get = get_selectedSharedVerticesCount)) int32_t selectedSharedVerticesCount;

  __declspec(property(get = get_selectedCoincidentVertexCount)) int32_t selectedCoincidentVertexCount;

  __declspec(property(get = get_selectedSharedVertices))::System::Collections::Generic::IEnumerable_1<int32_t>* selectedSharedVertices;

  __declspec(property(get = get_selectedCoincidentVertices))::System::Collections::Generic::IEnumerable_1<int32_t>* selectedCoincidentVertices;

  __declspec(property(get = get_selectedFaceIndexes))::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* selectedFaceIndexes;

  __declspec(property(get = get_selectedVertices))::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* selectedVertices;

  __declspec(property(get = get_selectedEdges))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* selectedEdges;

  __declspec(property(get = get_selectedFacesInternal, put = set_selectedFacesInternal))::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> selectedFacesInternal;

  __declspec(property(get = get_selectedFaceIndicesInternal, put = set_selectedFaceIndicesInternal))::ArrayW<int32_t, ::Array<int32_t>*> selectedFaceIndicesInternal;

  __declspec(property(get = get_selectedEdgesInternal, put = set_selectedEdgesInternal))::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> selectedEdgesInternal;

  __declspec(property(get = get_selectedIndexesInternal, put = set_selectedIndexesInternal))::ArrayW<int32_t, ::Array<int32_t>*> selectedIndexesInternal;

  constexpr int32_t& __get_m_MeshFormatVersion();

  constexpr int32_t const& __get_m_MeshFormatVersion() const;

  constexpr void __set_m_MeshFormatVersion(int32_t value);

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>& __get_m_Faces();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> const& __get_m_Faces() const;

  constexpr void __set_m_Faces(::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> value);

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& __get_m_SharedVertices();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const& __get_m_SharedVertices() const;

  constexpr void __set_m_SharedVertices(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState& __get_m_CacheValid();

  constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState const& __get_m_CacheValid() const;

  constexpr void __set_m_CacheValid(::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __get_m_SharedVertexLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __get_m_SharedVertexLookup() const;

  constexpr void __set_m_SharedVertexLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& __get_m_SharedTextures();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const& __get_m_SharedTextures() const;

  constexpr void __set_m_SharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __get_m_SharedTextureLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __get_m_SharedTextureLookup() const;

  constexpr void __set_m_SharedTextureLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_m_Positions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_m_Positions() const;

  constexpr void __set_m_Positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __get_m_Textures0();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __get_m_Textures0() const;

  constexpr void __set_m_Textures0(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __get_m_Textures2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __get_m_Textures2() const;

  constexpr void __set_m_Textures2(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __get_m_Textures3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __get_m_Textures3() const;

  constexpr void __set_m_Textures3(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get_m_Tangents();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get_m_Tangents() const;

  constexpr void __set_m_Tangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_m_Normals();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_m_Normals() const;

  constexpr void __set_m_Normals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __get_m_Colors();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __get_m_Colors() const;

  constexpr void __set_m_Colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr bool& __get__userCollisions_k__BackingField();

  constexpr bool const& __get__userCollisions_k__BackingField() const;

  constexpr void __set__userCollisions_k__BackingField(bool value);

  constexpr ::UnityEngine::ProBuilder::UnwrapParameters*& __get_m_UnwrapParameters();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::UnwrapParameters*> const& __get_m_UnwrapParameters() const;

  constexpr void __set_m_UnwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* value);

  constexpr bool& __get_m_PreserveMeshAssetOnDestroy();

  constexpr bool const& __get_m_PreserveMeshAssetOnDestroy() const;

  constexpr void __set_m_PreserveMeshAssetOnDestroy(bool value);

  constexpr ::StringW& __get_assetGuid();

  constexpr ::StringW const& __get_assetGuid() const;

  constexpr void __set_assetGuid(::StringW value);

  constexpr ::UnityEngine::Mesh*& __get_m_Mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get_m_Mesh() const;

  constexpr void __set_m_Mesh(::UnityEngine::Mesh* value);

  constexpr ::UnityEngine::MeshRenderer*& __get_m_MeshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get_m_MeshRenderer() const;

  constexpr void __set_m_MeshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr ::UnityEngine::MeshFilter*& __get_m_MeshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get_m_MeshFilter() const;

  constexpr void __set_m_MeshFilter(::UnityEngine::MeshFilter* value);

  constexpr uint16_t& __get_m_VersionIndex();

  constexpr uint16_t const& __get_m_VersionIndex() const;

  constexpr void __set_m_VersionIndex(uint16_t value);

  constexpr bool& __get_m_IsSelectable();

  constexpr bool const& __get_m_IsSelectable() const;

  constexpr void __set_m_IsSelectable(bool value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_SelectedFaces();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_SelectedFaces() const;

  constexpr void __set_m_SelectedFaces(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>& __get_m_SelectedEdges();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> const& __get_m_SelectedEdges() const;

  constexpr void __set_m_SelectedEdges(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_SelectedVertices();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_SelectedVertices() const;

  constexpr void __set_m_SelectedVertices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get_m_SelectedCacheDirty();

  constexpr bool const& __get_m_SelectedCacheDirty() const;

  constexpr void __set_m_SelectedCacheDirty(bool value);

  constexpr int32_t& __get_m_SelectedSharedVerticesCount();

  constexpr int32_t const& __get_m_SelectedSharedVerticesCount() const;

  constexpr void __set_m_SelectedSharedVerticesCount(int32_t value);

  constexpr int32_t& __get_m_SelectedCoincidentVertexCount();

  constexpr int32_t const& __get_m_SelectedCoincidentVertexCount() const;

  constexpr void __set_m_SelectedCoincidentVertexCount(int32_t value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get_m_SelectedSharedVertices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get_m_SelectedSharedVertices() const;

  constexpr void __set_m_SelectedSharedVertices(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_m_SelectedCoincidentVertices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_m_SelectedCoincidentVertices() const;

  constexpr void __set_m_SelectedCoincidentVertices(::System::Collections::Generic::List_1<int32_t>* value);

  static inline void setStaticF_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  static inline ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* getStaticF_meshWillBeDestroyed();

  static inline void setStaticF_meshWasInitialized(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  static inline ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* getStaticF_meshWasInitialized();

  static inline void setStaticF_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  static inline ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* getStaticF_componentWillBeDestroyed();

  static inline void setStaticF_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  static inline ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* getStaticF_componentHasBeenReset();

  static inline void setStaticF_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  static inline ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* getStaticF_elementSelectionChanged();

  static inline void setStaticF_s_CachedHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_s_CachedHashSet();

  /// @brief Method get_userCollisions, addr 0x2b57728, size 0x8, virtual false, abstract: false, final false
  inline bool get_userCollisions();

  /// @brief Method set_userCollisions, addr 0x2b57730, size 0xc, virtual false, abstract: false, final false
  inline void set_userCollisions(bool value);

  /// @brief Method get_unwrapParameters, addr 0x2b5773c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::UnwrapParameters* get_unwrapParameters();

  /// @brief Method set_unwrapParameters, addr 0x2b57744, size 0x8, virtual false, abstract: false, final false
  inline void set_unwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* value);

  /// @brief Method get_renderer, addr 0x2b54748, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshRenderer* get_renderer();

  /// @brief Method get_filter, addr 0x2b5774c, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshFilter* get_filter();

  /// @brief Method get_versionIndex, addr 0x2b57804, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_versionIndex();

  /// @brief Method get_preserveMeshAssetOnDestroy, addr 0x2b5780c, size 0x8, virtual false, abstract: false, final false
  inline bool get_preserveMeshAssetOnDestroy();

  /// @brief Method set_preserveMeshAssetOnDestroy, addr 0x2b57814, size 0xc, virtual false, abstract: false, final false
  inline void set_preserveMeshAssetOnDestroy(bool value);

  /// @brief Method HasArrays, addr 0x2b52e74, size 0x1e0, virtual false, abstract: false, final false
  inline bool HasArrays(::UnityEngine::ProBuilder::MeshArrays channels);

  /// @brief Method get_facesInternal, addr 0x2b57820, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> get_facesInternal();

  /// @brief Method set_facesInternal, addr 0x2b57828, size 0x8, virtual false, abstract: false, final false
  inline void set_facesInternal(::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> value);

  /// @brief Method get_faces, addr 0x2b57830, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* get_faces();

  /// @brief Method set_faces, addr 0x2b578ac, size 0xa4, virtual false, abstract: false, final false
  inline void set_faces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* value);

  /// @brief Method InvalidateSharedVertexLookup, addr 0x2b57950, size 0xa8, virtual false, abstract: false, final false
  inline void InvalidateSharedVertexLookup();

  /// @brief Method InvalidateSharedTextureLookup, addr 0x2b579f8, size 0xa8, virtual false, abstract: false, final false
  inline void InvalidateSharedTextureLookup();

  /// @brief Method InvalidateFaces, addr 0x2b57aa0, size 0x310, virtual false, abstract: false, final false
  inline void InvalidateFaces();

  /// @brief Method InvalidateCaches, addr 0x2b57db0, size 0x2c, virtual false, abstract: false, final false
  inline void InvalidateCaches();

  /// @brief Method get_sharedVerticesInternal, addr 0x2b57ddc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> get_sharedVerticesInternal();

  /// @brief Method set_sharedVerticesInternal, addr 0x2b57de4, size 0x8, virtual false, abstract: false, final false
  inline void set_sharedVerticesInternal(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  /// @brief Method get_sharedVertices, addr 0x2b57dec, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* get_sharedVertices();

  /// @brief Method set_sharedVertices, addr 0x2b57e68, size 0x244, virtual false, abstract: false, final false
  inline void set_sharedVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* value);

  /// @brief Method get_sharedVertexLookup, addr 0x2b580ac, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* get_sharedVertexLookup();

  /// @brief Method SetSharedVertices, addr 0x2b58150, size 0x74, virtual false, abstract: false, final false
  inline void SetSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* indexes);

  /// @brief Method get_sharedTextures, addr 0x2b581c4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> get_sharedTextures();

  /// @brief Method set_sharedTextures, addr 0x2b581cc, size 0x8, virtual false, abstract: false, final false
  inline void set_sharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  /// @brief Method get_sharedTextureLookup, addr 0x2b581d4, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* get_sharedTextureLookup();

  /// @brief Method SetSharedTextures, addr 0x2b58274, size 0x74, virtual false, abstract: false, final false
  inline void SetSharedTextures(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* indexes);

  /// @brief Method get_positionsInternal, addr 0x2b582e8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_positionsInternal();

  /// @brief Method set_positionsInternal, addr 0x2b582f0, size 0x8, virtual false, abstract: false, final false
  inline void set_positionsInternal(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method get_positions, addr 0x2b582f8, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* get_positions();

  /// @brief Method set_positions, addr 0x2b58374, size 0xa4, virtual false, abstract: false, final false
  inline void set_positions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* value);

  /// @brief Method GetVertices, addr 0x2b53d10, size 0x6bc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> GetVertices(::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method GetVerticesInList, addr 0x2b58418, size 0x888, virtual false, abstract: false, final false
  inline void GetVerticesInList(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices);

  /// @brief Method SetVertices, addr 0x2b58ca0, size 0x2cc, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, bool applyMesh);

  /// @brief Method get_normals, addr 0x2b59088, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* get_normals();

  /// @brief Method get_normalsInternal, addr 0x2b59110, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_normalsInternal();

  /// @brief Method set_normalsInternal, addr 0x2b59118, size 0x8, virtual false, abstract: false, final false
  inline void set_normalsInternal(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method GetNormals, addr 0x2b53370, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetNormals();

  /// @brief Method get_colorsInternal, addr 0x2b59120, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_colorsInternal();

  /// @brief Method set_colorsInternal, addr 0x2b59128, size 0x8, virtual false, abstract: false, final false
  inline void set_colorsInternal(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  /// @brief Method get_colors, addr 0x2b59130, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Color>* get_colors();

  /// @brief Method set_colors, addr 0x2b591b8, size 0x104, virtual false, abstract: false, final false
  inline void set_colors(::System::Collections::Generic::IList_1<::UnityEngine::Color>* value);

  /// @brief Method GetColors, addr 0x2b592bc, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColors();

  /// @brief Method get_tangents, addr 0x2b59360, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* get_tangents();

  /// @brief Method set_tangents, addr 0x2b59400, size 0xf4, virtual false, abstract: false, final false
  inline void set_tangents(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* value);

  /// @brief Method get_tangentsInternal, addr 0x2b594f4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> get_tangentsInternal();

  /// @brief Method set_tangentsInternal, addr 0x2b594fc, size 0x8, virtual false, abstract: false, final false
  inline void set_tangentsInternal(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method GetTangents, addr 0x2b533f8, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetTangents();

  /// @brief Method get_texturesInternal, addr 0x2b59504, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_texturesInternal();

  /// @brief Method set_texturesInternal, addr 0x2b5950c, size 0x8, virtual false, abstract: false, final false
  inline void set_texturesInternal(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method get_textures2Internal, addr 0x2b59514, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_textures2Internal();

  /// @brief Method set_textures2Internal, addr 0x2b5951c, size 0x8, virtual false, abstract: false, final false
  inline void set_textures2Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  /// @brief Method get_textures3Internal, addr 0x2b59524, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_textures3Internal();

  /// @brief Method set_textures3Internal, addr 0x2b5952c, size 0x8, virtual false, abstract: false, final false
  inline void set_textures3Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  /// @brief Method get_textures, addr 0x2b59534, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* get_textures();

  /// @brief Method set_textures, addr 0x2b595bc, size 0xe0, virtual false, abstract: false, final false
  inline void set_textures(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* value);

  /// @brief Method GetUVs, addr 0x2b53054, size 0x31c, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method GetUVs, addr 0x2b5969c, size 0x124, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>* GetUVs(int32_t channel);

  /// @brief Method SetUVs, addr 0x2b597c0, size 0x2d8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method get_faceCount, addr 0x2b55d50, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_faceCount();

  /// @brief Method get_vertexCount, addr 0x2b53cbc, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_vertexCount();

  /// @brief Method get_edgeCount, addr 0x2b59a98, size 0x8c, virtual false, abstract: false, final false
  inline int32_t get_edgeCount();

  /// @brief Method get_indexCount, addr 0x2b59b24, size 0x114, virtual false, abstract: false, final false
  inline int32_t get_indexCount();

  /// @brief Method get_triangleCount, addr 0x2b59c38, size 0x124, virtual false, abstract: false, final false
  inline int32_t get_triangleCount();

  /// @brief Method add_meshWillBeDestroyed, addr 0x2b59d5c, size 0xf0, virtual false, abstract: false, final false
  static inline void add_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method remove_meshWillBeDestroyed, addr 0x2b59e4c, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method add_meshWasInitialized, addr 0x2b59f3c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_meshWasInitialized(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method remove_meshWasInitialized, addr 0x2b5a030, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_meshWasInitialized(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method add_componentWillBeDestroyed, addr 0x2b5a124, size 0xf4, virtual false, abstract: false, final false
  static inline void add_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method remove_componentWillBeDestroyed, addr 0x2b5a218, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method add_componentHasBeenReset, addr 0x2b5a30c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method remove_componentHasBeenReset, addr 0x2b5a400, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method add_elementSelectionChanged, addr 0x2b5a4f4, size 0xf4, virtual false, abstract: false, final false
  static inline void add_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method remove_elementSelectionChanged, addr 0x2b5a5e8, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value);

  /// @brief Method get_mesh, addr 0x2b54924, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh* get_mesh();

  /// @brief Method set_mesh, addr 0x2b5a6dc, size 0x8, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method get_id, addr 0x2b53480, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_meshSyncState, addr 0x2b5a6e4, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::MeshSyncState get_meshSyncState();

  /// @brief Method get_meshFormatVersion, addr 0x2b5a808, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_meshFormatVersion();

  /// @brief Method Awake, addr 0x2b5a810, size 0x13c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Reset, addr 0x2b5ac24, size 0xd0, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method OnDestroy, addr 0x2b5acf4, size 0x210, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method IncrementVersionIndex, addr 0x2b59078, size 0x10, virtual false, abstract: false, final false
  inline void IncrementVersionIndex();

  /// @brief Method Clear, addr 0x2b58f6c, size 0x10c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method EnsureMeshFilterIsAssigned, addr 0x2b5a94c, size 0x124, virtual false, abstract: false, final false
  inline void EnsureMeshFilterIsAssigned();

  /// @brief Method CreateInstanceWithPoints, addr 0x2b5af04, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ProBuilderMesh* CreateInstanceWithPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions);

  /// @brief Method Create, addr 0x2b5b24c, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ProBuilderMesh* Create();

  /// @brief Method Create, addr 0x2b5b2dc, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ProBuilderMesh* Create(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* positions,
                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method Create, addr 0x2b5b4c0, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ProBuilderMesh* Create(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                  ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                                  ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
                                                                  ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures,
                                                                  ::System::Collections::Generic::IList_1<::UnityEngine::Material*>* materials);

  /// @brief Method GeometryWithPoints, addr 0x2b5b024, size 0x228, virtual false, abstract: false, final false
  inline void GeometryWithPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points);

  /// @brief Method RebuildWithPositionsAndFaces, addr 0x2b5b3ac, size 0x114, virtual false, abstract: false, final false
  inline void RebuildWithPositionsAndFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* vertices,
                                           ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method Rebuild, addr 0x2b53cd4, size 0x20, virtual false, abstract: false, final false
  inline void Rebuild();

  /// @brief Method ToMesh, addr 0x2b5b660, size 0x368, virtual false, abstract: false, final false
  inline void ToMesh(::UnityEngine::MeshTopology preferredTopology);

  /// @brief Method MakeUnique, addr 0x2b5bac8, size 0x74, virtual false, abstract: false, final false
  inline void MakeUnique();

  /// @brief Method CopyFrom, addr 0x2b5bb3c, size 0x2e4, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::ProBuilder::ProBuilderMesh* other);

  /// @brief Method Refresh, addr 0x2b5b9c8, size 0x100, virtual false, abstract: false, final false
  inline void Refresh(::UnityEngine::ProBuilder::RefreshMask mask);

  /// @brief Method EnsureMeshColliderIsAssigned, addr 0x2b5aa70, size 0x100, virtual false, abstract: false, final false
  inline void EnsureMeshColliderIsAssigned();

  /// @brief Method GetUnusedTextureGroup, addr 0x2b5c4c4, size 0x110, virtual false, abstract: false, final false
  inline int32_t GetUnusedTextureGroup(int32_t i);

  /// @brief Method IsValidTextureGroup, addr 0x2b5c5dc, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidTextureGroup(int32_t group);

  /// @brief Method UnusedElementGroup, addr 0x2b5c5e8, size 0x110, virtual false, abstract: false, final false
  inline int32_t UnusedElementGroup(int32_t i);

  /// @brief Method RefreshUV, addr 0x2b5be20, size 0x594, virtual false, abstract: false, final false
  inline void RefreshUV(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* facesToRefresh);

  /// @brief Method SetGroupUV, addr 0x2b5c700, size 0xc4, virtual false, abstract: false, final false
  inline void SetGroupUV(::UnityEngine::ProBuilder::AutoUnwrapSettings settings, int32_t group);

  /// @brief Method RefreshColors, addr 0x2b5c3b4, size 0x30, virtual false, abstract: false, final false
  inline void RefreshColors();

  /// @brief Method SetFaceColor, addr 0x2b5c7c4, size 0x374, virtual false, abstract: false, final false
  inline void SetFaceColor(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Color color);

  /// @brief Method SetMaterial, addr 0x2b5cb38, size 0x564, virtual false, abstract: false, final false
  inline void SetMaterial(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Material* material);

  /// @brief Method RefreshNormals, addr 0x2b5c3e4, size 0x70, virtual false, abstract: false, final false
  inline void RefreshNormals();

  /// @brief Method RefreshTangents, addr 0x2b5c454, size 0x70, virtual false, abstract: false, final false
  inline void RefreshTangents();

  /// @brief Method GetSharedVertexHandle, addr 0x2b5d09c, size 0x168, virtual false, abstract: false, final false
  inline int32_t GetSharedVertexHandle(int32_t vertex);

  /// @brief Method GetSharedVertexHandles, addr 0x2b5d204, size 0x380, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<int32_t>* GetSharedVertexHandles(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method GetCoincidentVertices, addr 0x2b5d584, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method GetCoincidentVertices, addr 0x2b5dbac, size 0x5c0, virtual false, abstract: false, final false
  inline void GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::List_1<int32_t>* coincident);

  /// @brief Method GetCoincidentVertices, addr 0x2b5e16c, size 0x690, virtual false, abstract: false, final false
  inline void GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::List_1<int32_t>* coincident);

  /// @brief Method GetCoincidentVertices, addr 0x2b5d65c, size 0x550, virtual false, abstract: false, final false
  inline void GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices, ::System::Collections::Generic::List_1<int32_t>* coincident);

  /// @brief Method GetCoincidentVertices, addr 0x2b5e7fc, size 0x1d4, virtual false, abstract: false, final false
  inline void GetCoincidentVertices(int32_t vertex, ::System::Collections::Generic::List_1<int32_t>* coincident);

  /// @brief Method SetVerticesCoincident, addr 0x2b5e9d0, size 0xb8, virtual false, abstract: false, final false
  inline void SetVerticesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method SetTexturesCoincident, addr 0x2b5ea88, size 0x40, virtual false, abstract: false, final false
  inline void SetTexturesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method AddToSharedVertex, addr 0x2b5eac8, size 0x9c, virtual false, abstract: false, final false
  inline void AddToSharedVertex(int32_t sharedVertexHandle, int32_t vertex);

  /// @brief Method AddSharedVertex, addr 0x2b5eb64, size 0xac, virtual false, abstract: false, final false
  inline void AddSharedVertex(::UnityEngine::ProBuilder::SharedVertex* vertex);

  /// @brief Method get_selectable, addr 0x2b5ec10, size 0x8, virtual false, abstract: false, final false
  inline bool get_selectable();

  /// @brief Method set_selectable, addr 0x2b5ec18, size 0xc, virtual false, abstract: false, final false
  inline void set_selectable(bool value);

  /// @brief Method get_selectedFaceCount, addr 0x2b5ec24, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectedFaceCount();

  /// @brief Method get_selectedVertexCount, addr 0x2b5ec40, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectedVertexCount();

  /// @brief Method get_selectedEdgeCount, addr 0x2b5ec5c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectedEdgeCount();

  /// @brief Method get_selectedSharedVerticesCount, addr 0x2b5ec78, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectedSharedVerticesCount();

  /// @brief Method get_selectedCoincidentVertexCount, addr 0x2b5f1e0, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectedCoincidentVertexCount();

  /// @brief Method get_selectedSharedVertices, addr 0x2b5f1f8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_selectedSharedVertices();

  /// @brief Method get_selectedCoincidentVertices, addr 0x2b5f210, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_selectedCoincidentVertices();

  /// @brief Method CacheSelection, addr 0x2b5ec90, size 0x550, virtual false, abstract: false, final false
  inline void CacheSelection();

  /// @brief Method GetSelectedFaces, addr 0x2b5f228, size 0x108, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> GetSelectedFaces();

  /// @brief Method get_selectedFaceIndexes, addr 0x2b5f330, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* get_selectedFaceIndexes();

  /// @brief Method get_selectedVertices, addr 0x2b5f3ac, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* get_selectedVertices();

  /// @brief Method get_selectedEdges, addr 0x2b5f428, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* get_selectedEdges();

  /// @brief Method get_selectedFacesInternal, addr 0x2b5f4a4, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> get_selectedFacesInternal();

  /// @brief Method set_selectedFacesInternal, addr 0x2b5f4a8, size 0xc8, virtual false, abstract: false, final false
  inline void set_selectedFacesInternal(::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> value);

  /// @brief Method get_selectedFaceIndicesInternal, addr 0x2b5f570, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_selectedFaceIndicesInternal();

  /// @brief Method set_selectedFaceIndicesInternal, addr 0x2b5f578, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedFaceIndicesInternal(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method get_selectedEdgesInternal, addr 0x2b5f580, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> get_selectedEdgesInternal();

  /// @brief Method set_selectedEdgesInternal, addr 0x2b5f588, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedEdgesInternal(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> value);

  /// @brief Method get_selectedIndexesInternal, addr 0x2b5f590, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_selectedIndexesInternal();

  /// @brief Method set_selectedIndexesInternal, addr 0x2b5f598, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedIndexesInternal(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method GetActiveFace, addr 0x2b5f5a0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* GetActiveFace();

  /// @brief Method GetActiveEdge, addr 0x2b5f5fc, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge GetActiveEdge();

  /// @brief Method GetActiveVertex, addr 0x2b5f684, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetActiveVertex();

  /// @brief Method AddToFaceSelection, addr 0x2b5f6c0, size 0x6c, virtual false, abstract: false, final false
  inline void AddToFaceSelection(int32_t index);

  /// @brief Method SetSelectedFaces, addr 0x2b5f92c, size 0xc0, virtual false, abstract: false, final false
  inline void SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* selected);

  /// @brief Method SetSelectedFaces, addr 0x2b5f72c, size 0x200, virtual false, abstract: false, final false
  inline void SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<int32_t>* selected);

  /// @brief Method SetSelectedEdges, addr 0x2b5f9ec, size 0x118, virtual false, abstract: false, final false
  inline void SetSelectedEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method SetSelectedVertices, addr 0x2b5fb04, size 0x150, virtual false, abstract: false, final false
  inline void SetSelectedVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method RemoveFromFaceSelectionAtIndex, addr 0x2b5fc54, size 0x64, virtual false, abstract: false, final false
  inline void RemoveFromFaceSelectionAtIndex(int32_t index);

  /// @brief Method ClearSelection, addr 0x2b5ab70, size 0x94, virtual false, abstract: false, final false
  inline void ClearSelection();

  static inline ::UnityEngine::ProBuilder::ProBuilderMesh* New_ctor();

  /// @brief Method .ctor, addr 0x2b5fcb8, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_selectedFacesInternal>b__225_0, addr 0x2b5fe6c, size 0x58, virtual false, abstract: false, final false
  inline int32_t _set_selectedFacesInternal_b__225_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <SetSelectedFaces>b__239_0, addr 0x2b5fec4, size 0x58, virtual false, abstract: false, final false
  inline int32_t _SetSelectedFaces_b__239_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <SetSelectedFaces>b__240_0, addr 0x2b5ff1c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _SetSelectedFaces_b__240_0(int32_t x);

  /// @brief Method <SetSelectedFaces>b__240_1, addr 0x2b5ff54, size 0x38, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _SetSelectedFaces_b__240_1(int32_t x);

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProBuilderMesh(ProBuilderMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProBuilderMesh(ProBuilderMesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderMesh();

public:
  /// @brief Field m_MeshFormatVersion, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_MeshFormatVersion;

  /// @brief Field m_Faces, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> ___m_Faces;

  /// @brief Field m_SharedVertices, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> ___m_SharedVertices;

  /// @brief Field m_CacheValid, offset: 0x30, size: 0x1, def value: None
  ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState ___m_CacheValid;

  /// @brief Field m_SharedVertexLookup, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_SharedVertexLookup;

  /// @brief Field m_SharedTextures, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> ___m_SharedTextures;

  /// @brief Field m_SharedTextureLookup, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_SharedTextureLookup;

  /// @brief Field m_Positions, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Positions;

  /// @brief Field m_Textures0, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ___m_Textures0;

  /// @brief Field m_Textures2, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___m_Textures2;

  /// @brief Field m_Textures3, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___m_Textures3;

  /// @brief Field m_Tangents, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_Tangents;

  /// @brief Field m_Normals, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Normals;

  /// @brief Field m_Colors, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ___m_Colors;

  /// @brief Field <userCollisions>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____userCollisions_k__BackingField;

  /// @brief Field m_UnwrapParameters, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::UnwrapParameters* ___m_UnwrapParameters;

  /// @brief Field m_PreserveMeshAssetOnDestroy, offset: 0x98, size: 0x1, def value: None
  bool ___m_PreserveMeshAssetOnDestroy;

  /// @brief Field assetGuid, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___assetGuid;

  /// @brief Field m_Mesh, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Mesh* ___m_Mesh;

  /// @brief Field m_MeshRenderer, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ___m_MeshRenderer;

  /// @brief Field m_MeshFilter, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ___m_MeshFilter;

  /// @brief Field m_VersionIndex, offset: 0xc0, size: 0x2, def value: None
  uint16_t ___m_VersionIndex;

  /// @brief Field m_IsSelectable, offset: 0xc2, size: 0x1, def value: None
  bool ___m_IsSelectable;

  /// @brief Field m_SelectedFaces, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_SelectedFaces;

  /// @brief Field m_SelectedEdges, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> ___m_SelectedEdges;

  /// @brief Field m_SelectedVertices, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_SelectedVertices;

  /// @brief Field m_SelectedCacheDirty, offset: 0xe0, size: 0x1, def value: None
  bool ___m_SelectedCacheDirty;

  /// @brief Field m_SelectedSharedVerticesCount, offset: 0xe4, size: 0x4, def value: None
  int32_t ___m_SelectedSharedVerticesCount;

  /// @brief Field m_SelectedCoincidentVertexCount, offset: 0xe8, size: 0x4, def value: None
  int32_t ___m_SelectedCoincidentVertexCount;

  /// @brief Field m_SelectedSharedVertices, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_SelectedSharedVertices;

  /// @brief Field m_SelectedCoincidentVertices, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_SelectedCoincidentVertices;

  /// @brief Field k_MeshFilterHideFlags value: static_cast<int32_t>(0xa)
  static ::UnityEngine::HideFlags const k_MeshFilterHideFlags;

  /// @brief Field k_UVChannelCount offset 0xffffffff size 0x4
  static constexpr int32_t k_UVChannelCount{ static_cast<int32_t>(0x4) };

  /// @brief Field k_MeshFormatVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_MeshFormatVersion{ static_cast<int32_t>(0x2) };

  /// @brief Field k_MeshFormatVersionSubmeshMaterialRefactor offset 0xffffffff size 0x4
  static constexpr int32_t k_MeshFormatVersionSubmeshMaterialRefactor{ static_cast<int32_t>(0x1) };

  /// @brief Field k_MeshFormatVersionAutoUVScaleOffset offset 0xffffffff size 0x4
  static constexpr int32_t k_MeshFormatVersionAutoUVScaleOffset{ static_cast<int32_t>(0x2) };

  /// @brief Field maxVertexCount offset 0xffffffff size 0x4
  static constexpr uint32_t maxVertexCount{ static_cast<uint32_t>(0xffff00c0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProBuilderMesh, 0x100>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_MeshFormatVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Faces) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SharedVertices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_CacheValid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SharedVertexLookup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SharedTextures) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SharedTextureLookup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Positions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Textures0) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Textures2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Textures3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Tangents) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Normals) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Colors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ____userCollisions_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_UnwrapParameters) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_PreserveMeshAssetOnDestroy) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___assetGuid) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_Mesh) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_MeshRenderer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_MeshFilter) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_VersionIndex) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_IsSelectable) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedFaces) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedEdges) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedVertices) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedCacheDirty) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedSharedVerticesCount) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedCoincidentVertexCount) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedSharedVertices) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ProBuilderMesh, ___m_SelectedCoincidentVertices) == 0xf8, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState, "UnityEngine.ProBuilder", "ProBuilderMesh/CacheValidState");
NEED_NO_BOX(::UnityEngine::ProBuilder::ProBuilderMesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProBuilderMesh*, "UnityEngine.ProBuilder", "ProBuilderMesh");
NEED_NO_BOX(::UnityEngine::ProBuilder::__ProBuilderMesh____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__ProBuilderMesh____c*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c__DisplayClass168_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c__DisplayClass170_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope, "UnityEngine.ProBuilder", "ProBuilderMesh/NonVersionedEditScope");
