#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LineInfo)
// Forward declare root types
namespace System::Xml {
struct LineInfo;
}
// Write type traits
MARK_VAL_T(::System::Xml::LineInfo);
// Type: System.Xml::LineInfo
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11532))
// CS Name: ::System.Xml::LineInfo
struct CORDL_TYPE LineInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x28923c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t lineNo, int32_t linePos);

  /// @brief Method Set, addr 0x28923cc, size 0x8, virtual false, abstract: false, final false
  inline void Set(int32_t lineNo, int32_t linePos);

  // Ctor Parameters [CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePos", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LineInfo(int32_t lineNo, int32_t linePos) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LineInfo();

  /// @brief Field lineNo, offset: 0x0, size: 0x4, def value: None
  int32_t lineNo;

  /// @brief Field linePos, offset: 0x4, size: 0x4, def value: None
  int32_t linePos;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::LineInfo, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::LineInfo, lineNo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::LineInfo, linePos) == 0x4, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::LineInfo, "System.Xml", "LineInfo");
