#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/CrossContextDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(CrossContextDelegate)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class CrossContextDelegate;
}
// Write type traits
MARK_REF_T(::System::Runtime::Remoting::Contexts::CrossContextDelegate*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Remoting::Contexts::CrossContextDelegate*, "System.Runtime.Remoting.Contexts", "CrossContextDelegate");
// Dependencies System.MulticastDelegate
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.CrossContextDelegate
class CORDL_TYPE CrossContextDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x5b370ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::System::Runtime::Remoting::Contexts::CrossContextDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5b37044, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossContextDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrossContextDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossContextDelegate(CrossContextDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossContextDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossContextDelegate(CrossContextDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3120 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Remoting::Contexts::CrossContextDelegate) == 0x80, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
