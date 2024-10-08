#pragma once
// IWYU pragma private; include "System/ByReference_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ByReference_1)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System {
template <typename T> struct ByReference_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::ByReference_1);
// Type: System::ByReference`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::System::ByReference`1<T>
struct CORDL_TYPE ByReference_1 {
public:
  // Declarations
  __declspec(property(get = get_Value)) T Value;

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(ByRef<T> value);

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ByRef<T> get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ByReference_1();

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr ByReference_1(::System::IntPtr _value) noexcept;

  /// @brief Field _value, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr _value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2536 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ByReference_1, "System", "ByReference`1");
