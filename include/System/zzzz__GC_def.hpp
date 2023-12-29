#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GC)
namespace System::Runtime::CompilerServices {
struct Ephemeron;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class GC;
}
// Write type traits
MARK_REF_PTR_T(::System::GC);
// Type: System::GC
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2560))
// CS Name: ::System::GC*
class CORDL_TYPE GC : public ::System::Object {
public:
  // Declarations
  /// @brief Field EPHEMERON_TOMBSTONE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EPHEMERON_TOMBSTONE, put = setStaticF_EPHEMERON_TOMBSTONE))::System::Object* EPHEMERON_TOMBSTONE;

  static inline void setStaticF_EPHEMERON_TOMBSTONE(::System::Object* value);

  static inline ::System::Object* getStaticF_EPHEMERON_TOMBSTONE();

  /// @brief Method GetCollectionCount addr 0x248bca0 size 0x4 virtual false final false
  static inline int32_t GetCollectionCount(int32_t generation);

  /// @brief Method GetMaxGeneration addr 0x248bca4 size 0x4 virtual false final false
  static inline int32_t GetMaxGeneration();

  /// @brief Method InternalCollect addr 0x248bca8 size 0x4 virtual false final false
  static inline void InternalCollect(int32_t generation);

  /// @brief Method register_ephemeron_array addr 0x248bcac size 0x4 virtual false final false
  static inline void register_ephemeron_array(::ArrayW<::System::Runtime::CompilerServices::Ephemeron, ::Array<::System::Runtime::CompilerServices::Ephemeron>*> array);

  /// @brief Method get_ephemeron_tombstone addr 0x248bcb0 size 0x4 virtual false final false
  static inline ::System::Object* get_ephemeron_tombstone();

  /// @brief Method GetMemoryInfo addr 0x248bcb4 size 0x98 virtual false final false
  static inline void GetMemoryInfo(ByRef<uint32_t> highMemLoadThreshold, ByRef<uint64_t> totalPhysicalMem, ByRef<uint32_t> lastRecordedMemLoad, ByRef<void*> lastRecordedHeapSize,
                                   ByRef<void*> lastRecordedFragmentation);

  /// @brief Method Collect addr 0x248bd4c size 0x50 virtual false final false
  static inline void Collect();

  /// @brief Method CollectionCount addr 0x248bde8 size 0xc0 virtual false final false
  static inline int32_t CollectionCount(int32_t generation);

  /// @brief Method KeepAlive addr 0x248bea8 size 0x4 virtual false final false
  static inline void KeepAlive(::System::Object* obj);

  /// @brief Method get_MaxGeneration addr 0x248bd9c size 0x4c virtual false final false
  static inline int32_t get_MaxGeneration();

  /// @brief Method _SuppressFinalize addr 0x248beac size 0x4 virtual false final false
  static inline void _SuppressFinalize(::System::Object* o);

  /// @brief Method SuppressFinalize addr 0x248beb0 size 0xa4 virtual false final false
  static inline void SuppressFinalize(::System::Object* obj);

  /// @brief Method _ReRegisterForFinalize addr 0x248bf54 size 0x4 virtual false final false
  static inline void _ReRegisterForFinalize(::System::Object* o);

  /// @brief Method ReRegisterForFinalize addr 0x248bf58 size 0xa4 virtual false final false
  static inline void ReRegisterForFinalize(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "GC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GC(GC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GC(GC const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GC();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::GC, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::GC);
DEFINE_IL2CPP_ARG_TYPE(::System::GC*, "System", "GC");
