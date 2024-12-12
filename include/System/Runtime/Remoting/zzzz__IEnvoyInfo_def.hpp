#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/IEnvoyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEnvoyInfo)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class IEnvoyInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::IEnvoyInfo);
// Dependencies
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.IEnvoyInfo
class CORDL_TYPE IEnvoyInfo {
public:
  // Declarations
  __declspec(property(get = get_EnvoySinks)) ::System::Runtime::Remoting::Messaging::IMessageSink* EnvoySinks;

  /// @brief Method get_EnvoySinks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks();

  // Ctor Parameters [CppParam { name: "", ty: "IEnvoyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnvoyInfo(IEnvoyInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3057 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::IEnvoyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::IEnvoyInfo*, "System.Runtime.Remoting", "IEnvoyInfo");
