#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixCertPathValidatorException)
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathValidatorException);
// Type: Org.BouncyCastle.Pkix::PkixCertPathValidatorException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1717))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1723))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPathValidatorException*
class CORDL_TYPE PkixCertPathValidatorException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
  // Declarations
  /// @brief Field cause, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_cause, put = __cordl_internal_set_cause))::System::Exception* cause;

  /// @brief Field certPath, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_certPath, put = __cordl_internal_set_certPath))::Org::BouncyCastle::Pkix::PkixCertPath* certPath;

  /// @brief Field index, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  __declspec(property(get = get_Message))::StringW Message;

  __declspec(property(get = get_CertPath))::Org::BouncyCastle::Pkix::PkixCertPath* CertPath;

  __declspec(property(get = get_Index)) int32_t Index;

  constexpr ::System::Exception*& __cordl_internal_get_cause();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get_cause() const;

  constexpr void __cordl_internal_set_cause(::System::Exception* value);

  constexpr ::Org::BouncyCastle::Pkix::PkixCertPath*& __cordl_internal_get_certPath();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::PkixCertPath*> const& __cordl_internal_get_certPath() const;

  constexpr void __cordl_internal_set_certPath(::Org::BouncyCastle::Pkix::PkixCertPath* value);

  constexpr int32_t& __cordl_internal_get_index();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr void __cordl_internal_set_index(int32_t value);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorException* New_ctor();

  /// @brief Method .ctor, addr 0x11006c4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x11006d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorException* New_ctor(::StringW message, ::System::Exception* cause);

  /// @brief Method .ctor, addr 0x10ec444, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* cause);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorException* New_ctor(::StringW message, ::System::Exception* cause, ::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);

  /// @brief Method .ctor, addr 0x10f6308, size 0x198, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* cause, ::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);

  /// @brief Method get_Message, addr 0x11006dc, size 0x34, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_CertPath, addr 0x1100710, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixCertPath* get_CertPath();

  /// @brief Method get_Index, addr 0x1100718, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Index();

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathValidatorException(PkixCertPathValidatorException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathValidatorException(PkixCertPathValidatorException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathValidatorException();

public:
  /// @brief Field cause, offset: 0x90, size: 0x8, def value: None
  ::System::Exception* ___cause;

  /// @brief Field certPath, offset: 0x98, size: 0x8, def value: None
  ::Org::BouncyCastle::Pkix::PkixCertPath* ___certPath;

  /// @brief Field index, offset: 0xa0, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathValidatorException, 0xa8>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixCertPathValidatorException, ___cause) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixCertPathValidatorException, ___certPath) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixCertPathValidatorException, ___index) == 0xa0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathValidatorException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathValidatorException*, "Org.BouncyCastle.Pkix", "PkixCertPathValidatorException");
