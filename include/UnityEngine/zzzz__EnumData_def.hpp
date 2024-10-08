#pragma once
// IWYU pragma private; include "UnityEngine/EnumData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Type: UnityEngine::EnumData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 74, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::EnumData
struct CORDL_TYPE EnumData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumData();

  // Ctor Parameters [CppParam { name: "values", ty: "::ArrayW<::System::Enum*,::Array<::System::Enum*>*>", modifiers: "", def_value: None }, CppParam { name: "flagValues", ty:
  // "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "displayNames", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam
  // { name: "names", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "tooltip", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "",
  // def_value: None }, CppParam { name: "flags", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "underlyingType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam {
  // name: "_cordl_unsigned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "serializable", ty: "bool", modifiers: "", def_value: None }]
  constexpr EnumData(::ArrayW<::System::Enum*, ::Array<::System::Enum*>*> values, ::ArrayW<int32_t, ::Array<int32_t>*> flagValues, ::ArrayW<::StringW, ::Array<::StringW>*> displayNames,
                     ::ArrayW<::StringW, ::Array<::StringW>*> names, ::ArrayW<::StringW, ::Array<::StringW>*> tooltip, bool flags, ::System::Type* underlyingType, bool _cordl_unsigned,
                     bool serializable) noexcept;

  /// @brief Field values, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::System::Enum*, ::Array<::System::Enum*>*> values;

  /// @brief Field flagValues, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> flagValues;

  /// @brief Field displayNames, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> displayNames;

  /// @brief Field names, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> names;

  /// @brief Field tooltip, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> tooltip;

  /// @brief Field flags, offset: 0x28, size: 0x1, def value: None
  bool flags;

  /// @brief Field underlyingType, offset: 0x30, size: 0x8, def value: None
  ::System::Type* underlyingType;

  /// @brief Field unsigned, offset: 0x38, size: 0x1, def value: None
  bool _cordl_unsigned;

  /// @brief Field serializable, offset: 0x39, size: 0x1, def value: None
  bool serializable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10839 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EnumData, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, values) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, flagValues) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, displayNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, names) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, tooltip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, flags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, underlyingType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, _cordl_unsigned) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EnumData, serializable) == 0x39, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EnumData, "UnityEngine", "EnumData");
