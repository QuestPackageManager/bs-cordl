#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityAction_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(UnityAction_1)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityAction_1);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Events {
// cpp template
template <typename T0>
// Is value type: false
// CS Name: UnityEngine.Events.UnityAction`1<T0>
class CORDL_TYPE UnityAction_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T0 arg0);

  static inline ::UnityEngine::Events::UnityAction_1<T0>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAction_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityAction_1(UnityAction_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityAction_1(UnityAction_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10992 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityAction_1, "UnityEngine.Events", "UnityAction`1");
