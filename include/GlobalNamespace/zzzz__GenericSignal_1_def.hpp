#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Signal_def.hpp"
CORDL_MODULE_EXPORT(GenericSignal_1)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class GenericSignal_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::GenericSignal_1);
// Type: ::GenericSignal`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14395))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14394))
// CS Name: ::GenericSignal`1<T>*
class CORDL_TYPE GenericSignal_1 : public ::GlobalNamespace::Signal {
public:
  // Declarations
  /// @brief Field _floatEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__floatEvent, put = __cordl_internal_set__floatEvent))::System::Action_1<T>* _floatEvent;

  constexpr ::System::Action_1<T>*& __cordl_internal_get__floatEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get__floatEvent() const;

  constexpr void __cordl_internal_set__floatEvent(::System::Action_1<T>* value);

  /// @brief Method Raise, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Raise();

  /// @brief Method Raise, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Raise(T f);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Subscribe(::System::Action_1<T>* foo);

  /// @brief Method Unsubscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Unsubscribe(::System::Action_1<T>* foo);

  static inline ::GlobalNamespace::GenericSignal_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericSignal_1(GenericSignal_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericSignal_1(GenericSignal_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericSignal_1();

public:
  /// @brief Field _floatEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<T>* ____floatEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::GenericSignal_1, "", "GenericSignal`1");
