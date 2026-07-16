#pragma once
// IWYU pragma private; include "Unity/MemoryProfiler/MetadataInjector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetadataInjector)
namespace Unity::MemoryProfiler {
class DefaultMetadataCollect;
}
// Forward declare root types
namespace Unity::MemoryProfiler {
class MetadataInjector;
}
// Write type traits
MARK_REF_T(::Unity::MemoryProfiler::MetadataInjector*);
DEFINE_IL2CPP_CLASS(::Unity::MemoryProfiler::MetadataInjector*, "Unity.MemoryProfiler", "MetadataInjector");
// Dependencies System.Object
namespace Unity::MemoryProfiler {
// Is value type: false
// CS Name: Unity.MemoryProfiler.MetadataInjector
class CORDL_TYPE MetadataInjector : public ::System::Object {
public:
  // Declarations
  /// @brief Field CollectorCount, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CollectorCount, put = setStaticF_CollectorCount)) int64_t CollectorCount;

  /// @brief Field DefaultCollector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultCollector, put = setStaticF_DefaultCollector)) ::Unity::MemoryProfiler::DefaultMetadataCollect* DefaultCollector;

  /// @brief Field DefaultCollectorInjected, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_DefaultCollectorInjected, put = setStaticF_DefaultCollectorInjected)) uint8_t DefaultCollectorInjected;

  /// @brief Method InitializeMetadataCollection, addr 0x668c45c, size 0x74, virtual false, abstract: false, final false
  static inline void InitializeMetadataCollection();

  /// @brief Method PlayerInitMetadata, addr 0x668c2b4, size 0x98, virtual false, abstract: false, final false
  static inline void PlayerInitMetadata();

  static inline int64_t getStaticF_CollectorCount();

  static inline ::Unity::MemoryProfiler::DefaultMetadataCollect* getStaticF_DefaultCollector();

  static inline uint8_t getStaticF_DefaultCollectorInjected();

  static inline void setStaticF_CollectorCount(int64_t value);

  static inline void setStaticF_DefaultCollector(::Unity::MemoryProfiler::DefaultMetadataCollect* value);

  static inline void setStaticF_DefaultCollectorInjected(uint8_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetadataInjector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetadataInjector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetadataInjector(MetadataInjector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetadataInjector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetadataInjector(MetadataInjector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23617 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::MemoryProfiler::MetadataInjector) == 0x10, "Size mismatch!");

} // namespace Unity::MemoryProfiler
