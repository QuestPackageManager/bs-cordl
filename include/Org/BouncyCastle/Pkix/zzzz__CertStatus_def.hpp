#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertStatus)
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class CertStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::CertStatus);
// Type: Org.BouncyCastle.Pkix::CertStatus
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1709))
// CS Name: ::Org.BouncyCastle.Pkix::CertStatus*
class CORDL_TYPE CertStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field status, offset 0x10, size 0x4
  __declspec(property(get = __get_status, put = __set_status)) int32_t status;

  /// @brief Field revocationDate, offset 0x18, size 0x8
  __declspec(property(get = __get_revocationDate, put = __set_revocationDate))::Org::BouncyCastle::Utilities::Date::DateTimeObject* revocationDate;

  __declspec(property(get = get_RevocationDate, put = set_RevocationDate))::Org::BouncyCastle::Utilities::Date::DateTimeObject* RevocationDate;

  __declspec(property(get = get_Status, put = set_Status)) int32_t Status;

  constexpr int32_t& __get_status();

  constexpr int32_t const& __get_status() const;

  constexpr void __set_status(int32_t value);

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __get_revocationDate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> const& __get_revocationDate() const;

  constexpr void __set_revocationDate(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method get_RevocationDate addr 0x10e8730 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_RevocationDate();

  /// @brief Method set_RevocationDate addr 0x10e8738 size 0x8 virtual false final false
  inline void set_RevocationDate(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method get_Status addr 0x10e8740 size 0x8 virtual false final false
  inline int32_t get_Status();

  /// @brief Method set_Status addr 0x10e8748 size 0x8 virtual false final false
  inline void set_Status(int32_t value);

  static inline ::Org::BouncyCastle::Pkix::CertStatus* New_ctor();

  /// @brief Method .ctor addr 0x10e8750 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertStatus(CertStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertStatus(CertStatus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertStatus();

public:
  /// @brief Field status, offset: 0x10, size: 0x4, def value: None
  int32_t ___status;

  /// @brief Field revocationDate, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Date::DateTimeObject* ___revocationDate;

  /// @brief Field Unrevoked offset 0xffffffff size 0x4
  static constexpr int32_t Unrevoked{ static_cast<int32_t>(0xb) };

  /// @brief Field Undetermined offset 0xffffffff size 0x4
  static constexpr int32_t Undetermined{ static_cast<int32_t>(0xc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::CertStatus, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::CertStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::CertStatus*, "Org.BouncyCastle.Pkix", "CertStatus");
