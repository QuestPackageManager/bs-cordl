#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/BatchQueryJobStruct_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchQueryJobStruct_1)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
template <typename T> struct BatchQueryJobStruct_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1);
// Type: Unity.Jobs.LowLevel.Unsafe::BatchQueryJobStruct`1
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 16, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace Unity::Jobs::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::Unity.Jobs.LowLevel.Unsafe::BatchQueryJobStruct`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE BatchQueryJobStruct_1 {
public:
  // Declarations
  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::System::IntPtr jobReflectionData;

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::IntPtr Initialize();

  static inline ::System::IntPtr getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::System::IntPtr value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchQueryJobStruct_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10523 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Jobs::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1, "Unity.Jobs.LowLevel.Unsafe", "BatchQueryJobStruct`1");
