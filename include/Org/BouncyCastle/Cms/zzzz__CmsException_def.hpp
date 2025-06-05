#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsException);
// Dependencies System.Exception
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsException
class CORDL_TYPE CmsException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Cms::CmsException* New_ctor();

  static inline ::Org::BouncyCastle::Cms::CmsException* New_ctor(::StringW msg);

  static inline ::Org::BouncyCastle::Cms::CmsException* New_ctor(::StringW msg, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x264ee90, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x264eee8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg);

  /// @brief Method .ctor, addr 0x264ef50, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg, ::System::Exception* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsException(CmsException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsException(CmsException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsException*, "Org.BouncyCastle.Cms", "CmsException");
