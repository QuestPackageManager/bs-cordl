#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/RemoteActivator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
CORDL_MODULE_EXPORT(RemoteActivator)
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class RemoteActivator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::RemoteActivator);
// Dependencies System.MarshalByRefObject, System.Runtime.Remoting.Activation.IActivator
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: System.Runtime.Remoting.Activation.RemoteActivator
class CORDL_TYPE RemoteActivator : public ::System::MarshalByRefObject {
public:
  // Declarations
  __declspec(property(get = get_NextActivator)) ::System::Runtime::Remoting::Activation::IActivator* NextActivator;

  /// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept;

  /// @brief Method Activate, addr 0x3ce3fe4, size 0x360, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  /// @brief Method get_NextActivator, addr 0x3ce4344, size 0x38, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();

  /// @brief Convert to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr ::System::Runtime::Remoting::Activation::IActivator* i___System__Runtime__Remoting__Activation__IActivator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteActivator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoteActivator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteActivator(RemoteActivator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteActivator(RemoteActivator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3136 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::RemoteActivator, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::RemoteActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::RemoteActivator*, "System.Runtime.Remoting.Activation", "RemoteActivator");
