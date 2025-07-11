#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPathBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixCertPathBuilder)
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderResult;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathBuilder
class CORDL_TYPE PkixCertPathBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field certPathException, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certPathException, put = __cordl_internal_set_certPathException)) ::System::Exception* certPathException;

  /// @brief Method Build, addr 0x2570940, size 0x860, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams);

  /// @brief Method Build, addr 0x25711a0, size 0xc48, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::Org::BouncyCastle::X509::X509Certificate* tbvCert, ::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams,
                                                                     ::System::Collections::IList* tbvPath);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilder* New_ctor();

  constexpr ::System::Exception* const& __cordl_internal_get_certPathException() const;

  constexpr ::System::Exception*& __cordl_internal_get_certPathException();

  constexpr void __cordl_internal_set_certPathException(::System::Exception* value);

  /// @brief Method .ctor, addr 0x2571df0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathBuilder(PkixCertPathBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathBuilder(PkixCertPathBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1716 };

  /// @brief Field certPathException, offset: 0x10, size: 0x8, def value: None
  ::System::Exception* ___certPathException;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixCertPathBuilder, ___certPathException) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathBuilder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathBuilder*, "Org.BouncyCastle.Pkix", "PkixCertPathBuilder");
