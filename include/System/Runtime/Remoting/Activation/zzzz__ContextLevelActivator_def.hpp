#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/ContextLevelActivator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContextLevelActivator)
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
class ContextLevelActivator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::ContextLevelActivator);
// Dependencies System.Object, System.Runtime.Remoting.Activation.IActivator
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: System.Runtime.Remoting.Activation.ContextLevelActivator
class CORDL_TYPE ContextLevelActivator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NextActivator)) ::System::Runtime::Remoting::Activation::IActivator* NextActivator;

  /// @brief Field m_NextActivator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NextActivator, put = __cordl_internal_set_m_NextActivator)) ::System::Runtime::Remoting::Activation::IActivator* m_NextActivator;

  /// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept;

  /// @brief Method Activate, addr 0x3ce015c, size 0x32c, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);

  static inline ::System::Runtime::Remoting::Activation::ContextLevelActivator* New_ctor(::System::Runtime::Remoting::Activation::IActivator* next);

  constexpr ::System::Runtime::Remoting::Activation::IActivator* const& __cordl_internal_get_m_NextActivator() const;

  constexpr ::System::Runtime::Remoting::Activation::IActivator*& __cordl_internal_get_m_NextActivator();

  constexpr void __cordl_internal_set_m_NextActivator(::System::Runtime::Remoting::Activation::IActivator* value);

  /// @brief Method .ctor, addr 0x3cdf624, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Activation::IActivator* next);

  /// @brief Method get_NextActivator, addr 0x3ce0154, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();

  /// @brief Convert to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr ::System::Runtime::Remoting::Activation::IActivator* i___System__Runtime__Remoting__Activation__IActivator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextLevelActivator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextLevelActivator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextLevelActivator(ContextLevelActivator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextLevelActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextLevelActivator(ContextLevelActivator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3131 };

  /// @brief Field m_NextActivator, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Activation::IActivator* ___m_NextActivator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Activation::ContextLevelActivator, ___m_NextActivator) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::ContextLevelActivator, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::ContextLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::ContextLevelActivator*, "System.Runtime.Remoting.Activation", "ContextLevelActivator");
