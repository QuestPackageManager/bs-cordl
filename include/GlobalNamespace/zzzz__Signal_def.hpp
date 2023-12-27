#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(Signal)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class Signal;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Signal);
// Type: ::Signal
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14395))
// CS Name: ::Signal*
class CORDL_TYPE Signal : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _event, offset 0x18, size 0x8
  __declspec(property(get = __get__event, put = __set__event))::System::Action* _event;

  constexpr ::System::Action*& __get__event();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__event() const;

  constexpr void __set__event(::System::Action* value);

  /// @brief Method add__event addr 0x20f5644 size 0x9c virtual false final false
  inline void add__event(::System::Action* value);

  /// @brief Method remove__event addr 0x20f56e0 size 0x9c virtual false final false
  inline void remove__event(::System::Action* value);

  /// @brief Method Raise addr 0x20f577c size 0x1c virtual true final false
  inline void Raise();

  /// @brief Method Subscribe addr 0x20f5798 size 0x28 virtual false final false
  inline void Subscribe(::System::Action* foo);

  /// @brief Method Unsubscribe addr 0x20f57c0 size 0x4 virtual false final false
  inline void Unsubscribe(::System::Action* foo);

  static inline ::GlobalNamespace::Signal* New_ctor();

  /// @brief Method .ctor addr 0x20f57c4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Signal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Signal(Signal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Signal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Signal(Signal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Signal();

public:
  /// @brief Field _event, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ____event;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Signal, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Signal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Signal*, "", "Signal");
