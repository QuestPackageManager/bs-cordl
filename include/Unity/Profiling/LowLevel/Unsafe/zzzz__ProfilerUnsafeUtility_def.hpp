#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerUnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerUnsafeUtility)
namespace System {
struct IntPtr;
}
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerCategoryDescription;
}
namespace Unity::Profiling::LowLevel {
struct MarkerFlags;
}
namespace Unity::Profiling {
struct ProfilerCategoryColor;
}
namespace Unity::Profiling {
struct ProfilerCounterOptions;
}
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
class ProfilerUnsafeUtility;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility);
// Type: Unity.Profiling.LowLevel.Unsafe::ProfilerUnsafeUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Profiling.LowLevel.Unsafe::ProfilerUnsafeUtility*
class CORDL_TYPE ProfilerUnsafeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method BeginSample, addr 0x47e858c, size 0x3c, virtual false, abstract: false, final false
  static inline void BeginSample(::System::IntPtr markerPtr);

  /// @brief Method CreateCategory__Unmanaged, addr 0x47e8684, size 0x54, virtual false, abstract: false, final false
  static inline uint16_t CreateCategory__Unmanaged(::cordl_internals::Ptr<uint8_t> name, int32_t nameLen, ::Unity::Profiling::ProfilerCategoryColor colorIndex);

  /// @brief Method CreateCounterValue__Unmanaged, addr 0x47e87fc, size 0x9c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> CreateCounterValue__Unmanaged(ByRef<::System::IntPtr> counterPtr, ::cordl_internals::Ptr<uint8_t> name, int32_t nameLen, uint16_t categoryId,
                                                                           ::Unity::Profiling::LowLevel::MarkerFlags flags, uint8_t dataType, uint8_t dataUnit, int32_t dataSize,
                                                                           ::Unity::Profiling::ProfilerCounterOptions counterOptions);

  /// @brief Method CreateMarker, addr 0x47e8418, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateMarker(::StringW name, uint16_t categoryId, ::Unity::Profiling::LowLevel::MarkerFlags flags, int32_t metadataCount);

  /// @brief Method CreateMarker__Unmanaged, addr 0x47e871c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateMarker__Unmanaged(::cordl_internals::Ptr<uint8_t> name, int32_t nameLen, uint16_t categoryId, ::Unity::Profiling::LowLevel::MarkerFlags flags,
                                                         int32_t metadataCount);

  /// @brief Method EndSample, addr 0x47e8628, size 0x3c, virtual false, abstract: false, final false
  static inline void EndSample(::System::IntPtr markerPtr);

  /// @brief Method GetCategoryDescription, addr 0x47e8238, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription GetCategoryDescription(uint16_t categoryId);

  /// @brief Method GetCategoryDescription_Injected, addr 0x47e86d8, size 0x44, virtual false, abstract: false, final false
  static inline void GetCategoryDescription_Injected(uint16_t categoryId, ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription> ret);

  /// @brief Method SetMarkerMetadata__Unmanaged, addr 0x47e8788, size 0x74, virtual false, abstract: false, final false
  static inline void SetMarkerMetadata__Unmanaged(::System::IntPtr markerPtr, int32_t index, ::cordl_internals::Ptr<uint8_t> name, int32_t nameLen, uint8_t type, uint8_t unit);

  /// @brief Method Utf8ToString, addr 0x47e82c8, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW Utf8ToString(::cordl_internals::Ptr<uint8_t> chars, int32_t charsLen);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerUnsafeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfilerUnsafeUtility(ProfilerUnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfilerUnsafeUtility(ProfilerUnsafeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10535 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Profiling::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*, "Unity.Profiling.LowLevel.Unsafe", "ProfilerUnsafeUtility");
