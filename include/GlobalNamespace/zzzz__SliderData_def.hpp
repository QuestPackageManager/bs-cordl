#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
namespace GlobalNamespace {
struct __SliderData__Type;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SliderData__Type;
}
namespace GlobalNamespace {
class SliderData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SliderData__Type);
MARK_REF_PTR_T(::GlobalNamespace::SliderData);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SliderData::Type
struct CORDL_TYPE __SliderData__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SliderData__Type_Unwrapped
  enum struct ____SliderData__Type_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Burst = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SliderData__Type_Unwrapped() const noexcept {
    return static_cast<____SliderData__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderData__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SliderData__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Burst value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SliderData__Type const Burst;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SliderData__Type const Normal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderData__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderData__Type, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SliderData
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderData*
class CORDL_TYPE SliderData : public ::GlobalNamespace::BeatmapObjectData {
public:
  // Declarations
  using Type = ::GlobalNamespace::__SliderData__Type;

  /// @brief Field <colorType>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__colorType_k__BackingField, put = __cordl_internal_set__colorType_k__BackingField))::GlobalNamespace::ColorType _colorType_k__BackingField;

  /// @brief Field <hasHeadNote>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__hasHeadNote_k__BackingField, put = __cordl_internal_set__hasHeadNote_k__BackingField)) bool _hasHeadNote_k__BackingField;

  /// @brief Field <hasTailNote>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__hasTailNote_k__BackingField, put = __cordl_internal_set__hasTailNote_k__BackingField)) bool _hasTailNote_k__BackingField;

  /// @brief Field <headBeforeJumpLineLayer>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__headBeforeJumpLineLayer_k__BackingField,
                      put = __cordl_internal_set__headBeforeJumpLineLayer_k__BackingField))::GlobalNamespace::NoteLineLayer _headBeforeJumpLineLayer_k__BackingField;

  /// @brief Field <headControlPointLengthMultiplier>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__headControlPointLengthMultiplier_k__BackingField,
                      put = __cordl_internal_set__headControlPointLengthMultiplier_k__BackingField)) float_t _headControlPointLengthMultiplier_k__BackingField;

  /// @brief Field <headCutDirectionAngleOffset>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__headCutDirectionAngleOffset_k__BackingField,
                      put = __cordl_internal_set__headCutDirectionAngleOffset_k__BackingField)) float_t _headCutDirectionAngleOffset_k__BackingField;

  /// @brief Field <headCutDirection>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__headCutDirection_k__BackingField,
                      put = __cordl_internal_set__headCutDirection_k__BackingField))::GlobalNamespace::NoteCutDirection _headCutDirection_k__BackingField;

  /// @brief Field <headLineIndex>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__headLineIndex_k__BackingField, put = __cordl_internal_set__headLineIndex_k__BackingField)) int32_t _headLineIndex_k__BackingField;

  /// @brief Field <headLineLayer>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__headLineLayer_k__BackingField,
                      put = __cordl_internal_set__headLineLayer_k__BackingField))::GlobalNamespace::NoteLineLayer _headLineLayer_k__BackingField;

  /// @brief Field <midAnchorMode>k__BackingField, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__midAnchorMode_k__BackingField,
                      put = __cordl_internal_set__midAnchorMode_k__BackingField))::GlobalNamespace::SliderMidAnchorMode _midAnchorMode_k__BackingField;

  /// @brief Field <sliceCount>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__sliceCount_k__BackingField, put = __cordl_internal_set__sliceCount_k__BackingField)) int32_t _sliceCount_k__BackingField;

  /// @brief Field <sliderType>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__sliderType_k__BackingField, put = __cordl_internal_set__sliderType_k__BackingField))::GlobalNamespace::__SliderData__Type _sliderType_k__BackingField;

  /// @brief Field <squishAmount>k__BackingField, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__squishAmount_k__BackingField, put = __cordl_internal_set__squishAmount_k__BackingField)) float_t _squishAmount_k__BackingField;

  /// @brief Field <tailBeforeJumpLineLayer>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__tailBeforeJumpLineLayer_k__BackingField,
                      put = __cordl_internal_set__tailBeforeJumpLineLayer_k__BackingField))::GlobalNamespace::NoteLineLayer _tailBeforeJumpLineLayer_k__BackingField;

  /// @brief Field <tailControlPointLengthMultiplier>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__tailControlPointLengthMultiplier_k__BackingField,
                      put = __cordl_internal_set__tailControlPointLengthMultiplier_k__BackingField)) float_t _tailControlPointLengthMultiplier_k__BackingField;

  /// @brief Field <tailCutDirectionAngleOffset>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__tailCutDirectionAngleOffset_k__BackingField,
                      put = __cordl_internal_set__tailCutDirectionAngleOffset_k__BackingField)) float_t _tailCutDirectionAngleOffset_k__BackingField;

  /// @brief Field <tailCutDirection>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__tailCutDirection_k__BackingField,
                      put = __cordl_internal_set__tailCutDirection_k__BackingField))::GlobalNamespace::NoteCutDirection _tailCutDirection_k__BackingField;

  /// @brief Field <tailLineIndex>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__tailLineIndex_k__BackingField, put = __cordl_internal_set__tailLineIndex_k__BackingField)) int32_t _tailLineIndex_k__BackingField;

  /// @brief Field <tailLineLayer>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__tailLineLayer_k__BackingField,
                      put = __cordl_internal_set__tailLineLayer_k__BackingField))::GlobalNamespace::NoteLineLayer _tailLineLayer_k__BackingField;

  /// @brief Field <tailTime>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__tailTime_k__BackingField, put = __cordl_internal_set__tailTime_k__BackingField)) float_t _tailTime_k__BackingField;

  __declspec(property(get = get_colorType, put = set_colorType))::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_hasHeadNote, put = set_hasHeadNote)) bool hasHeadNote;

  __declspec(property(get = get_hasTailNote, put = set_hasTailNote)) bool hasTailNote;

  __declspec(property(get = get_headBeforeJumpLineLayer, put = set_headBeforeJumpLineLayer))::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer;

  __declspec(property(get = get_headControlPointLengthMultiplier, put = set_headControlPointLengthMultiplier)) float_t headControlPointLengthMultiplier;

  __declspec(property(get = get_headCutDirection, put = set_headCutDirection))::GlobalNamespace::NoteCutDirection headCutDirection;

  __declspec(property(get = get_headCutDirectionAngleOffset, put = set_headCutDirectionAngleOffset)) float_t headCutDirectionAngleOffset;

  __declspec(property(get = get_headLineIndex, put = set_headLineIndex)) int32_t headLineIndex;

  __declspec(property(get = get_headLineLayer, put = set_headLineLayer))::GlobalNamespace::NoteLineLayer headLineLayer;

  __declspec(property(get = get_midAnchorMode, put = set_midAnchorMode))::GlobalNamespace::SliderMidAnchorMode midAnchorMode;

  __declspec(property(get = get_sliceCount, put = set_sliceCount)) int32_t sliceCount;

  __declspec(property(get = get_sliderType, put = set_sliderType))::GlobalNamespace::__SliderData__Type sliderType;

  __declspec(property(get = get_squishAmount, put = set_squishAmount)) float_t squishAmount;

  __declspec(property(get = get_subtypeGroupIdentifier)) int32_t subtypeGroupIdentifier;

  __declspec(property(get = get_tailBeforeJumpLineLayer, put = set_tailBeforeJumpLineLayer))::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer;

  __declspec(property(get = get_tailControlPointLengthMultiplier, put = set_tailControlPointLengthMultiplier)) float_t tailControlPointLengthMultiplier;

  __declspec(property(get = get_tailCutDirection, put = set_tailCutDirection))::GlobalNamespace::NoteCutDirection tailCutDirection;

  __declspec(property(get = get_tailCutDirectionAngleOffset, put = set_tailCutDirectionAngleOffset)) float_t tailCutDirectionAngleOffset;

  __declspec(property(get = get_tailLineIndex, put = set_tailLineIndex)) int32_t tailLineIndex;

  __declspec(property(get = get_tailLineLayer, put = set_tailLineLayer))::GlobalNamespace::NoteLineLayer tailLineLayer;

  __declspec(property(get = get_tailTime, put = set_tailTime)) float_t tailTime;

  /// @brief Method CreateBurstSliderData, addr 0xe71888, size 0x118, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SliderData* CreateBurstSliderData(::GlobalNamespace::ColorType colorType, float_t headTime, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                     ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime,
                                                                     int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer,
                                                                     int32_t sliceCount, float_t squishAmount);

  /// @brief Method CreateSliderData, addr 0xe7176c, size 0x11c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SliderData* CreateSliderData(::GlobalNamespace::ColorType colorType, float_t headTime, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier,
                                                                ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex,
                                                                ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer,
                                                                float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection,
                                                                ::GlobalNamespace::SliderMidAnchorMode midAnchorMode);

  /// @brief Method GetCopy, addr 0xe714c4, size 0x15c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method Mirror, addr 0xe719a0, size 0x8c, virtual true, abstract: false, final false
  inline void Mirror(int32_t lineCount);

  static inline ::GlobalNamespace::SliderData* New_ctor(::GlobalNamespace::__SliderData__Type sliderType, ::GlobalNamespace::ColorType colorType, bool hasHeadNote, float_t headTime,
                                                        int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer,
                                                        float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset,
                                                        bool hasTailNote, float_t tailTime, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer,
                                                        ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier,
                                                        ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode midAnchorMode,
                                                        int32_t sliceCount, float_t squishAmount);

  /// @brief Method SetCutDirectionAngleOffset, addr 0xe71a70, size 0xc, virtual false, abstract: false, final false
  inline void SetCutDirectionAngleOffset(float_t headCutDirectionAngleOffset, float_t tailCutDirectionAngleOffset);

  /// @brief Method SetHasHeadNote, addr 0xe71a48, size 0xc, virtual false, abstract: false, final false
  inline void SetHasHeadNote(bool hasHeadNote);

  /// @brief Method SetHasTailNote, addr 0xe71a54, size 0xc, virtual false, abstract: false, final false
  inline void SetHasTailNote(bool hasTailNote);

  /// @brief Method SetHeadBeforeJumpLineLayer, addr 0xe71a60, size 0x8, virtual false, abstract: false, final false
  inline void SetHeadBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer lineLayer);

  /// @brief Method SetTailBeforeJumpLineLayer, addr 0xe71a68, size 0x8, virtual false, abstract: false, final false
  inline void SetTailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer lineLayer);

  /// @brief Method SubtypeIdentifier, addr 0xe71768, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(::GlobalNamespace::ColorType colorType);

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get__colorType_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get__colorType_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasHeadNote_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasHeadNote_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasTailNote_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasTailNote_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__headBeforeJumpLineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__headBeforeJumpLineLayer_k__BackingField();

  constexpr float_t const& __cordl_internal_get__headControlPointLengthMultiplier_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__headControlPointLengthMultiplier_k__BackingField();

  constexpr float_t const& __cordl_internal_get__headCutDirectionAngleOffset_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__headCutDirectionAngleOffset_k__BackingField();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get__headCutDirection_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get__headCutDirection_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__headLineIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__headLineIndex_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__headLineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__headLineLayer_k__BackingField();

  constexpr ::GlobalNamespace::SliderMidAnchorMode const& __cordl_internal_get__midAnchorMode_k__BackingField() const;

  constexpr ::GlobalNamespace::SliderMidAnchorMode& __cordl_internal_get__midAnchorMode_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__sliceCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__sliceCount_k__BackingField();

  constexpr ::GlobalNamespace::__SliderData__Type const& __cordl_internal_get__sliderType_k__BackingField() const;

  constexpr ::GlobalNamespace::__SliderData__Type& __cordl_internal_get__sliderType_k__BackingField();

  constexpr float_t const& __cordl_internal_get__squishAmount_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__squishAmount_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__tailBeforeJumpLineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__tailBeforeJumpLineLayer_k__BackingField();

  constexpr float_t const& __cordl_internal_get__tailControlPointLengthMultiplier_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__tailControlPointLengthMultiplier_k__BackingField();

  constexpr float_t const& __cordl_internal_get__tailCutDirectionAngleOffset_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__tailCutDirectionAngleOffset_k__BackingField();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get__tailCutDirection_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get__tailCutDirection_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__tailLineIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__tailLineIndex_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__tailLineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__tailLineLayer_k__BackingField();

  constexpr float_t const& __cordl_internal_get__tailTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__tailTime_k__BackingField();

  constexpr void __cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set__hasHeadNote_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasTailNote_k__BackingField(bool value);

  constexpr void __cordl_internal_set__headBeforeJumpLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__headControlPointLengthMultiplier_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__headCutDirectionAngleOffset_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__headCutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set__headLineIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__headLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__midAnchorMode_k__BackingField(::GlobalNamespace::SliderMidAnchorMode value);

  constexpr void __cordl_internal_set__sliceCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__sliderType_k__BackingField(::GlobalNamespace::__SliderData__Type value);

  constexpr void __cordl_internal_set__squishAmount_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__tailBeforeJumpLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__tailControlPointLengthMultiplier_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__tailCutDirectionAngleOffset_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__tailCutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set__tailLineIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__tailLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__tailTime_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0xe71620, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__SliderData__Type sliderType, ::GlobalNamespace::ColorType colorType, bool hasHeadNote, float_t headTime, int32_t headLineIndex,
                    ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier,
                    ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote, float_t tailTime, int32_t tailLineIndex,
                    ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier,
                    ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount,
                    float_t squishAmount);

  /// @brief Method get_colorType, addr 0xe7137c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorType get_colorType();

  /// @brief Method get_hasHeadNote, addr 0xe7139c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasHeadNote();

  /// @brief Method get_hasTailNote, addr 0xe71410, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasTailNote();

  /// @brief Method get_headBeforeJumpLineLayer, addr 0xe713e0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_headBeforeJumpLineLayer();

  /// @brief Method get_headControlPointLengthMultiplier, addr 0xe713b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_headControlPointLengthMultiplier();

  /// @brief Method get_headCutDirection, addr 0xe713f0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutDirection get_headCutDirection();

  /// @brief Method get_headCutDirectionAngleOffset, addr 0xe71400, size 0x8, virtual false, abstract: false, final false
  inline float_t get_headCutDirectionAngleOffset();

  /// @brief Method get_headLineIndex, addr 0xe713c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_headLineIndex();

  /// @brief Method get_headLineLayer, addr 0xe713d0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_headLineLayer();

  /// @brief Method get_midAnchorMode, addr 0xe71494, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderMidAnchorMode get_midAnchorMode();

  /// @brief Method get_sliceCount, addr 0xe714a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sliceCount();

  /// @brief Method get_sliderType, addr 0xe7138c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SliderData__Type get_sliderType();

  /// @brief Method get_squishAmount, addr 0xe714b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_squishAmount();

  /// @brief Method get_subtypeGroupIdentifier, addr 0xe71374, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeGroupIdentifier();

  /// @brief Method get_tailBeforeJumpLineLayer, addr 0xe71464, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_tailBeforeJumpLineLayer();

  /// @brief Method get_tailControlPointLengthMultiplier, addr 0xe71444, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tailControlPointLengthMultiplier();

  /// @brief Method get_tailCutDirection, addr 0xe71474, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutDirection get_tailCutDirection();

  /// @brief Method get_tailCutDirectionAngleOffset, addr 0xe71484, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tailCutDirectionAngleOffset();

  /// @brief Method get_tailLineIndex, addr 0xe71434, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_tailLineIndex();

  /// @brief Method get_tailLineLayer, addr 0xe71454, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_tailLineLayer();

  /// @brief Method get_tailTime, addr 0xe71424, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tailTime();

  /// @brief Method set_colorType, addr 0xe71384, size 0x8, virtual false, abstract: false, final false
  inline void set_colorType(::GlobalNamespace::ColorType value);

  /// @brief Method set_hasHeadNote, addr 0xe713a4, size 0xc, virtual false, abstract: false, final false
  inline void set_hasHeadNote(bool value);

  /// @brief Method set_hasTailNote, addr 0xe71418, size 0xc, virtual false, abstract: false, final false
  inline void set_hasTailNote(bool value);

  /// @brief Method set_headBeforeJumpLineLayer, addr 0xe713e8, size 0x8, virtual false, abstract: false, final false
  inline void set_headBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_headControlPointLengthMultiplier, addr 0xe713b8, size 0x8, virtual false, abstract: false, final false
  inline void set_headControlPointLengthMultiplier(float_t value);

  /// @brief Method set_headCutDirection, addr 0xe713f8, size 0x8, virtual false, abstract: false, final false
  inline void set_headCutDirection(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method set_headCutDirectionAngleOffset, addr 0xe71408, size 0x8, virtual false, abstract: false, final false
  inline void set_headCutDirectionAngleOffset(float_t value);

  /// @brief Method set_headLineIndex, addr 0xe713c8, size 0x8, virtual false, abstract: false, final false
  inline void set_headLineIndex(int32_t value);

  /// @brief Method set_headLineLayer, addr 0xe713d8, size 0x8, virtual false, abstract: false, final false
  inline void set_headLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_midAnchorMode, addr 0xe7149c, size 0x8, virtual false, abstract: false, final false
  inline void set_midAnchorMode(::GlobalNamespace::SliderMidAnchorMode value);

  /// @brief Method set_sliceCount, addr 0xe714ac, size 0x8, virtual false, abstract: false, final false
  inline void set_sliceCount(int32_t value);

  /// @brief Method set_sliderType, addr 0xe71394, size 0x8, virtual false, abstract: false, final false
  inline void set_sliderType(::GlobalNamespace::__SliderData__Type value);

  /// @brief Method set_squishAmount, addr 0xe714bc, size 0x8, virtual false, abstract: false, final false
  inline void set_squishAmount(float_t value);

  /// @brief Method set_tailBeforeJumpLineLayer, addr 0xe7146c, size 0x8, virtual false, abstract: false, final false
  inline void set_tailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_tailControlPointLengthMultiplier, addr 0xe7144c, size 0x8, virtual false, abstract: false, final false
  inline void set_tailControlPointLengthMultiplier(float_t value);

  /// @brief Method set_tailCutDirection, addr 0xe7147c, size 0x8, virtual false, abstract: false, final false
  inline void set_tailCutDirection(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method set_tailCutDirectionAngleOffset, addr 0xe7148c, size 0x8, virtual false, abstract: false, final false
  inline void set_tailCutDirectionAngleOffset(float_t value);

  /// @brief Method set_tailLineIndex, addr 0xe7143c, size 0x8, virtual false, abstract: false, final false
  inline void set_tailLineIndex(int32_t value);

  /// @brief Method set_tailLineLayer, addr 0xe7145c, size 0x8, virtual false, abstract: false, final false
  inline void set_tailLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_tailTime, addr 0xe7142c, size 0x8, virtual false, abstract: false, final false
  inline void set_tailTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderData(SliderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderData(SliderData const&) = delete;

  /// @brief Field <colorType>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ____colorType_k__BackingField;

  /// @brief Field <sliderType>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__SliderData__Type ____sliderType_k__BackingField;

  /// @brief Field <hasHeadNote>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____hasHeadNote_k__BackingField;

  /// @brief Field <headControlPointLengthMultiplier>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  float_t ____headControlPointLengthMultiplier_k__BackingField;

  /// @brief Field <headLineIndex>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____headLineIndex_k__BackingField;

  /// @brief Field <headLineLayer>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____headLineLayer_k__BackingField;

  /// @brief Field <headBeforeJumpLineLayer>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____headBeforeJumpLineLayer_k__BackingField;

  /// @brief Field <headCutDirection>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ____headCutDirection_k__BackingField;

  /// @brief Field <headCutDirectionAngleOffset>k__BackingField, offset: 0x40, size: 0x4, def value: None
  float_t ____headCutDirectionAngleOffset_k__BackingField;

  /// @brief Field <hasTailNote>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____hasTailNote_k__BackingField;

  /// @brief Field <tailTime>k__BackingField, offset: 0x48, size: 0x4, def value: None
  float_t ____tailTime_k__BackingField;

  /// @brief Field <tailLineIndex>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  int32_t ____tailLineIndex_k__BackingField;

  /// @brief Field <tailControlPointLengthMultiplier>k__BackingField, offset: 0x50, size: 0x4, def value: None
  float_t ____tailControlPointLengthMultiplier_k__BackingField;

  /// @brief Field <tailLineLayer>k__BackingField, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____tailLineLayer_k__BackingField;

  /// @brief Field <tailBeforeJumpLineLayer>k__BackingField, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____tailBeforeJumpLineLayer_k__BackingField;

  /// @brief Field <tailCutDirection>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ____tailCutDirection_k__BackingField;

  /// @brief Field <tailCutDirectionAngleOffset>k__BackingField, offset: 0x60, size: 0x4, def value: None
  float_t ____tailCutDirectionAngleOffset_k__BackingField;

  /// @brief Field <midAnchorMode>k__BackingField, offset: 0x64, size: 0x4, def value: None
  ::GlobalNamespace::SliderMidAnchorMode ____midAnchorMode_k__BackingField;

  /// @brief Field <sliceCount>k__BackingField, offset: 0x68, size: 0x4, def value: None
  int32_t ____sliceCount_k__BackingField;

  /// @brief Field <squishAmount>k__BackingField, offset: 0x6c, size: 0x4, def value: None
  float_t ____squishAmount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderData, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____colorType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____sliderType_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____hasHeadNote_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____headControlPointLengthMultiplier_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____headLineIndex_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____headLineLayer_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____headBeforeJumpLineLayer_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____headCutDirection_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____headCutDirectionAngleOffset_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____hasTailNote_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____tailTime_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____tailLineIndex_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____tailControlPointLengthMultiplier_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____tailLineLayer_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____tailBeforeJumpLineLayer_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____tailCutDirection_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____tailCutDirectionAngleOffset_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____midAnchorMode_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____sliceCount_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderData, ____squishAmount_k__BackingField) == 0x6c, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderData__Type, "", "SliderData/Type");
NEED_NO_BOX(::GlobalNamespace::SliderData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderData*, "", "SliderData");
