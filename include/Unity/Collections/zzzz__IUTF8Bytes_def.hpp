#pragma once
// IWYU pragma private; include "Unity/Collections/IUTF8Bytes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUTF8Bytes)
namespace Unity::Collections {
struct NativeArrayOptions;
}
// Forward declare root types
namespace Unity::Collections {
class IUTF8Bytes;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::IUTF8Bytes);
// Dependencies
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.IUTF8Bytes
class CORDL_TYPE IUTF8Bytes {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Method GetUnsafePtr, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint8_t* GetUnsafePtr();

  /// @brief Method TryResize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions);

  /// @brief Method get_IsEmpty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

  // Ctor Parameters [CppParam { name: "", ty: "IUTF8Bytes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUTF8Bytes(IUTF8Bytes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::IUTF8Bytes);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::IUTF8Bytes*, "Unity.Collections", "IUTF8Bytes");
