#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPathChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixCertPathChecker)
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathChecker;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathChecker);
// Dependencies System.Object
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathChecker
class CORDL_TYPE PkixCertPathChecker : public ::System::Object {
public:
  // Declarations
  /// @brief Method Check, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Check(::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::Utilities::Collections::ISet* unresolvedCritExts);

  /// @brief Method Clone, addr 0x25729b0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method GetSupportedExtensions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetSupportedExtensions();

  /// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(bool forward);

  /// @brief Method IsForwardCheckingSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsForwardCheckingSupported();

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathChecker* New_ctor();

  /// @brief Method .ctor, addr 0x25729a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathChecker(PkixCertPathChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathChecker(PkixCertPathChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathChecker, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathChecker);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathChecker*, "Org.BouncyCastle.Pkix", "PkixCertPathChecker");
