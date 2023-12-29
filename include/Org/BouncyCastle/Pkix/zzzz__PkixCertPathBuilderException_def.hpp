#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkixCertPathBuilderException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathBuilderException);
// Type: Org.BouncyCastle.Pkix::PkixCertPathBuilderException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1718))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPathBuilderException*
class CORDL_TYPE PkixCertPathBuilderException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* New_ctor();

  /// @brief Method .ctor addr 0x1082d50 size 0x4 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x10783f8 size 0x4 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor addr 0x1078c04 size 0x4 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathBuilderException(PkixCertPathBuilderException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathBuilderException(PkixCertPathBuilderException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathBuilderException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathBuilderException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*, "Org.BouncyCastle.Pkix", "PkixCertPathBuilderException");
