#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SByteConverter)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class SByteConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::SByteConverter);
// Type: System.ComponentModel::SByteConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8244))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8290))
// CS Name: ::System.ComponentModel::SByteConverter*
class CORDL_TYPE SByteConverter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method get_TargetType addr 0x2799fb8 size 0x6c virtual true final false
  inline ::System::Type* get_TargetType();

  /// @brief Method FromString addr 0x279a024 size 0x94 virtual true final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  /// @brief Method FromString addr 0x279a0b8 size 0x74 virtual true final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method ToString addr 0x279a12c size 0xb0 virtual true final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  static inline ::System::ComponentModel::SByteConverter* New_ctor();

  /// @brief Method .ctor addr 0x279a1dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SByteConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SByteConverter(SByteConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SByteConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SByteConverter(SByteConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SByteConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::SByteConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::SByteConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SByteConverter*, "System.ComponentModel", "SByteConverter");
