#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConstructionLevelActivator)
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class ConstructionLevelActivator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::ConstructionLevelActivator);
// Type: System.Runtime.Remoting.Activation::ConstructionLevelActivator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3130))
// CS Name: ::System.Runtime.Remoting.Activation::ConstructionLevelActivator*
class CORDL_TYPE ConstructionLevelActivator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NextActivator))::System::Runtime::Remoting::Activation::IActivator* NextActivator;

  /// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept;

  /// @brief Method get_NextActivator addr 0x234c490 size 0x8 virtual true final true
  inline ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();

  /// @brief Method Activate addr 0x234c498 size 0xf0 virtual true final true
  inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  static inline ::System::Runtime::Remoting::Activation::ConstructionLevelActivator* New_ctor();

  /// @brief Method .ctor addr 0x234b830 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConstructionLevelActivator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstructionLevelActivator(ConstructionLevelActivator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstructionLevelActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstructionLevelActivator(ConstructionLevelActivator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructionLevelActivator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::ConstructionLevelActivator, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::ConstructionLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::ConstructionLevelActivator*, "System.Runtime.Remoting.Activation", "ConstructionLevelActivator");
