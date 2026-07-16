#pragma once
// IWYU pragma private; include "UnityEngine/EnumData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Enum_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumData)
namespace System {
class Enum;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
struct EnumData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EnumData);
DEFINE_IL2CPP_CLASS(::UnityEngine::EnumData, "UnityEngine", "EnumData");
// Dependencies System.Enum
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.EnumData
struct CORDL_TYPE EnumData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumData();

  // Ctor Parameters [CppParam { name: "values", ty: "::ArrayW<::System::Enum*>", modifiers: "", def_value: None }, CppParam { name: "flagValues", ty: "::ArrayW<int32_t>", modifiers: "", def_value:
  // None }, CppParam { name: "displayNames", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "names", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None },
  // CppParam { name: "tooltip", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "underlyingType",
  // ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_cordl_unsigned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "serializable", ty: "bool", modifiers:
  // "", def_value: None }]
  constexpr EnumData(::ArrayW<::System::Enum*> values, ::ArrayW<int32_t> flagValues, ::ArrayW<::StringW> displayNames, ::ArrayW<::StringW> names, ::ArrayW<::StringW> tooltip, bool flags,
                     ::System::Type* underlyingType, bool _cordl_unsigned, bool serializable) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10310 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field values, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::System::Enum*> values;

  /// @brief Field flagValues, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<int32_t> flagValues;

  /// @brief Field displayNames, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW> displayNames;

  /// @brief Field names, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW> names;

  /// @brief Field tooltip, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW> tooltip;

  /// @brief Field flags, offset: 0x28, size: 0x1, def value: None
  bool flags;

  /// @brief Field underlyingType, offset: 0x30, size: 0x8, def value: None
  ::System::Type* underlyingType;

  /// @brief Field unsigned, offset: 0x38, size: 0x1, def value: None
  bool _cordl_unsigned;

  /// @brief Field serializable, offset: 0x39, size: 0x1, def value: None
  bool serializable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EnumData, values) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, flagValues) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, displayNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, names) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, tooltip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, flags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, underlyingType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, _cordl_unsigned) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, serializable) == 0x39, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::EnumData) == 0x40, "Size mismatch!");

} // namespace UnityEngine
