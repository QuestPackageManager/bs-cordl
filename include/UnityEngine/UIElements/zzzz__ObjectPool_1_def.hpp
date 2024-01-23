#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ObjectPool_1);
// Type: UnityEngine.UIElements::ObjectPool`1
// SizeInfo { instance_size: 32, native_size: 28, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6745))
// CS Name: ::UnityEngine.UIElements::ObjectPool`1<T>*
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stack, put = __cordl_internal_set_m_Stack))::System::Collections::Generic::Stack_1<T>* m_Stack;

  /// @brief Field m_MaxSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxSize, put = __cordl_internal_set_m_MaxSize)) int32_t m_MaxSize;

  __declspec(property(get = get_maxSize, put = set_maxSize)) int32_t maxSize;

  constexpr ::System::Collections::Generic::Stack_1<T>*& __cordl_internal_get_m_Stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> const& __cordl_internal_get_m_Stack() const;

  constexpr void __cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<T>* value);

  constexpr int32_t& __cordl_internal_get_m_MaxSize();

  constexpr int32_t const& __cordl_internal_get_m_MaxSize() const;

  constexpr void __cordl_internal_set_m_MaxSize(int32_t value);

  /// @brief Method get_maxSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_maxSize();

  /// @brief Method set_maxSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maxSize(int32_t value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<T>* New_ctor(int32_t maxSize);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxSize);

  /// @brief Method Size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Size();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Get();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release(T element);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectPool_1(ObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectPool_1(ObjectPool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectPool_1();

public:
  /// @brief Field m_Stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<T>* ___m_Stack;

  /// @brief Field m_MaxSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_MaxSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ObjectPool_1, "UnityEngine.UIElements", "ObjectPool`1");
