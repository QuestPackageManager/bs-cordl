#pragma once
// IWYU pragma private; include "System/ComponentModel/UInt64Converter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UInt64Converter)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class UInt64Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::UInt64Converter);
// Dependencies System.ComponentModel.BaseNumberConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.UInt64Converter
class CORDL_TYPE UInt64Converter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_TargetType)) ::System::Type* TargetType;

  /// @brief Method FromString, addr 0x6214584, size 0x34, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method FromString, addr 0x62144fc, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  static inline ::System::ComponentModel::UInt64Converter* New_ctor();

  /// @brief Method ToString, addr 0x62145b8, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method .ctor, addr 0x6214650, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TargetType, addr 0x62144cc, size 0x30, virtual true, abstract: false, final false
  inline ::System::Type* get_TargetType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt64Converter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UInt64Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UInt64Converter(UInt64Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UInt64Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UInt64Converter(UInt64Converter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11282 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::UInt64Converter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::UInt64Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::UInt64Converter*, "System.ComponentModel", "UInt64Converter");
