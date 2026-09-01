#pragma once
// IWYU pragma private; include "Unity\MemoryProfiler\DefaultMetadataCollect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/MemoryProfiler/zzzz__MetadataCollect_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DefaultMetadataCollect)
namespace Unity::Profiling::Memory {
class MemorySnapshotMetadata;
}
// Forward declare root types
namespace Unity::MemoryProfiler {
class DefaultMetadataCollect;
}
// Write type traits
MARK_REF_T(::Unity::MemoryProfiler::DefaultMetadataCollect*);
DEFINE_IL2CPP_CLASS(::Unity::MemoryProfiler::DefaultMetadataCollect*, "Unity.MemoryProfiler", "DefaultMetadataCollect");
// Dependencies Unity.MemoryProfiler.MetadataCollect
namespace Unity::MemoryProfiler {
// Is value type: false
// CS Name: Unity.MemoryProfiler.DefaultMetadataCollect
class CORDL_TYPE DefaultMetadataCollect : public ::Unity::MemoryProfiler::MetadataCollect {
public:
  // Declarations
  /// @brief Method CollectMetadata, addr 0x6691e54, size 0x2c4, virtual true, abstract: false, final false
  inline void CollectMetadata(::Unity::Profiling::Memory::MemorySnapshotMetadata* data);

  /// @brief Method FormatSecondsToTime, addr 0x6692118, size 0x230, virtual false, abstract: false, final false
  inline ::StringW FormatSecondsToTime(double_t timeInSeconds);

  static inline ::Unity::MemoryProfiler::DefaultMetadataCollect* New_ctor();

  /// @brief Method .ctor, addr 0x6691ce8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultMetadataCollect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultMetadataCollect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultMetadataCollect(DefaultMetadataCollect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultMetadataCollect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultMetadataCollect(DefaultMetadataCollect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23672 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::MemoryProfiler::DefaultMetadataCollect) == 0x18, "Size mismatch!");

} // namespace Unity::MemoryProfiler
