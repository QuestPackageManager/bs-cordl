#pragma once
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
// Type: System.Linq::Error
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14267))
// CS Name: ::System.Linq::Error*
class CORDL_TYPE Error : public ::System::Object {
public:
  // Declarations
  /// @brief Method ArgumentNull, addr 0x28168bc, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentNull(::StringW s);

  /// @brief Method ArgumentOutOfRange, addr 0x2816920, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentOutOfRange(::StringW s);

  /// @brief Method MoreThanOneElement, addr 0x2816984, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* MoreThanOneElement();

  /// @brief Method MoreThanOneMatch, addr 0x28169f8, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* MoreThanOneMatch();

  /// @brief Method NoElements, addr 0x2816a6c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* NoElements();

  /// @brief Method NoMatch, addr 0x2816ae0, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* NoMatch();

  /// @brief Method NotSupported, addr 0x2816b54, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* NotSupported();

  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Error(Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Error(Error const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Error();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Error, 0x10>, "Size mismatch!");

} // namespace System::Linq
NEED_NO_BOX(::System::Linq::Error);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Error*, "System.Linq", "Error");
