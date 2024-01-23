#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAction_2)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template <typename T0, typename T1> class UnityAction_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityAction_2);
// Type: UnityEngine.Events::UnityAction`2
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// cpp template
template <typename T0, typename T1>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10462))
// CS Name: ::UnityEngine.Events::UnityAction`2<T0,T1>*
class CORDL_TYPE UnityAction_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Events::UnityAction_2<T0, T1>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T0 arg0, T1 arg1);

  // Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityAction_2(UnityAction_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityAction_2(UnityAction_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAction_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityAction_2, "UnityEngine.Events", "UnityAction`2");
