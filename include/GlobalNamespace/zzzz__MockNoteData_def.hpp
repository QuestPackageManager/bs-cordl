#pragma once
// IWYU pragma private; include "GlobalNamespace/MockNoteData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockNoteData)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteData_GameplayType;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MockNoteData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockNoteData);
// Dependencies ColorType, NoteCutDirection, NoteData::GameplayType, NoteLineLayer, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockNoteData
class CORDL_TYPE MockNoteData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <colorType>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__colorType_k__BackingField, put = __cordl_internal_set__colorType_k__BackingField)) ::GlobalNamespace::ColorType _colorType_k__BackingField;

  /// @brief Field <cutDirection>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__cutDirection_k__BackingField,
                      put = __cordl_internal_set__cutDirection_k__BackingField)) ::GlobalNamespace::NoteCutDirection _cutDirection_k__BackingField;

  /// @brief Field <duration>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__duration_k__BackingField, put = __cordl_internal_set__duration_k__BackingField)) float_t _duration_k__BackingField;

  /// @brief Field <gameplayType>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__gameplayType_k__BackingField,
                      put = __cordl_internal_set__gameplayType_k__BackingField)) ::GlobalNamespace::NoteData_GameplayType _gameplayType_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__lineIndex_k__BackingField, put = __cordl_internal_set__lineIndex_k__BackingField)) int32_t _lineIndex_k__BackingField;

  /// @brief Field <noteLineLayer>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__noteLineLayer_k__BackingField,
                      put = __cordl_internal_set__noteLineLayer_k__BackingField)) ::GlobalNamespace::NoteLineLayer _noteLineLayer_k__BackingField;

  /// @brief Field <time>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time_k__BackingField, put = __cordl_internal_set__time_k__BackingField)) float_t _time_k__BackingField;

  __declspec(property(get = get_colorType, put = set_colorType)) ::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_cutDirection, put = set_cutDirection)) ::GlobalNamespace::NoteCutDirection cutDirection;

  __declspec(property(get = get_duration, put = set_duration)) float_t duration;

  __declspec(property(get = get_gameplayType, put = set_gameplayType)) ::GlobalNamespace::NoteData_GameplayType gameplayType;

  __declspec(property(get = get_lineIndex, put = set_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_noteLineLayer, put = set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer noteLineLayer;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  /// @brief Method Mirror, addr 0x3c2a7dc, size 0x58, virtual true, abstract: false, final false
  inline void Mirror(int32_t lineCount);

  static inline ::GlobalNamespace::MockNoteData* New_ctor();

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get__colorType_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get__colorType_k__BackingField();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get__cutDirection_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get__cutDirection_k__BackingField();

  constexpr float_t const& __cordl_internal_get__duration_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__duration_k__BackingField();

  constexpr ::GlobalNamespace::NoteData_GameplayType const& __cordl_internal_get__gameplayType_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteData_GameplayType& __cordl_internal_get__gameplayType_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__lineIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__lineIndex_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__noteLineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__noteLineLayer_k__BackingField();

  constexpr float_t const& __cordl_internal_get__time_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__time_k__BackingField();

  constexpr void __cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set__cutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set__duration_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__gameplayType_k__BackingField(::GlobalNamespace::NoteData_GameplayType value);

  constexpr void __cordl_internal_set__lineIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__time_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x3c2a834, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorType, addr 0x3c2a79c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorType get_colorType();

  /// @brief Method get_cutDirection, addr 0x3c2a7ac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutDirection get_cutDirection();

  /// @brief Method get_duration, addr 0x3c2a7cc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_gameplayType, addr 0x3c2a78c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteData_GameplayType get_gameplayType();

  /// @brief Method get_lineIndex, addr 0x3c2a77c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method get_noteLineLayer, addr 0x3c2a7bc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_noteLineLayer();

  /// @brief Method get_time, addr 0x3c2a76c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method set_colorType, addr 0x3c2a7a4, size 0x8, virtual false, abstract: false, final false
  inline void set_colorType(::GlobalNamespace::ColorType value);

  /// @brief Method set_cutDirection, addr 0x3c2a7b4, size 0x8, virtual false, abstract: false, final false
  inline void set_cutDirection(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method set_duration, addr 0x3c2a7d4, size 0x8, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method set_gameplayType, addr 0x3c2a794, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayType(::GlobalNamespace::NoteData_GameplayType value);

  /// @brief Method set_lineIndex, addr 0x3c2a784, size 0x8, virtual false, abstract: false, final false
  inline void set_lineIndex(int32_t value);

  /// @brief Method set_noteLineLayer, addr 0x3c2a7c4, size 0x8, virtual false, abstract: false, final false
  inline void set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_time, addr 0x3c2a774, size 0x8, virtual false, abstract: false, final false
  inline void set_time(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockNoteData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockNoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockNoteData(MockNoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockNoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockNoteData(MockNoteData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18110 };

  /// @brief Field <time>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____lineIndex_k__BackingField;

  /// @brief Field <gameplayType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::NoteData_GameplayType ____gameplayType_k__BackingField;

  /// @brief Field <colorType>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ____colorType_k__BackingField;

  /// @brief Field <cutDirection>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ____cutDirection_k__BackingField;

  /// @brief Field <noteLineLayer>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____noteLineLayer_k__BackingField;

  /// @brief Field <duration>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____duration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockNoteData, ____time_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____lineIndex_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____gameplayType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____colorType_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____cutDirection_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____noteLineLayer_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____duration_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockNoteData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockNoteData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockNoteData*, "", "MockNoteData");
