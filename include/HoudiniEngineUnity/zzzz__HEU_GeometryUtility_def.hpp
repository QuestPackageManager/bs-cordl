#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_GeometryUtility)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeometryUtility;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeometryUtility);
// Type: HoudiniEngineUnity::HEU_GeometryUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9837))
// CS Name: ::HoudiniEngineUnity::HEU_GeometryUtility*
class CORDL_TYPE HEU_GeometryUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GeneratePerTriangle addr 0x21bef14 size 0x4c virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> GeneratePerTriangle(::UnityEngine::Mesh* meshSrc);

  /// @brief Method GenerateSecondaryUVSet addr 0x21c4674 size 0x44 virtual false final false
  static inline void GenerateSecondaryUVSet(::UnityEngine::Mesh* meshsrc);

  /// @brief Method CalculateMeshTangents addr 0x21bdeb8 size 0x4d8 virtual false final false
  static inline void CalculateMeshTangents(::UnityEngine::Mesh* mesh);

  /// @brief Method GenerateCubeMeshFromPoints addr 0x21c46b8 size 0xb00 virtual false final false
  static inline ::UnityEngine::Mesh* GenerateCubeMeshFromPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points,
                                                                ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> pointsColor, float_t size);

  /// @brief Method GetInstanceOutputName addr 0x21c51b8 size 0xbc virtual false final false
  static inline ::StringW GetInstanceOutputName(::StringW partName, ::ArrayW<::StringW, ::Array<::StringW>*> userPrefix, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeometryUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GeometryUtility(HEU_GeometryUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeometryUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GeometryUtility(HEU_GeometryUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GeometryUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeometryUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeometryUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeometryUtility*, "HoudiniEngineUnity", "HEU_GeometryUtility");
