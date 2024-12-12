#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/BatchQueryJob_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BatchQueryJob_2)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
template <typename CommandT, typename ResultT> struct BatchQueryJob_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Jobs::LowLevel::Unsafe::BatchQueryJob_2);
// Dependencies Unity.Collections.NativeArray`1<T>
namespace Unity::Jobs::LowLevel::Unsafe {
// cpp template
template <typename CommandT, typename ResultT>
// Is value type: true
// CS Name: Unity.Jobs.LowLevel.Unsafe.BatchQueryJob`2<CommandT,ResultT>
struct CORDL_TYPE BatchQueryJob_2 {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<CommandT> commands, ::Unity::Collections::NativeArray_1<ResultT> results);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchQueryJob_2();

  // Ctor Parameters [CppParam { name: "commands", ty: "::Unity::Collections::NativeArray_1<CommandT>", modifiers: "", def_value: None }, CppParam { name: "results", ty:
  // "::Unity::Collections::NativeArray_1<ResultT>", modifiers: "", def_value: None }]
  constexpr BatchQueryJob_2(::Unity::Collections::NativeArray_1<CommandT> commands, ::Unity::Collections::NativeArray_1<ResultT> results) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10547 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field commands, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<CommandT> commands;

  /// @brief Field results, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<ResultT> results;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Jobs::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::LowLevel::Unsafe::BatchQueryJob_2, "Unity.Jobs.LowLevel.Unsafe", "BatchQueryJob`2");
