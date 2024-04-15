#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CryptoConfigForwarder)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoConfigForwarder;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptoConfigForwarder);
// Type: System.Security.Cryptography::CryptoConfigForwarder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::CryptoConfigForwarder*
class CORDL_TYPE CryptoConfigForwarder : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateFromName, addr 0x26f83b4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* CreateFromName(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoConfigForwarder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoConfigForwarder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoConfigForwarder(CryptoConfigForwarder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoConfigForwarder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoConfigForwarder(CryptoConfigForwarder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptoConfigForwarder, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptoConfigForwarder);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoConfigForwarder*, "System.Security.Cryptography", "CryptoConfigForwarder");
