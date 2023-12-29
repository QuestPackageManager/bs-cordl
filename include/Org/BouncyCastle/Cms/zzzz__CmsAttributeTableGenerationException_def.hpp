#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsAttributeTableGenerationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerationException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException);
// Type: Org.BouncyCastle.Cms::CmsAttributeTableGenerationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(612))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(613))
// CS Name: ::Org.BouncyCastle.Cms::CmsAttributeTableGenerationException*
class CORDL_TYPE CmsAttributeTableGenerationException : public ::Org::BouncyCastle::Cms::CmsException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException* New_ctor();

  /// @brief Method .ctor addr 0x1167110 size 0x4 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x1167114 size 0x4 virtual false final false
  inline void _ctor(::StringW name);

  static inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException* New_ctor(::StringW name, ::System::Exception* e);

  /// @brief Method .ctor addr 0x1167118 size 0x4 virtual false final false
  inline void _ctor(::StringW name, ::System::Exception* e);

  // Ctor Parameters [CppParam { name: "", ty: "CmsAttributeTableGenerationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAttributeTableGenerationException(CmsAttributeTableGenerationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAttributeTableGenerationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAttributeTableGenerationException(CmsAttributeTableGenerationException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAttributeTableGenerationException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*, "Org.BouncyCastle.Cms", "CmsAttributeTableGenerationException");
