#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CallContextSecurityData)
namespace System::Security::Principal {
class IPrincipal;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CallContextSecurityData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CallContextSecurityData);
// Type: System.Runtime.Remoting.Messaging::CallContextSecurityData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::CallContextSecurityData*
class CORDL_TYPE CallContextSecurityData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasInfo)) bool HasInfo;

  /// @brief Field _principal, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__principal, put = __cordl_internal_set__principal))::System::Security::Principal::IPrincipal* _principal;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x259a10c, size 0x68, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  static inline ::System::Runtime::Remoting::Messaging::CallContextSecurityData* New_ctor();

  constexpr ::System::Security::Principal::IPrincipal*& __cordl_internal_get__principal();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IPrincipal*> const& __cordl_internal_get__principal() const;

  constexpr void __cordl_internal_set__principal(::System::Security::Principal::IPrincipal* value);

  /// @brief Method .ctor, addr 0x259a2e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HasInfo, addr 0x259a184, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasInfo();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallContextSecurityData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallContextSecurityData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallContextSecurityData(CallContextSecurityData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallContextSecurityData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallContextSecurityData(CallContextSecurityData const&) = delete;

  /// @brief Field _principal, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Principal::IPrincipal* ____principal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CallContextSecurityData, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CallContextSecurityData, ____principal) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CallContextSecurityData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallContextSecurityData*, "System.Runtime.Remoting.Messaging", "CallContextSecurityData");
