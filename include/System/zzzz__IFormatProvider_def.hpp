#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFormatProvider)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class IFormatProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::IFormatProvider);
// Type: System::IFormatProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::IFormatProvider*
class CORDL_TYPE IFormatProvider {
public:
  // Declarations
  /// @brief Method GetFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetFormat(::System::Type* formatType);

  // Ctor Parameters [CppParam { name: "", ty: "IFormatProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFormatProvider(IFormatProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFormatProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFormatProvider(IFormatProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IFormatProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::IFormatProvider*, "System", "IFormatProvider");
