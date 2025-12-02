#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/ValueStruct_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValueStruct_1)
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
template <typename T> struct ValueStruct_1;
}
// Write type traits
MARK_GEN_VAL_T(::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1);
// Dependencies
namespace Meta::XR::ImmersiveDebugger::Utils {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Utils.ValueStruct`1<T>
struct CORDL_TYPE ValueStruct_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueStruct_1();

  // Ctor Parameters [CppParam { name: "ValueName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "T", modifiers: "", def_value: None }]
  constexpr ValueStruct_1(::StringW ValueName, T Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18308 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field ValueName, offset: 0x0, size: 0x8, def value: None
  ::StringW ValueName;

  /// @brief Field Value, offset: 0x8, size: 0x8, def value: None
  T Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1, "Meta.XR.ImmersiveDebugger.Utils", "ValueStruct`1");
