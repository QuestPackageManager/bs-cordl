#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/BasicConstraintsExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicConstraintsExtension)
namespace Mono::Security::X509 {
class X509Extension;
}
// Forward declare root types
namespace Mono::Security::X509::Extensions {
class BasicConstraintsExtension;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::Extensions::BasicConstraintsExtension);
// Type: Mono.Security.X509.Extensions::BasicConstraintsExtension
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Security::X509::Extensions {
// Is value type: false
// CS Name: ::Mono.Security.X509.Extensions::BasicConstraintsExtension*
class CORDL_TYPE BasicConstraintsExtension : public ::Mono::Security::X509::X509Extension {
public:
  // Declarations
  __declspec(property(get = get_CertificateAuthority)) bool CertificateAuthority;

  /// @brief Field cA, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_cA, put = __cordl_internal_set_cA)) bool cA;

  /// @brief Field pathLenConstraint, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_pathLenConstraint, put = __cordl_internal_set_pathLenConstraint)) int32_t pathLenConstraint;

  /// @brief Method Decode, addr 0x2795fd0, size 0x138, virtual true, abstract: false, final false
  inline void Decode();

  /// @brief Method Encode, addr 0x2796108, size 0x134, virtual true, abstract: false, final false
  inline void Encode();

  static inline ::Mono::Security::X509::Extensions::BasicConstraintsExtension* New_ctor(::Mono::Security::X509::X509Extension* extension);

  /// @brief Method ToString, addr 0x2796244, size 0x1a8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_cA() const;

  constexpr bool& __cordl_internal_get_cA();

  constexpr int32_t const& __cordl_internal_get_pathLenConstraint() const;

  constexpr int32_t& __cordl_internal_get_pathLenConstraint();

  constexpr void __cordl_internal_set_cA(bool value);

  constexpr void __cordl_internal_set_pathLenConstraint(int32_t value);

  /// @brief Method .ctor, addr 0x27943e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::X509::X509Extension* extension);

  /// @brief Method get_CertificateAuthority, addr 0x279623c, size 0x8, virtual false, abstract: false, final false
  inline bool get_CertificateAuthority();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicConstraintsExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicConstraintsExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicConstraintsExtension(BasicConstraintsExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicConstraintsExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicConstraintsExtension(BasicConstraintsExtension const&) = delete;

  /// @brief Field cA, offset: 0x28, size: 0x1, def value: None
  bool ___cA;

  /// @brief Field pathLenConstraint, offset: 0x2c, size: 0x4, def value: None
  int32_t ___pathLenConstraint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::Extensions::BasicConstraintsExtension, 0x30>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::X509::Extensions::BasicConstraintsExtension, ___cA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::Extensions::BasicConstraintsExtension, ___pathLenConstraint) == 0x2c, "Offset mismatch!");

} // namespace Mono::Security::X509::Extensions
NEED_NO_BOX(::Mono::Security::X509::Extensions::BasicConstraintsExtension);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::Extensions::BasicConstraintsExtension*, "Mono.Security.X509.Extensions", "BasicConstraintsExtension");
