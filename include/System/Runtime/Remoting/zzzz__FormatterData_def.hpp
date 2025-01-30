#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/FormatterData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__ProviderData_def.hpp"
CORDL_MODULE_EXPORT(FormatterData)
// Forward declare root types
namespace System::Runtime::Remoting {
class FormatterData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::FormatterData);
// Dependencies System.Runtime.Remoting.ProviderData
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.FormatterData
class CORDL_TYPE FormatterData : public ::System::Runtime::Remoting::ProviderData {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::FormatterData* New_ctor();

  /// @brief Method .ctor, addr 0x3cd125c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatterData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormatterData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormatterData(FormatterData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormatterData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormatterData(FormatterData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3067 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::FormatterData, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::FormatterData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::FormatterData*, "System.Runtime.Remoting", "FormatterData");
