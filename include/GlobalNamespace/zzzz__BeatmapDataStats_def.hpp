#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Range_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataStats)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct BeatmapDataStats_Events;
}
namespace GlobalNamespace {
struct BeatmapDataStats_Objects;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapDataStats_Events;
}
namespace GlobalNamespace {
struct BeatmapDataStats_Objects;
}
namespace GlobalNamespace {
class BeatmapDataStats;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapDataStats_Events);
MARK_VAL_T(::GlobalNamespace::BeatmapDataStats_Objects);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataStats);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataStats/Objects
struct CORDL_TYPE BeatmapDataStats_Objects {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapDataStats_Objects_Unwrapped
  enum struct __BeatmapDataStats_Objects_Unwrapped : int32_t {
    __E_Notes = static_cast<int32_t>(0x0),
    __E_Sliders = static_cast<int32_t>(0x1),
    __E_Obstacles = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapDataStats_Objects_Unwrapped() const noexcept {
    return static_cast<__BeatmapDataStats_Objects_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataStats_Objects();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapDataStats_Objects(int32_t value__) noexcept;

  /// @brief Field Notes value: I32(0)
  static ::GlobalNamespace::BeatmapDataStats_Objects const Notes;

  /// @brief Field Obstacles value: I32(2)
  static ::GlobalNamespace::BeatmapDataStats_Objects const Obstacles;

  /// @brief Field Sliders value: I32(1)
  static ::GlobalNamespace::BeatmapDataStats_Objects const Sliders;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6673 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataStats_Objects, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataStats_Objects, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataStats/Events
struct CORDL_TYPE BeatmapDataStats_Events {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapDataStats_Events_Unwrapped
  enum struct __BeatmapDataStats_Events_Unwrapped : int32_t {
    __E_BPM = static_cast<int32_t>(0x0),
    __E_JumpSpeed = static_cast<int32_t>(0x1),
    __E_Basic = static_cast<int32_t>(0x2),
    __E_Boost = static_cast<int32_t>(0x3),
    __E_Color = static_cast<int32_t>(0x4),
    __E_Rotation = static_cast<int32_t>(0x5),
    __E_Translation = static_cast<int32_t>(0x6),
    __E_FX = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapDataStats_Events_Unwrapped() const noexcept {
    return static_cast<__BeatmapDataStats_Events_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataStats_Events();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapDataStats_Events(int32_t value__) noexcept;

  /// @brief Field BPM value: I32(0)
  static ::GlobalNamespace::BeatmapDataStats_Events const BPM;

  /// @brief Field Basic value: I32(2)
  static ::GlobalNamespace::BeatmapDataStats_Events const Basic;

  /// @brief Field Boost value: I32(3)
  static ::GlobalNamespace::BeatmapDataStats_Events const Boost;

  /// @brief Field Color value: I32(4)
  static ::GlobalNamespace::BeatmapDataStats_Events const Color;

  /// @brief Field FX value: I32(7)
  static ::GlobalNamespace::BeatmapDataStats_Events const FX;

  /// @brief Field JumpSpeed value: I32(1)
  static ::GlobalNamespace::BeatmapDataStats_Events const JumpSpeed;

  /// @brief Field Rotation value: I32(5)
  static ::GlobalNamespace::BeatmapDataStats_Events const Rotation;

  /// @brief Field Translation value: I32(6)
  static ::GlobalNamespace::BeatmapDataStats_Events const Translation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6674 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataStats_Events, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataStats_Events, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, System.Range
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataStats
class CORDL_TYPE BeatmapDataStats : public ::System::Object {
public:
  // Declarations
  using Events = ::GlobalNamespace::BeatmapDataStats_Events;

  using Objects = ::GlobalNamespace::BeatmapDataStats_Objects;

  /// @brief Field kEventCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kEventCount, put = setStaticF_kEventCount)) int32_t kEventCount;

  /// @brief Field kEventRange, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kEventRange, put = setStaticF_kEventRange)) ::System::Range kEventRange;

  /// @brief Field kObjectCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kObjectCount, put = setStaticF_kObjectCount)) int32_t kObjectCount;

  /// @brief Field kObjectRange, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kObjectRange, put = setStaticF_kObjectRange)) ::System::Range kObjectRange;

  /// @brief Method CountItems, addr 0x5758f10, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Span_1<int32_t> CountItems(::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*> items);

  /// @brief Method CountItems, addr 0x57590e8, size 0x3f0, virtual false, abstract: false, final false
  static inline int32_t CountItems(::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*> items, ::System::Span_1<int32_t> objects,
                                   ::System::Span_1<int32_t> events);

  /// @brief Method GenerateReport, addr 0x575954c, size 0x558, virtual false, abstract: false, final false
  static inline ::StringW GenerateReport(::System::Span_1<int32_t> counts);

  /// @brief Method SumCounts, addr 0x57594d8, size 0x74, virtual false, abstract: false, final false
  static inline int32_t SumCounts(::System::Span_1<int32_t> counts);

  static inline int32_t getStaticF_kEventCount();

  static inline ::System::Range getStaticF_kEventRange();

  static inline int32_t getStaticF_kObjectCount();

  static inline ::System::Range getStaticF_kObjectRange();

  static inline void setStaticF_kEventCount(int32_t value);

  static inline void setStaticF_kEventRange(::System::Range value);

  static inline void setStaticF_kObjectCount(int32_t value);

  static inline void setStaticF_kObjectRange(::System::Range value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataStats();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataStats(BeatmapDataStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataStats(BeatmapDataStats const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6675 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataStats, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataStats_Events, "", "BeatmapDataStats/Events");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataStats_Objects, "", "BeatmapDataStats/Objects");
NEED_NO_BOX(::GlobalNamespace::BeatmapDataStats);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataStats*, "", "BeatmapDataStats");
