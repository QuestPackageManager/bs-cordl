#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/DataStreamExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataStreamExtensions)
namespace Unity::Collections {
struct DataStreamReader;
}
namespace Unity::Collections {
struct DataStreamWriter;
}
namespace Unity::Collections {
struct StreamCompressionModel;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class DataStreamExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.DataStreamExtensions
class CORDL_TYPE DataStreamExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x6316ce0, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Collections::DataStreamWriter Create(uint8_t* data, int32_t length);

  /// @brief Method GetUnsafeReadOnlyPtr, addr 0x6316f30, size 0x8, virtual false, abstract: false, final false
  static inline void* GetUnsafeReadOnlyPtr(::ByRef<::Unity::Collections::DataStreamReader> reader);

  /// @brief Method ReadBytesUnsafe, addr 0x6316dd8, size 0x64, virtual false, abstract: false, final false
  static inline void ReadBytesUnsafe(::ByRef<::Unity::Collections::DataStreamReader> reader, uint8_t* data, int32_t length);

  /// @brief Method ReadFixedStringUnsafe, addr 0x6316e3c, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ReadFixedStringUnsafe(::ByRef<::Unity::Collections::DataStreamReader> reader, uint8_t* data, int32_t maxLength);

  /// @brief Method ReadPackedFixedStringDeltaUnsafe, addr 0x6316ea0, size 0x90, virtual false, abstract: false, final false
  static inline uint16_t ReadPackedFixedStringDeltaUnsafe(::ByRef<::Unity::Collections::DataStreamReader> reader, uint8_t* data, int32_t maxLength, uint8_t* baseData, uint16_t baseLength,
                                                          ::Unity::Collections::StreamCompressionModel model);

  /// @brief Method WriteBytesUnsafe, addr 0x6316d74, size 0x64, virtual false, abstract: false, final false
  static inline bool WriteBytesUnsafe(::ByRef<::Unity::Collections::DataStreamWriter> writer, uint8_t* data, int32_t bytes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataStreamExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataStreamExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataStreamExtensions(DataStreamExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataStreamExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataStreamExtensions(DataStreamExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::DataStreamExtensions*, "Unity.Collections.LowLevel.Unsafe", "DataStreamExtensions");
