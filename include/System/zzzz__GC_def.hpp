#pragma once
// IWYU pragma private; include "System/GC.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GC)
namespace System::Runtime::CompilerServices {
struct Ephemeron;
}
namespace System {
class Object;
}
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace System {
class GC;
}
// Write type traits
MARK_REF_PTR_T(::System::GC);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.GC
class CORDL_TYPE GC : public ::System::Object {
public:
  // Declarations
  /// @brief Field EPHEMERON_TOMBSTONE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EPHEMERON_TOMBSTONE, put = setStaticF_EPHEMERON_TOMBSTONE)) ::System::Object* EPHEMERON_TOMBSTONE;

  /// @brief Method Collect, addr 0x5acfecc, size 0x54, virtual false, abstract: false, final false
  static inline void Collect();

  /// @brief Method CollectionCount, addr 0x5acff74, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t CollectionCount(int32_t generation);

  /// @brief Method GetCollectionCount, addr 0x5acfe80, size 0xc, virtual false, abstract: false, final false
  static inline int32_t GetCollectionCount(int32_t generation);

  /// @brief Method GetMaxGeneration, addr 0x5acfe8c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetMaxGeneration();

  /// @brief Method GetMemoryInfo, addr 0x5acfeb0, size 0x1c, virtual false, abstract: false, final false
  static inline void GetMemoryInfo(::ByRef<uint32_t> highMemLoadThreshold, ::ByRef<uint64_t> totalPhysicalMem, ::ByRef<uint32_t> lastRecordedMemLoad, ::ByRef<::System::UIntPtr> lastRecordedHeapSize,
                                   ::ByRef<::System::UIntPtr> lastRecordedFragmentation);

  /// @brief Method InternalCollect, addr 0x5acfe94, size 0x4, virtual false, abstract: false, final false
  static inline void InternalCollect(int32_t generation);

  /// @brief Method KeepAlive, addr 0x5ad0030, size 0x4, virtual false, abstract: false, final false
  static inline void KeepAlive(::System::Object* obj);

  /// @brief Method ReRegisterForFinalize, addr 0x5ad00e0, size 0xa4, virtual false, abstract: false, final false
  static inline void ReRegisterForFinalize(::System::Object* obj);

  /// @brief Method SuppressFinalize, addr 0x5ad0038, size 0xa4, virtual false, abstract: false, final false
  static inline void SuppressFinalize(::System::Object* obj);

  /// @brief Method _ReRegisterForFinalize, addr 0x5ad00dc, size 0x4, virtual false, abstract: false, final false
  static inline void _ReRegisterForFinalize(::System::Object* o);

  /// @brief Method _SuppressFinalize, addr 0x5ad0034, size 0x4, virtual false, abstract: false, final false
  static inline void _SuppressFinalize(::System::Object* o);

  static inline ::System::Object* getStaticF_EPHEMERON_TOMBSTONE();

  /// @brief Method get_MaxGeneration, addr 0x5acff20, size 0x54, virtual false, abstract: false, final false
  static inline int32_t get_MaxGeneration();

  /// @brief Method get_ephemeron_tombstone, addr 0x5acfe9c, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Object* get_ephemeron_tombstone();

  /// @brief Method register_ephemeron_array, addr 0x5acfe98, size 0x4, virtual false, abstract: false, final false
  static inline void register_ephemeron_array(::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*> array);

  static inline void setStaticF_EPHEMERON_TOMBSTONE(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GC();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GC(GC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GC(GC const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2572 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::GC, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::GC);
DEFINE_IL2CPP_ARG_TYPE(::System::GC*, "System", "GC");
