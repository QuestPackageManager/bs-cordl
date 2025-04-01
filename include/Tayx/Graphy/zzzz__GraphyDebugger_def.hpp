#pragma once
// IWYU pragma private; include "Tayx/Graphy/GraphyDebugger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphyDebugger)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
namespace Tayx::Graphy {
struct GraphyDebugger_ConditionEvaluation;
}
namespace Tayx::Graphy {
struct GraphyDebugger_DebugComparer;
}
namespace Tayx::Graphy {
struct GraphyDebugger_DebugCondition;
}
namespace Tayx::Graphy {
class GraphyDebugger_DebugPacket;
}
namespace Tayx::Graphy {
struct GraphyDebugger_DebugVariable;
}
namespace Tayx::Graphy {
struct GraphyDebugger_MessageType;
}
namespace Tayx::Graphy {
class GraphyDebugger___c;
}
namespace Tayx::Graphy {
class GraphyDebugger___c__DisplayClass18_0;
}
namespace Tayx::Graphy {
class GraphyDebugger___c__DisplayClass19_0;
}
namespace Tayx::Graphy {
class GraphyDebugger___c__DisplayClass21_0;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Tayx::Graphy {
struct GraphyDebugger_ConditionEvaluation;
}
namespace Tayx::Graphy {
struct GraphyDebugger_DebugComparer;
}
namespace Tayx::Graphy {
struct GraphyDebugger_DebugVariable;
}
namespace Tayx::Graphy {
struct GraphyDebugger_MessageType;
}
namespace Tayx::Graphy {
class GraphyDebugger;
}
namespace Tayx::Graphy {
class GraphyDebugger_DebugPacket;
}
namespace Tayx::Graphy {
class GraphyDebugger___c;
}
namespace Tayx::Graphy {
class GraphyDebugger___c__DisplayClass18_0;
}
namespace Tayx::Graphy {
class GraphyDebugger___c__DisplayClass19_0;
}
namespace Tayx::Graphy {
class GraphyDebugger___c__DisplayClass21_0;
}
namespace Tayx::Graphy {
struct GraphyDebugger_DebugCondition;
}
// Write type traits
MARK_VAL_T(::Tayx::Graphy::GraphyDebugger_ConditionEvaluation);
MARK_VAL_T(::Tayx::Graphy::GraphyDebugger_DebugComparer);
MARK_VAL_T(::Tayx::Graphy::GraphyDebugger_DebugVariable);
MARK_VAL_T(::Tayx::Graphy::GraphyDebugger_MessageType);
MARK_REF_PTR_T(::Tayx::Graphy::GraphyDebugger);
MARK_REF_PTR_T(::Tayx::Graphy::GraphyDebugger_DebugPacket);
MARK_REF_PTR_T(::Tayx::Graphy::GraphyDebugger___c);
MARK_REF_PTR_T(::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0);
MARK_REF_PTR_T(::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0);
MARK_REF_PTR_T(::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0);
MARK_VAL_T(::Tayx::Graphy::GraphyDebugger_DebugCondition);
// Dependencies
namespace Tayx::Graphy {
// Is value type: true
// CS Name: Tayx.Graphy.GraphyDebugger/DebugVariable
struct CORDL_TYPE GraphyDebugger_DebugVariable {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphyDebugger_DebugVariable_Unwrapped
  enum struct __GraphyDebugger_DebugVariable_Unwrapped : int32_t {
    __E_Fps = static_cast<int32_t>(0x0),
    __E_Fps_Min = static_cast<int32_t>(0x1),
    __E_Fps_Max = static_cast<int32_t>(0x2),
    __E_Fps_Avg = static_cast<int32_t>(0x3),
    __E_Ram_Allocated = static_cast<int32_t>(0x4),
    __E_Ram_Reserved = static_cast<int32_t>(0x5),
    __E_Ram_Mono = static_cast<int32_t>(0x6),
    __E_Audio_DB = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphyDebugger_DebugVariable_Unwrapped() const noexcept {
    return static_cast<__GraphyDebugger_DebugVariable_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger_DebugVariable();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphyDebugger_DebugVariable(int32_t value__) noexcept;

  /// @brief Field Audio_DB value: I32(7)
  static ::Tayx::Graphy::GraphyDebugger_DebugVariable const Audio_DB;

  /// @brief Field Fps value: I32(0)
  static ::Tayx::Graphy::GraphyDebugger_DebugVariable const Fps;

  /// @brief Field Fps_Avg value: I32(3)
  static ::Tayx::Graphy::GraphyDebugger_DebugVariable const Fps_Avg;

  /// @brief Field Fps_Max value: I32(2)
  static ::Tayx::Graphy::GraphyDebugger_DebugVariable const Fps_Max;

  /// @brief Field Fps_Min value: I32(1)
  static ::Tayx::Graphy::GraphyDebugger_DebugVariable const Fps_Min;

  /// @brief Field Ram_Allocated value: I32(4)
  static ::Tayx::Graphy::GraphyDebugger_DebugVariable const Ram_Allocated;

  /// @brief Field Ram_Mono value: I32(6)
  static ::Tayx::Graphy::GraphyDebugger_DebugVariable const Ram_Mono;

  /// @brief Field Ram_Reserved value: I32(5)
  static ::Tayx::Graphy::GraphyDebugger_DebugVariable const Ram_Reserved;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17204 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugVariable, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger_DebugVariable, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies
namespace Tayx::Graphy {
// Is value type: true
// CS Name: Tayx.Graphy.GraphyDebugger/DebugComparer
struct CORDL_TYPE GraphyDebugger_DebugComparer {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphyDebugger_DebugComparer_Unwrapped
  enum struct __GraphyDebugger_DebugComparer_Unwrapped : int32_t {
    __E_Less_than = static_cast<int32_t>(0x0),
    __E_Equals_or_less_than = static_cast<int32_t>(0x1),
    __E_Equals = static_cast<int32_t>(0x2),
    __E_Equals_or_greater_than = static_cast<int32_t>(0x3),
    __E_Greater_than = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphyDebugger_DebugComparer_Unwrapped() const noexcept {
    return static_cast<__GraphyDebugger_DebugComparer_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger_DebugComparer();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphyDebugger_DebugComparer(int32_t value__) noexcept;

  /// @brief Field Equals value: I32(2)
  static ::Tayx::Graphy::GraphyDebugger_DebugComparer const Equals;

  /// @brief Field Equals_or_greater_than value: I32(3)
  static ::Tayx::Graphy::GraphyDebugger_DebugComparer const Equals_or_greater_than;

  /// @brief Field Equals_or_less_than value: I32(1)
  static ::Tayx::Graphy::GraphyDebugger_DebugComparer const Equals_or_less_than;

  /// @brief Field Greater_than value: I32(4)
  static ::Tayx::Graphy::GraphyDebugger_DebugComparer const Greater_than;

  /// @brief Field Less_than value: I32(0)
  static ::Tayx::Graphy::GraphyDebugger_DebugComparer const Less_than;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17205 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugComparer, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger_DebugComparer, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies
namespace Tayx::Graphy {
// Is value type: true
// CS Name: Tayx.Graphy.GraphyDebugger/ConditionEvaluation
struct CORDL_TYPE GraphyDebugger_ConditionEvaluation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphyDebugger_ConditionEvaluation_Unwrapped
  enum struct __GraphyDebugger_ConditionEvaluation_Unwrapped : int32_t {
    __E_All_conditions_must_be_met = static_cast<int32_t>(0x0),
    __E_Only_one_condition_has_to_be_met = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphyDebugger_ConditionEvaluation_Unwrapped() const noexcept {
    return static_cast<__GraphyDebugger_ConditionEvaluation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger_ConditionEvaluation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphyDebugger_ConditionEvaluation(int32_t value__) noexcept;

  /// @brief Field All_conditions_must_be_met value: I32(0)
  static ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation const All_conditions_must_be_met;

  /// @brief Field Only_one_condition_has_to_be_met value: I32(1)
  static ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation const Only_one_condition_has_to_be_met;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17206 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_ConditionEvaluation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger_ConditionEvaluation, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies
namespace Tayx::Graphy {
// Is value type: true
// CS Name: Tayx.Graphy.GraphyDebugger/MessageType
struct CORDL_TYPE GraphyDebugger_MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphyDebugger_MessageType_Unwrapped
  enum struct __GraphyDebugger_MessageType_Unwrapped : int32_t {
    __E_Log = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphyDebugger_MessageType_Unwrapped() const noexcept {
    return static_cast<__GraphyDebugger_MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger_MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphyDebugger_MessageType(int32_t value__) noexcept;

  /// @brief Field Error value: I32(2)
  static ::Tayx::Graphy::GraphyDebugger_MessageType const Error;

  /// @brief Field Log value: I32(0)
  static ::Tayx::Graphy::GraphyDebugger_MessageType const Log;

  /// @brief Field Warning value: I32(1)
  static ::Tayx::Graphy::GraphyDebugger_MessageType const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17207 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger_MessageType, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies Tayx.Graphy.GraphyDebugger::DebugComparer, Tayx.Graphy.GraphyDebugger::DebugVariable
namespace Tayx::Graphy {
// Is value type: true
// CS Name: Tayx.Graphy.GraphyDebugger/DebugCondition
struct CORDL_TYPE GraphyDebugger_DebugCondition {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger_DebugCondition();

  // Ctor Parameters [CppParam { name: "Variable", ty: "::Tayx::Graphy::GraphyDebugger_DebugVariable", modifiers: "", def_value: None }, CppParam { name: "Comparer", ty:
  // "::Tayx::Graphy::GraphyDebugger_DebugComparer", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GraphyDebugger_DebugCondition(::Tayx::Graphy::GraphyDebugger_DebugVariable Variable, ::Tayx::Graphy::GraphyDebugger_DebugComparer Comparer, float_t Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17208 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field Variable, offset: 0x0, size: 0x4, def value: None
  ::Tayx::Graphy::GraphyDebugger_DebugVariable Variable;

  /// @brief Field Comparer, offset: 0x4, size: 0x4, def value: None
  ::Tayx::Graphy::GraphyDebugger_DebugComparer Comparer;

  /// @brief Field Value, offset: 0x8, size: 0x4, def value: None
  float_t Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugCondition, Variable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugCondition, Comparer) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugCondition, Value) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger_DebugCondition, 0xc>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies System.Object, Tayx.Graphy.GraphyDebugger::ConditionEvaluation, Tayx.Graphy.GraphyDebugger::MessageType
namespace Tayx::Graphy {
// Is value type: false
// CS Name: Tayx.Graphy.GraphyDebugger/DebugPacket
class CORDL_TYPE GraphyDebugger_DebugPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field Active, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Active, put = __cordl_internal_set_Active)) bool Active;

  /// @brief Field Callbacks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Callbacks, put = __cordl_internal_set_Callbacks)) ::System::Collections::Generic::List_1<::System::Action*>* Callbacks;

  __declspec(property(get = get_Check)) bool Check;

  /// @brief Field ConditionEvaluation, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_ConditionEvaluation, put = __cordl_internal_set_ConditionEvaluation)) ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation ConditionEvaluation;

  /// @brief Field DebugBreak, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_DebugBreak, put = __cordl_internal_set_DebugBreak)) bool DebugBreak;

  /// @brief Field DebugConditions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_DebugConditions,
                      put = __cordl_internal_set_DebugConditions)) ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* DebugConditions;

  /// @brief Field ExecuteOnce, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_ExecuteOnce, put = __cordl_internal_set_ExecuteOnce)) bool ExecuteOnce;

  /// @brief Field ExecuteSleepTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_ExecuteSleepTime, put = __cordl_internal_set_ExecuteSleepTime)) float_t ExecuteSleepTime;

  /// @brief Field Id, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) int32_t Id;

  /// @brief Field InitSleepTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_InitSleepTime, put = __cordl_internal_set_InitSleepTime)) float_t InitSleepTime;

  /// @brief Field Message, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Message, put = __cordl_internal_set_Message)) ::StringW Message;

  /// @brief Field MessageType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_MessageType, put = __cordl_internal_set_MessageType)) ::Tayx::Graphy::GraphyDebugger_MessageType MessageType;

  /// @brief Field ScreenshotFileName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ScreenshotFileName, put = __cordl_internal_set_ScreenshotFileName)) ::StringW ScreenshotFileName;

  /// @brief Field TakeScreenshot, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_TakeScreenshot, put = __cordl_internal_set_TakeScreenshot)) bool TakeScreenshot;

  /// @brief Field UnityEvents, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_UnityEvents, put = __cordl_internal_set_UnityEvents)) ::UnityEngine::Events::UnityEvent* UnityEvents;

  /// @brief Field canBeChecked, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_canBeChecked, put = __cordl_internal_set_canBeChecked)) bool canBeChecked;

  /// @brief Field executed, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_executed, put = __cordl_internal_set_executed)) bool executed;

  /// @brief Field timePassed, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_timePassed, put = __cordl_internal_set_timePassed)) float_t timePassed;

  /// @brief Method Executed, addr 0x44c6b04, size 0xc, virtual false, abstract: false, final false
  inline void Executed();

  static inline ::Tayx::Graphy::GraphyDebugger_DebugPacket* New_ctor();

  /// @brief Method Update, addr 0x44c63dc, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_Active() const;

  constexpr bool& __cordl_internal_get_Active();

  constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& __cordl_internal_get_Callbacks() const;

  constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get_Callbacks();

  constexpr ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation const& __cordl_internal_get_ConditionEvaluation() const;

  constexpr ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation& __cordl_internal_get_ConditionEvaluation();

  constexpr bool const& __cordl_internal_get_DebugBreak() const;

  constexpr bool& __cordl_internal_get_DebugBreak();

  constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* const& __cordl_internal_get_DebugConditions() const;

  constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>*& __cordl_internal_get_DebugConditions();

  constexpr bool const& __cordl_internal_get_ExecuteOnce() const;

  constexpr bool& __cordl_internal_get_ExecuteOnce();

  constexpr float_t const& __cordl_internal_get_ExecuteSleepTime() const;

  constexpr float_t& __cordl_internal_get_ExecuteSleepTime();

  constexpr int32_t const& __cordl_internal_get_Id() const;

  constexpr int32_t& __cordl_internal_get_Id();

  constexpr float_t const& __cordl_internal_get_InitSleepTime() const;

  constexpr float_t& __cordl_internal_get_InitSleepTime();

  constexpr ::StringW const& __cordl_internal_get_Message() const;

  constexpr ::StringW& __cordl_internal_get_Message();

  constexpr ::Tayx::Graphy::GraphyDebugger_MessageType const& __cordl_internal_get_MessageType() const;

  constexpr ::Tayx::Graphy::GraphyDebugger_MessageType& __cordl_internal_get_MessageType();

  constexpr ::StringW const& __cordl_internal_get_ScreenshotFileName() const;

  constexpr ::StringW& __cordl_internal_get_ScreenshotFileName();

  constexpr bool const& __cordl_internal_get_TakeScreenshot() const;

  constexpr bool& __cordl_internal_get_TakeScreenshot();

  constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_UnityEvents() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_UnityEvents();

  constexpr bool const& __cordl_internal_get_canBeChecked() const;

  constexpr bool& __cordl_internal_get_canBeChecked();

  constexpr bool const& __cordl_internal_get_executed() const;

  constexpr bool& __cordl_internal_get_executed();

  constexpr float_t const& __cordl_internal_get_timePassed() const;

  constexpr float_t& __cordl_internal_get_timePassed();

  constexpr void __cordl_internal_set_Active(bool value);

  constexpr void __cordl_internal_set_Callbacks(::System::Collections::Generic::List_1<::System::Action*>* value);

  constexpr void __cordl_internal_set_ConditionEvaluation(::Tayx::Graphy::GraphyDebugger_ConditionEvaluation value);

  constexpr void __cordl_internal_set_DebugBreak(bool value);

  constexpr void __cordl_internal_set_DebugConditions(::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* value);

  constexpr void __cordl_internal_set_ExecuteOnce(bool value);

  constexpr void __cordl_internal_set_ExecuteSleepTime(float_t value);

  constexpr void __cordl_internal_set_Id(int32_t value);

  constexpr void __cordl_internal_set_InitSleepTime(float_t value);

  constexpr void __cordl_internal_set_Message(::StringW value);

  constexpr void __cordl_internal_set_MessageType(::Tayx::Graphy::GraphyDebugger_MessageType value);

  constexpr void __cordl_internal_set_ScreenshotFileName(::StringW value);

  constexpr void __cordl_internal_set_TakeScreenshot(bool value);

  constexpr void __cordl_internal_set_UnityEvents(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_canBeChecked(bool value);

  constexpr void __cordl_internal_set_executed(bool value);

  constexpr void __cordl_internal_set_timePassed(float_t value);

  /// @brief Method .ctor, addr 0x44c59dc, size 0x120, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Check, addr 0x44c6b10, size 0x8, virtual false, abstract: false, final false
  inline bool get_Check();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger_DebugPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger_DebugPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphyDebugger_DebugPacket(GraphyDebugger_DebugPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger_DebugPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphyDebugger_DebugPacket(GraphyDebugger_DebugPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17209 };

  /// @brief Field Active, offset: 0x10, size: 0x1, def value: None
  bool ___Active;

  /// @brief Field Id, offset: 0x14, size: 0x4, def value: None
  int32_t ___Id;

  /// @brief Field ExecuteOnce, offset: 0x18, size: 0x1, def value: None
  bool ___ExecuteOnce;

  /// @brief Field InitSleepTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___InitSleepTime;

  /// @brief Field ExecuteSleepTime, offset: 0x20, size: 0x4, def value: None
  float_t ___ExecuteSleepTime;

  /// @brief Field ConditionEvaluation, offset: 0x24, size: 0x4, def value: None
  ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation ___ConditionEvaluation;

  /// @brief Field DebugConditions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* ___DebugConditions;

  /// @brief Field MessageType, offset: 0x30, size: 0x4, def value: None
  ::Tayx::Graphy::GraphyDebugger_MessageType ___MessageType;

  /// @brief Field Message, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Message;

  /// @brief Field TakeScreenshot, offset: 0x40, size: 0x1, def value: None
  bool ___TakeScreenshot;

  /// @brief Field ScreenshotFileName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___ScreenshotFileName;

  /// @brief Field DebugBreak, offset: 0x50, size: 0x1, def value: None
  bool ___DebugBreak;

  /// @brief Field UnityEvents, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___UnityEvents;

  /// @brief Field Callbacks, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Action*>* ___Callbacks;

  /// @brief Field canBeChecked, offset: 0x68, size: 0x1, def value: None
  bool ___canBeChecked;

  /// @brief Field executed, offset: 0x69, size: 0x1, def value: None
  bool ___executed;

  /// @brief Field timePassed, offset: 0x6c, size: 0x4, def value: None
  float_t ___timePassed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___Active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___Id) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___ExecuteOnce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___InitSleepTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___ExecuteSleepTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___ConditionEvaluation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___DebugConditions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___MessageType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___Message) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___TakeScreenshot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___ScreenshotFileName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___DebugBreak) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___UnityEvents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___Callbacks) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___canBeChecked) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___executed) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger_DebugPacket, ___timePassed) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger_DebugPacket, 0x70>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies System.Object
namespace Tayx::Graphy {
// Is value type: false
// CS Name: Tayx.Graphy.GraphyDebugger/<>c
class CORDL_TYPE GraphyDebugger___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Tayx::Graphy::GraphyDebugger___c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0)) ::System::Predicate_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* __9__24_0;

  static inline ::Tayx::Graphy::GraphyDebugger___c* New_ctor();

  /// @brief Method <CheckDebugPackets>b__24_0, addr 0x44c6b7c, size 0xc, virtual false, abstract: false, final false
  inline bool _CheckDebugPackets_b__24_0(::Tayx::Graphy::GraphyDebugger_DebugPacket* packet);

  /// @brief Method .ctor, addr 0x44c6b74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Tayx::Graphy::GraphyDebugger___c* getStaticF___9();

  static inline ::System::Predicate_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* getStaticF___9__24_0();

  static inline void setStaticF___9(::Tayx::Graphy::GraphyDebugger___c* value);

  static inline void setStaticF___9__24_0(::System::Predicate_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphyDebugger___c(GraphyDebugger___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphyDebugger___c(GraphyDebugger___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17210 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger___c, 0x10>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies System.Object
namespace Tayx::Graphy {
// Is value type: false
// CS Name: Tayx.Graphy.GraphyDebugger/<>c__DisplayClass18_0
class CORDL_TYPE GraphyDebugger___c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_packetId, put = __cordl_internal_set_packetId)) int32_t packetId;

  static inline ::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0* New_ctor();

  /// @brief Method <GetFirstDebugPacketWithId>b__0, addr 0x44c6b88, size 0x24, virtual false, abstract: false, final false
  inline bool _GetFirstDebugPacketWithId_b__0(::Tayx::Graphy::GraphyDebugger_DebugPacket* x);

  constexpr int32_t const& __cordl_internal_get_packetId() const;

  constexpr int32_t& __cordl_internal_get_packetId();

  constexpr void __cordl_internal_set_packetId(int32_t value);

  /// @brief Method .ctor, addr 0x44c5ebc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger___c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphyDebugger___c__DisplayClass18_0(GraphyDebugger___c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphyDebugger___c__DisplayClass18_0(GraphyDebugger___c__DisplayClass18_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17211 };

  /// @brief Field packetId, offset: 0x10, size: 0x4, def value: None
  int32_t ___packetId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0, ___packetId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0, 0x18>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies System.Object
namespace Tayx::Graphy {
// Is value type: false
// CS Name: Tayx.Graphy.GraphyDebugger/<>c__DisplayClass19_0
class CORDL_TYPE GraphyDebugger___c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_packetId, put = __cordl_internal_set_packetId)) int32_t packetId;

  static inline ::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0* New_ctor();

  /// @brief Method <GetAllDebugPacketsWithId>b__0, addr 0x44c6bac, size 0x24, virtual false, abstract: false, final false
  inline bool _GetAllDebugPacketsWithId_b__0(::Tayx::Graphy::GraphyDebugger_DebugPacket* x);

  constexpr int32_t const& __cordl_internal_get_packetId() const;

  constexpr int32_t& __cordl_internal_get_packetId();

  constexpr void __cordl_internal_set_packetId(int32_t value);

  /// @brief Method .ctor, addr 0x44c5f9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger___c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphyDebugger___c__DisplayClass19_0(GraphyDebugger___c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphyDebugger___c__DisplayClass19_0(GraphyDebugger___c__DisplayClass19_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17212 };

  /// @brief Field packetId, offset: 0x10, size: 0x4, def value: None
  int32_t ___packetId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0, ___packetId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0, 0x18>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies System.Object
namespace Tayx::Graphy {
// Is value type: false
// CS Name: Tayx.Graphy.GraphyDebugger/<>c__DisplayClass21_0
class CORDL_TYPE GraphyDebugger___c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_packetId, put = __cordl_internal_set_packetId)) int32_t packetId;

  static inline ::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0* New_ctor();

  /// @brief Method <RemoveAllDebugPacketsWithId>b__0, addr 0x44c6bd0, size 0x24, virtual false, abstract: false, final false
  inline bool _RemoveAllDebugPacketsWithId_b__0(::Tayx::Graphy::GraphyDebugger_DebugPacket* x);

  constexpr int32_t const& __cordl_internal_get_packetId() const;

  constexpr int32_t& __cordl_internal_get_packetId();

  constexpr void __cordl_internal_set_packetId(int32_t value);

  /// @brief Method .ctor, addr 0x44c6118, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger___c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger___c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphyDebugger___c__DisplayClass21_0(GraphyDebugger___c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger___c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphyDebugger___c__DisplayClass21_0(GraphyDebugger___c__DisplayClass21_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17213 };

  /// @brief Field packetId, offset: 0x10, size: 0x4, def value: None
  int32_t ___packetId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0, ___packetId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0, 0x18>, "Size mismatch!");

} // namespace Tayx::Graphy
// Dependencies Tayx.Graphy.Utils.G_Singleton`1<T>
namespace Tayx::Graphy {
// Is value type: false
// CS Name: Tayx.Graphy.GraphyDebugger
class CORDL_TYPE GraphyDebugger : public ::Tayx::Graphy::Utils::G_Singleton_1<::UnityW<::Tayx::Graphy::GraphyDebugger>> {
public:
  // Declarations
  using ConditionEvaluation = ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation;

  using DebugComparer = ::Tayx::Graphy::GraphyDebugger_DebugComparer;

  using DebugCondition = ::Tayx::Graphy::GraphyDebugger_DebugCondition;

  using DebugPacket = ::Tayx::Graphy::GraphyDebugger_DebugPacket;

  using DebugVariable = ::Tayx::Graphy::GraphyDebugger_DebugVariable;

  using MessageType = ::Tayx::Graphy::GraphyDebugger_MessageType;

  using __c = ::Tayx::Graphy::GraphyDebugger___c;

  using __c__DisplayClass18_0 = ::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0;

  using __c__DisplayClass19_0 = ::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0;

  using __c__DisplayClass21_0 = ::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0;

  /// @brief Field m_audioMonitor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioMonitor, put = __cordl_internal_set_m_audioMonitor)) ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> m_audioMonitor;

  /// @brief Field m_debugPackets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_debugPackets,
                      put = __cordl_internal_set_m_debugPackets)) ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* m_debugPackets;

  /// @brief Field m_fpsMonitor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsMonitor, put = __cordl_internal_set_m_fpsMonitor)) ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> m_fpsMonitor;

  /// @brief Field m_ramMonitor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ramMonitor, put = __cordl_internal_set_m_ramMonitor)) ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> m_ramMonitor;

  /// @brief Method AddCallbackToAllDebugPacketWithId, addr 0x44c61f4, size 0x1e8, virtual false, abstract: false, final false
  inline void AddCallbackToAllDebugPacketWithId(::System::Action* callback, int32_t id);

  /// @brief Method AddCallbackToFirstDebugPacketWithId, addr 0x44c6120, size 0xd4, virtual false, abstract: false, final false
  inline void AddCallbackToFirstDebugPacketWithId(::System::Action* callback, int32_t id);

  /// @brief Method AddNewDebugPacket, addr 0x44c57a4, size 0xa4, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(::Tayx::Graphy::GraphyDebugger_DebugPacket* newDebugPacket);

  /// @brief Method AddNewDebugPacket, addr 0x44c5848, size 0x194, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(int32_t newId, ::Tayx::Graphy::GraphyDebugger_DebugCondition newDebugCondition, ::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, ::StringW newMessage,
                                bool newDebugBreak, ::System::Action* newCallback);

  /// @brief Method AddNewDebugPacket, addr 0x44c5c10, size 0x12c, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(int32_t newId, ::Tayx::Graphy::GraphyDebugger_DebugCondition newDebugCondition, ::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, ::StringW newMessage,
                                bool newDebugBreak, ::System::Collections::Generic::List_1<::System::Action*>* newCallbacks);

  /// @brief Method AddNewDebugPacket, addr 0x44c5afc, size 0x114, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(int32_t newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* newDebugConditions,
                                ::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, ::System::Action* newCallback);

  /// @brief Method AddNewDebugPacket, addr 0x44c5d3c, size 0xac, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(int32_t newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* newDebugConditions,
                                ::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, ::StringW newMessage, bool newDebugBreak,
                                ::System::Collections::Generic::List_1<::System::Action*>* newCallbacks);

  /// @brief Method CheckDebugPackets, addr 0x44c538c, size 0x418, virtual false, abstract: false, final false
  inline void CheckDebugPackets();

  /// @brief Method CheckIfConditionIsMet, addr 0x44c6438, size 0xf4, virtual false, abstract: false, final false
  inline bool CheckIfConditionIsMet(::Tayx::Graphy::GraphyDebugger_DebugCondition debugCondition);

  /// @brief Method ExecuteOperationsInDebugPacket, addr 0x44c652c, size 0x3e4, virtual false, abstract: false, final false
  inline void ExecuteOperationsInDebugPacket(::Tayx::Graphy::GraphyDebugger_DebugPacket* debugPacket);

  /// @brief Method GetAllDebugPacketsWithId, addr 0x44c5ec4, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* GetAllDebugPacketsWithId(int32_t packetId);

  /// @brief Method GetFirstDebugPacketWithId, addr 0x44c5de8, size 0xd4, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::GraphyDebugger_DebugPacket* GetFirstDebugPacketWithId(int32_t packetId);

  /// @brief Method GetRequestedValueFromDebugVariable, addr 0x44c6910, size 0x1f4, virtual false, abstract: false, final false
  inline float_t GetRequestedValueFromDebugVariable(::Tayx::Graphy::GraphyDebugger_DebugVariable debugVariable);

  static inline ::Tayx::Graphy::GraphyDebugger* New_ctor();

  /// @brief Method RemoveAllDebugPacketsWithId, addr 0x44c6030, size 0xe8, virtual false, abstract: false, final false
  inline void RemoveAllDebugPacketsWithId(int32_t packetId);

  /// @brief Method RemoveFirstDebugPacketWithId, addr 0x44c5fa4, size 0x8c, virtual false, abstract: false, final false
  inline void RemoveFirstDebugPacketWithId(int32_t packetId);

  /// @brief Method Start, addr 0x44c52e8, size 0xa0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x44c5388, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& __cordl_internal_get_m_audioMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& __cordl_internal_get_m_audioMonitor();

  constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* const& __cordl_internal_get_m_debugPackets() const;

  constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>*& __cordl_internal_get_m_debugPackets();

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& __cordl_internal_get_m_fpsMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& __cordl_internal_get_m_fpsMonitor();

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> const& __cordl_internal_get_m_ramMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor>& __cordl_internal_get_m_ramMonitor();

  constexpr void __cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value);

  constexpr void __cordl_internal_set_m_debugPackets(::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* value);

  constexpr void __cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value);

  constexpr void __cordl_internal_set_m_ramMonitor(::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> value);

  /// @brief Method .ctor, addr 0x44c5234, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphyDebugger(GraphyDebugger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphyDebugger(GraphyDebugger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17214 };

  /// @brief Field m_debugPackets, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* ___m_debugPackets;

  /// @brief Field m_fpsMonitor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> ___m_fpsMonitor;

  /// @brief Field m_ramMonitor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> ___m_ramMonitor;

  /// @brief Field m_audioMonitor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> ___m_audioMonitor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::GraphyDebugger, ___m_debugPackets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger, ___m_fpsMonitor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger, ___m_ramMonitor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger, ___m_audioMonitor) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger, 0x40>, "Size mismatch!");

} // namespace Tayx::Graphy
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger_ConditionEvaluation, "Tayx.Graphy", "GraphyDebugger/ConditionEvaluation");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger_DebugComparer, "Tayx.Graphy", "GraphyDebugger/DebugComparer");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger_DebugVariable, "Tayx.Graphy", "GraphyDebugger/DebugVariable");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger_MessageType, "Tayx.Graphy", "GraphyDebugger/MessageType");
NEED_NO_BOX(::Tayx::Graphy::GraphyDebugger);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger*, "Tayx.Graphy", "GraphyDebugger");
NEED_NO_BOX(::Tayx::Graphy::GraphyDebugger_DebugPacket);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger_DebugPacket*, "Tayx.Graphy", "GraphyDebugger/DebugPacket");
NEED_NO_BOX(::Tayx::Graphy::GraphyDebugger___c);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger___c*, "Tayx.Graphy", "GraphyDebugger/<>c");
NEED_NO_BOX(::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0*, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass18_0");
NEED_NO_BOX(::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0*, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass19_0");
NEED_NO_BOX(::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0*, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass21_0");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger_DebugCondition, "Tayx.Graphy", "GraphyDebugger/DebugCondition");
