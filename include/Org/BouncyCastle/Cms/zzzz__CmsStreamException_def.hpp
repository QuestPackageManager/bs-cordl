#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsStreamException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsStreamException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsStreamException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsStreamException);
// Dependencies System.IO.IOException
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsStreamException
class CORDL_TYPE CmsStreamException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Cms::CmsStreamException* New_ctor();

  static inline ::Org::BouncyCastle::Cms::CmsStreamException* New_ctor(::StringW name);

  static inline ::Org::BouncyCastle::Cms::CmsStreamException* New_ctor(::StringW name, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x2675688, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2675690, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x2668af4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Exception* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsStreamException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsStreamException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsStreamException(CmsStreamException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsStreamException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsStreamException(CmsStreamException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsStreamException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsStreamException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsStreamException*, "Org.BouncyCastle.Cms", "CmsStreamException");
