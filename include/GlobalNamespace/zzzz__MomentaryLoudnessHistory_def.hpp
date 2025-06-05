#pragma once
// IWYU pragma private; include "GlobalNamespace/MomentaryLoudnessHistory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MomentaryLoudnessHistory)
// Forward declare root types
namespace GlobalNamespace {
class MomentaryLoudnessHistory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MomentaryLoudnessHistory);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MomentaryLoudnessHistory
class CORDL_TYPE MomentaryLoudnessHistory : public ::System::Object {
public:
  // Declarations
  /// @brief Field _historyFull, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__historyFull, put = __cordl_internal_set__historyFull)) bool _historyFull;

  /// @brief Field _nextRmsIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__nextRmsIndex, put = __cordl_internal_set__nextRmsIndex)) int32_t _nextRmsIndex;

  /// @brief Field _rmsValues, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rmsValues, put = __cordl_internal_set__rmsValues)) ::ArrayW<float_t, ::Array<float_t>*> _rmsValues;

  /// @brief Method Add, addr 0x3acdec8, size 0x50, virtual false, abstract: false, final false
  inline void Add(float_t momentaryLoudness);

  /// @brief Method GetAverageLoudness, addr 0x3acdf4c, size 0x80, virtual false, abstract: false, final false
  inline float_t GetAverageLoudness();

  static inline ::GlobalNamespace::MomentaryLoudnessHistory* New_ctor(int32_t length);

  constexpr bool const& __cordl_internal_get__historyFull() const;

  constexpr bool& __cordl_internal_get__historyFull();

  constexpr int32_t const& __cordl_internal_get__nextRmsIndex() const;

  constexpr int32_t& __cordl_internal_get__nextRmsIndex();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__rmsValues() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__rmsValues();

  constexpr void __cordl_internal_set__historyFull(bool value);

  constexpr void __cordl_internal_set__nextRmsIndex(int32_t value);

  constexpr void __cordl_internal_set__rmsValues(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method .ctor, addr 0x3ace098, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MomentaryLoudnessHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MomentaryLoudnessHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MomentaryLoudnessHistory(MomentaryLoudnessHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MomentaryLoudnessHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MomentaryLoudnessHistory(MomentaryLoudnessHistory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4016 };

  /// @brief Field _rmsValues, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____rmsValues;

  /// @brief Field _nextRmsIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____nextRmsIndex;

  /// @brief Field _historyFull, offset: 0x1c, size: 0x1, def value: None
  bool ____historyFull;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MomentaryLoudnessHistory, ____rmsValues) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MomentaryLoudnessHistory, ____nextRmsIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MomentaryLoudnessHistory, ____historyFull) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MomentaryLoudnessHistory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MomentaryLoudnessHistory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MomentaryLoudnessHistory*, "", "MomentaryLoudnessHistory");
