#pragma once
// IWYU pragma private; include "System/ComponentModel/ByteConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteConverter)
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
class ByteConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ByteConverter);
// Dependencies System.ComponentModel.BaseNumberConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ByteConverter
class CORDL_TYPE ByteConverter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_TargetType)) ::System::Type* TargetType;

  /// @brief Method FromString, addr 0x444a1e8, size 0x74, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method FromString, addr 0x444a154, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  static inline ::System::ComponentModel::ByteConverter* New_ctor();

  /// @brief Method ToString, addr 0x444a25c, size 0xb0, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method .ctor, addr 0x444a30c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TargetType, addr 0x444a0e8, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_TargetType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByteConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteConverter(ByteConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteConverter(ByteConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9367 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ByteConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ByteConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ByteConverter*, "System.ComponentModel", "ByteConverter");
