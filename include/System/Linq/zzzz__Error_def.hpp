#pragma once
// IWYU pragma private; include "System/Linq/Error.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Error)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Linq {
class Error;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Error);
// Dependencies System.Object
namespace System::Linq {
// Is value type: false
// CS Name: System.Linq.Error
class CORDL_TYPE Error : public ::System::Object {
public:
  // Declarations
  /// @brief Method ArgumentNull, addr 0x409e540, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentNull(::StringW s);

  /// @brief Method ArgumentOutOfRange, addr 0x409e59c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentOutOfRange(::StringW s);

  /// @brief Method MoreThanOneElement, addr 0x409e5f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* MoreThanOneElement();

  /// @brief Method MoreThanOneMatch, addr 0x409e664, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* MoreThanOneMatch();

  /// @brief Method NoElements, addr 0x409e6d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* NoElements();

  /// @brief Method NoMatch, addr 0x409e73c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* NoMatch();

  /// @brief Method NotSupported, addr 0x409e7a8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* NotSupported();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Error();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Error(Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Error(Error const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13567 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Error, 0x10>, "Size mismatch!");

} // namespace System::Linq
NEED_NO_BOX(::System::Linq::Error);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Error*, "System.Linq", "Error");
