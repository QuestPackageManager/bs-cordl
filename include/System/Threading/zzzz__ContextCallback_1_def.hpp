#pragma once
// IWYU pragma private; include "System/Threading/ContextCallback_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ContextCallback_1)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
template <typename TState> class ContextCallback_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::ContextCallback_1);
// Dependencies System.MulticastDelegate
namespace System::Threading {
// cpp template
template <typename TState>
// Is value type: false
// CS Name: System.Threading.ContextCallback`1<TState>
class CORDL_TYPE ContextCallback_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<TState> state);

  static inline ::System::Threading::ContextCallback_1<TState>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextCallback_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextCallback_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextCallback_1(ContextCallback_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextCallback_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextCallback_1(ContextCallback_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2722 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ContextCallback_1, "System.Threading", "ContextCallback`1");
