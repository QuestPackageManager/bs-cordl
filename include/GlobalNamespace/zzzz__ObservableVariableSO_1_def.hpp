#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ObservableVariableSO_1)
namespace GlobalNamespace {
template <typename T> class IValue_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IObservableChange;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ObservableVariableSO_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ObservableVariableSO_1);
// Type: ::ObservableVariableSO`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15869))
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1 : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field didChangeEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_didChangeEvent, put = __set_didChangeEvent))::System::Action* didChangeEvent;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __get__value, put = __set__value)) T _value;

  __declspec(property(get = get_value, put = set_value)) T value;

  /// @brief Convert operator to "::GlobalNamespace::IValue_1<T>"
  constexpr operator ::GlobalNamespace::IValue_1<T>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IObservableChange"
  constexpr operator ::GlobalNamespace::IObservableChange*() noexcept;

  constexpr ::System::Action*& __get_didChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didChangeEvent() const;

  constexpr void __set_didChangeEvent(::System::Action* value);

  constexpr T& __get__value();

  constexpr T const& __get__value() const;

  constexpr void __set__value(T value);

  /// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void add_didChangeEvent(::System::Action* value);

  /// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void remove_didChangeEvent(::System::Action* value);

  /// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void set_value(T value);

  /// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T get_value();

  /// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T op_Implicit_T(::GlobalNamespace::ObservableVariableSO_1<T>* obj);

  static inline ::GlobalNamespace::ObservableVariableSO_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObservableVariableSO_1(ObservableVariableSO_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObservableVariableSO_1(ObservableVariableSO_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObservableVariableSO_1();

public:
  /// @brief Field didChangeEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___didChangeEvent;

  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  T ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ObservableVariableSO_1, "", "ObservableVariableSO`1");
