#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedDataRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InspectedDataRegistry)
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace Meta::XR::ImmersiveDebugger {
class InspectedMember;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class InspectedDataRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::InspectedDataRegistry);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.InspectedDataRegistry
class CORDL_TYPE InspectedDataRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field InspectedMembersRegistry, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InspectedMembersRegistry, put = setStaticF_InspectedMembersRegistry)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>* InspectedMembersRegistry;

  /// @brief Method Add, addr 0x582b3fc, size 0x1c0, virtual false, abstract: false, final false
  static inline void Add(::System::Type* type, ::Meta::XR::ImmersiveDebugger::InspectedMember* inspectedMember);

  /// @brief Method GetMembersForType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<T, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*
  GetMembersForType(::System::Type* type, ::System::Func_3<T, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>* filterCallback);

  /// @brief Method Reset, addr 0x582b638, size 0x88, virtual false, abstract: false, final false
  static inline void Reset();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>*
  getStaticF_InspectedMembersRegistry();

  static inline void
  setStaticF_InspectedMembersRegistry(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectedDataRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectedDataRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectedDataRegistry(InspectedDataRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectedDataRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectedDataRegistry(InspectedDataRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18280 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::InspectedDataRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*, "Meta.XR.ImmersiveDebugger", "InspectedDataRegistry");
