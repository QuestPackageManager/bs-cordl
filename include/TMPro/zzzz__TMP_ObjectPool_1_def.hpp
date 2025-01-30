#pragma once
// IWYU pragma private; include "TMPro/TMP_ObjectPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_ObjectPool_1)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
// Forward declare root types
namespace TMPro {
template <typename T> class TMP_ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::TMPro::TMP_ObjectPool_1);
// Dependencies System.Object
namespace TMPro {
// cpp template
template <typename T>
// Is value type: false
// CS Name: TMPro.TMP_ObjectPool`1<T>
class CORDL_TYPE TMP_ObjectPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <countAll>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__countAll_k__BackingField, put = __cordl_internal_set__countAll_k__BackingField)) int32_t _countAll_k__BackingField;

  __declspec(property(get = get_countActive)) int32_t countActive;

  __declspec(property(get = get_countAll, put = set_countAll)) int32_t countAll;

  __declspec(property(get = get_countInactive)) int32_t countInactive;

  /// @brief Field m_ActionOnGet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionOnGet, put = __cordl_internal_set_m_ActionOnGet)) ::UnityEngine::Events::UnityAction_1<T>* m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionOnRelease, put = __cordl_internal_set_m_ActionOnRelease)) ::UnityEngine::Events::UnityAction_1<T>* m_ActionOnRelease;

  /// @brief Field m_Stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stack, put = __cordl_internal_set_m_Stack)) ::System::Collections::Generic::Stack_1<T>* m_Stack;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Get();

  static inline ::TMPro::TMP_ObjectPool_1<T>* New_ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release(T element);

  constexpr int32_t const& __cordl_internal_get__countAll_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__countAll_k__BackingField();

  constexpr ::UnityEngine::Events::UnityAction_1<T>* const& __cordl_internal_get_m_ActionOnGet() const;

  constexpr ::UnityEngine::Events::UnityAction_1<T>*& __cordl_internal_get_m_ActionOnGet();

  constexpr ::UnityEngine::Events::UnityAction_1<T>* const& __cordl_internal_get_m_ActionOnRelease() const;

  constexpr ::UnityEngine::Events::UnityAction_1<T>*& __cordl_internal_get_m_ActionOnRelease();

  constexpr ::System::Collections::Generic::Stack_1<T>* const& __cordl_internal_get_m_Stack() const;

  constexpr ::System::Collections::Generic::Stack_1<T>*& __cordl_internal_get_m_Stack();

  constexpr void __cordl_internal_set__countAll_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_ActionOnGet(::UnityEngine::Events::UnityAction_1<T>* value);

  constexpr void __cordl_internal_set_m_ActionOnRelease(::UnityEngine::Events::UnityAction_1<T>* value);

  constexpr void __cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease);

  /// @brief Method get_countActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_countActive();

  /// @brief Method get_countAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_countAll();

  /// @brief Method get_countInactive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_countInactive();

  /// @brief Method set_countAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_countAll(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ObjectPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_ObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ObjectPool_1(TMP_ObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ObjectPool_1(TMP_ObjectPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14526 };

  /// @brief Field m_Stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<T>* ___m_Stack;

  /// @brief Field m_ActionOnGet, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction_1<T>* ___m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction_1<T>* ___m_ActionOnRelease;

  /// @brief Field <countAll>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____countAll_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::TMP_ObjectPool_1, "TMPro", "TMP_ObjectPool`1");
