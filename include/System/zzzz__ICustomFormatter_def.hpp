#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICustomFormatter)
namespace System {
class Object;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
class ICustomFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::ICustomFormatter);
// Type: System::ICustomFormatter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2414))
// CS Name: ::System::ICustomFormatter*
class CORDL_TYPE ICustomFormatter {
public:
  // Declarations
  /// @brief Method Format addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW Format(::StringW format, ::System::Object* arg, ::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "", ty: "ICustomFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICustomFormatter(ICustomFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICustomFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomFormatter(ICustomFormatter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::ICustomFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::ICustomFormatter*, "System", "ICustomFormatter");
