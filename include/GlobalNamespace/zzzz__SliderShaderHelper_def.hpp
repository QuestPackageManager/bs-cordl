#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderShaderHelper)
namespace GlobalNamespace {
class SliderController;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderShaderHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderShaderHelper);
// Type: ::SliderShaderHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderShaderHelper*
class CORDL_TYPE SliderShaderHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_colorPropertyId, put = setStaticF_colorPropertyId)) int32_t colorPropertyId;

  /// @brief Field headFadeLengthPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_headFadeLengthPropertyId, put = setStaticF_headFadeLengthPropertyId)) int32_t headFadeLengthPropertyId;

  /// @brief Field headNoteJumpDataPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_headNoteJumpDataPropertyId, put = setStaticF_headNoteJumpDataPropertyId)) int32_t headNoteJumpDataPropertyId;

  /// @brief Field jumpDistancePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_jumpDistancePropertyId, put = setStaticF_jumpDistancePropertyId)) int32_t jumpDistancePropertyId;

  /// @brief Field jumpSpeedPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_jumpSpeedPropertyId, put = setStaticF_jumpSpeedPropertyId)) int32_t jumpSpeedPropertyId;

  /// @brief Field randomPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_randomPropertyId, put = setStaticF_randomPropertyId)) int32_t randomPropertyId;

  /// @brief Field saberAttractionMultiplier, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_saberAttractionMultiplier, put = setStaticF_saberAttractionMultiplier)) int32_t saberAttractionMultiplier;

  /// @brief Field saberAttractionPointPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_saberAttractionPointPropertyId, put = setStaticF_saberAttractionPointPropertyId)) int32_t saberAttractionPointPropertyId;

  /// @brief Field sliderLengthPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_sliderLengthPropertyId, put = setStaticF_sliderLengthPropertyId)) int32_t sliderLengthPropertyId;

  /// @brief Field sliderZLengthPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_sliderZLengthPropertyId, put = setStaticF_sliderZLengthPropertyId)) int32_t sliderZLengthPropertyId;

  /// @brief Field tailFadeLengthPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_tailFadeLengthPropertyId, put = setStaticF_tailFadeLengthPropertyId)) int32_t tailFadeLengthPropertyId;

  /// @brief Field tailHeadNoteJumpOffsetDifferencePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_tailHeadNoteJumpOffsetDifferencePropertyId,
                             put = setStaticF_tailHeadNoteJumpOffsetDifferencePropertyId)) int32_t tailHeadNoteJumpOffsetDifferencePropertyId;

  /// @brief Field tailNoteJumpDataPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_tailNoteJumpDataPropertyId, put = setStaticF_tailNoteJumpDataPropertyId)) int32_t tailNoteJumpDataPropertyId;

  /// @brief Field timeSinceHeadNoteJumpPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_timeSinceHeadNoteJumpPropertyId, put = setStaticF_timeSinceHeadNoteJumpPropertyId)) int32_t timeSinceHeadNoteJumpPropertyId;

  /// @brief Method EnableSaberAttraction, addr 0x241fe6c, size 0x88, virtual false, abstract: false, final false
  static inline void EnableSaberAttraction(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, bool enableSaberAttraction);

  /// @brief Method SetColor, addr 0x2422f04, size 0x9c, virtual false, abstract: false, final false
  static inline void SetColor(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, ::UnityEngine::Color color);

  /// @brief Method SetInitialProperties, addr 0x2422fa0, size 0x260, virtual false, abstract: false, final false
  static inline void SetInitialProperties(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, ::UnityEngine::Color sliderColor, float_t headNoteGravity, float_t tailNoteGravity,
                                          float_t noteJumpMovementSpeed, float_t jumpDistance, float_t sliderZLength, float_t sliderLength, bool hasHeadNote, bool hasTailNote, float_t randomValue);

  /// @brief Method SetInitialProperties, addr 0x241e324, size 0x158, virtual false, abstract: false, final false
  static inline void SetInitialProperties(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, ::GlobalNamespace::SliderController* sliderController, float_t noteJumpMovementSpeed);

  /// @brief Method SetSaberAttractionPoint, addr 0x2422e6c, size 0x98, virtual false, abstract: false, final false
  static inline void SetSaberAttractionPoint(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, ::UnityEngine::Vector3 attractPoint);

  /// @brief Method SetTailHeadNoteJumpOffsetDifference, addr 0x2422df0, size 0x7c, virtual false, abstract: false, final false
  static inline void SetTailHeadNoteJumpOffsetDifference(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, float_t tailHeadNoteJumpOffsetDifference);

  /// @brief Method SetTimeSinceHeadNoteJump, addr 0x2422d74, size 0x7c, virtual false, abstract: false, final false
  static inline void SetTimeSinceHeadNoteJump(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, float_t time);

  /// @brief Method UpdateMaterialPropertyBlock, addr 0x241f3e8, size 0x160, virtual false, abstract: false, final false
  static inline void UpdateMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, ::GlobalNamespace::SliderController* sliderController, float_t timeSinceHeadNoteJump,
                                                 float_t jumpOffsetY);

  static inline int32_t getStaticF_colorPropertyId();

  static inline int32_t getStaticF_headFadeLengthPropertyId();

  static inline int32_t getStaticF_headNoteJumpDataPropertyId();

  static inline int32_t getStaticF_jumpDistancePropertyId();

  static inline int32_t getStaticF_jumpSpeedPropertyId();

  static inline int32_t getStaticF_randomPropertyId();

  static inline int32_t getStaticF_saberAttractionMultiplier();

  static inline int32_t getStaticF_saberAttractionPointPropertyId();

  static inline int32_t getStaticF_sliderLengthPropertyId();

  static inline int32_t getStaticF_sliderZLengthPropertyId();

  static inline int32_t getStaticF_tailFadeLengthPropertyId();

  static inline int32_t getStaticF_tailHeadNoteJumpOffsetDifferencePropertyId();

  static inline int32_t getStaticF_tailNoteJumpDataPropertyId();

  static inline int32_t getStaticF_timeSinceHeadNoteJumpPropertyId();

  static inline void setStaticF_colorPropertyId(int32_t value);

  static inline void setStaticF_headFadeLengthPropertyId(int32_t value);

  static inline void setStaticF_headNoteJumpDataPropertyId(int32_t value);

  static inline void setStaticF_jumpDistancePropertyId(int32_t value);

  static inline void setStaticF_jumpSpeedPropertyId(int32_t value);

  static inline void setStaticF_randomPropertyId(int32_t value);

  static inline void setStaticF_saberAttractionMultiplier(int32_t value);

  static inline void setStaticF_saberAttractionPointPropertyId(int32_t value);

  static inline void setStaticF_sliderLengthPropertyId(int32_t value);

  static inline void setStaticF_sliderZLengthPropertyId(int32_t value);

  static inline void setStaticF_tailFadeLengthPropertyId(int32_t value);

  static inline void setStaticF_tailHeadNoteJumpOffsetDifferencePropertyId(int32_t value);

  static inline void setStaticF_tailNoteJumpDataPropertyId(int32_t value);

  static inline void setStaticF_timeSinceHeadNoteJumpPropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderShaderHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderShaderHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderShaderHelper(SliderShaderHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderShaderHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderShaderHelper(SliderShaderHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderShaderHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderShaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderShaderHelper*, "", "SliderShaderHelper");
