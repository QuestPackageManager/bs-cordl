#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryManager_1)
namespace System::Buffers {
struct MemoryHandle;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Buffers {
template <typename T> class MemoryManager_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::MemoryManager_1);
// Type: System.Buffers::MemoryManager`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Buffers::MemoryManager`1<T>*
class CORDL_TYPE MemoryManager_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSpan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Span_1<T> GetSpan();

  /// @brief Method Pin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Buffers::MemoryHandle Pin(int32_t elementIndex);

  /// @brief Method TryGetArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetArray(ByRef<::System::ArraySegment_1<T>> segment);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryManager_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryManager_1(MemoryManager_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryManager_1(MemoryManager_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::MemoryManager_1, "System.Buffers", "MemoryManager`1");
