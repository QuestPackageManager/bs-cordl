#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityAction_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(UnityAction_4)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template <typename T0, typename T1, typename T2, typename T3> class UnityAction_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityAction_4);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Events {
// cpp template
template <typename T0, typename T1, typename T2, typename T3>
// Is value type: false
// CS Name: UnityEngine.Events.UnityAction`4<T0,T1,T2,T3>
class CORDL_TYPE UnityAction_4 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3);

  static inline ::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAction_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityAction_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityAction_4(UnityAction_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityAction_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityAction_4(UnityAction_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10440 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityAction_4, "UnityEngine.Events", "UnityAction`4");
