#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledItem)
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
struct TimerState;
}
namespace UnityEngine::UIElements {
class __ScheduledItem____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ScheduledItem;
}
namespace UnityEngine::UIElements {
class __ScheduledItem____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ScheduledItem);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ScheduledItem____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ScheduledItem::<>c*
class CORDL_TYPE __ScheduledItem____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__ScheduledItem____c* __9;

  static inline ::UnityEngine::UIElements::__ScheduledItem____c* New_ctor();

  /// @brief Method <.cctor>b__25_0, addr 0x2f6fce0, size 0x8, virtual false, abstract: false, final false
  inline bool __cctor_b__25_0();

  /// @brief Method <.cctor>b__25_1, addr 0x2f6fce8, size 0x8, virtual false, abstract: false, final false
  inline bool __cctor_b__25_1();

  /// @brief Method .ctor, addr 0x2f6fcd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__ScheduledItem____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__ScheduledItem____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScheduledItem____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScheduledItem____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScheduledItem____c(__ScheduledItem____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScheduledItem____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScheduledItem____c(__ScheduledItem____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ScheduledItem____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ScheduledItem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ScheduledItem*
class CORDL_TYPE ScheduledItem : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__ScheduledItem____c;

  /// @brief Field ForeverCondition, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ForeverCondition, put = setStaticF_ForeverCondition))::System::Func_1<bool>* ForeverCondition;

  /// @brief Field OnceCondition, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnceCondition, put = setStaticF_OnceCondition))::System::Func_1<bool>* OnceCondition;

  /// @brief Field <delayMs>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__delayMs_k__BackingField, put = __cordl_internal_set__delayMs_k__BackingField)) int64_t _delayMs_k__BackingField;

  /// @brief Field <endTimeMs>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__endTimeMs_k__BackingField, put = __cordl_internal_set__endTimeMs_k__BackingField)) int64_t _endTimeMs_k__BackingField;

  /// @brief Field <intervalMs>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__intervalMs_k__BackingField, put = __cordl_internal_set__intervalMs_k__BackingField)) int64_t _intervalMs_k__BackingField;

  /// @brief Field <startMs>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__startMs_k__BackingField, put = __cordl_internal_set__startMs_k__BackingField)) int64_t _startMs_k__BackingField;

  __declspec(property(get = get_delayMs, put = set_delayMs)) int64_t delayMs;

  __declspec(property(get = get_endTimeMs)) int64_t endTimeMs;

  __declspec(property(get = get_intervalMs, put = set_intervalMs)) int64_t intervalMs;

  __declspec(property(get = get_startMs, put = set_startMs)) int64_t startMs;

  /// @brief Field timerUpdateStopCondition, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_timerUpdateStopCondition, put = __cordl_internal_set_timerUpdateStopCondition))::System::Func_1<bool>* timerUpdateStopCondition;

  static inline ::UnityEngine::UIElements::ScheduledItem* New_ctor();

  /// @brief Method OnItemUnscheduled, addr 0x2f6fb38, size 0x4, virtual true, abstract: false, final false
  inline void OnItemUnscheduled();

  /// @brief Method PerformTimerUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PerformTimerUpdate(::UnityEngine::UIElements::TimerState state);

  /// @brief Method ResetStartTime, addr 0x2f6fadc, size 0x5c, virtual false, abstract: false, final false
  inline void ResetStartTime();

  /// @brief Method ShouldUnschedule, addr 0x2f6fb3c, size 0x20, virtual true, abstract: false, final false
  inline bool ShouldUnschedule();

  constexpr int64_t const& __cordl_internal_get__delayMs_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__delayMs_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__endTimeMs_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__endTimeMs_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__intervalMs_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__intervalMs_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__startMs_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__startMs_k__BackingField();

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_timerUpdateStopCondition();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __cordl_internal_get_timerUpdateStopCondition() const;

  constexpr void __cordl_internal_set__delayMs_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__endTimeMs_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__intervalMs_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__startMs_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set_timerUpdateStopCondition(::System::Func_1<bool>* value);

  /// @brief Method .ctor, addr 0x2f6fa68, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Func_1<bool>* getStaticF_ForeverCondition();

  static inline ::System::Func_1<bool>* getStaticF_OnceCondition();

  /// @brief Method get_delayMs, addr 0x2f6fa40, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_delayMs();

  /// @brief Method get_endTimeMs, addr 0x2f6fa60, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_endTimeMs();

  /// @brief Method get_intervalMs, addr 0x2f6fa50, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_intervalMs();

  /// @brief Method get_startMs, addr 0x2f6fa30, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_startMs();

  static inline void setStaticF_ForeverCondition(::System::Func_1<bool>* value);

  static inline void setStaticF_OnceCondition(::System::Func_1<bool>* value);

  /// @brief Method set_delayMs, addr 0x2f6fa48, size 0x8, virtual false, abstract: false, final false
  inline void set_delayMs(int64_t value);

  /// @brief Method set_intervalMs, addr 0x2f6fa58, size 0x8, virtual false, abstract: false, final false
  inline void set_intervalMs(int64_t value);

  /// @brief Method set_startMs, addr 0x2f6fa38, size 0x8, virtual false, abstract: false, final false
  inline void set_startMs(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScheduledItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScheduledItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScheduledItem(ScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScheduledItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScheduledItem(ScheduledItem const&) = delete;

  /// @brief Field timerUpdateStopCondition, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<bool>* ___timerUpdateStopCondition;

  /// @brief Field <startMs>k__BackingField, offset: 0x18, size: 0x8, def value: None
  int64_t ____startMs_k__BackingField;

  /// @brief Field <delayMs>k__BackingField, offset: 0x20, size: 0x8, def value: None
  int64_t ____delayMs_k__BackingField;

  /// @brief Field <intervalMs>k__BackingField, offset: 0x28, size: 0x8, def value: None
  int64_t ____intervalMs_k__BackingField;

  /// @brief Field <endTimeMs>k__BackingField, offset: 0x30, size: 0x8, def value: None
  int64_t ____endTimeMs_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScheduledItem, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScheduledItem, ___timerUpdateStopCondition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScheduledItem, ____startMs_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScheduledItem, ____delayMs_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScheduledItem, ____intervalMs_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScheduledItem, ____endTimeMs_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScheduledItem*, "UnityEngine.UIElements", "ScheduledItem");
NEED_NO_BOX(::UnityEngine::UIElements::__ScheduledItem____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ScheduledItem____c*, "UnityEngine.UIElements", "ScheduledItem/<>c");
