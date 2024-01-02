#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncLocalValueChangedArgs_1)
// Forward declare root types
namespace System::Threading {
template <typename T> struct AsyncLocalValueChangedArgs_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Threading::AsyncLocalValueChangedArgs_1);
// Type: System.Threading::AsyncLocalValueChangedArgs`1
// SizeInfo { instance_size: 24, native_size: 33, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2659))
// CS Name: ::System.Threading::AsyncLocalValueChangedArgs`1<T>
struct CORDL_TYPE AsyncLocalValueChangedArgs_1 {
public:
  // Declarations
  __declspec(property(get = get_CurrentValue)) T CurrentValue;

  /// @brief Method get_CurrentValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_CurrentValue();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T previousValue, T currentValue, bool contextChanged);

  // Ctor Parameters [CppParam { name: "_PreviousValue_k__BackingField", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_CurrentValue_k__BackingField", ty: "T", modifiers: "", def_value:
  // None }, CppParam { name: "_ThreadContextChanged_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr AsyncLocalValueChangedArgs_1(T _PreviousValue_k__BackingField, T _CurrentValue_k__BackingField, bool _ThreadContextChanged_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncLocalValueChangedArgs_1();

  /// @brief Field <PreviousValue>k__BackingField, offset: 0x0, size: 0x8, def value: None
  T _PreviousValue_k__BackingField;

  /// @brief Field <CurrentValue>k__BackingField, offset: 0x8, size: 0x8, def value: None
  T _CurrentValue_k__BackingField;

  /// @brief Field <ThreadContextChanged>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool _ThreadContextChanged_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::AsyncLocalValueChangedArgs_1, "System.Threading", "AsyncLocalValueChangedArgs`1");
