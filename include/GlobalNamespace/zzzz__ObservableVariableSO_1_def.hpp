#pragma once
// IWYU pragma private; include "GlobalNamespace/ObservableVariableSO_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ObservableVariableSO_1)
namespace GlobalNamespace {
class IObservableChange;
}
namespace GlobalNamespace {
template <typename T> class IValue_1;
}
namespace System {
class Action;
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
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1 : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) T _value;

  /// @brief Field didChangeEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeEvent, put = __cordl_internal_set_didChangeEvent))::System::Action* didChangeEvent;

  __declspec(property(get = get_value, put = set_value)) T value;

  /// @brief Convert operator to "::GlobalNamespace::IObservableChange"
  constexpr operator ::GlobalNamespace::IObservableChange*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IValue_1<T>"
  constexpr operator ::GlobalNamespace::IValue_1<T>*() noexcept;

  static inline ::GlobalNamespace::ObservableVariableSO_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get__value() const;

  constexpr T& __cordl_internal_get__value();

  constexpr ::System::Action*& __cordl_internal_get_didChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didChangeEvent() const;

  constexpr void __cordl_internal_set__value(T value);

  constexpr void __cordl_internal_set_didChangeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_didChangeEvent(::System::Action* value);

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_value();

  /// @brief Convert to "::GlobalNamespace::IObservableChange"
  constexpr ::GlobalNamespace::IObservableChange* i___GlobalNamespace__IObservableChange() noexcept;

  /// @brief Convert to "::GlobalNamespace::IValue_1<T>"
  constexpr ::GlobalNamespace::IValue_1<T>* i___GlobalNamespace__IValue_1_T_() noexcept;

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T op_Implicit_T(::GlobalNamespace::ObservableVariableSO_1<T>* obj);

  /// @brief Method remove_didChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_didChangeEvent(::System::Action* value);

  /// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_value(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObservableVariableSO_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObservableVariableSO_1(ObservableVariableSO_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObservableVariableSO_1(ObservableVariableSO_1 const&) = delete;

  /// @brief Field didChangeEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___didChangeEvent;

  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  T ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ObservableVariableSO_1, "", "ObservableVariableSO`1");
