#pragma once
// IWYU pragma private; include "GlobalNamespace/MockObstacleData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockObstacleData)
namespace GlobalNamespace {
struct NoteLineLayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MockObstacleData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockObstacleData);
// Dependencies NoteLineLayer, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockObstacleData
class CORDL_TYPE MockObstacleData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <duration>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__duration_k__BackingField, put = __cordl_internal_set__duration_k__BackingField)) float_t _duration_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__lineIndex_k__BackingField, put = __cordl_internal_set__lineIndex_k__BackingField)) int32_t _lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__lineLayer_k__BackingField, put = __cordl_internal_set__lineLayer_k__BackingField)) ::GlobalNamespace::NoteLineLayer _lineLayer_k__BackingField;

  /// @brief Field <time>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time_k__BackingField, put = __cordl_internal_set__time_k__BackingField)) float_t _time_k__BackingField;

  /// @brief Field <width>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__width_k__BackingField, put = __cordl_internal_set__width_k__BackingField)) int32_t _width_k__BackingField;

  __declspec(property(get = get_duration, put = set_duration)) float_t duration;

  __declspec(property(get = get_lineIndex, put = set_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_lineLayer, put = set_lineLayer)) ::GlobalNamespace::NoteLineLayer lineLayer;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  static inline ::GlobalNamespace::MockObstacleData* New_ctor();

  constexpr float_t const& __cordl_internal_get__duration_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__duration_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__lineIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__lineIndex_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__lineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__lineLayer_k__BackingField();

  constexpr float_t const& __cordl_internal_get__time_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__time_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__width_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__width_k__BackingField();

  constexpr void __cordl_internal_set__duration_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__lineIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__lineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__time_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__width_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x3c2a4ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_duration, addr 0x3c2a48c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_lineIndex, addr 0x3c2a46c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method get_lineLayer, addr 0x3c2a47c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_lineLayer();

  /// @brief Method get_time, addr 0x3c2a45c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_width, addr 0x3c2a49c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method set_duration, addr 0x3c2a494, size 0x8, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method set_lineIndex, addr 0x3c2a474, size 0x8, virtual false, abstract: false, final false
  inline void set_lineIndex(int32_t value);

  /// @brief Method set_lineLayer, addr 0x3c2a484, size 0x8, virtual false, abstract: false, final false
  inline void set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_time, addr 0x3c2a464, size 0x8, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method set_width, addr 0x3c2a4a4, size 0x8, virtual false, abstract: false, final false
  inline void set_width(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockObstacleData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockObstacleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockObstacleData(MockObstacleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockObstacleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockObstacleData(MockObstacleData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18111 };

  /// @brief Field <time>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  /// @brief Field <lineIndex>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____lineIndex_k__BackingField;

  /// @brief Field <lineLayer>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____lineLayer_k__BackingField;

  /// @brief Field <duration>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____duration_k__BackingField;

  /// @brief Field <width>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____width_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockObstacleData, ____time_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockObstacleData, ____lineIndex_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockObstacleData, ____lineLayer_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockObstacleData, ____duration_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockObstacleData, ____width_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockObstacleData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockObstacleData*, "", "MockObstacleData");
