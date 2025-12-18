#pragma once
// IWYU pragma private; include "Unity/Collections/NativeStreamDispose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeStreamDispose)
// Forward declare root types
namespace Unity::Collections {
struct NativeStreamDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeStreamDispose);
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeStreamDispose
struct CORDL_TYPE NativeStreamDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x630d608, size 0x10, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeStreamDispose();

  // Ctor Parameters [CppParam { name: "m_StreamData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: None }]
  constexpr NativeStreamDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeStream m_StreamData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15673 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_StreamData, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStream m_StreamData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeStreamDispose, m_StreamData) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeStreamDispose, 0x20>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeStreamDispose, "Unity.Collections", "NativeStreamDispose");
