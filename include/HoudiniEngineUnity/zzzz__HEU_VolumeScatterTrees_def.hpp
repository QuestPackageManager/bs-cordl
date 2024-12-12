#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_VolumeScatterTrees.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VolumeScatterTrees)
namespace HoudiniEngineUnity {
class HEU_TreePrototypeInfo;
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
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VolumeScatterTrees);
// Dependencies HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_VolumeScatterTrees
class CORDL_TYPE HEU_VolumeScatterTrees : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colors, put = __cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> _colors;

  /// @brief Field _heightScales, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__heightScales, put = __cordl_internal_set__heightScales)) ::ArrayW<float_t, ::Array<float_t>*> _heightScales;

  /// @brief Field _lightmapColors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightmapColors, put = __cordl_internal_set__lightmapColors)) ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> _lightmapColors;

  /// @brief Field _positions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__positions, put = __cordl_internal_set__positions)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _positions;

  /// @brief Field _prototypeIndices, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__prototypeIndices, put = __cordl_internal_set__prototypeIndices)) ::ArrayW<int32_t, ::Array<int32_t>*> _prototypeIndices;

  /// @brief Field _rotations, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rotations, put = __cordl_internal_set__rotations)) ::ArrayW<float_t, ::Array<float_t>*> _rotations;

  /// @brief Field _terrainTiles, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__terrainTiles, put = __cordl_internal_set__terrainTiles)) ::ArrayW<int32_t, ::Array<int32_t>*> _terrainTiles;

  /// @brief Field _treePrototypInfos, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__treePrototypInfos,
                      put = __cordl_internal_set__treePrototypInfos)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* _treePrototypInfos;

  /// @brief Field _widthScales, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__widthScales, put = __cordl_internal_set__widthScales)) ::ArrayW<float_t, ::Array<float_t>*> _widthScales;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a9e358, size 0x374, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeScatterTrees* other);

  static inline ::HoudiniEngineUnity::HEU_VolumeScatterTrees* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> const& __cordl_internal_get__colors() const;

  constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>& __cordl_internal_get__colors();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__heightScales() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__heightScales();

  constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> const& __cordl_internal_get__lightmapColors() const;

  constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>& __cordl_internal_get__lightmapColors();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__positions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__positions();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__prototypeIndices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__prototypeIndices();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__rotations() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__rotations();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__terrainTiles() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__terrainTiles();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* const& __cordl_internal_get__treePrototypInfos() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*& __cordl_internal_get__treePrototypInfos();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__widthScales() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__widthScales();

  constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value);

  constexpr void __cordl_internal_set__heightScales(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__lightmapColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value);

  constexpr void __cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__prototypeIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__rotations(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__terrainTiles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__treePrototypInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* value);

  constexpr void __cordl_internal_set__widthScales(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method .ctor, addr 0x3a9e6cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_VolumeScatterTrees__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_VolumeScatterTrees();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeScatterTrees", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_VolumeScatterTrees(HEU_VolumeScatterTrees&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeScatterTrees", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_VolumeScatterTrees(HEU_VolumeScatterTrees const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11935 };

  /// @brief Field _treePrototypInfos, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* ____treePrototypInfos;

  /// @brief Field _colors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> ____colors;

  /// @brief Field _heightScales, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____heightScales;

  /// @brief Field _lightmapColors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> ____lightmapColors;

  /// @brief Field _positions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____positions;

  /// @brief Field _prototypeIndices, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____prototypeIndices;

  /// @brief Field _rotations, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____rotations;

  /// @brief Field _widthScales, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____widthScales;

  /// @brief Field _terrainTiles, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____terrainTiles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeScatterTrees, ____treePrototypInfos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeScatterTrees, ____colors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeScatterTrees, ____heightScales) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeScatterTrees, ____lightmapColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeScatterTrees, ____positions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeScatterTrees, ____prototypeIndices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeScatterTrees, ____rotations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeScatterTrees, ____widthScales) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeScatterTrees, ____terrainTiles) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VolumeScatterTrees, 0x58>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeScatterTrees);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeScatterTrees*, "HoudiniEngineUnity", "HEU_VolumeScatterTrees");
