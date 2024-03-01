#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509SubjectKeyIdentifierHashAlgorithm)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509SubjectKeyIdentifierHashAlgorithm;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm);
// Type: System.Security.Cryptography.X509Certificates::X509SubjectKeyIdentifierHashAlgorithm
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: ::System.Security.Cryptography.X509Certificates::X509SubjectKeyIdentifierHashAlgorithm
struct CORDL_TYPE X509SubjectKeyIdentifierHashAlgorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __X509SubjectKeyIdentifierHashAlgorithm_Unwrapped
  enum struct __X509SubjectKeyIdentifierHashAlgorithm_Unwrapped : int32_t {
    __E_Sha1 = static_cast<int32_t>(0x0),
    __E_ShortSha1 = static_cast<int32_t>(0x1),
    __E_CapiSha1 = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __X509SubjectKeyIdentifierHashAlgorithm_Unwrapped() const noexcept {
    return static_cast<__X509SubjectKeyIdentifierHashAlgorithm_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__X509SubjectKeyIdentifierHashAlgorithm_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509SubjectKeyIdentifierHashAlgorithm();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509SubjectKeyIdentifierHashAlgorithm(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CapiSha1 value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm const CapiSha1;

  /// @brief Field Sha1 value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm const Sha1;

  /// @brief Field ShortSha1 value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm const ShortSha1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm, "System.Security.Cryptography.X509Certificates",
                       "X509SubjectKeyIdentifierHashAlgorithm");
