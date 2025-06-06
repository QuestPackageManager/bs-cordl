#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ChangeEvent_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ChangeEvent_1)
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ChangeEvent_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ChangeEvent_1___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.ChangeEvent`1/<>c<T>
class CORDL_TYPE ChangeEvent_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::ChangeEvent_1___c<T>* __9;

  static inline ::UnityEngine::UIElements::ChangeEvent_1___c<T>* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ChangeEvent_1<T>* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ChangeEvent_1___c<T>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::ChangeEvent_1___c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangeEvent_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChangeEvent_1___c(ChangeEvent_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChangeEvent_1___c(ChangeEvent_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5794 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.EventBase`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.ChangeEvent`1<T>
class CORDL_TYPE ChangeEvent_1 : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<T>*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::ChangeEvent_1___c<T>;

  /// @brief Field <newValue>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__newValue_k__BackingField, put = __cordl_internal_set__newValue_k__BackingField)) T _newValue_k__BackingField;

  /// @brief Field <previousValue>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__previousValue_k__BackingField, put = __cordl_internal_set__previousValue_k__BackingField)) T _previousValue_k__BackingField;

  __declspec(property(get = get_newValue, put = set_newValue)) T newValue;

  __declspec(property(get = get_previousValue, put = set_previousValue)) T previousValue;

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ChangeEvent_1<T>* GetPooled(T previousValue, T newValue);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::ChangeEvent_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get__newValue_k__BackingField() const;

  constexpr T& __cordl_internal_get__newValue_k__BackingField();

  constexpr T const& __cordl_internal_get__previousValue_k__BackingField() const;

  constexpr T& __cordl_internal_get__previousValue_k__BackingField();

  constexpr void __cordl_internal_set__newValue_k__BackingField(T value);

  constexpr void __cordl_internal_set__previousValue_k__BackingField(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_newValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_newValue();

  /// @brief Method get_previousValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_previousValue();

  /// @brief Method set_newValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_newValue(T value);

  /// @brief Method set_previousValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_previousValue(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangeEvent_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChangeEvent_1(ChangeEvent_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChangeEvent_1(ChangeEvent_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5795 };

  /// @brief Field <previousValue>k__BackingField, offset: 0x88, size: 0x8, def value: None
  T ____previousValue_k__BackingField;

  /// @brief Field <newValue>k__BackingField, offset: 0x90, size: 0x8, def value: None
  T ____newValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ChangeEvent_1, "UnityEngine.UIElements", "ChangeEvent`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ChangeEvent_1___c, "UnityEngine.UIElements", "ChangeEvent`1/<>c");
