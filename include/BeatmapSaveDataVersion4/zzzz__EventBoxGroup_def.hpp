#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/EventBoxGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroupType_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBoxGroup)
namespace BeatmapSaveDataCommon {
class IBeat;
}
namespace BeatmapSaveDataVersion4 {
struct EventBox;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
class EventBoxGroup;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion4::EventBoxGroup);
// Dependencies BeatmapSaveDataCommon.IBeat, BeatmapSaveDataVersion4.EventBoxGroupType, System.IComparable`1<T>, System.Object
namespace BeatmapSaveDataVersion4 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion4.EventBoxGroup
class CORDL_TYPE EventBoxGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Field e, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e)) ::ArrayW<::BeatmapSaveDataVersion4::EventBox, ::Array<::BeatmapSaveDataVersion4::EventBox>*> e;

  /// @brief Field g, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) int32_t g;

  /// @brief Field t, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t)) ::BeatmapSaveDataVersion4::EventBoxGroupType t;

  /// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
  constexpr operator ::BeatmapSaveDataCommon::IBeat*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept;

  static inline ::BeatmapSaveDataVersion4::EventBoxGroup* New_ctor();

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBox, ::Array<::BeatmapSaveDataVersion4::EventBox>*> const& __cordl_internal_get_e() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBox, ::Array<::BeatmapSaveDataVersion4::EventBox>*>& __cordl_internal_get_e();

  constexpr int32_t const& __cordl_internal_get_g() const;

  constexpr int32_t& __cordl_internal_get_g();

  constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType const& __cordl_internal_get_t() const;

  constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType& __cordl_internal_get_t();

  constexpr void __cordl_internal_set_b(float_t value);

  constexpr void __cordl_internal_set_e(::ArrayW<::BeatmapSaveDataVersion4::EventBox, ::Array<::BeatmapSaveDataVersion4::EventBox>*> value);

  constexpr void __cordl_internal_set_g(int32_t value);

  constexpr void __cordl_internal_set_t(::BeatmapSaveDataVersion4::EventBoxGroupType value);

  /// @brief Method .ctor, addr 0x2708d9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beat, addr 0x2708d94, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beat();

  /// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
  constexpr ::BeatmapSaveDataCommon::IBeat* i___BeatmapSaveDataCommon__IBeat() noexcept;

  /// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBoxGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBoxGroup(EventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBoxGroup(EventBoxGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13379 };

  /// @brief Field t, offset: 0x10, size: 0x4, def value: None
  ::BeatmapSaveDataVersion4::EventBoxGroupType ___t;

  /// @brief Field g, offset: 0x14, size: 0x4, def value: None
  int32_t ___g;

  /// @brief Field b, offset: 0x18, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field e, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::EventBox, ::Array<::BeatmapSaveDataVersion4::EventBox>*> ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::EventBoxGroup, ___t) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::EventBoxGroup, ___g) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::EventBoxGroup, ___b) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::EventBoxGroup, ___e) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::EventBoxGroup, 0x28>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
NEED_NO_BOX(::BeatmapSaveDataVersion4::EventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::EventBoxGroup*, "BeatmapSaveDataVersion4", "EventBoxGroup");
