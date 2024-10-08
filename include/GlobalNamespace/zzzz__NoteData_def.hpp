#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteData)
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
struct __NoteData__GameplayType;
}
namespace GlobalNamespace {
struct __NoteData__ScoringType;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace GlobalNamespace {
struct __NoteData__ScoringType;
}
namespace GlobalNamespace {
class NoteData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NoteData__GameplayType);
MARK_VAL_T(::GlobalNamespace::__NoteData__ScoringType);
MARK_REF_PTR_T(::GlobalNamespace::NoteData);
// Type: ::GameplayType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NoteData::GameplayType
struct CORDL_TYPE __NoteData__GameplayType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NoteData__GameplayType_Unwrapped
  enum struct ____NoteData__GameplayType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Bomb = static_cast<int32_t>(0x1),
    __E_BurstSliderHead = static_cast<int32_t>(0x2),
    __E_BurstSliderElement = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NoteData__GameplayType_Unwrapped() const noexcept {
    return static_cast<____NoteData__GameplayType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteData__GameplayType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteData__GameplayType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bomb value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NoteData__GameplayType const Bomb;

  /// @brief Field BurstSliderElement value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__NoteData__GameplayType const BurstSliderElement;

  /// @brief Field BurstSliderHead value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NoteData__GameplayType const BurstSliderHead;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NoteData__GameplayType const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17024 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteData__GameplayType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteData__GameplayType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScoringType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NoteData::ScoringType
struct CORDL_TYPE __NoteData__ScoringType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NoteData__ScoringType_Unwrapped
  enum struct ____NoteData__ScoringType_Unwrapped : int32_t {
    __E_Ignore = static_cast<int32_t>(0xffffffff),
    __E_NoScore = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
    __E_SliderHead = static_cast<int32_t>(0x2),
    __E_SliderTail = static_cast<int32_t>(0x3),
    __E_BurstSliderHead = static_cast<int32_t>(0x4),
    __E_BurstSliderElement = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NoteData__ScoringType_Unwrapped() const noexcept {
    return static_cast<____NoteData__ScoringType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteData__ScoringType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteData__ScoringType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BurstSliderElement value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__NoteData__ScoringType const BurstSliderElement;

  /// @brief Field BurstSliderHead value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__NoteData__ScoringType const BurstSliderHead;

  /// @brief Field Ignore value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__NoteData__ScoringType const Ignore;

  /// @brief Field NoScore value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NoteData__ScoringType const NoScore;

  /// @brief Field Normal value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NoteData__ScoringType const Normal;

  /// @brief Field SliderHead value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NoteData__ScoringType const SliderHead;

  /// @brief Field SliderTail value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__NoteData__ScoringType const SliderTail;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17025 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteData__ScoringType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteData__ScoringType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteData
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteData*
class CORDL_TYPE NoteData : public ::GlobalNamespace::BeatmapObjectData {
public:
  // Declarations
  using GameplayType = ::GlobalNamespace::__NoteData__GameplayType;

  using ScoringType = ::GlobalNamespace::__NoteData__ScoringType;

  /// @brief Field <beforeJumpNoteLineLayer>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__beforeJumpNoteLineLayer_k__BackingField,
                      put = __cordl_internal_set__beforeJumpNoteLineLayer_k__BackingField)) ::GlobalNamespace::NoteLineLayer _beforeJumpNoteLineLayer_k__BackingField;

  /// @brief Field <colorType>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__colorType_k__BackingField, put = __cordl_internal_set__colorType_k__BackingField)) ::GlobalNamespace::ColorType _colorType_k__BackingField;

  /// @brief Field <cutDirectionAngleOffset>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__cutDirectionAngleOffset_k__BackingField,
                      put = __cordl_internal_set__cutDirectionAngleOffset_k__BackingField)) float_t _cutDirectionAngleOffset_k__BackingField;

  /// @brief Field <cutDirection>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__cutDirection_k__BackingField,
                      put = __cordl_internal_set__cutDirection_k__BackingField)) ::GlobalNamespace::NoteCutDirection _cutDirection_k__BackingField;

  /// @brief Field <cutSfxVolumeMultiplier>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__cutSfxVolumeMultiplier_k__BackingField,
                      put = __cordl_internal_set__cutSfxVolumeMultiplier_k__BackingField)) float_t _cutSfxVolumeMultiplier_k__BackingField;

  /// @brief Field <flipLineIndex>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__flipLineIndex_k__BackingField, put = __cordl_internal_set__flipLineIndex_k__BackingField)) int32_t _flipLineIndex_k__BackingField;

  /// @brief Field <flipYSide>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__flipYSide_k__BackingField, put = __cordl_internal_set__flipYSide_k__BackingField)) float_t _flipYSide_k__BackingField;

  /// @brief Field <gameplayType>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__gameplayType_k__BackingField,
                      put = __cordl_internal_set__gameplayType_k__BackingField)) ::GlobalNamespace::__NoteData__GameplayType _gameplayType_k__BackingField;

  /// @brief Field <isArcHead>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isArcHead_k__BackingField, put = __cordl_internal_set__isArcHead_k__BackingField)) bool _isArcHead_k__BackingField;

  /// @brief Field <isArcTail>k__BackingField, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__isArcTail_k__BackingField, put = __cordl_internal_set__isArcTail_k__BackingField)) bool _isArcTail_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__lineIndex_k__BackingField, put = __cordl_internal_set__lineIndex_k__BackingField)) int32_t _lineIndex_k__BackingField;

  /// @brief Field <noteLineLayer>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__noteLineLayer_k__BackingField,
                      put = __cordl_internal_set__noteLineLayer_k__BackingField)) ::GlobalNamespace::NoteLineLayer _noteLineLayer_k__BackingField;

  /// @brief Field <scoringType>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__scoringType_k__BackingField,
                      put = __cordl_internal_set__scoringType_k__BackingField)) ::GlobalNamespace::__NoteData__ScoringType _scoringType_k__BackingField;

  /// @brief Field <timeToNextColorNote>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToNextColorNote_k__BackingField, put = __cordl_internal_set__timeToNextColorNote_k__BackingField)) float_t _timeToNextColorNote_k__BackingField;

  /// @brief Field <timeToPrevColorNote>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToPrevColorNote_k__BackingField, put = __cordl_internal_set__timeToPrevColorNote_k__BackingField)) float_t _timeToPrevColorNote_k__BackingField;

  __declspec(property(get = get_beforeJumpNoteLineLayer, put = set_beforeJumpNoteLineLayer)) ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer;

  __declspec(property(get = get_colorType, put = set_colorType)) ::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_cutDirection, put = set_cutDirection)) ::GlobalNamespace::NoteCutDirection cutDirection;

  __declspec(property(get = get_cutDirectionAngleOffset, put = set_cutDirectionAngleOffset)) float_t cutDirectionAngleOffset;

  __declspec(property(get = get_cutSfxVolumeMultiplier, put = set_cutSfxVolumeMultiplier)) float_t cutSfxVolumeMultiplier;

  __declspec(property(get = get_flipLineIndex, put = set_flipLineIndex)) int32_t flipLineIndex;

  __declspec(property(get = get_flipYSide, put = set_flipYSide)) float_t flipYSide;

  __declspec(property(get = get_gameplayType, put = set_gameplayType)) ::GlobalNamespace::__NoteData__GameplayType gameplayType;

  __declspec(property(get = get_isArcHead, put = set_isArcHead)) bool isArcHead;

  __declspec(property(get = get_isArcTail, put = set_isArcTail)) bool isArcTail;

  __declspec(property(get = get_lineIndex, put = set_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_noteLineLayer, put = set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer noteLineLayer;

  __declspec(property(get = get_scoringType, put = set_scoringType)) ::GlobalNamespace::__NoteData__ScoringType scoringType;

  __declspec(property(get = get_subtypeGroupIdentifier)) int32_t subtypeGroupIdentifier;

  __declspec(property(get = get_timeToNextColorNote, put = set_timeToNextColorNote)) float_t timeToNextColorNote;

  __declspec(property(get = get_timeToPrevColorNote, put = set_timeToPrevColorNote)) float_t timeToPrevColorNote;

  /// @brief Method ChangeNoteCutDirection, addr 0x2210160, size 0x8, virtual false, abstract: false, final false
  inline void ChangeNoteCutDirection(::GlobalNamespace::NoteCutDirection newCutDirection);

  /// @brief Method ChangeToBurstSliderHead, addr 0x2210024, size 0x10, virtual false, abstract: false, final false
  inline void ChangeToBurstSliderHead();

  /// @brief Method ChangeToGameNote, addr 0x2210034, size 0x10, virtual false, abstract: false, final false
  inline void ChangeToGameNote();

  /// @brief Method CopyWith, addr 0x220fd30, size 0x2ec, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteData* CopyWith(::System::Nullable_1<float_t> time, ::System::Nullable_1<int32_t> beat, ::System::Nullable_1<int32_t> lineIndex,
                                               ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> noteLineLayer, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> beforeJumpNoteLineLayer,
                                               ::System::Nullable_1<::GlobalNamespace::__NoteData__GameplayType> gameplayType,
                                               ::System::Nullable_1<::GlobalNamespace::__NoteData__ScoringType> scoringType, ::System::Nullable_1<::GlobalNamespace::ColorType> colorType,
                                               ::System::Nullable_1<::GlobalNamespace::NoteCutDirection> cutDirection, ::System::Nullable_1<float_t> timeToNextColorNote,
                                               ::System::Nullable_1<float_t> timeToPrevColorNote, ::System::Nullable_1<int32_t> flipLineIndex, ::System::Nullable_1<float_t> flipYSide,
                                               ::System::Nullable_1<float_t> cutDirectionAngleOffset, ::System::Nullable_1<float_t> cutSfxVolumeMultiplier);

  /// @brief Method CreateBasicNoteData, addr 0x220fb9c, size 0xc4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteData* CreateBasicNoteData(float_t time, float_t beat, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::ColorType colorType,
                                                                 ::GlobalNamespace::NoteCutDirection cutDirection);

  /// @brief Method CreateBombNoteData, addr 0x220fae8, size 0xb4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteData* CreateBombNoteData(float_t time, float_t beat, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method CreateBurstSliderNoteData, addr 0x220fc60, size 0xd0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteData* CreateBurstSliderNoteData(float_t time, float_t beat, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                                       ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::ColorType colorType,
                                                                       ::GlobalNamespace::NoteCutDirection cutDirection, float_t cutSfxVolumeMultiplier);

  /// @brief Method GetCopy, addr 0x220f94c, size 0xd4, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method MarkAsSliderHead, addr 0x2210044, size 0x14, virtual false, abstract: false, final false
  inline void MarkAsSliderHead();

  /// @brief Method MarkAsSliderTail, addr 0x2210058, size 0x14, virtual false, abstract: false, final false
  inline void MarkAsSliderTail();

  /// @brief Method Mirror, addr 0x22100e8, size 0x6c, virtual true, abstract: false, final false
  inline void Mirror(int32_t lineCount);

  static inline ::GlobalNamespace::NoteData* New_ctor(float_t time, float_t beat, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                      ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::__NoteData__GameplayType gameplayType,
                                                      ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                      float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, float_t cutDirectionAngleOffset,
                                                      float_t cutSfxVolumeMultiplier);

  /// @brief Method ResetNoteFlip, addr 0x22100dc, size 0xc, virtual false, abstract: false, final false
  inline void ResetNoteFlip();

  /// @brief Method SetBeforeJumpNoteLineLayer, addr 0x221001c, size 0x8, virtual false, abstract: false, final false
  inline void SetBeforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer lineLayer);

  /// @brief Method SetCutDirectionAngleOffset, addr 0x22100d4, size 0x8, virtual false, abstract: false, final false
  inline void SetCutDirectionAngleOffset(float_t cutDirectionAngleOffset);

  /// @brief Method SetNoteFlipToNote, addr 0x221006c, size 0x68, virtual false, abstract: false, final false
  inline void SetNoteFlipToNote(::GlobalNamespace::NoteData* targetNote);

  /// @brief Method SetNoteToAnyCutDirection, addr 0x2210154, size 0xc, virtual false, abstract: false, final false
  inline void SetNoteToAnyCutDirection();

  /// @brief Method SubtypeIdentifier, addr 0x220fae4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(::GlobalNamespace::ColorType colorType);

  /// @brief Method TransformNoteAOrBToRandomType, addr 0x2210168, size 0x4c, virtual false, abstract: false, final false
  inline void TransformNoteAOrBToRandomType();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__beforeJumpNoteLineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__beforeJumpNoteLineLayer_k__BackingField();

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get__colorType_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get__colorType_k__BackingField();

  constexpr float_t const& __cordl_internal_get__cutDirectionAngleOffset_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__cutDirectionAngleOffset_k__BackingField();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get__cutDirection_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get__cutDirection_k__BackingField();

  constexpr float_t const& __cordl_internal_get__cutSfxVolumeMultiplier_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__cutSfxVolumeMultiplier_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__flipLineIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__flipLineIndex_k__BackingField();

  constexpr float_t const& __cordl_internal_get__flipYSide_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__flipYSide_k__BackingField();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __cordl_internal_get__gameplayType_k__BackingField() const;

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __cordl_internal_get__gameplayType_k__BackingField();

  constexpr bool const& __cordl_internal_get__isArcHead_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isArcHead_k__BackingField();

  constexpr bool const& __cordl_internal_get__isArcTail_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isArcTail_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__lineIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__lineIndex_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__noteLineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__noteLineLayer_k__BackingField();

  constexpr ::GlobalNamespace::__NoteData__ScoringType const& __cordl_internal_get__scoringType_k__BackingField() const;

  constexpr ::GlobalNamespace::__NoteData__ScoringType& __cordl_internal_get__scoringType_k__BackingField();

  constexpr float_t const& __cordl_internal_get__timeToNextColorNote_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__timeToNextColorNote_k__BackingField();

  constexpr float_t const& __cordl_internal_get__timeToPrevColorNote_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__timeToPrevColorNote_k__BackingField();

  constexpr void __cordl_internal_set__beforeJumpNoteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set__cutDirectionAngleOffset_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__cutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set__cutSfxVolumeMultiplier_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__flipLineIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__flipYSide_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__gameplayType_k__BackingField(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr void __cordl_internal_set__isArcHead_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isArcTail_k__BackingField(bool value);

  constexpr void __cordl_internal_set__lineIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__scoringType_k__BackingField(::GlobalNamespace::__NoteData__ScoringType value);

  constexpr void __cordl_internal_set__timeToNextColorNote_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__timeToPrevColorNote_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x220fa20, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t beat, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer,
                    ::GlobalNamespace::__NoteData__GameplayType gameplayType, ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::ColorType colorType,
                    ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide,
                    float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier);

  /// @brief Method get_beforeJumpNoteLineLayer, addr 0x220f8d4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_beforeJumpNoteLineLayer();

  /// @brief Method get_colorType, addr 0x220f874, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorType get_colorType();

  /// @brief Method get_cutDirection, addr 0x220f884, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutDirection get_cutDirection();

  /// @brief Method get_cutDirectionAngleOffset, addr 0x220f904, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cutDirectionAngleOffset();

  /// @brief Method get_cutSfxVolumeMultiplier, addr 0x220f914, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cutSfxVolumeMultiplier();

  /// @brief Method get_flipLineIndex, addr 0x220f8e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_flipLineIndex();

  /// @brief Method get_flipYSide, addr 0x220f8f4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_flipYSide();

  /// @brief Method get_gameplayType, addr 0x220f854, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  /// @brief Method get_isArcHead, addr 0x220f924, size 0x8, virtual false, abstract: false, final false
  inline bool get_isArcHead();

  /// @brief Method get_isArcTail, addr 0x220f938, size 0x8, virtual false, abstract: false, final false
  inline bool get_isArcTail();

  /// @brief Method get_lineIndex, addr 0x220f8b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method get_noteLineLayer, addr 0x220f8c4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_noteLineLayer();

  /// @brief Method get_scoringType, addr 0x220f864, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__NoteData__ScoringType get_scoringType();

  /// @brief Method get_subtypeGroupIdentifier, addr 0x220f84c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeGroupIdentifier();

  /// @brief Method get_timeToNextColorNote, addr 0x220f894, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeToNextColorNote();

  /// @brief Method get_timeToPrevColorNote, addr 0x220f8a4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeToPrevColorNote();

  /// @brief Method set_beforeJumpNoteLineLayer, addr 0x220f8dc, size 0x8, virtual false, abstract: false, final false
  inline void set_beforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_colorType, addr 0x220f87c, size 0x8, virtual false, abstract: false, final false
  inline void set_colorType(::GlobalNamespace::ColorType value);

  /// @brief Method set_cutDirection, addr 0x220f88c, size 0x8, virtual false, abstract: false, final false
  inline void set_cutDirection(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method set_cutDirectionAngleOffset, addr 0x220f90c, size 0x8, virtual false, abstract: false, final false
  inline void set_cutDirectionAngleOffset(float_t value);

  /// @brief Method set_cutSfxVolumeMultiplier, addr 0x220f91c, size 0x8, virtual false, abstract: false, final false
  inline void set_cutSfxVolumeMultiplier(float_t value);

  /// @brief Method set_flipLineIndex, addr 0x220f8ec, size 0x8, virtual false, abstract: false, final false
  inline void set_flipLineIndex(int32_t value);

  /// @brief Method set_flipYSide, addr 0x220f8fc, size 0x8, virtual false, abstract: false, final false
  inline void set_flipYSide(float_t value);

  /// @brief Method set_gameplayType, addr 0x220f85c, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  /// @brief Method set_isArcHead, addr 0x220f92c, size 0xc, virtual false, abstract: false, final false
  inline void set_isArcHead(bool value);

  /// @brief Method set_isArcTail, addr 0x220f940, size 0xc, virtual false, abstract: false, final false
  inline void set_isArcTail(bool value);

  /// @brief Method set_lineIndex, addr 0x220f8bc, size 0x8, virtual false, abstract: false, final false
  inline void set_lineIndex(int32_t value);

  /// @brief Method set_noteLineLayer, addr 0x220f8cc, size 0x8, virtual false, abstract: false, final false
  inline void set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_scoringType, addr 0x220f86c, size 0x8, virtual false, abstract: false, final false
  inline void set_scoringType(::GlobalNamespace::__NoteData__ScoringType value);

  /// @brief Method set_timeToNextColorNote, addr 0x220f89c, size 0x8, virtual false, abstract: false, final false
  inline void set_timeToNextColorNote(float_t value);

  /// @brief Method set_timeToPrevColorNote, addr 0x220f8ac, size 0x8, virtual false, abstract: false, final false
  inline void set_timeToPrevColorNote(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteData(NoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteData(NoteData const&) = delete;

  /// @brief Field <gameplayType>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__GameplayType ____gameplayType_k__BackingField;

  /// @brief Field <scoringType>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__ScoringType ____scoringType_k__BackingField;

  /// @brief Field <colorType>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ____colorType_k__BackingField;

  /// @brief Field <cutDirection>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ____cutDirection_k__BackingField;

  /// @brief Field <timeToNextColorNote>k__BackingField, offset: 0x34, size: 0x4, def value: None
  float_t ____timeToNextColorNote_k__BackingField;

  /// @brief Field <timeToPrevColorNote>k__BackingField, offset: 0x38, size: 0x4, def value: None
  float_t ____timeToPrevColorNote_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t ____lineIndex_k__BackingField;

  /// @brief Field <noteLineLayer>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____noteLineLayer_k__BackingField;

  /// @brief Field <beforeJumpNoteLineLayer>k__BackingField, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____beforeJumpNoteLineLayer_k__BackingField;

  /// @brief Field <flipLineIndex>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____flipLineIndex_k__BackingField;

  /// @brief Field <flipYSide>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  float_t ____flipYSide_k__BackingField;

  /// @brief Field <cutDirectionAngleOffset>k__BackingField, offset: 0x50, size: 0x4, def value: None
  float_t ____cutDirectionAngleOffset_k__BackingField;

  /// @brief Field <cutSfxVolumeMultiplier>k__BackingField, offset: 0x54, size: 0x4, def value: None
  float_t ____cutSfxVolumeMultiplier_k__BackingField;

  /// @brief Field <isArcHead>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____isArcHead_k__BackingField;

  /// @brief Field <isArcTail>k__BackingField, offset: 0x59, size: 0x1, def value: None
  bool ____isArcTail_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17026 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteData, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____gameplayType_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____scoringType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____colorType_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____cutDirection_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____timeToNextColorNote_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____timeToPrevColorNote_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____lineIndex_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____noteLineLayer_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____beforeJumpNoteLineLayer_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____flipLineIndex_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____flipYSide_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____cutDirectionAngleOffset_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____cutSfxVolumeMultiplier_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____isArcHead_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteData, ____isArcTail_k__BackingField) == 0x59, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteData__GameplayType, "", "NoteData/GameplayType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteData__ScoringType, "", "NoteData/ScoringType");
NEED_NO_BOX(::GlobalNamespace::NoteData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteData*, "", "NoteData");
