#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NotBurstCompatible/Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer_Reader;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeParallelHashSet_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe::NotBurstCompatible {
class Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe::NotBurstCompatible {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.NotBurstCompatible.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddNBC, addr 0x62b1c50, size 0x90, virtual false, abstract: false, final false
  static inline void AddNBC(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer> buffer, ::StringW value);

  /// @brief Method ReadNextNBC, addr 0x62b1d94, size 0xe4, virtual false, abstract: false, final false
  static inline void ReadNextNBC(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader> reader, ::ByRef<::StringW> value);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ToArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> set);

  /// @brief Method ToBytesNBC, addr 0x62b1ce0, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytesNBC(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer> buffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15785 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe::NotBurstCompatible
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*, "Unity.Collections.LowLevel.Unsafe.NotBurstCompatible", "Extensions");
