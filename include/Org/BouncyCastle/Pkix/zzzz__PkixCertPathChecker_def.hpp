#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixCertPathChecker)
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathChecker;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathChecker);
// Type: Org.BouncyCastle.Pkix::PkixCertPathChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1721))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPathChecker*
class CORDL_TYPE PkixCertPathChecker : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Pkix::PkixCertPathChecker* New_ctor();

  /// @brief Method .ctor addr 0x10f440c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init(bool forward);

  /// @brief Method IsForwardCheckingSupported addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsForwardCheckingSupported();

  /// @brief Method GetSupportedExtensions addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetSupportedExtensions();

  /// @brief Method Check addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Check(::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::Utilities::Collections::ISet* unresolvedCritExts);

  /// @brief Method Clone addr 0x10f4414 size 0x8 virtual true final false
  inline ::System::Object* Clone();

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathChecker(PkixCertPathChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathChecker(PkixCertPathChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathChecker();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathChecker, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathChecker);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathChecker*, "Org.BouncyCastle.Pkix", "PkixCertPathChecker");
