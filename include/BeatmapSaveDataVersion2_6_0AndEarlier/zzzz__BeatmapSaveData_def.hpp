#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapSaveData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__SliderData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__NoteType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__SpecialEventsForKeyword;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__WaypointData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__ColorType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__EventData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__ObstacleData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__BeatmapObjectType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__ObstacleType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__SpecialEventKeywordFiltersData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__NoteData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__BeatmapEventType;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__BeatmapEventType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__BeatmapObjectType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__ColorType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__NoteType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__ObstacleType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__EventData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__NoteData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__ObstacleData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__SliderData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__SpecialEventKeywordFiltersData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__SpecialEventsForKeyword;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class __BeatmapSaveData__WaypointData;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType);
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType);
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType);
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType);
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType);
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType);
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword);
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData);
// Type: ::BeatmapEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14829))
// CS Name: ::BeatmapSaveData::BeatmapEventType
struct CORDL_TYPE __BeatmapSaveData__BeatmapEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__BeatmapEventType_Unwrapped
  enum struct ____BeatmapSaveData__BeatmapEventType_Unwrapped : int32_t {
    __E_Event0 = static_cast<int32_t>(0x0),
    __E_Event1 = static_cast<int32_t>(0x1),
    __E_Event2 = static_cast<int32_t>(0x2),
    __E_Event3 = static_cast<int32_t>(0x3),
    __E_Event4 = static_cast<int32_t>(0x4),
    __E_Event5 = static_cast<int32_t>(0x5),
    __E_Event6 = static_cast<int32_t>(0x6),
    __E_Event7 = static_cast<int32_t>(0x7),
    __E_Event8 = static_cast<int32_t>(0x8),
    __E_Event9 = static_cast<int32_t>(0x9),
    __E_Event10 = static_cast<int32_t>(0xa),
    __E_Event11 = static_cast<int32_t>(0xb),
    __E_Event12 = static_cast<int32_t>(0xc),
    __E_Event13 = static_cast<int32_t>(0xd),
    __E_Event14 = static_cast<int32_t>(0xe),
    __E_Event15 = static_cast<int32_t>(0xf),
    __E_Event16 = static_cast<int32_t>(0x10),
    __E_Event17 = static_cast<int32_t>(0x11),
    __E_VoidEvent = static_cast<int32_t>(0xffffffff),
    __E_Special0 = static_cast<int32_t>(0x28),
    __E_Special1 = static_cast<int32_t>(0x29),
    __E_Special2 = static_cast<int32_t>(0x2a),
    __E_Special3 = static_cast<int32_t>(0x2b),
    __E_BpmChange = static_cast<int32_t>(0x64),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__BeatmapEventType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__BeatmapEventType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__BeatmapEventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BeatmapEventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Event0 value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event0;

  /// @brief Field Event1 value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event1;

  /// @brief Field Event2 value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event2;

  /// @brief Field Event3 value: static_cast<int32_t>(0x3)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event3;

  /// @brief Field Event4 value: static_cast<int32_t>(0x4)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event4;

  /// @brief Field Event5 value: static_cast<int32_t>(0x5)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event5;

  /// @brief Field Event6 value: static_cast<int32_t>(0x6)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event6;

  /// @brief Field Event7 value: static_cast<int32_t>(0x7)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event7;

  /// @brief Field Event8 value: static_cast<int32_t>(0x8)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event8;

  /// @brief Field Event9 value: static_cast<int32_t>(0x9)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event9;

  /// @brief Field Event10 value: static_cast<int32_t>(0xa)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event10;

  /// @brief Field Event11 value: static_cast<int32_t>(0xb)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event11;

  /// @brief Field Event12 value: static_cast<int32_t>(0xc)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event12;

  /// @brief Field Event13 value: static_cast<int32_t>(0xd)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event13;

  /// @brief Field Event14 value: static_cast<int32_t>(0xe)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event14;

  /// @brief Field Event15 value: static_cast<int32_t>(0xf)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event15;

  /// @brief Field Event16 value: static_cast<int32_t>(0x10)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event16;

  /// @brief Field Event17 value: static_cast<int32_t>(0x11)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Event17;

  /// @brief Field VoidEvent value: static_cast<int32_t>(0xffffffff)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const VoidEvent;

  /// @brief Field Special0 value: static_cast<int32_t>(0x28)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Special0;

  /// @brief Field Special1 value: static_cast<int32_t>(0x29)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Special1;

  /// @brief Field Special2 value: static_cast<int32_t>(0x2a)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Special2;

  /// @brief Field Special3 value: static_cast<int32_t>(0x2b)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const Special3;

  /// @brief Field BpmChange value: static_cast<int32_t>(0x64)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const BpmChange;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::EventData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14843)), TypeDefinitionIndex(TypeDefinitionIndex(14829))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14830))
// CS Name: ::BeatmapSaveData::EventData*
class CORDL_TYPE __BeatmapSaveData__EventData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _time, offset 0x10, size 0x4
  __declspec(property(get = __get__time, put = __set__time)) float_t _time;

  /// @brief Field _type, offset 0x14, size 0x4
  __declspec(property(get = __get__type, put = __set__type))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType _type;

  /// @brief Field _value, offset 0x18, size 0x4
  __declspec(property(get = __get__value, put = __set__value)) int32_t _value;

  /// @brief Field _floatValue, offset 0x1c, size 0x4
  __declspec(property(get = __get__floatValue, put = __set__floatValue)) float_t _floatValue;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_type))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType type;

  __declspec(property(get = get_value)) int32_t value;

  __declspec(property(get = get_floatValue)) float_t floatValue;

  constexpr float_t& __get__time();

  constexpr float_t const& __get__time() const;

  constexpr void __set__time(float_t value);

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType& __get__type();

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const& __get__type() const;

  constexpr void __set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType value);

  constexpr int32_t& __get__value();

  constexpr int32_t const& __get__value() const;

  constexpr void __set__value(int32_t value);

  constexpr float_t& __get__floatValue();

  constexpr float_t const& __get__floatValue() const;

  constexpr void __set__floatValue(float_t value);

  /// @brief Method get_time addr 0xe08e5c size 0x8 virtual true final false
  inline float_t get_time();

  /// @brief Method get_type addr 0xe08e64 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType get_type();

  /// @brief Method get_value addr 0xe08e6c size 0x8 virtual false final false
  inline int32_t get_value();

  /// @brief Method get_floatValue addr 0xe08e74 size 0x8 virtual false final false
  inline float_t get_floatValue();

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData* New_ctor(float_t time, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType type,
                                                                                                int32_t value, float_t floatValue);

  /// @brief Method .ctor addr 0xe08d54 size 0x44 virtual false final false
  inline void _ctor(float_t time, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType type, int32_t value, float_t floatValue);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__EventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__EventData(__BeatmapSaveData__EventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__EventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__EventData(__BeatmapSaveData__EventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__EventData();

public:
  /// @brief Field _time, offset: 0x10, size: 0x4, def value: None
  float_t ____time;

  /// @brief Field _type, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType ____type;

  /// @brief Field _value, offset: 0x18, size: 0x4, def value: None
  int32_t ____value;

  /// @brief Field _floatValue, offset: 0x1c, size: 0x4, def value: None
  float_t ____floatValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::BeatmapObjectType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14831))
// CS Name: ::BeatmapSaveData::BeatmapObjectType
struct CORDL_TYPE __BeatmapSaveData__BeatmapObjectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__BeatmapObjectType_Unwrapped
  enum struct ____BeatmapSaveData__BeatmapObjectType_Unwrapped : int32_t {
    __E_Note = static_cast<int32_t>(0x0),
    __E_Obstacle = static_cast<int32_t>(0x2),
    __E_Slider = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__BeatmapObjectType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__BeatmapObjectType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__BeatmapObjectType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BeatmapObjectType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Note value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType const Note;

  /// @brief Field Obstacle value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType const Obstacle;

  /// @brief Field Slider value: static_cast<int32_t>(0x3)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType const Slider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::NoteType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14832))
// CS Name: ::BeatmapSaveData::NoteType
struct CORDL_TYPE __BeatmapSaveData__NoteType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__NoteType_Unwrapped
  enum struct ____BeatmapSaveData__NoteType_Unwrapped : int32_t {
    __E_NoteA = static_cast<int32_t>(0x0),
    __E_NoteB = static_cast<int32_t>(0x1),
    __E_GhostNote = static_cast<int32_t>(0x2),
    __E_Bomb = static_cast<int32_t>(0x3),
    __E_None = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__NoteType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__NoteType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__NoteType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__NoteType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoteA value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType const NoteA;

  /// @brief Field NoteB value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType const NoteB;

  /// @brief Field GhostNote value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType const GhostNote;

  /// @brief Field Bomb value: static_cast<int32_t>(0x3)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType const Bomb;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::ColorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14833))
// CS Name: ::BeatmapSaveData::ColorType
struct CORDL_TYPE __BeatmapSaveData__ColorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__ColorType_Unwrapped
  enum struct ____BeatmapSaveData__ColorType_Unwrapped : int32_t {
    __E_ColorA = static_cast<int32_t>(0x0),
    __E_ColorB = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__ColorType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__ColorType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__ColorType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__ColorType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ColorA value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType const ColorA;

  /// @brief Field ColorB value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType const ColorB;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::SliderType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14834))
// CS Name: ::BeatmapSaveData::SliderType
struct CORDL_TYPE __BeatmapSaveData__SliderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__SliderType_Unwrapped
  enum struct ____BeatmapSaveData__SliderType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Burst = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__SliderType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__SliderType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__SliderType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__SliderType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType const Normal;

  /// @brief Field Burst value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType const Burst;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::NoteData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14832)), TypeDefinitionIndex(TypeDefinitionIndex(14843)), TypeDefinitionIndex(TypeDefinitionIndex(14760)),
// TypeDefinitionIndex(TypeDefinitionIndex(14755))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14835)) CS Name: ::BeatmapSaveData::NoteData*
class CORDL_TYPE __BeatmapSaveData__NoteData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _time, offset 0x10, size 0x4
  __declspec(property(get = __get__time, put = __set__time)) float_t _time;

  /// @brief Field _lineIndex, offset 0x14, size 0x4
  __declspec(property(get = __get__lineIndex, put = __set__lineIndex)) int32_t _lineIndex;

  /// @brief Field _lineLayer, offset 0x18, size 0x4
  __declspec(property(get = __get__lineLayer, put = __set__lineLayer))::GlobalNamespace::NoteLineLayer _lineLayer;

  /// @brief Field _type, offset 0x1c, size 0x4
  __declspec(property(get = __get__type, put = __set__type))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType _type;

  /// @brief Field _cutDirection, offset 0x20, size 0x4
  __declspec(property(get = __get__cutDirection, put = __set__cutDirection))::GlobalNamespace::NoteCutDirection _cutDirection;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_lineLayer))::GlobalNamespace::NoteLineLayer lineLayer;

  __declspec(property(get = get_type))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType type;

  __declspec(property(get = get_cutDirection))::GlobalNamespace::NoteCutDirection cutDirection;

  constexpr float_t& __get__time();

  constexpr float_t const& __get__time() const;

  constexpr void __set__time(float_t value);

  constexpr int32_t& __get__lineIndex();

  constexpr int32_t const& __get__lineIndex() const;

  constexpr void __set__lineIndex(int32_t value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get__lineLayer();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get__lineLayer() const;

  constexpr void __set__lineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType& __get__type();

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType const& __get__type() const;

  constexpr void __set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType value);

  constexpr ::GlobalNamespace::NoteCutDirection& __get__cutDirection();

  constexpr ::GlobalNamespace::NoteCutDirection const& __get__cutDirection() const;

  constexpr void __set__cutDirection(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method get_time addr 0xe08e84 size 0x8 virtual true final false
  inline float_t get_time();

  /// @brief Method get_lineIndex addr 0xe08e8c size 0x8 virtual false final false
  inline int32_t get_lineIndex();

  /// @brief Method get_lineLayer addr 0xe08e94 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteLineLayer get_lineLayer();

  /// @brief Method get_type addr 0xe08e9c size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType get_type();

  /// @brief Method get_cutDirection addr 0xe08ea4 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteCutDirection get_cutDirection();

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData* New_ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                                                               ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType type,
                                                                                               ::GlobalNamespace::NoteCutDirection cutDirection);

  /// @brief Method .ctor addr 0xe08eac size 0x50 virtual false final false
  inline void _ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType type,
                    ::GlobalNamespace::NoteCutDirection cutDirection);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__NoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__NoteData(__BeatmapSaveData__NoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__NoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__NoteData(__BeatmapSaveData__NoteData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__NoteData();

public:
  /// @brief Field _time, offset: 0x10, size: 0x4, def value: None
  float_t ____time;

  /// @brief Field _lineIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ____lineIndex;

  /// @brief Field _lineLayer, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____lineLayer;

  /// @brief Field _type, offset: 0x1c, size: 0x4, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType ____type;

  /// @brief Field _cutDirection, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ____cutDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData, 0x28>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::WaypointData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14843)), TypeDefinitionIndex(TypeDefinitionIndex(14762)), TypeDefinitionIndex(TypeDefinitionIndex(14760))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14836))
// CS Name: ::BeatmapSaveData::WaypointData*
class CORDL_TYPE __BeatmapSaveData__WaypointData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _time, offset 0x10, size 0x4
  __declspec(property(get = __get__time, put = __set__time)) float_t _time;

  /// @brief Field _lineIndex, offset 0x14, size 0x4
  __declspec(property(get = __get__lineIndex, put = __set__lineIndex)) int32_t _lineIndex;

  /// @brief Field _lineLayer, offset 0x18, size 0x4
  __declspec(property(get = __get__lineLayer, put = __set__lineLayer))::GlobalNamespace::NoteLineLayer _lineLayer;

  /// @brief Field _offsetDirection, offset 0x1c, size 0x4
  __declspec(property(get = __get__offsetDirection, put = __set__offsetDirection))::GlobalNamespace::OffsetDirection _offsetDirection;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_lineLayer))::GlobalNamespace::NoteLineLayer lineLayer;

  __declspec(property(get = get_offsetDirection))::GlobalNamespace::OffsetDirection offsetDirection;

  constexpr float_t& __get__time();

  constexpr float_t const& __get__time() const;

  constexpr void __set__time(float_t value);

  constexpr int32_t& __get__lineIndex();

  constexpr int32_t const& __get__lineIndex() const;

  constexpr void __set__lineIndex(int32_t value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get__lineLayer();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get__lineLayer() const;

  constexpr void __set__lineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr ::GlobalNamespace::OffsetDirection& __get__offsetDirection();

  constexpr ::GlobalNamespace::OffsetDirection const& __get__offsetDirection() const;

  constexpr void __set__offsetDirection(::GlobalNamespace::OffsetDirection value);

  /// @brief Method get_time addr 0xe08efc size 0x8 virtual true final false
  inline float_t get_time();

  /// @brief Method get_lineIndex addr 0xe08f04 size 0x8 virtual false final false
  inline int32_t get_lineIndex();

  /// @brief Method get_lineLayer addr 0xe08f0c size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteLineLayer get_lineLayer();

  /// @brief Method get_offsetDirection addr 0xe08f14 size 0x8 virtual false final false
  inline ::GlobalNamespace::OffsetDirection get_offsetDirection();

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData* New_ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                                                                   ::GlobalNamespace::OffsetDirection offsetDirection);

  /// @brief Method .ctor addr 0xe08f1c size 0x4c virtual false final false
  inline void _ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::OffsetDirection offsetDirection);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__WaypointData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__WaypointData(__BeatmapSaveData__WaypointData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__WaypointData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__WaypointData(__BeatmapSaveData__WaypointData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__WaypointData();

public:
  /// @brief Field _time, offset: 0x10, size: 0x4, def value: None
  float_t ____time;

  /// @brief Field _lineIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ____lineIndex;

  /// @brief Field _lineLayer, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____lineLayer;

  /// @brief Field _offsetDirection, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OffsetDirection ____offsetDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::SliderData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14843)), TypeDefinitionIndex(TypeDefinitionIndex(14760)), TypeDefinitionIndex(TypeDefinitionIndex(14766)),
// TypeDefinitionIndex(TypeDefinitionIndex(14755)), TypeDefinitionIndex(TypeDefinitionIndex(14833))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14837)) CS Name: ::BeatmapSaveData::SliderData*
class CORDL_TYPE __BeatmapSaveData__SliderData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _colorType, offset 0x10, size 0x4
  __declspec(property(get = __get__colorType, put = __set__colorType))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType _colorType;

  /// @brief Field _headTime, offset 0x14, size 0x4
  __declspec(property(get = __get__headTime, put = __set__headTime)) float_t _headTime;

  /// @brief Field _headLineIndex, offset 0x18, size 0x4
  __declspec(property(get = __get__headLineIndex, put = __set__headLineIndex)) int32_t _headLineIndex;

  /// @brief Field _headLineLayer, offset 0x1c, size 0x4
  __declspec(property(get = __get__headLineLayer, put = __set__headLineLayer))::GlobalNamespace::NoteLineLayer _headLineLayer;

  /// @brief Field _headControlPointLengthMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __get__headControlPointLengthMultiplier, put = __set__headControlPointLengthMultiplier)) float_t _headControlPointLengthMultiplier;

  /// @brief Field _headCutDirection, offset 0x24, size 0x4
  __declspec(property(get = __get__headCutDirection, put = __set__headCutDirection))::GlobalNamespace::NoteCutDirection _headCutDirection;

  /// @brief Field _tailTime, offset 0x28, size 0x4
  __declspec(property(get = __get__tailTime, put = __set__tailTime)) float_t _tailTime;

  /// @brief Field _tailLineIndex, offset 0x2c, size 0x4
  __declspec(property(get = __get__tailLineIndex, put = __set__tailLineIndex)) int32_t _tailLineIndex;

  /// @brief Field _tailLineLayer, offset 0x30, size 0x4
  __declspec(property(get = __get__tailLineLayer, put = __set__tailLineLayer))::GlobalNamespace::NoteLineLayer _tailLineLayer;

  /// @brief Field _tailControlPointLengthMultiplier, offset 0x34, size 0x4
  __declspec(property(get = __get__tailControlPointLengthMultiplier, put = __set__tailControlPointLengthMultiplier)) float_t _tailControlPointLengthMultiplier;

  /// @brief Field _tailCutDirection, offset 0x38, size 0x4
  __declspec(property(get = __get__tailCutDirection, put = __set__tailCutDirection))::GlobalNamespace::NoteCutDirection _tailCutDirection;

  /// @brief Field _sliderMidAnchorMode, offset 0x3c, size 0x4
  __declspec(property(get = __get__sliderMidAnchorMode, put = __set__sliderMidAnchorMode))::GlobalNamespace::SliderMidAnchorMode _sliderMidAnchorMode;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_colorType))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType colorType;

  __declspec(property(get = get_headLineIndex)) int32_t headLineIndex;

  __declspec(property(get = get_headLineLayer))::GlobalNamespace::NoteLineLayer headLineLayer;

  __declspec(property(get = get_headControlPointLengthMultiplier)) float_t headControlPointLengthMultiplier;

  __declspec(property(get = get_headCutDirection))::GlobalNamespace::NoteCutDirection headCutDirection;

  __declspec(property(get = get_tailTime)) float_t tailTime;

  __declspec(property(get = get_tailLineIndex)) int32_t tailLineIndex;

  __declspec(property(get = get_tailLineLayer))::GlobalNamespace::NoteLineLayer tailLineLayer;

  __declspec(property(get = get_tailControlPointLengthMultiplier)) float_t tailControlPointLengthMultiplier;

  __declspec(property(get = get_tailCutDirection))::GlobalNamespace::NoteCutDirection tailCutDirection;

  __declspec(property(get = get_sliderMidAnchorMode))::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode;

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType& __get__colorType();

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType const& __get__colorType() const;

  constexpr void __set__colorType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType value);

  constexpr float_t& __get__headTime();

  constexpr float_t const& __get__headTime() const;

  constexpr void __set__headTime(float_t value);

  constexpr int32_t& __get__headLineIndex();

  constexpr int32_t const& __get__headLineIndex() const;

  constexpr void __set__headLineIndex(int32_t value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get__headLineLayer();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get__headLineLayer() const;

  constexpr void __set__headLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr float_t& __get__headControlPointLengthMultiplier();

  constexpr float_t const& __get__headControlPointLengthMultiplier() const;

  constexpr void __set__headControlPointLengthMultiplier(float_t value);

  constexpr ::GlobalNamespace::NoteCutDirection& __get__headCutDirection();

  constexpr ::GlobalNamespace::NoteCutDirection const& __get__headCutDirection() const;

  constexpr void __set__headCutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr float_t& __get__tailTime();

  constexpr float_t const& __get__tailTime() const;

  constexpr void __set__tailTime(float_t value);

  constexpr int32_t& __get__tailLineIndex();

  constexpr int32_t const& __get__tailLineIndex() const;

  constexpr void __set__tailLineIndex(int32_t value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get__tailLineLayer();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get__tailLineLayer() const;

  constexpr void __set__tailLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr float_t& __get__tailControlPointLengthMultiplier();

  constexpr float_t const& __get__tailControlPointLengthMultiplier() const;

  constexpr void __set__tailControlPointLengthMultiplier(float_t value);

  constexpr ::GlobalNamespace::NoteCutDirection& __get__tailCutDirection();

  constexpr ::GlobalNamespace::NoteCutDirection const& __get__tailCutDirection() const;

  constexpr void __set__tailCutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr ::GlobalNamespace::SliderMidAnchorMode& __get__sliderMidAnchorMode();

  constexpr ::GlobalNamespace::SliderMidAnchorMode const& __get__sliderMidAnchorMode() const;

  constexpr void __set__sliderMidAnchorMode(::GlobalNamespace::SliderMidAnchorMode value);

  /// @brief Method get_time addr 0xe08f68 size 0x8 virtual true final false
  inline float_t get_time();

  /// @brief Method get_colorType addr 0xe08f70 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType get_colorType();

  /// @brief Method get_headLineIndex addr 0xe08f78 size 0x8 virtual false final false
  inline int32_t get_headLineIndex();

  /// @brief Method get_headLineLayer addr 0xe08f80 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteLineLayer get_headLineLayer();

  /// @brief Method get_headControlPointLengthMultiplier addr 0xe08f88 size 0x8 virtual false final false
  inline float_t get_headControlPointLengthMultiplier();

  /// @brief Method get_headCutDirection addr 0xe08f90 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteCutDirection get_headCutDirection();

  /// @brief Method get_tailTime addr 0xe08f98 size 0x8 virtual false final false
  inline float_t get_tailTime();

  /// @brief Method get_tailLineIndex addr 0xe08fa0 size 0x8 virtual false final false
  inline int32_t get_tailLineIndex();

  /// @brief Method get_tailLineLayer addr 0xe08fa8 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteLineLayer get_tailLineLayer();

  /// @brief Method get_tailControlPointLengthMultiplier addr 0xe08fb0 size 0x8 virtual false final false
  inline float_t get_tailControlPointLengthMultiplier();

  /// @brief Method get_tailCutDirection addr 0xe08fb8 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteCutDirection get_tailCutDirection();

  /// @brief Method get_sliderMidAnchorMode addr 0xe08fc0 size 0x8 virtual false final false
  inline ::GlobalNamespace::SliderMidAnchorMode get_sliderMidAnchorMode();

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*
  New_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType colorType, float_t headTime, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
           float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer,
           float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode);

  /// @brief Method .ctor addr 0xe08fc8 size 0x9c virtual false final false
  inline void _ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType colorType, float_t headTime, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
                    float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex,
                    ::GlobalNamespace::NoteLineLayer tailLineLayer, float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection,
                    ::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__SliderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__SliderData(__BeatmapSaveData__SliderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__SliderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__SliderData(__BeatmapSaveData__SliderData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__SliderData();

public:
  /// @brief Field _colorType, offset: 0x10, size: 0x4, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType ____colorType;

  /// @brief Field _headTime, offset: 0x14, size: 0x4, def value: None
  float_t ____headTime;

  /// @brief Field _headLineIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____headLineIndex;

  /// @brief Field _headLineLayer, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____headLineLayer;

  /// @brief Field _headControlPointLengthMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t ____headControlPointLengthMultiplier;

  /// @brief Field _headCutDirection, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ____headCutDirection;

  /// @brief Field _tailTime, offset: 0x28, size: 0x4, def value: None
  float_t ____tailTime;

  /// @brief Field _tailLineIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ____tailLineIndex;

  /// @brief Field _tailLineLayer, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____tailLineLayer;

  /// @brief Field _tailControlPointLengthMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t ____tailControlPointLengthMultiplier;

  /// @brief Field _tailCutDirection, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ____tailCutDirection;

  /// @brief Field _sliderMidAnchorMode, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::SliderMidAnchorMode ____sliderMidAnchorMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData, 0x40>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::ObstacleType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14839))
// CS Name: ::BeatmapSaveData::ObstacleType
struct CORDL_TYPE __BeatmapSaveData__ObstacleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__ObstacleType_Unwrapped
  enum struct ____BeatmapSaveData__ObstacleType_Unwrapped : int32_t {
    __E_FullHeight = static_cast<int32_t>(0x0),
    __E_Top = static_cast<int32_t>(0x1),
    __E_Free = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__ObstacleType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__ObstacleType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__ObstacleType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__ObstacleType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FullHeight value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType const FullHeight;

  /// @brief Field Top value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType const Top;

  /// @brief Field Free value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType const Free;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::ObstacleData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14839)), TypeDefinitionIndex(TypeDefinitionIndex(14843))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14838))
// CS Name: ::BeatmapSaveData::ObstacleData*
class CORDL_TYPE __BeatmapSaveData__ObstacleData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _time, offset 0x10, size 0x4
  __declspec(property(get = __get__time, put = __set__time)) float_t _time;

  /// @brief Field _lineIndex, offset 0x14, size 0x4
  __declspec(property(get = __get__lineIndex, put = __set__lineIndex)) int32_t _lineIndex;

  /// @brief Field _type, offset 0x18, size 0x4
  __declspec(property(get = __get__type, put = __set__type))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType _type;

  /// @brief Field _duration, offset 0x1c, size 0x4
  __declspec(property(get = __get__duration, put = __set__duration)) float_t _duration;

  /// @brief Field _width, offset 0x20, size 0x4
  __declspec(property(get = __get__width, put = __set__width)) int32_t _width;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_type))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType type;

  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_width)) int32_t width;

  constexpr float_t& __get__time();

  constexpr float_t const& __get__time() const;

  constexpr void __set__time(float_t value);

  constexpr int32_t& __get__lineIndex();

  constexpr int32_t const& __get__lineIndex() const;

  constexpr void __set__lineIndex(int32_t value);

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType& __get__type();

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType const& __get__type() const;

  constexpr void __set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType value);

  constexpr float_t& __get__duration();

  constexpr float_t const& __get__duration() const;

  constexpr void __set__duration(float_t value);

  constexpr int32_t& __get__width();

  constexpr int32_t const& __get__width() const;

  constexpr void __set__width(int32_t value);

  /// @brief Method get_time addr 0xe09064 size 0x8 virtual true final false
  inline float_t get_time();

  /// @brief Method get_lineIndex addr 0xe0906c size 0x8 virtual false final false
  inline int32_t get_lineIndex();

  /// @brief Method get_type addr 0xe09074 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType get_type();

  /// @brief Method get_duration addr 0xe0907c size 0x8 virtual false final false
  inline float_t get_duration();

  /// @brief Method get_width addr 0xe09084 size 0x8 virtual false final false
  inline int32_t get_width();

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*
  New_ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType type, float_t duration, int32_t width);

  /// @brief Method .ctor addr 0xe0908c size 0x54 virtual false final false
  inline void _ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType type, float_t duration, int32_t width);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__ObstacleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__ObstacleData(__BeatmapSaveData__ObstacleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__ObstacleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__ObstacleData(__BeatmapSaveData__ObstacleData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__ObstacleData();

public:
  /// @brief Field _time, offset: 0x10, size: 0x4, def value: None
  float_t ____time;

  /// @brief Field _lineIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ____lineIndex;

  /// @brief Field _type, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType ____type;

  /// @brief Field _duration, offset: 0x1c, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _width, offset: 0x20, size: 0x4, def value: None
  int32_t ____width;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData, 0x28>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::SpecialEventKeywordFiltersData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14840))
// CS Name: ::BeatmapSaveData::SpecialEventKeywordFiltersData*
class CORDL_TYPE __BeatmapSaveData__SpecialEventKeywordFiltersData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _keywords, offset 0x10, size 0x8
  __declspec(property(get = __get__keywords,
                      put = __set__keywords))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* _keywords;

  __declspec(property(get = get_keywords))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* keywords;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*& __get__keywords();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*> const&
  __get__keywords() const;

  constexpr void __set__keywords(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* value);

  /// @brief Method get_keywords addr 0xe090e0 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* get_keywords();

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*
  New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* keywords);

  /// @brief Method .ctor addr 0xe090e8 size 0x28 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* keywords);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__SpecialEventKeywordFiltersData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__SpecialEventKeywordFiltersData(__BeatmapSaveData__SpecialEventKeywordFiltersData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__SpecialEventKeywordFiltersData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__SpecialEventKeywordFiltersData(__BeatmapSaveData__SpecialEventKeywordFiltersData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__SpecialEventKeywordFiltersData();

public:
  /// @brief Field _keywords, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* ____keywords;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData, 0x18>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::SpecialEventsForKeyword
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14841))
// CS Name: ::BeatmapSaveData::SpecialEventsForKeyword*
class CORDL_TYPE __BeatmapSaveData__SpecialEventsForKeyword : public ::System::Object {
public:
  // Declarations
  /// @brief Field _keyword, offset 0x10, size 0x8
  __declspec(property(get = __get__keyword, put = __set__keyword))::StringW _keyword;

  /// @brief Field _specialEvents, offset 0x18, size 0x8
  __declspec(property(get = __get__specialEvents,
                      put = __set__specialEvents))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* _specialEvents;

  __declspec(property(get = get_keyword))::StringW keyword;

  __declspec(property(get = get_specialEvents))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* specialEvents;

  constexpr ::StringW& __get__keyword();

  constexpr ::StringW const& __get__keyword() const;

  constexpr void __set__keyword(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*& __get__specialEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*> const&
  __get__specialEvents() const;

  constexpr void __set__specialEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* value);

  /// @brief Method get_keyword addr 0xe09110 size 0x8 virtual false final false
  inline ::StringW get_keyword();

  /// @brief Method get_specialEvents addr 0xe09118 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* get_specialEvents();

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*
  New_ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* specialEvents);

  /// @brief Method .ctor addr 0xe09120 size 0x2c virtual false final false
  inline void _ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* specialEvents);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__SpecialEventsForKeyword", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__SpecialEventsForKeyword(__BeatmapSaveData__SpecialEventsForKeyword&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__SpecialEventsForKeyword", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__SpecialEventsForKeyword(__BeatmapSaveData__SpecialEventsForKeyword const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__SpecialEventsForKeyword();

public:
  /// @brief Field _keyword, offset: 0x10, size: 0x8, def value: None
  ::StringW ____keyword;

  /// @brief Field _specialEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* ____specialEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
// Type: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14829))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14842))
// CS Name: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*
class CORDL_TYPE BeatmapSaveData : public ::System::Object {
public:
  // Declarations
  using SpecialEventsForKeyword = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword;

  using SpecialEventKeywordFiltersData = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData;

  using ObstacleType = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType;

  using ObstacleData = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData;

  using SliderData = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData;

  using WaypointData = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData;

  using NoteData = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData;

  using SliderType = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType;

  using ColorType = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType;

  using NoteType = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType;

  using BeatmapObjectType = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType;

  using EventData = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData;

  using BeatmapEventType = ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType;

  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __get__version, put = __set__version))::StringW _version;

  /// @brief Field _events, offset 0x18, size 0x8
  __declspec(property(get = __get__events, put = __set__events))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* _events;

  /// @brief Field _notes, offset 0x20, size 0x8
  __declspec(property(get = __get__notes, put = __set__notes))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* _notes;

  /// @brief Field _sliders, offset 0x28, size 0x8
  __declspec(property(get = __get__sliders, put = __set__sliders))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* _sliders;

  /// @brief Field _waypoints, offset 0x30, size 0x8
  __declspec(property(get = __get__waypoints, put = __set__waypoints))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* _waypoints;

  /// @brief Field _obstacles, offset 0x38, size 0x8
  __declspec(property(get = __get__obstacles, put = __set__obstacles))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* _obstacles;

  /// @brief Field _specialEventsKeywordFilters, offset 0x40, size 0x8
  __declspec(property(get = __get__specialEventsKeywordFilters,
                      put = __set__specialEventsKeywordFilters))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* _specialEventsKeywordFilters;

  __declspec(property(get = get_version))::StringW version;

  __declspec(property(get = get_events))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* events;

  __declspec(property(get = get_notes))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* notes;

  __declspec(property(get = get_sliders))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* sliders;

  __declspec(property(get = get_waypoints))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* waypoints;

  __declspec(property(get = get_obstacles))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* obstacles;

  __declspec(property(get = get_specialEventsKeywordFilters))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* specialEventsKeywordFilters;

  constexpr ::StringW& __get__version();

  constexpr ::StringW const& __get__version() const;

  constexpr void __set__version(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*& __get__events();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*> const& __get__events() const;

  constexpr void __set__events(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*& __get__notes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*> const& __get__notes() const;

  constexpr void __set__notes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*& __get__sliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*> const& __get__sliders() const;

  constexpr void __set__sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*& __get__waypoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*> const& __get__waypoints() const;

  constexpr void __set__waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*& __get__obstacles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*> const& __get__obstacles() const;

  constexpr void __set__obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* value);

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*& __get__specialEventsKeywordFilters();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*> const& __get__specialEventsKeywordFilters() const;

  constexpr void __set__specialEventsKeywordFilters(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* value);

  /// @brief Method get_version addr 0xe08914 size 0x8 virtual false final false
  inline ::StringW get_version();

  /// @brief Method get_events addr 0xe0891c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* get_events();

  /// @brief Method get_notes addr 0xe08924 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* get_notes();

  /// @brief Method get_sliders addr 0xe0892c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* get_sliders();

  /// @brief Method get_waypoints addr 0xe08934 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* get_waypoints();

  /// @brief Method get_obstacles addr 0xe0893c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* get_obstacles();

  /// @brief Method get_specialEventsKeywordFilters addr 0xe08944 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* get_specialEventsKeywordFilters();

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*
  New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* events,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* notes,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* sliders,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* waypoints,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* obstacles,
           ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* specialEventsKeywordFilters);

  /// @brief Method .ctor addr 0xe0894c size 0x90 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* events,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* notes,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* sliders,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* waypoints,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* obstacles,
                    ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* specialEventsKeywordFilters);

  /// @brief Method SerializeToJSONString addr 0xe089dc size 0x8 virtual false final false
  inline ::StringW SerializeToJSONString();

  /// @brief Method DeserializeFromJSONString addr 0xe0562c size 0x1d0 virtual false final false
  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* DeserializeFromJSONString(::StringW stringData);

  /// @brief Method ConvertBeatmapSaveDataPreV2_5_0 addr 0xe089e4 size 0x370 virtual false final false
  static inline void ConvertBeatmapSaveDataPreV2_5_0(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData);

  /// @brief Method GetSpecialEventTypes addr 0xe08d98 size 0xc4 virtual false final false
  static inline ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* GetSpecialEventTypes();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveData(BeatmapSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveData(BeatmapSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveData();

public:
  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  /// @brief Field _events, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* ____events;

  /// @brief Field _notes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* ____notes;

  /// @brief Field _sliders, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* ____sliders;

  /// @brief Field _waypoints, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* ____waypoints;

  /// @brief Field _obstacles, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* ____obstacles;

  /// @brief Field _specialEventsKeywordFilters, offset: 0x40, size: 0x8, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* ____specialEventsKeywordFilters;

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"2.6.0" };

  /// @brief Field kColorBoostEventType value: static_cast<int32_t>(0x5)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const kColorBoostEventType;

  /// @brief Field kLegacyBPMEventType value: static_cast<int32_t>(0xa)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const kLegacyBPMEventType;

  /// @brief Field kBPMEventType value: static_cast<int32_t>(0x64)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const kBPMEventType;

  /// @brief Field kEarlyRotationEventType value: static_cast<int32_t>(0xe)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const kEarlyRotationEventType;

  /// @brief Field kLateRotationEventType value: static_cast<int32_t>(0xf)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const kLateRotationEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, 0x48>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/BeatmapEventType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/BeatmapObjectType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ColorType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/NoteType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ObstacleType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/SliderType");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/EventData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/NoteData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ObstacleData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/SliderData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*, "BeatmapSaveDataVersion2_6_0AndEarlier",
                       "BeatmapSaveData/SpecialEventKeywordFiltersData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/SpecialEventsForKeyword");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/WaypointData");
