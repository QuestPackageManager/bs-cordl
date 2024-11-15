#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixAttrCertPathBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixAttrCertPathBuilder)
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderResult;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
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
class PkixAttrCertPathBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder);
// Type: Org.BouncyCastle.Pkix::PkixAttrCertPathBuilder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkix::PkixAttrCertPathBuilder*
class CORDL_TYPE PkixAttrCertPathBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field certPathException, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certPathException, put = __cordl_internal_set_certPathException)) ::System::Exception* certPathException;

  /// @brief Method Build, addr 0x2533118, size 0xc00, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::X509::X509Certificate* tbvCert,
                                                                     ::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams, ::System::Collections::IList* tbvPath);

  /// @brief Method Build, addr 0x2531268, size 0xe70, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams);

  static inline ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder* New_ctor();

  constexpr ::System::Exception*& __cordl_internal_get_certPathException();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get_certPathException() const;

  constexpr void __cordl_internal_set_certPathException(::System::Exception* value);

  /// @brief Method .ctor, addr 0x2534668, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixAttrCertPathBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixAttrCertPathBuilder(PkixAttrCertPathBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixAttrCertPathBuilder(PkixAttrCertPathBuilder const&) = delete;

  /// @brief Field certPathException, offset: 0x10, size: 0x8, def value: None
  ::System::Exception* ___certPathException;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1711 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder, ___certPathException) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*, "Org.BouncyCastle.Pkix", "PkixAttrCertPathBuilder");
