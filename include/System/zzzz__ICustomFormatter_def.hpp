#pragma once
// IWYU pragma private; include "System\ICustomFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ICustomFormatter)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class ICustomFormatter;
}
// Write type traits
MARK_REF_T(::System::ICustomFormatter*);
DEFINE_IL2CPP_CLASS(::System::ICustomFormatter*, "System", "ICustomFormatter");
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.ICustomFormatter
class CORDL_TYPE ICustomFormatter {
public:
  // Declarations
  /// @brief Method Format, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW Format(::StringW format, ::System::Object* arg, ::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "", ty: "ICustomFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomFormatter(ICustomFormatter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
