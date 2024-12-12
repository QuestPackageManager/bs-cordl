#pragma once
// IWYU pragma private; include "System/Buffers/MemoryManager_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Buffers.MemoryManager`1<T>
class CORDL_TYPE MemoryManager_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSpan, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Span_1<T> GetSpan();

  /// @brief Method Pin, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Buffers::MemoryHandle Pin(int32_t elementIndex);

  /// @brief Method TryGetArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetArray(::ByRef<::System::ArraySegment_1<T>> segment);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3900 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::MemoryManager_1, "System.Buffers", "MemoryManager`1");
