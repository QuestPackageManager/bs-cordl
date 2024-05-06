#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationSchemeSelector)
namespace System::Net {
struct AuthenticationSchemes;
}
namespace System::Net {
class HttpListenerRequest;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class AuthenticationSchemeSelector;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::AuthenticationSchemeSelector);
// Type: System.Net::AuthenticationSchemeSelector
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::AuthenticationSchemeSelector*
class CORDL_TYPE AuthenticationSchemeSelector : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2fd15a0, size 0x14, virtual true, abstract: false, final false
  inline ::System::Net::AuthenticationSchemes Invoke(::System::Net::HttpListenerRequest* httpRequest);

  static inline ::System::Net::AuthenticationSchemeSelector* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2fd14cc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationSchemeSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationSchemeSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticationSchemeSelector(AuthenticationSchemeSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationSchemeSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticationSchemeSelector(AuthenticationSchemeSelector const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::AuthenticationSchemeSelector, 0x80>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::AuthenticationSchemeSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AuthenticationSchemeSelector*, "System.Net", "AuthenticationSchemeSelector");
