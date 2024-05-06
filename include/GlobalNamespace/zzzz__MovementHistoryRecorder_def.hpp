#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MovementHistoryRecorder)
namespace GlobalNamespace {
class AveragingValueRecorder;
}
// Forward declare root types
namespace GlobalNamespace {
class MovementHistoryRecorder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MovementHistoryRecorder);
// Type: ::MovementHistoryRecorder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MovementHistoryRecorder*
class CORDL_TYPE MovementHistoryRecorder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _accum, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__accum, put = __cordl_internal_set__accum)) float_t _accum;

  /// @brief Field _averagingValueRecorer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__averagingValueRecorer, put = __cordl_internal_set__averagingValueRecorer))::GlobalNamespace::AveragingValueRecorder* _averagingValueRecorer;

  /// @brief Field _decreaseSpeed, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__decreaseSpeed, put = __cordl_internal_set__decreaseSpeed)) float_t _decreaseSpeed;

  /// @brief Field _increaseSpeed, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__increaseSpeed, put = __cordl_internal_set__increaseSpeed)) float_t _increaseSpeed;

  __declspec(property(get = get_averagingValueRecorer))::GlobalNamespace::AveragingValueRecorder* averagingValueRecorer;

  /// @brief Method AddMovement, addr 0x2724d80, size 0x24, virtual false, abstract: false, final false
  inline void AddMovement(float_t distance);

  /// @brief Method ManualUpdate, addr 0x2724da4, size 0x3c, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t deltaTime);

  static inline ::GlobalNamespace::MovementHistoryRecorder* New_ctor(float_t averageWindowDuration, float_t historyValuesPerSecond, float_t increaseSpeed, float_t decreaseSpeed);

  constexpr float_t const& __cordl_internal_get__accum() const;

  constexpr float_t& __cordl_internal_get__accum();

  constexpr ::GlobalNamespace::AveragingValueRecorder*& __cordl_internal_get__averagingValueRecorer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AveragingValueRecorder*> const& __cordl_internal_get__averagingValueRecorer() const;

  constexpr float_t const& __cordl_internal_get__decreaseSpeed() const;

  constexpr float_t& __cordl_internal_get__decreaseSpeed();

  constexpr float_t const& __cordl_internal_get__increaseSpeed() const;

  constexpr float_t& __cordl_internal_get__increaseSpeed();

  constexpr void __cordl_internal_set__accum(float_t value);

  constexpr void __cordl_internal_set__averagingValueRecorer(::GlobalNamespace::AveragingValueRecorder* value);

  constexpr void __cordl_internal_set__decreaseSpeed(float_t value);

  constexpr void __cordl_internal_set__increaseSpeed(float_t value);

  /// @brief Method .ctor, addr 0x2724ce4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(float_t averageWindowDuration, float_t historyValuesPerSecond, float_t increaseSpeed, float_t decreaseSpeed);

  /// @brief Method get_averagingValueRecorer, addr 0x2724cdc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AveragingValueRecorder* get_averagingValueRecorer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MovementHistoryRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MovementHistoryRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MovementHistoryRecorder(MovementHistoryRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MovementHistoryRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MovementHistoryRecorder(MovementHistoryRecorder const&) = delete;

  /// @brief Field _averagingValueRecorer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AveragingValueRecorder* ____averagingValueRecorer;

  /// @brief Field _increaseSpeed, offset: 0x18, size: 0x4, def value: None
  float_t ____increaseSpeed;

  /// @brief Field _decreaseSpeed, offset: 0x1c, size: 0x4, def value: None
  float_t ____decreaseSpeed;

  /// @brief Field _accum, offset: 0x20, size: 0x4, def value: None
  float_t ____accum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MovementHistoryRecorder, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementHistoryRecorder, ____averagingValueRecorer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementHistoryRecorder, ____increaseSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementHistoryRecorder, ____decreaseSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementHistoryRecorder, ____accum) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MovementHistoryRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MovementHistoryRecorder*, "", "MovementHistoryRecorder");
