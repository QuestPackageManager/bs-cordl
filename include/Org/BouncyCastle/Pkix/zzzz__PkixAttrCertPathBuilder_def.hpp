#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixAttrCertPathBuilder)
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace System {
class Exception;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixAttrCertPathBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder);
// Type: Org.BouncyCastle.Pkix::PkixAttrCertPathBuilder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1711))
// CS Name: ::Org.BouncyCastle.Pkix::PkixAttrCertPathBuilder*
class CORDL_TYPE PkixAttrCertPathBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field certPathException, offset 0x10, size 0x8
  __declspec(property(get = __get_certPathException, put = __set_certPathException))::System::Exception* certPathException;

  constexpr ::System::Exception*& __get_certPathException();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get_certPathException() const;

  constexpr void __set_certPathException(::System::Exception* value);

  /// @brief Method Build, addr 0x10e876c, size 0xee0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams);

  /// @brief Method Build, addr 0x10ea664, size 0xc40, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::X509::X509Certificate* tbvCert,
                                                                     ::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams, ::System::Collections::IList* tbvPath);

  static inline ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder* New_ctor();

  /// @brief Method .ctor, addr 0x10ebbfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixAttrCertPathBuilder(PkixAttrCertPathBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixAttrCertPathBuilder(PkixAttrCertPathBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixAttrCertPathBuilder();

public:
  /// @brief Field certPathException, offset: 0x10, size: 0x8, def value: None
  ::System::Exception* ___certPathException;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder, ___certPathException) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*, "Org.BouncyCastle.Pkix", "PkixAttrCertPathBuilder");
