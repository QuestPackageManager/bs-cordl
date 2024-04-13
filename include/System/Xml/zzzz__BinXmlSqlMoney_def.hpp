#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinXmlSqlMoney)
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml {
struct BinXmlSqlMoney;
}
// Write type traits
MARK_VAL_T(::System::Xml::BinXmlSqlMoney);
// Type: System.Xml::BinXmlSqlMoney
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::System.Xml::BinXmlSqlMoney
struct CORDL_TYPE BinXmlSqlMoney {
public:
  // Declarations
  /// @brief Method ToDecimal, addr 0x2c8a938, size 0x64, virtual false, abstract: false, final false
  inline ::System::Decimal ToDecimal();

  /// @brief Method ToString, addr 0x2c8a99c, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2c8a924, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x2c8a930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BinXmlSqlMoney();

  // Ctor Parameters [CppParam { name: "data", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr BinXmlSqlMoney(int64_t data) noexcept;

  /// @brief Field data, offset: 0x0, size: 0x8, def value: None
  int64_t data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::BinXmlSqlMoney, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::BinXmlSqlMoney, data) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinXmlSqlMoney, "System.Xml", "BinXmlSqlMoney");
