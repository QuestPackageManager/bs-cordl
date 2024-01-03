#pragma once
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
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
// Forward declare root types
namespace GlobalNamespace {
class MockNoteData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockNoteData);
// Type: ::MockNoteData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14760)), TypeDefinitionIndex(TypeDefinitionIndex(14752)), TypeDefinitionIndex(TypeDefinitionIndex(14755)),
// TypeDefinitionIndex(TypeDefinitionIndex(14757)), TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15511)) CS Name: ::MockNoteData*
class CORDL_TYPE MockNoteData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <time>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__time_k__BackingField, put = __set__time_k__BackingField)) float_t _time_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__lineIndex_k__BackingField, put = __set__lineIndex_k__BackingField)) int32_t _lineIndex_k__BackingField;

  /// @brief Field <gameplayType>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__gameplayType_k__BackingField, put = __set__gameplayType_k__BackingField))::GlobalNamespace::__NoteData__GameplayType _gameplayType_k__BackingField;

  /// @brief Field <colorType>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__colorType_k__BackingField, put = __set__colorType_k__BackingField))::GlobalNamespace::ColorType _colorType_k__BackingField;

  /// @brief Field <cutDirection>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__cutDirection_k__BackingField, put = __set__cutDirection_k__BackingField))::GlobalNamespace::NoteCutDirection _cutDirection_k__BackingField;

  /// @brief Field <noteLineLayer>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__noteLineLayer_k__BackingField, put = __set__noteLineLayer_k__BackingField))::GlobalNamespace::NoteLineLayer _noteLineLayer_k__BackingField;

  /// @brief Field <duration>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__duration_k__BackingField, put = __set__duration_k__BackingField)) float_t _duration_k__BackingField;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_lineIndex, put = set_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_gameplayType, put = set_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  __declspec(property(get = get_colorType, put = set_colorType))::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_cutDirection, put = set_cutDirection))::GlobalNamespace::NoteCutDirection cutDirection;

  __declspec(property(get = get_noteLineLayer, put = set_noteLineLayer))::GlobalNamespace::NoteLineLayer noteLineLayer;

  __declspec(property(get = get_duration, put = set_duration)) float_t duration;

  constexpr float_t& __get__time_k__BackingField();

  constexpr float_t const& __get__time_k__BackingField() const;

  constexpr void __set__time_k__BackingField(float_t value);

  constexpr int32_t& __get__lineIndex_k__BackingField();

  constexpr int32_t const& __get__lineIndex_k__BackingField() const;

  constexpr void __set__lineIndex_k__BackingField(int32_t value);

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __get__gameplayType_k__BackingField();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __get__gameplayType_k__BackingField() const;

  constexpr void __set__gameplayType_k__BackingField(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr ::GlobalNamespace::ColorType& __get__colorType_k__BackingField();

  constexpr ::GlobalNamespace::ColorType const& __get__colorType_k__BackingField() const;

  constexpr void __set__colorType_k__BackingField(::GlobalNamespace::ColorType value);

  constexpr ::GlobalNamespace::NoteCutDirection& __get__cutDirection_k__BackingField();

  constexpr ::GlobalNamespace::NoteCutDirection const& __get__cutDirection_k__BackingField() const;

  constexpr void __set__cutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get__noteLineLayer_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get__noteLineLayer_k__BackingField() const;

  constexpr void __set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr float_t& __get__duration_k__BackingField();

  constexpr float_t const& __get__duration_k__BackingField() const;

  constexpr void __set__duration_k__BackingField(float_t value);

  /// @brief Method get_time, addr 0x23e6d58, size 0x8, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method set_time, addr 0x23e6d60, size 0x8, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method get_lineIndex, addr 0x23e6d68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method set_lineIndex, addr 0x23e6d70, size 0x8, virtual false, abstract: false, final false
  inline void set_lineIndex(int32_t value);

  /// @brief Method get_gameplayType, addr 0x23e6d78, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  /// @brief Method set_gameplayType, addr 0x23e6d80, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  /// @brief Method get_colorType, addr 0x23e6d88, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorType get_colorType();

  /// @brief Method set_colorType, addr 0x23e6d90, size 0x8, virtual false, abstract: false, final false
  inline void set_colorType(::GlobalNamespace::ColorType value);

  /// @brief Method get_cutDirection, addr 0x23e6d98, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutDirection get_cutDirection();

  /// @brief Method set_cutDirection, addr 0x23e6da0, size 0x8, virtual false, abstract: false, final false
  inline void set_cutDirection(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method get_noteLineLayer, addr 0x23e6da8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_noteLineLayer();

  /// @brief Method set_noteLineLayer, addr 0x23e6db0, size 0x8, virtual false, abstract: false, final false
  inline void set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method get_duration, addr 0x23e6db8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method set_duration, addr 0x23e6dc0, size 0x8, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method Mirror, addr 0x23e6dc8, size 0x58, virtual true, abstract: false, final false
  inline void Mirror(int32_t lineCount);

  static inline ::GlobalNamespace::MockNoteData* New_ctor();

  /// @brief Method .ctor, addr 0x23e6e20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockNoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockNoteData(MockNoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockNoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockNoteData(MockNoteData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockNoteData();

public:
  /// @brief Field <time>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____lineIndex_k__BackingField;

  /// @brief Field <gameplayType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__GameplayType ____gameplayType_k__BackingField;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockNoteData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____time_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____lineIndex_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____gameplayType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____colorType_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____cutDirection_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____noteLineLayer_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockNoteData, ____duration_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockNoteData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockNoteData*, "", "MockNoteData");
