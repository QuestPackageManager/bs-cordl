#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RegexRunnerFactory)
namespace System::Text::RegularExpressions {
class RegexRunner;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexRunnerFactory;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexRunnerFactory);
// Type: System.Text.RegularExpressions::RegexRunnerFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: ::System.Text.RegularExpressions::RegexRunnerFactory*
class CORDL_TYPE RegexRunnerFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Text::RegularExpressions::RegexRunner* CreateInstance();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexRunnerFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexRunnerFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexRunnerFactory(RegexRunnerFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexRunnerFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexRunnerFactory(RegexRunnerFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexRunnerFactory, 0x10>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexRunnerFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexRunnerFactory*, "System.Text.RegularExpressions", "RegexRunnerFactory");
