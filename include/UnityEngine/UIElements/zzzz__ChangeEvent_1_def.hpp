#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ChangeEvent_1)
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ChangeEvent_1);
// Type: UnityEngine.UIElements::ChangeEvent`1
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1720 }), TypeDefinitionIndex(TypeDefinitionIndex(7180)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(7181), inst: 1012 }), TypeDefinitionIndex(TypeDefinitionIndex(7181))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7181)) CS Name:
// ::UnityEngine.UIElements::ChangeEvent`1<T>*
class CORDL_TYPE ChangeEvent_1 : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<T>*> {
public:
  // Declarations
  /// @brief Field <previousValue>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__previousValue_k__BackingField, put = __set__previousValue_k__BackingField)) T _previousValue_k__BackingField;

  /// @brief Field <newValue>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__newValue_k__BackingField, put = __set__newValue_k__BackingField)) T _newValue_k__BackingField;

  __declspec(property(get = get_previousValue, put = set_previousValue)) T previousValue;

  __declspec(property(get = get_newValue, put = set_newValue)) T newValue;

  constexpr T& __get__previousValue_k__BackingField();

  constexpr T const& __get__previousValue_k__BackingField() const;

  constexpr void __set__previousValue_k__BackingField(T value);

  constexpr T& __get__newValue_k__BackingField();

  constexpr T const& __get__newValue_k__BackingField() const;

  constexpr void __set__newValue_k__BackingField(T value);

  /// @brief Method get_previousValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_previousValue();

  /// @brief Method set_previousValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_previousValue(T value);

  /// @brief Method get_newValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_newValue();

  /// @brief Method set_newValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_newValue(T value);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ChangeEvent_1<T>* GetPooled(T previousValue, T newValue);

  static inline ::UnityEngine::UIElements::ChangeEvent_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChangeEvent_1(ChangeEvent_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChangeEvent_1(ChangeEvent_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangeEvent_1();

public:
  /// @brief Field <previousValue>k__BackingField, offset: 0x80, size: 0x8, def value: None
  T ____previousValue_k__BackingField;

  /// @brief Field <newValue>k__BackingField, offset: 0x88, size: 0x8, def value: None
  T ____newValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ChangeEvent_1, "UnityEngine.UIElements", "ChangeEvent`1");
