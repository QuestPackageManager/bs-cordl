#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeTextExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeTextExtensions)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeText;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeTextExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeTextExtensions
class CORDL_TYPE UnsafeTextExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsUnsafeListOfBytes, addr 0x62b1258, size 0x44, virtual false, abstract: false, final false
  static inline ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>> AsUnsafeListOfBytes(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeText> text);

  /// @brief Method AsUnsafeListOfBytesRO, addr 0x62b129c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> AsUnsafeListOfBytesRO(::Unity::Collections::LowLevel::Unsafe::UnsafeText text);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeTextExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeTextExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeTextExtensions(UnsafeTextExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeTextExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeTextExtensions(UnsafeTextExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15782 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*, "Unity.Collections.LowLevel.Unsafe", "UnsafeTextExtensions");
