#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BRECORD)
// Forward declare root types
namespace System {
struct BRECORD;
}
// Write type traits
MARK_VAL_T(::System::BRECORD);
// Type: System::BRECORD
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2641))
// CS Name: ::System::BRECORD
struct CORDL_TYPE BRECORD {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "pvRecord", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "pRecInfo", ty: "void*", modifiers: "", def_value: None }]
  constexpr BRECORD(void* pvRecord, void* pRecInfo) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BRECORD();

  /// @brief Field pvRecord, offset: 0x0, size: 0x8, def value: None
  void* pvRecord;

  /// @brief Field pRecInfo, offset: 0x8, size: 0x8, def value: None
  void* pRecInfo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::BRECORD, 0x10>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::BRECORD, "System", "BRECORD");
