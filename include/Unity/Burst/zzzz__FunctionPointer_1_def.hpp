#pragma once
// IWYU pragma private; include "Unity/Burst/FunctionPointer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FunctionPointer_1)
namespace System {
struct IntPtr;
}
namespace Unity::Burst {
class IFunctionPointer;
}
// Forward declare root types
namespace Unity::Burst {
template <typename T> struct FunctionPointer_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Burst::FunctionPointer_1);
// Type: Unity.Burst::FunctionPointer`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::Unity.Burst::FunctionPointer`1<T>
struct CORDL_TYPE FunctionPointer_1 {
public:
  // Declarations
  __declspec(property(get = get_Invoke)) T Invoke;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Value)) ::System::IntPtr Value;

  /// @brief Convert operator to "::Unity::Burst::IFunctionPointer"
  constexpr operator ::Unity::Burst::IFunctionPointer*();

  /// @brief Method CheckIsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckIsCreated();

  /// @brief Method Unity.Burst.IFunctionPointer.FromIntPtr, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Burst::IFunctionPointer* Unity_Burst_IFunctionPointer_FromIntPtr(::System::IntPtr ptr);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method get_Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Invoke();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Value();

  /// @brief Convert to "::Unity::Burst::IFunctionPointer"
  constexpr ::Unity::Burst::IFunctionPointer* i___Unity__Burst__IFunctionPointer();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FunctionPointer_1();

  // Ctor Parameters [CppParam { name: "_ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr FunctionPointer_1(::System::IntPtr _ptr) noexcept;

  /// @brief Field _ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr _ptr;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14587 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Burst::FunctionPointer_1, "Unity.Burst", "FunctionPointer`1");
