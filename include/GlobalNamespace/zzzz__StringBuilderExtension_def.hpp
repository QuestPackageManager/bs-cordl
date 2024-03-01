#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringBuilderExtension)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class StringBuilderExtension;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StringBuilderExtension);
// Type: ::StringBuilderExtension
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StringBuilderExtension*
class CORDL_TYPE StringBuilderExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendNumber, addr 0xe8dde4, size 0x14, virtual false, abstract: false, final false
  static inline void AppendNumber(::System::Text::StringBuilder* sb, int32_t number);

  /// @brief Method AppendNumber, addr 0xe8de10, size 0xa4, virtual false, abstract: false, final false
  static inline void AppendNumber(::System::Text::StringBuilder* sb, uint32_t uNumber, bool isNegative);

  /// @brief Method Swap, addr 0xe8dbbc, size 0x228, virtual false, abstract: false, final false
  static inline void Swap(::System::Text::StringBuilder* sb, int32_t startIndex, int32_t endIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringBuilderExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringBuilderExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringBuilderExtension(StringBuilderExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringBuilderExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringBuilderExtension(StringBuilderExtension const&) = delete;

  /// @brief Field kCharZero offset 0xffffffff size 0x2
  static constexpr char16_t kCharZero{ u'0' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StringBuilderExtension, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StringBuilderExtension);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringBuilderExtension*, "", "StringBuilderExtension");
