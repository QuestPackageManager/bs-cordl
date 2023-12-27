#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VolumeScatterTrees)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_TreePrototypeInfo;
}
namespace UnityEngine {
struct Color32;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VolumeScatterTrees);
// Type: HoudiniEngineUnity::HEU_VolumeScatterTrees
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9953))
// CS Name: ::HoudiniEngineUnity::HEU_VolumeScatterTrees*
class CORDL_TYPE HEU_VolumeScatterTrees : public ::System::Object {
public:
  // Declarations
  /// @brief Field _treePrototypInfos, offset 0x10, size 0x8
  __declspec(property(get = __get__treePrototypInfos, put = __set__treePrototypInfos))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* _treePrototypInfos;

  /// @brief Field _colors, offset 0x18, size 0x8
  __declspec(property(get = __get__colors, put = __set__colors))::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> _colors;

  /// @brief Field _heightScales, offset 0x20, size 0x8
  __declspec(property(get = __get__heightScales, put = __set__heightScales))::ArrayW<float_t, ::Array<float_t>*> _heightScales;

  /// @brief Field _lightmapColors, offset 0x28, size 0x8
  __declspec(property(get = __get__lightmapColors, put = __set__lightmapColors))::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> _lightmapColors;

  /// @brief Field _positions, offset 0x30, size 0x8
  __declspec(property(get = __get__positions, put = __set__positions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _positions;

  /// @brief Field _prototypeIndices, offset 0x38, size 0x8
  __declspec(property(get = __get__prototypeIndices, put = __set__prototypeIndices))::ArrayW<int32_t, ::Array<int32_t>*> _prototypeIndices;

  /// @brief Field _rotations, offset 0x40, size 0x8
  __declspec(property(get = __get__rotations, put = __set__rotations))::ArrayW<float_t, ::Array<float_t>*> _rotations;

  /// @brief Field _widthScales, offset 0x48, size 0x8
  __declspec(property(get = __get__widthScales, put = __set__widthScales))::ArrayW<float_t, ::Array<float_t>*> _widthScales;

  /// @brief Field _terrainTiles, offset 0x50, size 0x8
  __declspec(property(get = __get__terrainTiles, put = __set__terrainTiles))::ArrayW<int32_t, ::Array<int32_t>*> _terrainTiles;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*& __get__treePrototypInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*> const& __get__treePrototypInfos() const;

  constexpr void __set__treePrototypInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* value);

  constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>& __get__colors();

  constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> const& __get__colors() const;

  constexpr void __set__colors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__heightScales();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__heightScales() const;

  constexpr void __set__heightScales(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>& __get__lightmapColors();

  constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> const& __get__lightmapColors() const;

  constexpr void __set__lightmapColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__positions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__positions() const;

  constexpr void __set__positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__prototypeIndices();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__prototypeIndices() const;

  constexpr void __set__prototypeIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__rotations();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__rotations() const;

  constexpr void __set__rotations(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__widthScales();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__widthScales() const;

  constexpr void __set__widthScales(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__terrainTiles();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__terrainTiles() const;

  constexpr void __set__terrainTiles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method IsEquivalentTo addr 0x21ea13c size 0x374 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeScatterTrees* other);

  static inline ::HoudiniEngineUnity::HEU_VolumeScatterTrees* New_ctor();

  /// @brief Method .ctor addr 0x21ea4b0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeScatterTrees", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_VolumeScatterTrees(HEU_VolumeScatterTrees&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeScatterTrees", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_VolumeScatterTrees(HEU_VolumeScatterTrees const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_VolumeScatterTrees();

public:
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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VolumeScatterTrees, 0x58>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeScatterTrees);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeScatterTrees*, "HoudiniEngineUnity", "HEU_VolumeScatterTrees");
