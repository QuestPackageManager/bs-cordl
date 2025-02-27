#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/IndexFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__IndexFilterLimitAlsoAffectsType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterRandomType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexFilter)
namespace BeatmapSaveDataCommon {
struct IndexFilterLimitAlsoAffectsType;
}
namespace BeatmapSaveDataCommon {
struct IndexFilterRandomType;
}
namespace BeatmapSaveDataCommon {
struct IndexFilterType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class IndexFilter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::IndexFilter);
// Dependencies BeatmapSaveDataCommon.IndexFilterLimitAlsoAffectsType, BeatmapSaveDataCommon.IndexFilterRandomType, BeatmapSaveDataCommon.IndexFilterType, System.Object
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.IndexFilter
class CORDL_TYPE IndexFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field c, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) int32_t c;

  __declspec(property(get = get_chunks)) int32_t chunks;

  /// @brief Field d, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType d;

  /// @brief Field f, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_f, put = __cordl_internal_set_f)) ::BeatmapSaveDataCommon::IndexFilterType f;

  /// @brief Field l, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_l, put = __cordl_internal_set_l)) float_t l;

  __declspec(property(get = get_limit)) float_t limit;

  __declspec(property(get = get_limitAlsoAffectsType)) ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType limitAlsoAffectsType;

  /// @brief Field n, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n)) ::BeatmapSaveDataCommon::IndexFilterRandomType n;

  /// @brief Field p, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) int32_t p;

  __declspec(property(get = get_param0)) int32_t param0;

  __declspec(property(get = get_param1)) int32_t param1;

  /// @brief Field r, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) int32_t r;

  __declspec(property(get = get_random)) ::BeatmapSaveDataCommon::IndexFilterRandomType random;

  __declspec(property(get = get_reversed)) bool reversed;

  /// @brief Field s, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) int32_t s;

  __declspec(property(get = get_seed)) int32_t seed;

  /// @brief Field t, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t)) int32_t t;

  __declspec(property(get = get_type)) ::BeatmapSaveDataCommon::IndexFilterType type;

  /// @brief Method CreateDivisionIndexFilter, addr 0x270e02c, size 0x80, virtual false, abstract: false, final false
  static inline ::BeatmapSaveDataVersion3::IndexFilter* CreateDivisionIndexFilter(int32_t numberOfSections, int32_t divisionIdx, bool reversed);

  /// @brief Method CreateForExtension, addr 0x270e12c, size 0x68, virtual false, abstract: false, final false
  static inline ::BeatmapSaveDataVersion3::IndexFilter* CreateForExtension();

  /// @brief Method CreateStepFilter, addr 0x270e0ac, size 0x80, virtual false, abstract: false, final false
  static inline ::BeatmapSaveDataVersion3::IndexFilter* CreateStepFilter(int32_t offset, int32_t step, bool reversed);

  static inline ::BeatmapSaveDataVersion3::IndexFilter* New_ctor(::BeatmapSaveDataVersion3::IndexFilter* other);

  static inline ::BeatmapSaveDataVersion3::IndexFilter* New_ctor(::BeatmapSaveDataCommon::IndexFilterType type, int32_t param0, int32_t param1, bool reversed,
                                                                 ::BeatmapSaveDataCommon::IndexFilterRandomType random, int32_t seed, int32_t chunks, float_t limit,
                                                                 ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType limitAlsoAffectsType);

  constexpr int32_t const& __cordl_internal_get_c() const;

  constexpr int32_t& __cordl_internal_get_c();

  constexpr ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType const& __cordl_internal_get_d() const;

  constexpr ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType& __cordl_internal_get_d();

  constexpr ::BeatmapSaveDataCommon::IndexFilterType const& __cordl_internal_get_f() const;

  constexpr ::BeatmapSaveDataCommon::IndexFilterType& __cordl_internal_get_f();

  constexpr float_t const& __cordl_internal_get_l() const;

  constexpr float_t& __cordl_internal_get_l();

  constexpr ::BeatmapSaveDataCommon::IndexFilterRandomType const& __cordl_internal_get_n() const;

  constexpr ::BeatmapSaveDataCommon::IndexFilterRandomType& __cordl_internal_get_n();

  constexpr int32_t const& __cordl_internal_get_p() const;

  constexpr int32_t& __cordl_internal_get_p();

  constexpr int32_t const& __cordl_internal_get_r() const;

  constexpr int32_t& __cordl_internal_get_r();

  constexpr int32_t const& __cordl_internal_get_s() const;

  constexpr int32_t& __cordl_internal_get_s();

  constexpr int32_t const& __cordl_internal_get_t() const;

  constexpr int32_t& __cordl_internal_get_t();

  constexpr void __cordl_internal_set_c(int32_t value);

  constexpr void __cordl_internal_set_d(::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType value);

  constexpr void __cordl_internal_set_f(::BeatmapSaveDataCommon::IndexFilterType value);

  constexpr void __cordl_internal_set_l(float_t value);

  constexpr void __cordl_internal_set_n(::BeatmapSaveDataCommon::IndexFilterRandomType value);

  constexpr void __cordl_internal_set_p(int32_t value);

  constexpr void __cordl_internal_set_r(int32_t value);

  constexpr void __cordl_internal_set_s(int32_t value);

  constexpr void __cordl_internal_set_t(int32_t value);

  /// @brief Method .ctor, addr 0x270dfd8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::IndexFilter* other);

  /// @brief Method .ctor, addr 0x270df58, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataCommon::IndexFilterType type, int32_t param0, int32_t param1, bool reversed, ::BeatmapSaveDataCommon::IndexFilterRandomType random, int32_t seed, int32_t chunks,
                    float_t limit, ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType limitAlsoAffectsType);

  /// @brief Method get_chunks, addr 0x270df30, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_chunks();

  /// @brief Method get_limit, addr 0x270df38, size 0x8, virtual false, abstract: false, final false
  inline float_t get_limit();

  /// @brief Method get_limitAlsoAffectsType, addr 0x270df40, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType get_limitAlsoAffectsType();

  /// @brief Method get_param0, addr 0x270df10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_param0();

  /// @brief Method get_param1, addr 0x270df18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_param1();

  /// @brief Method get_random, addr 0x270df48, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::IndexFilterRandomType get_random();

  /// @brief Method get_reversed, addr 0x270df20, size 0x10, virtual false, abstract: false, final false
  inline bool get_reversed();

  /// @brief Method get_seed, addr 0x270df50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_seed();

  /// @brief Method get_type, addr 0x270df08, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::IndexFilterType get_type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexFilter(IndexFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexFilter(IndexFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13410 };

  /// @brief Field f, offset: 0x10, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::IndexFilterType ___f;

  /// @brief Field p, offset: 0x14, size: 0x4, def value: None
  int32_t ___p;

  /// @brief Field t, offset: 0x18, size: 0x4, def value: None
  int32_t ___t;

  /// @brief Field r, offset: 0x1c, size: 0x4, def value: None
  int32_t ___r;

  /// @brief Field c, offset: 0x20, size: 0x4, def value: None
  int32_t ___c;

  /// @brief Field n, offset: 0x24, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::IndexFilterRandomType ___n;

  /// @brief Field s, offset: 0x28, size: 0x4, def value: None
  int32_t ___s;

  /// @brief Field l, offset: 0x2c, size: 0x4, def value: None
  float_t ___l;

  /// @brief Field d, offset: 0x30, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::IndexFilter, ___f) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IndexFilter, ___p) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IndexFilter, ___t) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IndexFilter, ___r) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IndexFilter, ___c) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IndexFilter, ___n) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IndexFilter, ___s) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IndexFilter, ___l) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IndexFilter, ___d) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::IndexFilter, 0x38>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::IndexFilter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::IndexFilter*, "BeatmapSaveDataVersion3", "IndexFilter");
