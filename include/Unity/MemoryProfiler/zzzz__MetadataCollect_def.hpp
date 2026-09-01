#pragma once
// IWYU pragma private; include "Unity\MemoryProfiler\MetadataCollect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MetadataCollect)
namespace System {
class IDisposable;
}
namespace Unity::Profiling::Memory {
class MemorySnapshotMetadata;
}
// Forward declare root types
namespace Unity::MemoryProfiler {
class MetadataCollect;
}
// Write type traits
MARK_REF_T(::Unity::MemoryProfiler::MetadataCollect*);
DEFINE_IL2CPP_CLASS(::Unity::MemoryProfiler::MetadataCollect*, "Unity.MemoryProfiler", "MetadataCollect");
// Dependencies System.Object
namespace Unity::MemoryProfiler {
// Is value type: false
// CS Name: Unity.MemoryProfiler.MetadataCollect
class CORDL_TYPE MetadataCollect : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CollectMetadata, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CollectMetadata(::Unity::Profiling::Memory::MemorySnapshotMetadata* data);

  /// @brief Method Dispose, addr 0x6691b64, size 0x110, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::Unity::MemoryProfiler::MetadataCollect* New_ctor();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr void __cordl_internal_set_disposed(bool value);

  /// @brief Method .ctor, addr 0x6691d44, size 0x110, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetadataCollect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetadataCollect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetadataCollect(MetadataCollect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetadataCollect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetadataCollect(MetadataCollect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23671 };

  /// @brief Field disposed, offset: 0x10, size: 0x1, def value: None
  bool ___disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::MemoryProfiler::MetadataCollect, ___disposed) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::MemoryProfiler::MetadataCollect) == 0x18, "Size mismatch!");

} // namespace Unity::MemoryProfiler
