#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerUnsafeUtility)
namespace Unity::Profiling::LowLevel {
struct MarkerFlags;
}
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
class ProfilerUnsafeUtility;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility);
// Type: Unity.Profiling.LowLevel.Unsafe::ProfilerUnsafeUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9968))
// CS Name: ::Unity.Profiling.LowLevel.Unsafe::ProfilerUnsafeUtility*
class CORDL_TYPE ProfilerUnsafeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateMarker, addr 0x2c9d6a4, size 0x5c, virtual false, abstract: false, final false
  static inline void* CreateMarker(::StringW name, uint16_t categoryId, ::Unity::Profiling::LowLevel::MarkerFlags flags, int32_t metadataCount);

  /// @brief Method BeginSample, addr 0x2c9d828, size 0x3c, virtual false, abstract: false, final false
  static inline void BeginSample(void* markerPtr);

  /// @brief Method EndSample, addr 0x2c9d8f4, size 0x3c, virtual false, abstract: false, final false
  static inline void EndSample(void* markerPtr);

  // Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfilerUnsafeUtility(ProfilerUnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfilerUnsafeUtility(ProfilerUnsafeUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerUnsafeUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Profiling::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*, "Unity.Profiling.LowLevel.Unsafe", "ProfilerUnsafeUtility");
