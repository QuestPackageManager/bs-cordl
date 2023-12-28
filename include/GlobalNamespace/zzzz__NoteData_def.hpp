#pragma once
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
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct __NoteData__ScoringType;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace GlobalNamespace {
struct ColorType;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14757))
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
    __E_BurstSliderElementFill = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NoteData__GameplayType_Unwrapped() const noexcept {
    return static_cast<____NoteData__GameplayType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteData__GameplayType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteData__GameplayType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NoteData__GameplayType const Normal;

  /// @brief Field Bomb value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NoteData__GameplayType const Bomb;

  /// @brief Field BurstSliderHead value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NoteData__GameplayType const BurstSliderHead;

  /// @brief Field BurstSliderElement value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__NoteData__GameplayType const BurstSliderElement;

  /// @brief Field BurstSliderElementFill value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__NoteData__GameplayType const BurstSliderElementFill;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteData__GameplayType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ScoringType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14758))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteData__ScoringType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteData__ScoringType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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

  /// @brief Field BurstSliderHead value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__NoteData__ScoringType const BurstSliderHead;

  /// @brief Field BurstSliderElement value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__NoteData__ScoringType const BurstSliderElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteData__ScoringType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteData
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14755)), TypeDefinitionIndex(TypeDefinitionIndex(14760)), TypeDefinitionIndex(TypeDefinitionIndex(14758)),
// TypeDefinitionIndex(TypeDefinitionIndex(14757)), TypeDefinitionIndex(TypeDefinitionIndex(14751)), TypeDefinitionIndex(TypeDefinitionIndex(14752))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(14759)) CS Name: ::NoteData*
class CORDL_TYPE NoteData : public ::GlobalNamespace::BeatmapObjectData {
public:
  // Declarations
  using ScoringType = ::GlobalNamespace::__NoteData__ScoringType;

  using GameplayType = ::GlobalNamespace::__NoteData__GameplayType;

  /// @brief Field <gameplayType>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__gameplayType_k__BackingField, put = __set__gameplayType_k__BackingField))::GlobalNamespace::__NoteData__GameplayType _gameplayType_k__BackingField;

  /// @brief Field <scoringType>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__scoringType_k__BackingField, put = __set__scoringType_k__BackingField))::GlobalNamespace::__NoteData__ScoringType _scoringType_k__BackingField;

  /// @brief Field <colorType>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__colorType_k__BackingField, put = __set__colorType_k__BackingField))::GlobalNamespace::ColorType _colorType_k__BackingField;

  /// @brief Field <cutDirection>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __get__cutDirection_k__BackingField, put = __set__cutDirection_k__BackingField))::GlobalNamespace::NoteCutDirection _cutDirection_k__BackingField;

  /// @brief Field <timeToNextColorNote>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __get__timeToNextColorNote_k__BackingField, put = __set__timeToNextColorNote_k__BackingField)) float_t _timeToNextColorNote_k__BackingField;

  /// @brief Field <timeToPrevColorNote>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __get__timeToPrevColorNote_k__BackingField, put = __set__timeToPrevColorNote_k__BackingField)) float_t _timeToPrevColorNote_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __get__lineIndex_k__BackingField, put = __set__lineIndex_k__BackingField)) int32_t _lineIndex_k__BackingField;

  /// @brief Field <noteLineLayer>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __get__noteLineLayer_k__BackingField, put = __set__noteLineLayer_k__BackingField))::GlobalNamespace::NoteLineLayer _noteLineLayer_k__BackingField;

  /// @brief Field <beforeJumpNoteLineLayer>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__beforeJumpNoteLineLayer_k__BackingField,
                      put = __set__beforeJumpNoteLineLayer_k__BackingField))::GlobalNamespace::NoteLineLayer _beforeJumpNoteLineLayer_k__BackingField;

  /// @brief Field <flipLineIndex>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __get__flipLineIndex_k__BackingField, put = __set__flipLineIndex_k__BackingField)) int32_t _flipLineIndex_k__BackingField;

  /// @brief Field <flipYSide>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __get__flipYSide_k__BackingField, put = __set__flipYSide_k__BackingField)) float_t _flipYSide_k__BackingField;

  /// @brief Field <cutDirectionAngleOffset>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __get__cutDirectionAngleOffset_k__BackingField, put = __set__cutDirectionAngleOffset_k__BackingField)) float_t _cutDirectionAngleOffset_k__BackingField;

  /// @brief Field <cutSfxVolumeMultiplier>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __get__cutSfxVolumeMultiplier_k__BackingField, put = __set__cutSfxVolumeMultiplier_k__BackingField)) float_t _cutSfxVolumeMultiplier_k__BackingField;

  __declspec(property(get = get_subtypeGroupIdentifier)) int32_t subtypeGroupIdentifier;

  __declspec(property(get = get_gameplayType, put = set_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  __declspec(property(get = get_scoringType, put = set_scoringType))::GlobalNamespace::__NoteData__ScoringType scoringType;

  __declspec(property(get = get_colorType, put = set_colorType))::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_cutDirection, put = set_cutDirection))::GlobalNamespace::NoteCutDirection cutDirection;

  __declspec(property(get = get_timeToNextColorNote, put = set_timeToNextColorNote)) float_t timeToNextColorNote;

  __declspec(property(get = get_timeToPrevColorNote, put = set_timeToPrevColorNote)) float_t timeToPrevColorNote;

  __declspec(property(get = get_lineIndex, put = set_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_noteLineLayer, put = set_noteLineLayer))::GlobalNamespace::NoteLineLayer noteLineLayer;

  __declspec(property(get = get_beforeJumpNoteLineLayer, put = set_beforeJumpNoteLineLayer))::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer;

  __declspec(property(get = get_flipLineIndex, put = set_flipLineIndex)) int32_t flipLineIndex;

  __declspec(property(get = get_flipYSide, put = set_flipYSide)) float_t flipYSide;

  __declspec(property(get = get_cutDirectionAngleOffset, put = set_cutDirectionAngleOffset)) float_t cutDirectionAngleOffset;

  __declspec(property(get = get_cutSfxVolumeMultiplier, put = set_cutSfxVolumeMultiplier)) float_t cutSfxVolumeMultiplier;

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __get__gameplayType_k__BackingField();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __get__gameplayType_k__BackingField() const;

  constexpr void __set__gameplayType_k__BackingField(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr ::GlobalNamespace::__NoteData__ScoringType& __get__scoringType_k__BackingField();

  constexpr ::GlobalNamespace::__NoteData__ScoringType const& __get__scoringType_k__BackingField() const;

  constexpr void __set__scoringType_k__BackingField(::GlobalNamespace::__NoteData__ScoringType value);

  constexpr ::GlobalNamespace::ColorType& __get__colorType_k__BackingField();

  constexpr ::GlobalNamespace::ColorType const& __get__colorType_k__BackingField() const;

  constexpr void __set__colorType_k__BackingField(::GlobalNamespace::ColorType value);

  constexpr ::GlobalNamespace::NoteCutDirection& __get__cutDirection_k__BackingField();

  constexpr ::GlobalNamespace::NoteCutDirection const& __get__cutDirection_k__BackingField() const;

  constexpr void __set__cutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value);

  constexpr float_t& __get__timeToNextColorNote_k__BackingField();

  constexpr float_t const& __get__timeToNextColorNote_k__BackingField() const;

  constexpr void __set__timeToNextColorNote_k__BackingField(float_t value);

  constexpr float_t& __get__timeToPrevColorNote_k__BackingField();

  constexpr float_t const& __get__timeToPrevColorNote_k__BackingField() const;

  constexpr void __set__timeToPrevColorNote_k__BackingField(float_t value);

  constexpr int32_t& __get__lineIndex_k__BackingField();

  constexpr int32_t const& __get__lineIndex_k__BackingField() const;

  constexpr void __set__lineIndex_k__BackingField(int32_t value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get__noteLineLayer_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get__noteLineLayer_k__BackingField() const;

  constexpr void __set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get__beforeJumpNoteLineLayer_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get__beforeJumpNoteLineLayer_k__BackingField() const;

  constexpr void __set__beforeJumpNoteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr int32_t& __get__flipLineIndex_k__BackingField();

  constexpr int32_t const& __get__flipLineIndex_k__BackingField() const;

  constexpr void __set__flipLineIndex_k__BackingField(int32_t value);

  constexpr float_t& __get__flipYSide_k__BackingField();

  constexpr float_t const& __get__flipYSide_k__BackingField() const;

  constexpr void __set__flipYSide_k__BackingField(float_t value);

  constexpr float_t& __get__cutDirectionAngleOffset_k__BackingField();

  constexpr float_t const& __get__cutDirectionAngleOffset_k__BackingField() const;

  constexpr void __set__cutDirectionAngleOffset_k__BackingField(float_t value);

  constexpr float_t& __get__cutSfxVolumeMultiplier_k__BackingField();

  constexpr float_t const& __get__cutSfxVolumeMultiplier_k__BackingField() const;

  constexpr void __set__cutSfxVolumeMultiplier_k__BackingField(float_t value);

  /// @brief Method get_subtypeGroupIdentifier addr 0xe00b20 size 0x8 virtual true final false
  inline int32_t get_subtypeGroupIdentifier();

  /// @brief Method get_gameplayType addr 0xe00b28 size 0x8 virtual false final false
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  /// @brief Method set_gameplayType addr 0xe00b30 size 0x8 virtual false final false
  inline void set_gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  /// @brief Method get_scoringType addr 0xe00b38 size 0x8 virtual false final false
  inline ::GlobalNamespace::__NoteData__ScoringType get_scoringType();

  /// @brief Method set_scoringType addr 0xe00b40 size 0x8 virtual false final false
  inline void set_scoringType(::GlobalNamespace::__NoteData__ScoringType value);

  /// @brief Method get_colorType addr 0xe00b48 size 0x8 virtual false final false
  inline ::GlobalNamespace::ColorType get_colorType();

  /// @brief Method set_colorType addr 0xe00b50 size 0x8 virtual false final false
  inline void set_colorType(::GlobalNamespace::ColorType value);

  /// @brief Method get_cutDirection addr 0xe00b58 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteCutDirection get_cutDirection();

  /// @brief Method set_cutDirection addr 0xe00b60 size 0x8 virtual false final false
  inline void set_cutDirection(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method get_timeToNextColorNote addr 0xe00b68 size 0x8 virtual false final false
  inline float_t get_timeToNextColorNote();

  /// @brief Method set_timeToNextColorNote addr 0xe00b70 size 0x8 virtual false final false
  inline void set_timeToNextColorNote(float_t value);

  /// @brief Method get_timeToPrevColorNote addr 0xe00b78 size 0x8 virtual false final false
  inline float_t get_timeToPrevColorNote();

  /// @brief Method set_timeToPrevColorNote addr 0xe00b80 size 0x8 virtual false final false
  inline void set_timeToPrevColorNote(float_t value);

  /// @brief Method get_lineIndex addr 0xe00b88 size 0x8 virtual false final false
  inline int32_t get_lineIndex();

  /// @brief Method set_lineIndex addr 0xe00b90 size 0x8 virtual false final false
  inline void set_lineIndex(int32_t value);

  /// @brief Method get_noteLineLayer addr 0xe00b98 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteLineLayer get_noteLineLayer();

  /// @brief Method set_noteLineLayer addr 0xe00ba0 size 0x8 virtual false final false
  inline void set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method get_beforeJumpNoteLineLayer addr 0xe00ba8 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteLineLayer get_beforeJumpNoteLineLayer();

  /// @brief Method set_beforeJumpNoteLineLayer addr 0xe00bb0 size 0x8 virtual false final false
  inline void set_beforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method get_flipLineIndex addr 0xe00bb8 size 0x8 virtual false final false
  inline int32_t get_flipLineIndex();

  /// @brief Method set_flipLineIndex addr 0xe00bc0 size 0x8 virtual false final false
  inline void set_flipLineIndex(int32_t value);

  /// @brief Method get_flipYSide addr 0xe00bc8 size 0x8 virtual false final false
  inline float_t get_flipYSide();

  /// @brief Method set_flipYSide addr 0xe00bd0 size 0x8 virtual false final false
  inline void set_flipYSide(float_t value);

  /// @brief Method get_cutDirectionAngleOffset addr 0xe00bd8 size 0x8 virtual false final false
  inline float_t get_cutDirectionAngleOffset();

  /// @brief Method set_cutDirectionAngleOffset addr 0xe00be0 size 0x8 virtual false final false
  inline void set_cutDirectionAngleOffset(float_t value);

  /// @brief Method get_cutSfxVolumeMultiplier addr 0xe00be8 size 0x8 virtual false final false
  inline float_t get_cutSfxVolumeMultiplier();

  /// @brief Method set_cutSfxVolumeMultiplier addr 0xe00bf0 size 0x8 virtual false final false
  inline void set_cutSfxVolumeMultiplier(float_t value);

  /// @brief Method GetCopy addr 0xe00bf8 size 0xcc virtual true final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  static inline ::GlobalNamespace::NoteData* New_ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer,
                                                      ::GlobalNamespace::__NoteData__GameplayType gameplayType, ::GlobalNamespace::__NoteData__ScoringType scoringType,
                                                      ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote,
                                                      float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier);

  /// @brief Method .ctor addr 0xe00cc4 size 0xb4 virtual false final false
  inline void _ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer,
                    ::GlobalNamespace::__NoteData__GameplayType gameplayType, ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::ColorType colorType,
                    ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide,
                    float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier);

  /// @brief Method CreateBombNoteData addr 0xe00d7c size 0xb4 virtual false final false
  static inline ::GlobalNamespace::NoteData* CreateBombNoteData(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method CreateBasicNoteData addr 0xe00e30 size 0xc0 virtual false final false
  static inline ::GlobalNamespace::NoteData* CreateBasicNoteData(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::ColorType colorType,
                                                                 ::GlobalNamespace::NoteCutDirection cutDirection);

  /// @brief Method CreateBurstSliderNoteData addr 0xe00ef0 size 0xcc virtual false final false
  static inline ::GlobalNamespace::NoteData* CreateBurstSliderNoteData(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                                       ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::ColorType colorType,
                                                                       ::GlobalNamespace::NoteCutDirection cutDirection, float_t cutSfxVolumeMultiplier);

  /// @brief Method CopyWith addr 0xe00fbc size 0x2cc virtual false final false
  inline ::GlobalNamespace::NoteData* CopyWith(::System::Nullable_1<float_t> time, ::System::Nullable_1<int32_t> lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> noteLineLayer,
                                               ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> beforeJumpNoteLineLayer,
                                               ::System::Nullable_1<::GlobalNamespace::__NoteData__GameplayType> gameplayType,
                                               ::System::Nullable_1<::GlobalNamespace::__NoteData__ScoringType> scoringType, ::System::Nullable_1<::GlobalNamespace::ColorType> colorType,
                                               ::System::Nullable_1<::GlobalNamespace::NoteCutDirection> cutDirection, ::System::Nullable_1<float_t> timeToNextColorNote,
                                               ::System::Nullable_1<float_t> timeToPrevColorNote, ::System::Nullable_1<int32_t> flipLineIndex, ::System::Nullable_1<float_t> flipYSide,
                                               ::System::Nullable_1<float_t> cutDirectionAngleOffset, ::System::Nullable_1<float_t> cutSfxVolumeMultiplier);

  /// @brief Method SetBeforeJumpNoteLineLayer addr 0xe01288 size 0x8 virtual false final false
  inline void SetBeforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer lineLayer);

  /// @brief Method ChangeToBurstSliderHead addr 0xe01290 size 0x10 virtual false final false
  inline void ChangeToBurstSliderHead();

  /// @brief Method ChangeToGameNote addr 0xe012a0 size 0x10 virtual false final false
  inline void ChangeToGameNote();

  /// @brief Method ChangeToSliderHead addr 0xe012b0 size 0xc virtual false final false
  inline void ChangeToSliderHead();

  /// @brief Method ChangeToSliderTail addr 0xe012bc size 0xc virtual false final false
  inline void ChangeToSliderTail();

  /// @brief Method SetNoteFlipToNote addr 0xe012c8 size 0x6c virtual false final false
  inline void SetNoteFlipToNote(::GlobalNamespace::NoteData* targetNote);

  /// @brief Method SetCutDirectionAngleOffset addr 0xe01334 size 0x8 virtual false final false
  inline void SetCutDirectionAngleOffset(float_t cutDirectionAngleOffset);

  /// @brief Method ResetNoteFlip addr 0xe0133c size 0xc virtual false final false
  inline void ResetNoteFlip();

  /// @brief Method Mirror addr 0xe01348 size 0x64 virtual true final false
  inline void Mirror(int32_t lineCount);

  /// @brief Method SetNoteToAnyCutDirection addr 0xe013ac size 0xc virtual false final false
  inline void SetNoteToAnyCutDirection();

  /// @brief Method ChangeNoteCutDirection addr 0xe013b8 size 0x8 virtual false final false
  inline void ChangeNoteCutDirection(::GlobalNamespace::NoteCutDirection newCutDirection);

  /// @brief Method TransformNoteAOrBToRandomType addr 0xe013c0 size 0x4c virtual false final false
  inline void TransformNoteAOrBToRandomType();

  /// @brief Method SubtypeIdentifier addr 0xe00d78 size 0x4 virtual false final false
  static inline int32_t SubtypeIdentifier(::GlobalNamespace::ColorType colorType);

  // Ctor Parameters [CppParam { name: "", ty: "NoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteData(NoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteData(NoteData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteData();

public:
  /// @brief Field <gameplayType>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__GameplayType ____gameplayType_k__BackingField;

  /// @brief Field <scoringType>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__ScoringType ____scoringType_k__BackingField;

  /// @brief Field <colorType>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ____colorType_k__BackingField;

  /// @brief Field <cutDirection>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ____cutDirection_k__BackingField;

  /// @brief Field <timeToNextColorNote>k__BackingField, offset: 0x30, size: 0x4, def value: None
  float_t ____timeToNextColorNote_k__BackingField;

  /// @brief Field <timeToPrevColorNote>k__BackingField, offset: 0x34, size: 0x4, def value: None
  float_t ____timeToPrevColorNote_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____lineIndex_k__BackingField;

  /// @brief Field <noteLineLayer>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____noteLineLayer_k__BackingField;

  /// @brief Field <beforeJumpNoteLineLayer>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____beforeJumpNoteLineLayer_k__BackingField;

  /// @brief Field <flipLineIndex>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____flipLineIndex_k__BackingField;

  /// @brief Field <flipYSide>k__BackingField, offset: 0x48, size: 0x4, def value: None
  float_t ____flipYSide_k__BackingField;

  /// @brief Field <cutDirectionAngleOffset>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  float_t ____cutDirectionAngleOffset_k__BackingField;

  /// @brief Field <cutSfxVolumeMultiplier>k__BackingField, offset: 0x50, size: 0x4, def value: None
  float_t ____cutSfxVolumeMultiplier_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteData, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteData__GameplayType, "", "NoteData/GameplayType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteData__ScoringType, "", "NoteData/ScoringType");
NEED_NO_BOX(::GlobalNamespace::NoteData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteData*, "", "NoteData");
