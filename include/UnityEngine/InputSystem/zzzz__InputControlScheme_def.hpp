#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlScheme)
namespace GlobalNamespace {
struct __InputControlScheme__DeviceRequirement__Flags;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Enumerator;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Match;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Result;
}
namespace GlobalNamespace {
struct __InputControlScheme__SchemeJson__DeviceJson;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
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
template <typename TControl> struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__DeviceRequirement;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__MatchResult;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__SchemeJson;
}
// Forward declare root types
namespace GlobalNamespace {
struct __InputControlScheme__DeviceRequirement__Flags;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Result;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Enumerator;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Match;
}
namespace GlobalNamespace {
struct __InputControlScheme__SchemeJson__DeviceJson;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__DeviceRequirement;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__MatchResult;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__SchemeJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags);
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__MatchResult__Result);
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator);
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__MatchResult__Match);
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputControlScheme);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlScheme__MatchResult);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlScheme__SchemeJson);
// Type: ::Result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputControlScheme::MatchResult::Result
struct CORDL_TYPE __InputControlScheme__MatchResult__Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputControlScheme__MatchResult__Result_Unwrapped
  enum struct ____InputControlScheme__MatchResult__Result_Unwrapped : int32_t {
    __E_AllSatisfied = static_cast<int32_t>(0x0),
    __E_MissingRequired = static_cast<int32_t>(0x1),
    __E_MissingOptional = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputControlScheme__MatchResult__Result_Unwrapped() const noexcept {
    return static_cast<____InputControlScheme__MatchResult__Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlScheme__MatchResult__Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputControlScheme__MatchResult__Result(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllSatisfied value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__InputControlScheme__MatchResult__Result const AllSatisfied;

  /// @brief Field MissingOptional value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__InputControlScheme__MatchResult__Result const MissingOptional;

  /// @brief Field MissingRequired value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__InputControlScheme__MatchResult__Result const MissingRequired;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__MatchResult__Result, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__MatchResult__Result, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Match
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputControlScheme::MatchResult::Match
struct CORDL_TYPE __InputControlScheme__MatchResult__Match {
public:
  // Declarations
  __declspec(property(get = get_control))::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_device))::UnityEngine::InputSystem::InputDevice* device;

  __declspec(property(get = get_isOptional)) bool isOptional;

  __declspec(property(get = get_requirement))::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement requirement;

  __declspec(property(get = get_requirementIndex)) int32_t requirementIndex;

  /// @brief Method get_control, addr 0x2f91ac8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_device, addr 0x2f91b14, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  /// @brief Method get_isOptional, addr 0x2f91b68, size 0x14, virtual false, abstract: false, final false
  inline bool get_isOptional();

  /// @brief Method get_requirement, addr 0x2f91b34, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement get_requirement();

  /// @brief Method get_requirementIndex, addr 0x2f91b2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_requirementIndex();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlScheme__MatchResult__Match();

  // Ctor Parameters [CppParam { name: "m_RequirementIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty:
  // "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value: None },
  // CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None }]
  constexpr __InputControlScheme__MatchResult__Match(
      int32_t m_RequirementIndex,
      ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_Requirements,
      ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls) noexcept;

  /// @brief Field m_RequirementIndex, offset: 0x0, size: 0x4, def value: None
  int32_t m_RequirementIndex;

  /// @brief Field m_Requirements, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_Requirements;

  /// @brief Field m_Controls, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__MatchResult__Match, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__MatchResult__Match, m_RequirementIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__MatchResult__Match, m_Requirements) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__MatchResult__Match, m_Controls) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Enumerator
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputControlScheme::MatchResult::Enumerator
struct CORDL_TYPE __InputControlScheme__MatchResult__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::GlobalNamespace::__InputControlScheme__MatchResult__Match Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x2f91cb4, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x2f91b88, size 0x2c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x2f91bb4, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2f91c44, size 0x70, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method get_Current, addr 0x2f91bc0, size 0x84, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__InputControlScheme__MatchResult__Match get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*
  i___System__Collections__Generic__IEnumerator_1___GlobalNamespace____InputControlScheme__MatchResult__Match_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlScheme__MatchResult__Enumerator();

  // Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty:
  // "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value: None },
  // CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None }]
  constexpr __InputControlScheme__MatchResult__Enumerator(
      int32_t m_Index, ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_Requirements,
      ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls) noexcept;

  /// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field m_Requirements, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_Requirements;

  /// @brief Field m_Controls, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator, m_Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator, m_Requirements) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator, m_Controls) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MatchResult
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputControlScheme::MatchResult
struct CORDL_TYPE __InputControlScheme__MatchResult {
public:
  // Declarations
  using Enumerator = ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator;

  using Match = ::GlobalNamespace::__InputControlScheme__MatchResult__Match;

  using Result = ::GlobalNamespace::__InputControlScheme__MatchResult__Result;

  __declspec(property(get = get_Item))::GlobalNamespace::__InputControlScheme__MatchResult__Match Item[];

  __declspec(property(get = get_devices))::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> devices;

  __declspec(property(get = get_hasMissingOptionalDevices)) bool hasMissingOptionalDevices;

  __declspec(property(get = get_hasMissingRequiredDevices)) bool hasMissingRequiredDevices;

  __declspec(property(get = get_isSuccessfulMatch)) bool isSuccessfulMatch;

  __declspec(property(get = get_score)) float_t score;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x2f91a58, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x2f919e4, size 0x70, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2f91a54, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method get_Item, addr 0x2f91960, size 0x84, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlScheme__MatchResult__Match get_Item(int32_t index);

  /// @brief Method get_devices, addr 0x2f91824, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> get_devices();

  /// @brief Method get_hasMissingOptionalDevices, addr 0x2f91814, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasMissingOptionalDevices();

  /// @brief Method get_hasMissingRequiredDevices, addr 0x2f91804, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasMissingRequiredDevices();

  /// @brief Method get_isSuccessfulMatch, addr 0x2f917f4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isSuccessfulMatch();

  /// @brief Method get_score, addr 0x2f917ec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_score();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*
  i___System__Collections__Generic__IEnumerable_1___GlobalNamespace____InputControlScheme__MatchResult__Match_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlScheme__MatchResult();

  // Ctor Parameters [CppParam { name: "m_Result", ty: "::GlobalNamespace::__InputControlScheme__MatchResult__Result", modifiers: "", def_value: None }, CppParam { name: "m_Score", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Devices", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: None },
  // CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None }, CppParam { name:
  // "m_Requirements", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "",
  // def_value: None }]
  constexpr __InputControlScheme__MatchResult(
      ::GlobalNamespace::__InputControlScheme__MatchResult__Result m_Result, float_t m_Score, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> m_Devices,
      ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls,
      ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_Requirements) noexcept;

  /// @brief Field m_Result, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__InputControlScheme__MatchResult__Result m_Result;

  /// @brief Field m_Score, offset: 0x4, size: 0x4, def value: None
  float_t m_Score;

  /// @brief Field m_Devices, offset: 0x8, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> m_Devices;

  /// @brief Field m_Controls, offset: 0x28, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls;

  /// @brief Field m_Requirements, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_Requirements;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlScheme__MatchResult, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__MatchResult, m_Result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__MatchResult, m_Score) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__MatchResult, m_Devices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__MatchResult, m_Controls) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__MatchResult, m_Requirements) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputControlScheme::DeviceRequirement::Flags
struct CORDL_TYPE __InputControlScheme__DeviceRequirement__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputControlScheme__DeviceRequirement__Flags_Unwrapped
  enum struct ____InputControlScheme__DeviceRequirement__Flags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Optional = static_cast<int32_t>(0x1),
    __E_Or = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputControlScheme__DeviceRequirement__Flags_Unwrapped() const noexcept {
    return static_cast<____InputControlScheme__DeviceRequirement__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlScheme__DeviceRequirement__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputControlScheme__DeviceRequirement__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags const None;

  /// @brief Field Optional value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags const Optional;

  /// @brief Field Or value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags const Or;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DeviceRequirement
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputControlScheme::DeviceRequirement
struct CORDL_TYPE __InputControlScheme__DeviceRequirement {
public:
  // Declarations
  using Flags = ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags;

  __declspec(property(get = get_controlPath, put = set_controlPath))::StringW controlPath;

  __declspec(property(get = get_isAND, put = set_isAND)) bool isAND;

  __declspec(property(get = get_isOR, put = set_isOR)) bool isOR;

  __declspec(property(get = get_isOptional, put = set_isOptional)) bool isOptional;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*();

  /// @brief Method Equals, addr 0x2f91e68, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2f91dfc, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement other);

  /// @brief Method GetHashCode, addr 0x2f91ee0, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2f91d38, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_controlPath, addr 0x2f91cb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_controlPath();

  /// @brief Method get_isAND, addr 0x2f91ce4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isAND();

  /// @brief Method get_isOR, addr 0x2f91cf4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isOR();

  /// @brief Method get_isOptional, addr 0x2f91b7c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isOptional();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*
  i___System__IEquatable_1___UnityEngine__InputSystem____InputControlScheme__DeviceRequirement_();

  /// @brief Method op_Equality, addr 0x2f91f8c, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement left, ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement right);

  /// @brief Method op_Inequality, addr 0x2f91fb8, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement left, ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement right);

  /// @brief Method set_controlPath, addr 0x2f91cc0, size 0x8, virtual false, abstract: false, final false
  inline void set_controlPath(::StringW value);

  /// @brief Method set_isAND, addr 0x2f91d00, size 0x1c, virtual false, abstract: false, final false
  inline void set_isAND(bool value);

  /// @brief Method set_isOR, addr 0x2f91d1c, size 0x1c, virtual false, abstract: false, final false
  inline void set_isOR(bool value);

  /// @brief Method set_isOptional, addr 0x2f91cc8, size 0x1c, virtual false, abstract: false, final false
  inline void set_isOptional(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlScheme__DeviceRequirement();

  // Ctor Parameters [CppParam { name: "m_ControlPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty:
  // "::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags", modifiers: "", def_value: None }]
  constexpr __InputControlScheme__DeviceRequirement(::StringW m_ControlPath, ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags m_Flags) noexcept;

  /// @brief Field m_ControlPath, offset: 0x0, size: 0x8, def value: None
  ::StringW m_ControlPath;

  /// @brief Field m_Flags, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags m_Flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, m_ControlPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, m_Flags) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::DeviceJson
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputControlScheme::SchemeJson::DeviceJson
struct CORDL_TYPE __InputControlScheme__SchemeJson__DeviceJson {
public:
  // Declarations
  /// @brief Method From, addr 0x2f92228, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson From(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement requirement);

  /// @brief Method ToDeviceEntry, addr 0x2f9212c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement ToDeviceEntry();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlScheme__SchemeJson__DeviceJson();

  // Ctor Parameters [CppParam { name: "devicePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "isOR", ty: "bool", modifiers: "", def_value: None }]
  constexpr __InputControlScheme__SchemeJson__DeviceJson(::StringW devicePath, bool isOptional, bool isOR) noexcept;

  /// @brief Field devicePath, offset: 0x0, size: 0x8, def value: None
  ::StringW devicePath;

  /// @brief Field isOptional, offset: 0x8, size: 0x1, def value: None
  bool isOptional;

  /// @brief Field isOR, offset: 0x9, size: 0x1, def value: None
  bool isOR;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, devicePath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, isOptional) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, isOR) == 0x9, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SchemeJson
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputControlScheme::SchemeJson
struct CORDL_TYPE __InputControlScheme__SchemeJson {
public:
  // Declarations
  using DeviceJson = ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson;

  /// @brief Method ToJson, addr 0x2f9223c, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>
  ToJson(::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> schemes);

  /// @brief Method ToJson, addr 0x2f92148, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson ToJson(::UnityEngine::InputSystem::InputControlScheme scheme);

  /// @brief Method ToScheme, addr 0x2f91fe8, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme ToScheme();

  /// @brief Method ToSchemes, addr 0x2f92344, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*>
  ToSchemes(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> schemes);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlScheme__SchemeJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bindingGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "devices", ty: "::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson,::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*>", modifiers: "", def_value:
  // None }]
  constexpr __InputControlScheme__SchemeJson(
      ::StringW name, ::StringW bindingGroup,
      ::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, ::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*> devices) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field bindingGroup, offset: 0x8, size: 0x8, def value: None
  ::StringW bindingGroup;

  /// @brief Field devices, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, ::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*> devices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, bindingGroup) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, devices) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlScheme
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem::InputControlScheme
struct CORDL_TYPE InputControlScheme {
public:
  // Declarations
  using DeviceRequirement = ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement;

  using MatchResult = ::UnityEngine::InputSystem::__InputControlScheme__MatchResult;

  using SchemeJson = ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson;

  __declspec(property(get = get_bindingGroup, put = set_bindingGroup))::StringW bindingGroup;

  __declspec(property(get = get_deviceRequirements))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement> deviceRequirements;

  __declspec(property(get = get_name))::StringW name;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*();

  /// @brief Method Equals, addr 0x2f8d9ec, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2f8d8b0, size 0x13c, virtual true, abstract: false, final true
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
  static inline bool FindControlSchemeForDevices(TDevices devices, TSchemes schemes, ByRef<::UnityEngine::InputSystem::InputControlScheme> controlScheme,
                                                 ByRef<::UnityEngine::InputSystem::__InputControlScheme__MatchResult> matchResult, ::UnityEngine::InputSystem::InputDevice* mustIncludeDevice,
                                                 bool allowUnsuccessfulMatch);

  /// @brief Method GetHashCode, addr 0x2f8da7c, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method PickDevicesFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevices> inline ::UnityEngine::InputSystem::__InputControlScheme__MatchResult PickDevicesFrom(TDevices devices, ::UnityEngine::InputSystem::InputDevice* favorDevice);

  /// @brief Method SetNameAndBindingGroup, addr 0x2f8d724, size 0xb8, virtual false, abstract: false, final false
  inline void SetNameAndBindingGroup(::StringW name, ::StringW bindingGroup);

  /// @brief Method SupportsDevice, addr 0x2f8d7dc, size 0xd4, virtual false, abstract: false, final false
  inline bool SupportsDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ToString, addr 0x2f8dafc, size 0x184, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2f8d630, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>* devices, ::StringW bindingGroup);

  /// @brief Method get_bindingGroup, addr 0x2f8d5c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_bindingGroup();

  /// @brief Method get_deviceRequirements, addr 0x2f8d5d0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement> get_deviceRequirements();

  /// @brief Method get_name, addr 0x2f8d5b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>* i___System__IEquatable_1___UnityEngine__InputSystem__InputControlScheme_();

  /// @brief Method op_Equality, addr 0x2f8dc80, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right);

  /// @brief Method op_Inequality, addr 0x2f8dcb0, size 0x1034, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right);

  /// @brief Method set_bindingGroup, addr 0x2f8d5c8, size 0x8, virtual false, abstract: false, final false
  inline void set_bindingGroup(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlScheme();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_BindingGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "m_DeviceRequirements", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>",
  // modifiers: "", def_value: None }]
  constexpr InputControlScheme(
      ::StringW m_Name, ::StringW m_BindingGroup,
      ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_DeviceRequirements) noexcept;

  /// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_BindingGroup, offset: 0x8, size: 0x8, def value: None
  ::StringW m_BindingGroup;

  /// @brief Field m_DeviceRequirements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_DeviceRequirements;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlScheme, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme, m_BindingGroup) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme, m_DeviceRequirements) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement/Flags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__MatchResult__Result, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Result");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__MatchResult__Match, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Match");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson/DeviceJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlScheme, "UnityEngine.InputSystem", "InputControlScheme");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlScheme__MatchResult, "UnityEngine.InputSystem", "InputControlScheme/MatchResult");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson");
