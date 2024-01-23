#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallback_1)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventCallback_1);
// Type: UnityEngine.UIElements::EventCallback`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TEventType>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7182))
// CS Name: ::UnityEngine.UIElements::EventCallback`1<TEventType>*
class CORDL_TYPE EventCallback_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::EventCallback_1<TEventType>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(TEventType evt);

  // Ctor Parameters [CppParam { name: "", ty: "EventCallback_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallback_1(EventCallback_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallback_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallback_1(EventCallback_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallback_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventCallback_1, "UnityEngine.UIElements", "EventCallback`1");
