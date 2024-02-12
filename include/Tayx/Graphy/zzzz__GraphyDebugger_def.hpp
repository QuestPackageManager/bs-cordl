#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyDebugger_def.hpp"
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
struct __GraphyDebugger__ConditionEvaluation;
}
namespace Tayx::Graphy {
struct __GraphyDebugger__DebugComparer;
}
namespace Tayx::Graphy {
struct __GraphyDebugger__DebugCondition;
}
namespace Tayx::Graphy {
class __GraphyDebugger__DebugPacket;
}
namespace Tayx::Graphy {
struct __GraphyDebugger__DebugVariable;
}
namespace Tayx::Graphy {
struct __GraphyDebugger__MessageType;
}
namespace Tayx::Graphy {
class __GraphyDebugger____c;
}
namespace Tayx::Graphy {
class __GraphyDebugger____c__DisplayClass18_0;
}
namespace Tayx::Graphy {
class __GraphyDebugger____c__DisplayClass19_0;
}
namespace Tayx::Graphy {
class __GraphyDebugger____c__DisplayClass21_0;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Tayx::Graphy {
struct __GraphyDebugger__ConditionEvaluation;
}
namespace Tayx::Graphy {
struct __GraphyDebugger__DebugComparer;
}
namespace Tayx::Graphy {
struct __GraphyDebugger__DebugVariable;
}
namespace Tayx::Graphy {
struct __GraphyDebugger__MessageType;
}
namespace Tayx::Graphy {
class GraphyDebugger;
}
namespace Tayx::Graphy {
class __GraphyDebugger__DebugPacket;
}
namespace Tayx::Graphy {
class __GraphyDebugger____c;
}
namespace Tayx::Graphy {
class __GraphyDebugger____c__DisplayClass18_0;
}
namespace Tayx::Graphy {
class __GraphyDebugger____c__DisplayClass19_0;
}
namespace Tayx::Graphy {
class __GraphyDebugger____c__DisplayClass21_0;
}
namespace Tayx::Graphy {
struct __GraphyDebugger__DebugCondition;
}
// Write type traits
MARK_VAL_T(::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation);
MARK_VAL_T(::Tayx::Graphy::__GraphyDebugger__DebugComparer);
MARK_VAL_T(::Tayx::Graphy::__GraphyDebugger__DebugVariable);
MARK_VAL_T(::Tayx::Graphy::__GraphyDebugger__MessageType);
MARK_REF_PTR_T(::Tayx::Graphy::GraphyDebugger);
MARK_REF_PTR_T(::Tayx::Graphy::__GraphyDebugger__DebugPacket);
MARK_REF_PTR_T(::Tayx::Graphy::__GraphyDebugger____c);
MARK_REF_PTR_T(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0);
MARK_REF_PTR_T(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0);
MARK_REF_PTR_T(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0);
MARK_VAL_T(::Tayx::Graphy::__GraphyDebugger__DebugCondition);
// Type: ::DebugVariable
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14924))
// CS Name: ::GraphyDebugger::DebugVariable
struct CORDL_TYPE __GraphyDebugger__DebugVariable {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyDebugger__DebugVariable_Unwrapped
  enum struct ____GraphyDebugger__DebugVariable_Unwrapped : int32_t {
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
  constexpr operator ____GraphyDebugger__DebugVariable_Unwrapped() const noexcept {
    return static_cast<____GraphyDebugger__DebugVariable_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyDebugger__DebugVariable(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger__DebugVariable();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Fps value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyDebugger__DebugVariable const Fps;

  /// @brief Field Fps_Min value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyDebugger__DebugVariable const Fps_Min;

  /// @brief Field Fps_Max value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyDebugger__DebugVariable const Fps_Max;

  /// @brief Field Fps_Avg value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyDebugger__DebugVariable const Fps_Avg;

  /// @brief Field Ram_Allocated value: static_cast<int32_t>(0x4)
  static ::Tayx::Graphy::__GraphyDebugger__DebugVariable const Ram_Allocated;

  /// @brief Field Ram_Reserved value: static_cast<int32_t>(0x5)
  static ::Tayx::Graphy::__GraphyDebugger__DebugVariable const Ram_Reserved;

  /// @brief Field Ram_Mono value: static_cast<int32_t>(0x6)
  static ::Tayx::Graphy::__GraphyDebugger__DebugVariable const Ram_Mono;

  /// @brief Field Audio_DB value: static_cast<int32_t>(0x7)
  static ::Tayx::Graphy::__GraphyDebugger__DebugVariable const Audio_DB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger__DebugVariable, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugVariable, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::DebugComparer
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14925))
// CS Name: ::GraphyDebugger::DebugComparer
struct CORDL_TYPE __GraphyDebugger__DebugComparer {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyDebugger__DebugComparer_Unwrapped
  enum struct ____GraphyDebugger__DebugComparer_Unwrapped : int32_t {
    __E_Less_than = static_cast<int32_t>(0x0),
    __E_Equals_or_less_than = static_cast<int32_t>(0x1),
    __E_Equals = static_cast<int32_t>(0x2),
    __E_Equals_or_greater_than = static_cast<int32_t>(0x3),
    __E_Greater_than = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphyDebugger__DebugComparer_Unwrapped() const noexcept {
    return static_cast<____GraphyDebugger__DebugComparer_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyDebugger__DebugComparer(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger__DebugComparer();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Less_than value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyDebugger__DebugComparer const Less_than;

  /// @brief Field Equals_or_less_than value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyDebugger__DebugComparer const Equals_or_less_than;

  /// @brief Field Equals value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyDebugger__DebugComparer const Equals;

  /// @brief Field Equals_or_greater_than value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyDebugger__DebugComparer const Equals_or_greater_than;

  /// @brief Field Greater_than value: static_cast<int32_t>(0x4)
  static ::Tayx::Graphy::__GraphyDebugger__DebugComparer const Greater_than;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger__DebugComparer, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugComparer, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::ConditionEvaluation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14926))
// CS Name: ::GraphyDebugger::ConditionEvaluation
struct CORDL_TYPE __GraphyDebugger__ConditionEvaluation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyDebugger__ConditionEvaluation_Unwrapped
  enum struct ____GraphyDebugger__ConditionEvaluation_Unwrapped : int32_t {
    __E_All_conditions_must_be_met = static_cast<int32_t>(0x0),
    __E_Only_one_condition_has_to_be_met = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphyDebugger__ConditionEvaluation_Unwrapped() const noexcept {
    return static_cast<____GraphyDebugger__ConditionEvaluation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyDebugger__ConditionEvaluation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger__ConditionEvaluation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field All_conditions_must_be_met value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation const All_conditions_must_be_met;

  /// @brief Field Only_one_condition_has_to_be_met value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation const Only_one_condition_has_to_be_met;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::MessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14927))
// CS Name: ::GraphyDebugger::MessageType
struct CORDL_TYPE __GraphyDebugger__MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyDebugger__MessageType_Unwrapped
  enum struct ____GraphyDebugger__MessageType_Unwrapped : int32_t {
    __E_Log = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphyDebugger__MessageType_Unwrapped() const noexcept {
    return static_cast<____GraphyDebugger__MessageType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyDebugger__MessageType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger__MessageType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Log value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyDebugger__MessageType const Log;

  /// @brief Field Warning value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyDebugger__MessageType const Warning;

  /// @brief Field Error value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyDebugger__MessageType const Error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger__MessageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__MessageType, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::DebugCondition
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14924)), TypeDefinitionIndex(TypeDefinitionIndex(14925))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14928))
// CS Name: ::GraphyDebugger::DebugCondition
struct CORDL_TYPE __GraphyDebugger__DebugCondition {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Variable", ty: "::Tayx::Graphy::__GraphyDebugger__DebugVariable", modifiers: "", def_value: None }, CppParam { name: "Comparer", ty:
  // "::Tayx::Graphy::__GraphyDebugger__DebugComparer", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __GraphyDebugger__DebugCondition(::Tayx::Graphy::__GraphyDebugger__DebugVariable Variable, ::Tayx::Graphy::__GraphyDebugger__DebugComparer Comparer, float_t Value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger__DebugCondition();

  /// @brief Field Variable, offset: 0x0, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyDebugger__DebugVariable Variable;

  /// @brief Field Comparer, offset: 0x4, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyDebugger__DebugComparer Comparer;

  /// @brief Field Value, offset: 0x8, size: 0x4, def value: None
  float_t Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger__DebugCondition, 0xc>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugCondition, Variable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugCondition, Comparer) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugCondition, Value) == 0x8, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::DebugPacket
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14926)), TypeDefinitionIndex(TypeDefinitionIndex(14927))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14929))
// CS Name: ::GraphyDebugger::DebugPacket*
class CORDL_TYPE __GraphyDebugger__DebugPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field Active, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Active, put = __cordl_internal_set_Active)) bool Active;

  /// @brief Field Id, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) int32_t Id;

  /// @brief Field ExecuteOnce, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_ExecuteOnce, put = __cordl_internal_set_ExecuteOnce)) bool ExecuteOnce;

  /// @brief Field InitSleepTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_InitSleepTime, put = __cordl_internal_set_InitSleepTime)) float_t InitSleepTime;

  /// @brief Field ExecuteSleepTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_ExecuteSleepTime, put = __cordl_internal_set_ExecuteSleepTime)) float_t ExecuteSleepTime;

  /// @brief Field ConditionEvaluation, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_ConditionEvaluation, put = __cordl_internal_set_ConditionEvaluation))::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation ConditionEvaluation;

  /// @brief Field DebugConditions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_DebugConditions,
                      put = __cordl_internal_set_DebugConditions))::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>* DebugConditions;

  /// @brief Field MessageType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_MessageType, put = __cordl_internal_set_MessageType))::Tayx::Graphy::__GraphyDebugger__MessageType MessageType;

  /// @brief Field Message, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Message, put = __cordl_internal_set_Message))::StringW Message;

  /// @brief Field TakeScreenshot, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_TakeScreenshot, put = __cordl_internal_set_TakeScreenshot)) bool TakeScreenshot;

  /// @brief Field ScreenshotFileName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ScreenshotFileName, put = __cordl_internal_set_ScreenshotFileName))::StringW ScreenshotFileName;

  /// @brief Field DebugBreak, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_DebugBreak, put = __cordl_internal_set_DebugBreak)) bool DebugBreak;

  /// @brief Field UnityEvents, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_UnityEvents, put = __cordl_internal_set_UnityEvents))::UnityEngine::Events::UnityEvent* UnityEvents;

  /// @brief Field Callbacks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Callbacks, put = __cordl_internal_set_Callbacks))::System::Collections::Generic::List_1<::System::Action*>* Callbacks;

  /// @brief Field canBeChecked, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_canBeChecked, put = __cordl_internal_set_canBeChecked)) bool canBeChecked;

  /// @brief Field executed, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_executed, put = __cordl_internal_set_executed)) bool executed;

  /// @brief Field timePassed, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_timePassed, put = __cordl_internal_set_timePassed)) float_t timePassed;

  __declspec(property(get = get_Check)) bool Check;

  constexpr bool& __cordl_internal_get_Active();

  constexpr bool const& __cordl_internal_get_Active() const;

  constexpr void __cordl_internal_set_Active(bool value);

  constexpr int32_t& __cordl_internal_get_Id();

  constexpr int32_t const& __cordl_internal_get_Id() const;

  constexpr void __cordl_internal_set_Id(int32_t value);

  constexpr bool& __cordl_internal_get_ExecuteOnce();

  constexpr bool const& __cordl_internal_get_ExecuteOnce() const;

  constexpr void __cordl_internal_set_ExecuteOnce(bool value);

  constexpr float_t& __cordl_internal_get_InitSleepTime();

  constexpr float_t const& __cordl_internal_get_InitSleepTime() const;

  constexpr void __cordl_internal_set_InitSleepTime(float_t value);

  constexpr float_t& __cordl_internal_get_ExecuteSleepTime();

  constexpr float_t const& __cordl_internal_get_ExecuteSleepTime() const;

  constexpr void __cordl_internal_set_ExecuteSleepTime(float_t value);

  constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation& __cordl_internal_get_ConditionEvaluation();

  constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation const& __cordl_internal_get_ConditionEvaluation() const;

  constexpr void __cordl_internal_set_ConditionEvaluation(::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation value);

  constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*& __cordl_internal_get_DebugConditions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*> const& __cordl_internal_get_DebugConditions() const;

  constexpr void __cordl_internal_set_DebugConditions(::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>* value);

  constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType& __cordl_internal_get_MessageType();

  constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType const& __cordl_internal_get_MessageType() const;

  constexpr void __cordl_internal_set_MessageType(::Tayx::Graphy::__GraphyDebugger__MessageType value);

  constexpr ::StringW& __cordl_internal_get_Message();

  constexpr ::StringW const& __cordl_internal_get_Message() const;

  constexpr void __cordl_internal_set_Message(::StringW value);

  constexpr bool& __cordl_internal_get_TakeScreenshot();

  constexpr bool const& __cordl_internal_get_TakeScreenshot() const;

  constexpr void __cordl_internal_set_TakeScreenshot(bool value);

  constexpr ::StringW& __cordl_internal_get_ScreenshotFileName();

  constexpr ::StringW const& __cordl_internal_get_ScreenshotFileName() const;

  constexpr void __cordl_internal_set_ScreenshotFileName(::StringW value);

  constexpr bool& __cordl_internal_get_DebugBreak();

  constexpr bool const& __cordl_internal_get_DebugBreak() const;

  constexpr void __cordl_internal_set_DebugBreak(bool value);

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_UnityEvents();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_UnityEvents() const;

  constexpr void __cordl_internal_set_UnityEvents(::UnityEngine::Events::UnityEvent* value);

  constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get_Callbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Action*>*> const& __cordl_internal_get_Callbacks() const;

  constexpr void __cordl_internal_set_Callbacks(::System::Collections::Generic::List_1<::System::Action*>* value);

  constexpr bool& __cordl_internal_get_canBeChecked();

  constexpr bool const& __cordl_internal_get_canBeChecked() const;

  constexpr void __cordl_internal_set_canBeChecked(bool value);

  constexpr bool& __cordl_internal_get_executed();

  constexpr bool const& __cordl_internal_get_executed() const;

  constexpr void __cordl_internal_set_executed(bool value);

  constexpr float_t& __cordl_internal_get_timePassed();

  constexpr float_t const& __cordl_internal_get_timePassed() const;

  constexpr void __cordl_internal_set_timePassed(float_t value);

  /// @brief Method get_Check, addr 0x2a0507c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Check();

  /// @brief Method Update, addr 0x2a0497c, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method Executed, addr 0x2a05070, size 0xc, virtual false, abstract: false, final false
  inline void Executed();

  static inline ::Tayx::Graphy::__GraphyDebugger__DebugPacket* New_ctor();

  /// @brief Method .ctor, addr 0x2a03f64, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger__DebugPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GraphyDebugger__DebugPacket(__GraphyDebugger__DebugPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger__DebugPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GraphyDebugger__DebugPacket(__GraphyDebugger__DebugPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger__DebugPacket();

public:
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
  ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation ___ConditionEvaluation;

  /// @brief Field DebugConditions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>* ___DebugConditions;

  /// @brief Field MessageType, offset: 0x30, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyDebugger__MessageType ___MessageType;

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
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger__DebugPacket, 0x70>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___Active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___Id) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___ExecuteOnce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___InitSleepTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___ExecuteSleepTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___ConditionEvaluation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___DebugConditions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___MessageType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___Message) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___TakeScreenshot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___ScreenshotFileName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___DebugBreak) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___UnityEvents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___Callbacks) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___canBeChecked) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___executed) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger__DebugPacket, ___timePassed) == 0x6c, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14930))
// CS Name: ::GraphyDebugger::<>c__DisplayClass18_0*
class CORDL_TYPE __GraphyDebugger____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_packetId, put = __cordl_internal_set_packetId)) int32_t packetId;

  constexpr int32_t& __cordl_internal_get_packetId();

  constexpr int32_t const& __cordl_internal_get_packetId() const;

  constexpr void __cordl_internal_set_packetId(int32_t value);

  static inline ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a0444c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetFirstDebugPacketWithId>b__0, addr 0x2a05084, size 0x24, virtual false, abstract: false, final false
  inline bool _GetFirstDebugPacketWithId_b__0(::Tayx::Graphy::__GraphyDebugger__DebugPacket* x);

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GraphyDebugger____c__DisplayClass18_0(__GraphyDebugger____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GraphyDebugger____c__DisplayClass18_0(__GraphyDebugger____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger____c__DisplayClass18_0();

public:
  /// @brief Field packetId, offset: 0x10, size: 0x4, def value: None
  int32_t ___packetId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0, ___packetId) == 0x10, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14931))
// CS Name: ::GraphyDebugger::<>c__DisplayClass19_0*
class CORDL_TYPE __GraphyDebugger____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_packetId, put = __cordl_internal_set_packetId)) int32_t packetId;

  constexpr int32_t& __cordl_internal_get_packetId();

  constexpr int32_t const& __cordl_internal_get_packetId() const;

  constexpr void __cordl_internal_set_packetId(int32_t value);

  static inline ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a04530, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetAllDebugPacketsWithId>b__0, addr 0x2a050a8, size 0x24, virtual false, abstract: false, final false
  inline bool _GetAllDebugPacketsWithId_b__0(::Tayx::Graphy::__GraphyDebugger__DebugPacket* x);

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GraphyDebugger____c__DisplayClass19_0(__GraphyDebugger____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GraphyDebugger____c__DisplayClass19_0(__GraphyDebugger____c__DisplayClass19_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger____c__DisplayClass19_0();

public:
  /// @brief Field packetId, offset: 0x10, size: 0x4, def value: None
  int32_t ___packetId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0, ___packetId) == 0x10, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14932))
// CS Name: ::GraphyDebugger::<>c__DisplayClass21_0*
class CORDL_TYPE __GraphyDebugger____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_packetId, put = __cordl_internal_set_packetId)) int32_t packetId;

  constexpr int32_t& __cordl_internal_get_packetId();

  constexpr int32_t const& __cordl_internal_get_packetId() const;

  constexpr void __cordl_internal_set_packetId(int32_t value);

  static inline ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a046b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <RemoveAllDebugPacketsWithId>b__0, addr 0x2a050cc, size 0x24, virtual false, abstract: false, final false
  inline bool _RemoveAllDebugPacketsWithId_b__0(::Tayx::Graphy::__GraphyDebugger__DebugPacket* x);

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GraphyDebugger____c__DisplayClass21_0(__GraphyDebugger____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GraphyDebugger____c__DisplayClass21_0(__GraphyDebugger____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger____c__DisplayClass21_0();

public:
  /// @brief Field packetId, offset: 0x10, size: 0x4, def value: None
  int32_t ___packetId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0, ___packetId) == 0x10, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14933))
// CS Name: ::GraphyDebugger::<>c*
class CORDL_TYPE __GraphyDebugger____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Tayx::Graphy::__GraphyDebugger____c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0))::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* __9__24_0;

  static inline void setStaticF___9(::Tayx::Graphy::__GraphyDebugger____c* value);

  static inline ::Tayx::Graphy::__GraphyDebugger____c* getStaticF___9();

  static inline void setStaticF___9__24_0(::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* value);

  static inline ::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* getStaticF___9__24_0();

  static inline ::Tayx::Graphy::__GraphyDebugger____c* New_ctor();

  /// @brief Method .ctor, addr 0x2a05154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CheckDebugPackets>b__24_0, addr 0x2a0515c, size 0xc, virtual false, abstract: false, final false
  inline bool _CheckDebugPackets_b__24_0(::Tayx::Graphy::__GraphyDebugger__DebugPacket* packet);

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GraphyDebugger____c(__GraphyDebugger____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GraphyDebugger____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GraphyDebugger____c(__GraphyDebugger____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyDebugger____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyDebugger____c, 0x10>, "Size mismatch!");

} // namespace Tayx::Graphy
// Type: Tayx.Graphy::GraphyDebugger
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14944)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14944), inst: 2528 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14934))
// CS Name: ::Tayx.Graphy::GraphyDebugger*
class CORDL_TYPE GraphyDebugger : public ::Tayx::Graphy::Utils::G_Singleton_1<::UnityW<::Tayx::Graphy::GraphyDebugger>> {
public:
  // Declarations
  using __c = ::Tayx::Graphy::__GraphyDebugger____c;

  using __c__DisplayClass21_0 = ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0;

  using __c__DisplayClass19_0 = ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0;

  using __c__DisplayClass18_0 = ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0;

  using DebugPacket = ::Tayx::Graphy::__GraphyDebugger__DebugPacket;

  using DebugCondition = ::Tayx::Graphy::__GraphyDebugger__DebugCondition;

  using MessageType = ::Tayx::Graphy::__GraphyDebugger__MessageType;

  using ConditionEvaluation = ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation;

  using DebugComparer = ::Tayx::Graphy::__GraphyDebugger__DebugComparer;

  using DebugVariable = ::Tayx::Graphy::__GraphyDebugger__DebugVariable;

  /// @brief Field m_debugPackets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_debugPackets,
                      put = __cordl_internal_set_m_debugPackets))::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* m_debugPackets;

  /// @brief Field m_fpsMonitor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsMonitor, put = __cordl_internal_set_m_fpsMonitor))::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> m_fpsMonitor;

  /// @brief Field m_ramMonitor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ramMonitor, put = __cordl_internal_set_m_ramMonitor))::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> m_ramMonitor;

  /// @brief Field m_audioMonitor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioMonitor, put = __cordl_internal_set_m_audioMonitor))::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> m_audioMonitor;

  constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*& __cordl_internal_get_m_debugPackets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*> const& __cordl_internal_get_m_debugPackets() const;

  constexpr void __cordl_internal_set_m_debugPackets(::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* value);

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& __cordl_internal_get_m_fpsMonitor();

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& __cordl_internal_get_m_fpsMonitor() const;

  constexpr void __cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value);

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor>& __cordl_internal_get_m_ramMonitor();

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> const& __cordl_internal_get_m_ramMonitor() const;

  constexpr void __cordl_internal_set_m_ramMonitor(::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> value);

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& __cordl_internal_get_m_audioMonitor();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& __cordl_internal_get_m_audioMonitor() const;

  constexpr void __cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value);

  static inline ::Tayx::Graphy::GraphyDebugger* New_ctor();

  /// @brief Method .ctor, addr 0x2a037a4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Start, addr 0x2a03860, size 0xa0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2a03900, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method AddNewDebugPacket, addr 0x2a03d20, size 0xa8, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(::Tayx::Graphy::__GraphyDebugger__DebugPacket* newDebugPacket);

  /// @brief Method AddNewDebugPacket, addr 0x2a03dc8, size 0x19c, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(int32_t newId, ::Tayx::Graphy::__GraphyDebugger__DebugCondition newDebugCondition, ::Tayx::Graphy::__GraphyDebugger__MessageType newMessageType, ::StringW newMessage,
                                bool newDebugBreak, ::System::Action* newCallback);

  /// @brief Method AddNewDebugPacket, addr 0x2a04080, size 0x118, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(int32_t newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>* newDebugConditions,
                                ::Tayx::Graphy::__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, ::System::Action* newCallback);

  /// @brief Method AddNewDebugPacket, addr 0x2a04198, size 0x130, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(int32_t newId, ::Tayx::Graphy::__GraphyDebugger__DebugCondition newDebugCondition, ::Tayx::Graphy::__GraphyDebugger__MessageType newMessageType, ::StringW newMessage,
                                bool newDebugBreak, ::System::Collections::Generic::List_1<::System::Action*>* newCallbacks);

  /// @brief Method AddNewDebugPacket, addr 0x2a042c8, size 0xac, virtual false, abstract: false, final false
  inline void AddNewDebugPacket(int32_t newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>* newDebugConditions,
                                ::Tayx::Graphy::__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak,
                                ::System::Collections::Generic::List_1<::System::Action*>* newCallbacks);

  /// @brief Method GetFirstDebugPacketWithId, addr 0x2a04374, size 0xd8, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::__GraphyDebugger__DebugPacket* GetFirstDebugPacketWithId(int32_t packetId);

  /// @brief Method GetAllDebugPacketsWithId, addr 0x2a04454, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* GetAllDebugPacketsWithId(int32_t packetId);

  /// @brief Method RemoveFirstDebugPacketWithId, addr 0x2a04538, size 0x8c, virtual false, abstract: false, final false
  inline void RemoveFirstDebugPacketWithId(int32_t packetId);

  /// @brief Method RemoveAllDebugPacketsWithId, addr 0x2a045c4, size 0xec, virtual false, abstract: false, final false
  inline void RemoveAllDebugPacketsWithId(int32_t packetId);

  /// @brief Method AddCallbackToFirstDebugPacketWithId, addr 0x2a046b8, size 0xd8, virtual false, abstract: false, final false
  inline void AddCallbackToFirstDebugPacketWithId(::System::Action* callback, int32_t id);

  /// @brief Method AddCallbackToAllDebugPacketWithId, addr 0x2a04790, size 0x1ec, virtual false, abstract: false, final false
  inline void AddCallbackToAllDebugPacketWithId(::System::Action* callback, int32_t id);

  /// @brief Method CheckDebugPackets, addr 0x2a03904, size 0x41c, virtual false, abstract: false, final false
  inline void CheckDebugPackets();

  /// @brief Method CheckIfConditionIsMet, addr 0x2a049d8, size 0x110, virtual false, abstract: false, final false
  inline bool CheckIfConditionIsMet(::Tayx::Graphy::__GraphyDebugger__DebugCondition debugCondition);

  /// @brief Method GetRequestedValueFromDebugVariable, addr 0x2a04ea4, size 0x1cc, virtual false, abstract: false, final false
  inline float_t GetRequestedValueFromDebugVariable(::Tayx::Graphy::__GraphyDebugger__DebugVariable debugVariable);

  /// @brief Method ExecuteOperationsInDebugPacket, addr 0x2a04ae8, size 0x3bc, virtual false, abstract: false, final false
  inline void ExecuteOperationsInDebugPacket(::Tayx::Graphy::__GraphyDebugger__DebugPacket* debugPacket);

  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphyDebugger(GraphyDebugger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphyDebugger(GraphyDebugger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyDebugger();

public:
  /// @brief Field m_debugPackets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* ___m_debugPackets;

  /// @brief Field m_fpsMonitor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> ___m_fpsMonitor;

  /// @brief Field m_ramMonitor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> ___m_ramMonitor;

  /// @brief Field m_audioMonitor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> ___m_audioMonitor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyDebugger, 0x38>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger, ___m_debugPackets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger, ___m_fpsMonitor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger, ___m_ramMonitor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyDebugger, ___m_audioMonitor) == 0x30, "Offset mismatch!");

} // namespace Tayx::Graphy
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation, "Tayx.Graphy", "GraphyDebugger/ConditionEvaluation");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger__DebugComparer, "Tayx.Graphy", "GraphyDebugger/DebugComparer");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger__DebugVariable, "Tayx.Graphy", "GraphyDebugger/DebugVariable");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger__MessageType, "Tayx.Graphy", "GraphyDebugger/MessageType");
NEED_NO_BOX(::Tayx::Graphy::GraphyDebugger);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger*, "Tayx.Graphy", "GraphyDebugger");
NEED_NO_BOX(::Tayx::Graphy::__GraphyDebugger__DebugPacket);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger__DebugPacket*, "Tayx.Graphy", "GraphyDebugger/DebugPacket");
NEED_NO_BOX(::Tayx::Graphy::__GraphyDebugger____c);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger____c*, "Tayx.Graphy", "GraphyDebugger/<>c");
NEED_NO_BOX(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass18_0");
NEED_NO_BOX(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass19_0");
NEED_NO_BOX(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass21_0");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyDebugger__DebugCondition, "Tayx.Graphy", "GraphyDebugger/DebugCondition");
