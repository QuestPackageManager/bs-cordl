#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GeoGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_GeoGroup)
namespace HoudiniEngineUnity {
class HEU_MeshData;
}
namespace HoudiniEngineUnity {
class HEU_VertexEntry;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeoGroup;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeoGroup);
// Dependencies System.IComparable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_GeoGroup
class CORDL_TYPE HEU_GeoGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field _groupName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__groupName, put = __cordl_internal_set__groupName)) ::StringW _groupName;

  /// @brief Field _sharedNormalIndices, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sharedNormalIndices,
                      put = __cordl_internal_set__sharedNormalIndices)) ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*,
                                                                                 ::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*>
      _sharedNormalIndices;

  /// @brief Field _subMeshesMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__subMeshesMap,
                      put = __cordl_internal_set__subMeshesMap)) ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* _subMeshesMap;

  /// @brief Convert operator to "::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>"
  constexpr operator ::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>*() noexcept;

  /// @brief Method CompareTo, addr 0x3a7a3dc, size 0x30, virtual true, abstract: false, final true
  inline int32_t CompareTo(::HoudiniEngineUnity::HEU_GeoGroup* other);

  static inline ::HoudiniEngineUnity::HEU_GeoGroup* New_ctor();

  /// @brief Method SetupNormalIndices, addr 0x3a78288, size 0x124, virtual false, abstract: false, final false
  inline void SetupNormalIndices(int32_t indicesCount);

  constexpr ::StringW const& __cordl_internal_get__groupName() const;

  constexpr ::StringW& __cordl_internal_get__groupName();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*, ::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*> const&
  __cordl_internal_get__sharedNormalIndices() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*, ::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*>&
  __cordl_internal_get__sharedNormalIndices();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* const& __cordl_internal_get__subMeshesMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>*& __cordl_internal_get__subMeshesMap();

  constexpr void __cordl_internal_set__groupName(::StringW value);

  constexpr void __cordl_internal_set__sharedNormalIndices(
      ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*, ::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*> value);

  constexpr void __cordl_internal_set__subMeshesMap(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* value);

  /// @brief Method .ctor, addr 0x3a7820c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>"
  constexpr ::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>* i___System__IComparable_1___HoudiniEngineUnity__HEU_GeoGroup__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GeoGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GeoGroup(HEU_GeoGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GeoGroup(HEU_GeoGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11822 };

  /// @brief Field _groupName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____groupName;

  /// @brief Field _subMeshesMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* ____subMeshesMap;

  /// @brief Field _sharedNormalIndices, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*, ::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*>
      ____sharedNormalIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoGroup, ____groupName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoGroup, ____subMeshesMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoGroup, ____sharedNormalIndices) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeoGroup, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeoGroup);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeoGroup*, "HoudiniEngineUnity", "HEU_GeoGroup");
