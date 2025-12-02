#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeBitArrayUnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeBitArrayUnsafeUtility)
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct NativeBitArray;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeBitArrayUnsafeUtility;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeBitArrayUnsafeUtility
class CORDL_TYPE NativeBitArrayUnsafeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertExistingDataToNativeBitArray, addr 0x62af3ac, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeBitArray ConvertExistingDataToNativeBitArray(void* ptr, int32_t sizeInBytes, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeBitArrayUnsafeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeBitArrayUnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeBitArrayUnsafeUtility(NativeBitArrayUnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeBitArrayUnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeBitArrayUnsafeUtility(NativeBitArrayUnsafeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15708 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeBitArrayUnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "NativeBitArrayUnsafeUtility");
