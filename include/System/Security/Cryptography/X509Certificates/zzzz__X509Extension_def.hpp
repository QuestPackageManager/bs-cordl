#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Extension)
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Extension);
// Type: System.Security.Cryptography.X509Certificates::X509Extension
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Extension*
class CORDL_TYPE X509Extension : public ::System::Security::Cryptography::AsnEncodedData {
public:
  // Declarations
  __declspec(property(get = get_Critical, put = set_Critical)) bool Critical;

  /// @brief Field _critical, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__critical, put = __cordl_internal_set__critical)) bool _critical;

  /// @brief Method CopyFrom, addr 0x43cc06c, size 0x124, virtual true, abstract: false, final false
  inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);

  /// @brief Method FormatUnkownData, addr 0x43cc190, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW FormatUnkownData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::System::Security::Cryptography::X509Certificates::X509Extension* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509Extension* New_ctor(::StringW oid, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, bool critical);

  constexpr bool const& __cordl_internal_get__critical() const;

  constexpr bool& __cordl_internal_get__critical();

  constexpr void __cordl_internal_set__critical(bool value);

  /// @brief Method .ctor, addr 0x43cc028, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x43cc030, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, bool critical);

  /// @brief Method get_Critical, addr 0x43cc058, size 0x8, virtual false, abstract: false, final false
  inline bool get_Critical();

  /// @brief Method set_Critical, addr 0x43cc060, size 0xc, virtual false, abstract: false, final false
  inline void set_Critical(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Extension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Extension(X509Extension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Extension(X509Extension const&) = delete;

  /// @brief Field _critical, offset: 0x20, size: 0x1, def value: None
  bool ____critical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9297 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Extension, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Extension, ____critical) == 0x20, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Extension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Extension*, "System.Security.Cryptography.X509Certificates", "X509Extension");
