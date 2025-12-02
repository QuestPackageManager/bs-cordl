#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ColorSpaceUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
CORDL_MODULE_EXPORT(ColorSpaceUtils)
// Forward declare root types
namespace UnityEngine::Rendering {
class ColorSpaceUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ColorSpaceUtils);
// Dependencies System.Object, Unity.Mathematics.float3x3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ColorSpaceUtils
class CORDL_TYPE ColorSpaceUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field P3D65ToRec2020Mat, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_P3D65ToRec2020Mat, put = setStaticF_P3D65ToRec2020Mat)) ::Unity::Mathematics::float3x3 P3D65ToRec2020Mat;

  /// @brief Field Rec2020ToP3D65Mat, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_Rec2020ToP3D65Mat, put = setStaticF_Rec2020ToP3D65Mat)) ::Unity::Mathematics::float3x3 Rec2020ToP3D65Mat;

  /// @brief Field Rec2020ToRec709Mat, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_Rec2020ToRec709Mat, put = setStaticF_Rec2020ToRec709Mat)) ::Unity::Mathematics::float3x3 Rec2020ToRec709Mat;

  /// @brief Field Rec709ToP3D65Mat, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_Rec709ToP3D65Mat, put = setStaticF_Rec709ToP3D65Mat)) ::Unity::Mathematics::float3x3 Rec709ToP3D65Mat;

  /// @brief Field Rec709ToRec2020Mat, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_Rec709ToRec2020Mat, put = setStaticF_Rec709ToRec2020Mat)) ::Unity::Mathematics::float3x3 Rec709ToRec2020Mat;

  static inline ::Unity::Mathematics::float3x3 getStaticF_P3D65ToRec2020Mat();

  static inline ::Unity::Mathematics::float3x3 getStaticF_Rec2020ToP3D65Mat();

  static inline ::Unity::Mathematics::float3x3 getStaticF_Rec2020ToRec709Mat();

  static inline ::Unity::Mathematics::float3x3 getStaticF_Rec709ToP3D65Mat();

  static inline ::Unity::Mathematics::float3x3 getStaticF_Rec709ToRec2020Mat();

  static inline void setStaticF_P3D65ToRec2020Mat(::Unity::Mathematics::float3x3 value);

  static inline void setStaticF_Rec2020ToP3D65Mat(::Unity::Mathematics::float3x3 value);

  static inline void setStaticF_Rec2020ToRec709Mat(::Unity::Mathematics::float3x3 value);

  static inline void setStaticF_Rec709ToP3D65Mat(::Unity::Mathematics::float3x3 value);

  static inline void setStaticF_Rec709ToRec2020Mat(::Unity::Mathematics::float3x3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSpaceUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSpaceUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSpaceUtils(ColorSpaceUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSpaceUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSpaceUtils(ColorSpaceUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12242 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ColorSpaceUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ColorSpaceUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ColorSpaceUtils*, "UnityEngine.Rendering", "ColorSpaceUtils");
