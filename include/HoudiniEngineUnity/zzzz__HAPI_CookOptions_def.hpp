#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_PackedPrimInstancingMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_CookOptions)
namespace HoudiniEngineUnity {
struct HAPI_PackedPrimInstancingMode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CookOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_CookOptions);
// Type: HoudiniEngineUnity::HAPI_CookOptions
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9485))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9524))
// CS Name: ::HoudiniEngineUnity::HAPI_CookOptions
struct CORDL_TYPE HAPI_CookOptions {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "splitGeosByGroup", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "splitGeosByAttribute", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "splitAttrSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxVerticesPerPrimitive", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "refineCurveToLinear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "curveRefineLOD", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "clearErrorsAndWarnings",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cookTemplatedGeos", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "splitPointsByVertexAttributes", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "packedPrimInstancingMode", ty: "::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode", modifiers: "", def_value: None }, CppParam { name:
  // "handleBoxPartTypes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "handleSpherePartTypes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "checkPartChanges",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cacheMeshTopology", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "extraFlags", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr HAPI_CookOptions(bool splitGeosByGroup, bool splitGeosByAttribute, int32_t splitAttrSH, int32_t maxVerticesPerPrimitive, bool refineCurveToLinear, float_t curveRefineLOD,
                             bool clearErrorsAndWarnings, bool cookTemplatedGeos, bool splitPointsByVertexAttributes, ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode packedPrimInstancingMode,
                             bool handleBoxPartTypes, bool handleSpherePartTypes, bool checkPartChanges, bool cacheMeshTopology, int32_t extraFlags) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_CookOptions();

  /// @brief Field splitGeosByGroup, offset: 0x0, size: 0x1, def value: None
  bool splitGeosByGroup;

  /// @brief Field splitGeosByAttribute, offset: 0x1, size: 0x1, def value: None
  bool splitGeosByAttribute;

  /// @brief Field splitAttrSH, offset: 0x4, size: 0x4, def value: None
  int32_t splitAttrSH;

  /// @brief Field maxVerticesPerPrimitive, offset: 0x8, size: 0x4, def value: None
  int32_t maxVerticesPerPrimitive;

  /// @brief Field refineCurveToLinear, offset: 0xc, size: 0x1, def value: None
  bool refineCurveToLinear;

  /// @brief Field curveRefineLOD, offset: 0x10, size: 0x4, def value: None
  float_t curveRefineLOD;

  /// @brief Field clearErrorsAndWarnings, offset: 0x14, size: 0x1, def value: None
  bool clearErrorsAndWarnings;

  /// @brief Field cookTemplatedGeos, offset: 0x15, size: 0x1, def value: None
  bool cookTemplatedGeos;

  /// @brief Field splitPointsByVertexAttributes, offset: 0x16, size: 0x1, def value: None
  bool splitPointsByVertexAttributes;

  /// @brief Field packedPrimInstancingMode, offset: 0x18, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode packedPrimInstancingMode;

  /// @brief Field handleBoxPartTypes, offset: 0x1c, size: 0x1, def value: None
  bool handleBoxPartTypes;

  /// @brief Field handleSpherePartTypes, offset: 0x1d, size: 0x1, def value: None
  bool handleSpherePartTypes;

  /// @brief Field checkPartChanges, offset: 0x1e, size: 0x1, def value: None
  bool checkPartChanges;

  /// @brief Field cacheMeshTopology, offset: 0x1f, size: 0x1, def value: None
  bool cacheMeshTopology;

  /// @brief Field extraFlags, offset: 0x20, size: 0x4, def value: None
  int32_t extraFlags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_CookOptions, 0x24>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, splitGeosByGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, splitGeosByAttribute) == 0x1, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, splitAttrSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, maxVerticesPerPrimitive) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, refineCurveToLinear) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, curveRefineLOD) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, clearErrorsAndWarnings) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, cookTemplatedGeos) == 0x15, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, splitPointsByVertexAttributes) == 0x16, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, packedPrimInstancingMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, handleBoxPartTypes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, handleSpherePartTypes) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, checkPartChanges) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, cacheMeshTopology) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CookOptions, extraFlags) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CookOptions, "HoudiniEngineUnity", "HAPI_CookOptions");
