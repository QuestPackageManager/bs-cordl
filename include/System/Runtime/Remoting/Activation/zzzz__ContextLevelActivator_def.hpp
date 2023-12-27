#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContextLevelActivator)
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class ContextLevelActivator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::ContextLevelActivator);
// Type: System.Runtime.Remoting.Activation::ContextLevelActivator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3132))
// CS Name: ::System.Runtime.Remoting.Activation::ContextLevelActivator*
class CORDL_TYPE ContextLevelActivator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_NextActivator, offset 0x10, size 0x8
  __declspec(property(get = __get_m_NextActivator, put = __set_m_NextActivator))::System::Runtime::Remoting::Activation::IActivator* m_NextActivator;

  __declspec(property(get = get_NextActivator))::System::Runtime::Remoting::Activation::IActivator* NextActivator;

  /// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept;

  constexpr ::System::Runtime::Remoting::Activation::IActivator*& __get_m_NextActivator();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Activation::IActivator*> const& __get_m_NextActivator() const;

  constexpr void __set_m_NextActivator(::System::Runtime::Remoting::Activation::IActivator* value);

  static inline ::System::Runtime::Remoting::Activation::ContextLevelActivator* New_ctor(::System::Runtime::Remoting::Activation::IActivator* next);

  /// @brief Method .ctor addr 0x24a4528 size 0x28 virtual false final false
  inline void _ctor(::System::Runtime::Remoting::Activation::IActivator* next);

  /// @brief Method get_NextActivator addr 0x24a507c size 0x8 virtual true final true
  inline ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();

  /// @brief Method Activate addr 0x24a5084 size 0x334 virtual true final true
  inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);

  // Ctor Parameters [CppParam { name: "", ty: "ContextLevelActivator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextLevelActivator(ContextLevelActivator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextLevelActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextLevelActivator(ContextLevelActivator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextLevelActivator();

public:
  /// @brief Field m_NextActivator, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Activation::IActivator* ___m_NextActivator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::ContextLevelActivator, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::ContextLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::ContextLevelActivator*, "System.Runtime.Remoting.Activation", "ContextLevelActivator");
