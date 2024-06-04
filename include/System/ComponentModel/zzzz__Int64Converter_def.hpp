#pragma once
// IWYU pragma private; include "System/ComponentModel/Int64Converter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Int64Converter)
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
class Int64Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Int64Converter);
// Type: System.ComponentModel::Int64Converter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::Int64Converter*
class CORDL_TYPE Int64Converter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method FromString, addr 0x2f60600, size 0x74, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method FromString, addr 0x2f6056c, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  static inline ::System::ComponentModel::Int64Converter* New_ctor();

  /// @brief Method ToString, addr 0x2f60674, size 0xb0, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method .ctor, addr 0x2f60724, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TargetType, addr 0x2f60500, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_TargetType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Int64Converter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Int64Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Int64Converter(Int64Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Int64Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Int64Converter(Int64Converter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Int64Converter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::Int64Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Int64Converter*, "System.ComponentModel", "Int64Converter");
