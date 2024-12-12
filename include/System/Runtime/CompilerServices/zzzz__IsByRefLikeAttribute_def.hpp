#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IsByRefLikeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IsByRefLikeAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IsByRefLikeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IsByRefLikeAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.IsByRefLikeAttribute
class CORDL_TYPE IsByRefLikeAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::IsByRefLikeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3d1750c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsByRefLikeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IsByRefLikeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsByRefLikeAttribute(IsByRefLikeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsByRefLikeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsByRefLikeAttribute(IsByRefLikeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3377 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::IsByRefLikeAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IsByRefLikeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IsByRefLikeAttribute*, "System.Runtime.CompilerServices", "IsByRefLikeAttribute");
