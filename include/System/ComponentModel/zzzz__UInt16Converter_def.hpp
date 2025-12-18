#pragma once
// IWYU pragma private; include "System/ComponentModel/UInt16Converter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UInt16Converter)
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
class UInt16Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::UInt16Converter);
// Dependencies System.ComponentModel.BaseNumberConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.UInt16Converter
class CORDL_TYPE UInt16Converter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_TargetType)) ::System::Type* TargetType;

  /// @brief Method FromString, addr 0x6214274, size 0x34, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method FromString, addr 0x62141ec, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  static inline ::System::ComponentModel::UInt16Converter* New_ctor();

  /// @brief Method ToString, addr 0x62142a8, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method .ctor, addr 0x6214340, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TargetType, addr 0x62141bc, size 0x30, virtual true, abstract: false, final false
  inline ::System::Type* get_TargetType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt16Converter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UInt16Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UInt16Converter(UInt16Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UInt16Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UInt16Converter(UInt16Converter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11280 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::UInt16Converter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::UInt16Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::UInt16Converter*, "System.ComponentModel", "UInt16Converter");
