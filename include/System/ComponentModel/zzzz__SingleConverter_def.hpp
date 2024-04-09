#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SingleConverter)
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
class SingleConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::SingleConverter);
// Type: System.ComponentModel::SingleConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::SingleConverter*
class CORDL_TYPE SingleConverter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_AllowHex)) bool AllowHex;

  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method FromString, addr 0x2e477c0, size 0x70, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method FromString, addr 0x2e47700, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  static inline ::System::ComponentModel::SingleConverter* New_ctor();

  /// @brief Method ToString, addr 0x2e47830, size 0xb0, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method .ctor, addr 0x2e478e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllowHex, addr 0x2e4768c, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowHex();

  /// @brief Method get_TargetType, addr 0x2e47694, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_TargetType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingleConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleConverter(SingleConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleConverter(SingleConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::SingleConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::SingleConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SingleConverter*, "System.ComponentModel", "SingleConverter");
