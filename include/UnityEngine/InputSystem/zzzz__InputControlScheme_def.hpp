#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlScheme)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct DeviceRequirement_InputControlScheme_Flags;
}
namespace UnityEngine::InputSystem {
template <typename TControl> struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme_DeviceRequirement;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme_MatchResult;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme_SchemeJson;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct MatchResult_InputControlScheme_Enumerator;
}
namespace UnityEngine::InputSystem {
struct MatchResult_InputControlScheme_Match;
}
namespace UnityEngine::InputSystem {
struct MatchResult_InputControlScheme_Result;
}
namespace UnityEngine::InputSystem {
struct SchemeJson_InputControlScheme_DeviceJson;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct DeviceRequirement_InputControlScheme_Flags;
}
namespace UnityEngine::InputSystem {
struct MatchResult_InputControlScheme_Result;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme_DeviceRequirement;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme_MatchResult;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme_SchemeJson;
}
namespace UnityEngine::InputSystem {
struct MatchResult_InputControlScheme_Enumerator;
}
namespace UnityEngine::InputSystem {
struct MatchResult_InputControlScheme_Match;
}
namespace UnityEngine::InputSystem {
struct SchemeJson_InputControlScheme_DeviceJson;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags);
MARK_VAL_T(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result);
MARK_VAL_T(::UnityEngine::InputSystem::InputControlScheme);
MARK_VAL_T(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement);
MARK_VAL_T(::UnityEngine::InputSystem::InputControlScheme_MatchResult);
MARK_VAL_T(::UnityEngine::InputSystem::InputControlScheme_SchemeJson);
MARK_VAL_T(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Enumerator);
MARK_VAL_T(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match);
MARK_VAL_T(::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/MatchResult/Result
struct CORDL_TYPE MatchResult_InputControlScheme_Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MatchResult_InputControlScheme_Result_Unwrapped
  enum struct __MatchResult_InputControlScheme_Result_Unwrapped : int32_t {
    __E_AllSatisfied = static_cast<int32_t>(0x0),
    __E_MissingRequired = static_cast<int32_t>(0x1),
    __E_MissingOptional = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MatchResult_InputControlScheme_Result_Unwrapped() const noexcept {
    return static_cast<__MatchResult_InputControlScheme_Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchResult_InputControlScheme_Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MatchResult_InputControlScheme_Result(int32_t value__) noexcept;

  /// @brief Field AllSatisfied value: I32(0)
  static ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result const AllSatisfied;

  /// @brief Field MissingOptional value: I32(2)
  static ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result const MissingOptional;

  /// @brief Field MissingRequired value: I32(1)
  static ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result const MissingRequired;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6597 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputControlList`1<TControl>
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/MatchResult/Match
struct CORDL_TYPE MatchResult_InputControlScheme_Match {
public:
  // Declarations
  __declspec(property(get = get_control)) ::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_device)) ::UnityEngine::InputSystem::InputDevice* device;

  __declspec(property(get = get_isOptional)) bool isOptional;

  __declspec(property(get = get_requirement)) ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement requirement;

  __declspec(property(get = get_requirementIndex)) int32_t requirementIndex;

  /// @brief Method get_control, addr 0x4573674, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_device, addr 0x45736c0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  /// @brief Method get_isOptional, addr 0x4573714, size 0x14, virtual false, abstract: false, final false
  inline bool get_isOptional();

  /// @brief Method get_requirement, addr 0x45736e0, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement get_requirement();

  /// @brief Method get_requirementIndex, addr 0x45736d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_requirementIndex();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchResult_InputControlScheme_Match();

  // Ctor Parameters [CppParam { name: "m_RequirementIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement,::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*>", modifiers: "", def_value: None }, CppParam
  // { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None }]
  constexpr MatchResult_InputControlScheme_Match(
      int32_t m_RequirementIndex, ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*> m_Requirements,
      ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6598 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_RequirementIndex, offset: 0x0, size: 0x4, def value: None
  int32_t m_RequirementIndex;

  /// @brief Field m_Requirements, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*> m_Requirements;

  /// @brief Field m_Controls, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match, m_RequirementIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match, m_Requirements) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match, m_Controls) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, UnityEngine.InputSystem.InputControlList`1<TControl>,
// UnityEngine.InputSystem.InputControlScheme::MatchResult::Match
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct CORDL_TYPE MatchResult_InputControlScheme_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x457385c, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x4573734, size 0x2c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x4573760, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x45737ec, size 0x70, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method get_Current, addr 0x457376c, size 0x80, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__MatchResult_InputControlScheme_Match_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchResult_InputControlScheme_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement,::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*>", modifiers: "", def_value: None }, CppParam
  // { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None }]
  constexpr MatchResult_InputControlScheme_Enumerator(
      int32_t m_Index, ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*> m_Requirements,
      ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6599 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field m_Requirements, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*> m_Requirements;

  /// @brief Field m_Controls, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Enumerator, m_Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Enumerator, m_Requirements) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Enumerator, m_Controls) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Enumerator, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.IDisposable, UnityEngine.InputSystem.InputControlList`1<TControl>,
// UnityEngine.InputSystem.InputControlScheme::MatchResult::Match, UnityEngine.InputSystem.InputControlScheme::MatchResult::Result
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/MatchResult
struct CORDL_TYPE InputControlScheme_MatchResult {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Enumerator;

  using Match = ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match;

  using Result = ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result;

  __declspec(property(get = get_Item)) ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match Item[];

  __declspec(property(get = get_devices)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> devices;

  __declspec(property(get = get_hasMissingOptionalDevices)) bool hasMissingOptionalDevices;

  __declspec(property(get = get_hasMissingRequiredDevices)) bool hasMissingRequiredDevices;

  __declspec(property(get = get_isSuccessfulMatch)) bool isSuccessfulMatch;

  __declspec(property(get = get_score)) float_t score;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x4573604, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x4573590, size 0x70, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4573600, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method get_Item, addr 0x4573510, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match get_Item(int32_t index);

  /// @brief Method get_devices, addr 0x45733d4, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> get_devices();

  /// @brief Method get_hasMissingOptionalDevices, addr 0x45733c4, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasMissingOptionalDevices();

  /// @brief Method get_hasMissingRequiredDevices, addr 0x45733b4, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasMissingRequiredDevices();

  /// @brief Method get_isSuccessfulMatch, addr 0x45733a4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isSuccessfulMatch();

  /// @brief Method get_score, addr 0x457339c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_score();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__MatchResult_InputControlScheme_Match_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlScheme_MatchResult();

  // Ctor Parameters [CppParam { name: "m_Result", ty: "::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result", modifiers: "", def_value: None }, CppParam { name: "m_Score", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Devices", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: None },
  // CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None }, CppParam { name:
  // "m_Requirements", ty: "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement,::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*>", modifiers: "",
  // def_value: None }]
  constexpr InputControlScheme_MatchResult(
      ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result m_Result, float_t m_Score, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> m_Devices,
      ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls,
      ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*> m_Requirements) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6600 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field m_Result, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result m_Result;

  /// @brief Field m_Score, offset: 0x4, size: 0x4, def value: None
  float_t m_Score;

  /// @brief Field m_Devices, offset: 0x8, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> m_Devices;

  /// @brief Field m_Controls, offset: 0x28, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls;

  /// @brief Field m_Requirements, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*> m_Requirements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_MatchResult, m_Result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_MatchResult, m_Score) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_MatchResult, m_Devices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_MatchResult, m_Controls) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_MatchResult, m_Requirements) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlScheme_MatchResult, 0x50>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/DeviceRequirement/Flags
struct CORDL_TYPE DeviceRequirement_InputControlScheme_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DeviceRequirement_InputControlScheme_Flags_Unwrapped
  enum struct __DeviceRequirement_InputControlScheme_Flags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Optional = static_cast<int32_t>(0x1),
    __E_Or = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DeviceRequirement_InputControlScheme_Flags_Unwrapped() const noexcept {
    return static_cast<__DeviceRequirement_InputControlScheme_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DeviceRequirement_InputControlScheme_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DeviceRequirement_InputControlScheme_Flags(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags const None;

  /// @brief Field Optional value: I32(1)
  static ::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags const Optional;

  /// @brief Field Or value: I32(2)
  static ::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags const Or;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6601 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.IEquatable`1<T>, UnityEngine.InputSystem.InputControlScheme::DeviceRequirement::Flags
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/DeviceRequirement
struct CORDL_TYPE InputControlScheme_DeviceRequirement {
public:
  // Declarations
  using Flags = ::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags;

  __declspec(property(get = get_controlPath, put = set_controlPath)) ::StringW controlPath;

  __declspec(property(get = get_isAND, put = set_isAND)) bool isAND;

  __declspec(property(get = get_isOR, put = set_isOR)) bool isOR;

  __declspec(property(get = get_isOptional, put = set_isOptional)) bool isOptional;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*();

  /// @brief Method Equals, addr 0x4573a0c, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x45739a0, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement other);

  /// @brief Method GetHashCode, addr 0x4573a84, size 0xec, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x45738dc, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_controlPath, addr 0x4573860, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_controlPath();

  /// @brief Method get_isAND, addr 0x4573880, size 0x10, virtual false, abstract: false, final false
  inline bool get_isAND();

  /// @brief Method get_isOR, addr 0x4573890, size 0xc, virtual false, abstract: false, final false
  inline bool get_isOR();

  /// @brief Method get_isOptional, addr 0x4573728, size 0xc, virtual false, abstract: false, final false
  inline bool get_isOptional();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>* i___System__IEquatable_1___UnityEngine__InputSystem__InputControlScheme_DeviceRequirement_();

  /// @brief Method op_Equality, addr 0x4573078, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement left, ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement right);

  /// @brief Method op_Inequality, addr 0x4573b70, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement left, ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement right);

  /// @brief Method set_controlPath, addr 0x4573868, size 0x8, virtual false, abstract: false, final false
  inline void set_controlPath(::StringW value);

  /// @brief Method set_isAND, addr 0x457389c, size 0x20, virtual false, abstract: false, final false
  inline void set_isAND(bool value);

  /// @brief Method set_isOR, addr 0x45738bc, size 0x20, virtual false, abstract: false, final false
  inline void set_isOR(bool value);

  /// @brief Method set_isOptional, addr 0x4573870, size 0x10, virtual false, abstract: false, final false
  inline void set_isOptional(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlScheme_DeviceRequirement();

  // Ctor Parameters [CppParam { name: "m_ControlPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty:
  // "::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags", modifiers: "", def_value: None }]
  constexpr InputControlScheme_DeviceRequirement(::StringW m_ControlPath, ::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags m_Flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6602 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_ControlPath, offset: 0x0, size: 0x8, def value: None
  ::StringW m_ControlPath;

  /// @brief Field m_Flags, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags m_Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, m_ControlPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, m_Flags) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/SchemeJson/DeviceJson
struct CORDL_TYPE SchemeJson_InputControlScheme_DeviceJson {
public:
  // Declarations
  /// @brief Method From, addr 0x4573db0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson From(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement requirement);

  /// @brief Method ToDeviceEntry, addr 0x4573cbc, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement ToDeviceEntry();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemeJson_InputControlScheme_DeviceJson();

  // Ctor Parameters [CppParam { name: "devicePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "isOR", ty: "bool", modifiers: "", def_value: None }]
  constexpr SchemeJson_InputControlScheme_DeviceJson(::StringW devicePath, bool isOptional, bool isOR) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6603 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field devicePath, offset: 0x0, size: 0x8, def value: None
  ::StringW devicePath;

  /// @brief Field isOptional, offset: 0x8, size: 0x1, def value: None
  bool isOptional;

  /// @brief Field isOR, offset: 0x9, size: 0x1, def value: None
  bool isOR;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson, devicePath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson, isOptional) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson, isOR) == 0x9, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/SchemeJson
struct CORDL_TYPE InputControlScheme_SchemeJson {
public:
  // Declarations
  using DeviceJson = ::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson;

  /// @brief Method ToJson, addr 0x4573dc4, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson, ::Array<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>*>
  ToJson(::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> schemes);

  /// @brief Method ToJson, addr 0x4573cd0, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme_SchemeJson ToJson(::UnityEngine::InputSystem::InputControlScheme scheme);

  /// @brief Method ToScheme, addr 0x4573ba0, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme ToScheme();

  /// @brief Method ToSchemes, addr 0x4573ecc, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*>
  ToSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson, ::Array<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>*> schemes);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlScheme_SchemeJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bindingGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "devices", ty: "::ArrayW<::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson,::Array<::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson>*>", modifiers: "",
  // def_value: None }]
  constexpr InputControlScheme_SchemeJson(
      ::StringW name, ::StringW bindingGroup,
      ::ArrayW<::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson, ::Array<::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson>*> devices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6604 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field bindingGroup, offset: 0x8, size: 0x8, def value: None
  ::StringW bindingGroup;

  /// @brief Field devices, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson, ::Array<::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson>*> devices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_SchemeJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_SchemeJson, bindingGroup) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme_SchemeJson, devices) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlScheme_SchemeJson, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme
struct CORDL_TYPE InputControlScheme {
public:
  // Declarations
  using DeviceRequirement = ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement;

  using MatchResult = ::UnityEngine::InputSystem::InputControlScheme_MatchResult;

  using SchemeJson = ::UnityEngine::InputSystem::InputControlScheme_SchemeJson;

  __declspec(property(get = get_bindingGroup, put = set_bindingGroup)) ::StringW bindingGroup;

  __declspec(property(get = get_deviceRequirements)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement> deviceRequirements;

  __declspec(property(get = get_name)) ::StringW name;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*();

  /// @brief Method Equals, addr 0x45730a4, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4572f30, size 0x148, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::InputControlScheme other);

  /// @brief Method FindControlSchemeForDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSchemes>
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlSchemeForDevice(::UnityEngine::InputSystem::InputDevice* device, TSchemes schemes);

  /// @brief Method FindControlSchemeForDevices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevices, typename TSchemes>
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>
  FindControlSchemeForDevices(TDevices devices, TSchemes schemes, ::UnityEngine::InputSystem::InputDevice* mustIncludeDevice, bool allowUnsuccesfulMatch);

  /// @brief Method FindControlSchemeForDevices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevices, typename TSchemes>
  static inline bool FindControlSchemeForDevices(TDevices devices, TSchemes schemes, ::ByRef<::UnityEngine::InputSystem::InputControlScheme> controlScheme,
                                                 ::ByRef<::UnityEngine::InputSystem::InputControlScheme_MatchResult> matchResult, ::UnityEngine::InputSystem::InputDevice* mustIncludeDevice,
                                                 bool allowUnsuccessfulMatch);

  /// @brief Method GetHashCode, addr 0x4573134, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method PickDevicesFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevices> inline ::UnityEngine::InputSystem::InputControlScheme_MatchResult PickDevicesFrom(TDevices devices, ::UnityEngine::InputSystem::InputDevice* favorDevice);

  /// @brief Method SetNameAndBindingGroup, addr 0x4572d4c, size 0xb8, virtual false, abstract: false, final false
  inline void SetNameAndBindingGroup(::StringW name, ::StringW bindingGroup);

  /// @brief Method SupportsDevice, addr 0x4572e04, size 0xcc, virtual false, abstract: false, final false
  inline bool SupportsDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ToString, addr 0x45731b4, size 0x184, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4572c5c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>* devices, ::StringW bindingGroup);

  /// @brief Method get_bindingGroup, addr 0x4572bec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_bindingGroup();

  /// @brief Method get_deviceRequirements, addr 0x4572bfc, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement> get_deviceRequirements();

  /// @brief Method get_name, addr 0x4572be4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>* i___System__IEquatable_1___UnityEngine__InputSystem__InputControlScheme_();

  /// @brief Method op_Equality, addr 0x4573338, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right);

  /// @brief Method op_Inequality, addr 0x4573368, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right);

  /// @brief Method set_bindingGroup, addr 0x4572bf4, size 0x8, virtual false, abstract: false, final false
  inline void set_bindingGroup(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlScheme();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_BindingGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "m_DeviceRequirements", ty: "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement,::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*>",
  // modifiers: "", def_value: None }]
  constexpr InputControlScheme(
      ::StringW m_Name, ::StringW m_BindingGroup,
      ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*> m_DeviceRequirements) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6605 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_BindingGroup, offset: 0x8, size: 0x8, def value: None
  ::StringW m_BindingGroup;

  /// @brief Field m_DeviceRequirements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::Array<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>*> m_DeviceRequirements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme, m_BindingGroup) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme, m_DeviceRequirements) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlScheme, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Result, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Result");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlScheme, "UnityEngine.InputSystem", "InputControlScheme");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlScheme_MatchResult, "UnityEngine.InputSystem", "InputControlScheme/MatchResult");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlScheme_SchemeJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Enumerator, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::MatchResult_InputControlScheme_Match, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Match");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::SchemeJson_InputControlScheme_DeviceJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson/DeviceJson");
