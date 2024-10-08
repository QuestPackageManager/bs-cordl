#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ObjectPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
template <typename T> class __ObjectPool_1____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
template <typename T> class __ObjectPool_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ObjectPool_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__ObjectPool_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ObjectPool`1::<>c<T>*
class CORDL_TYPE __ObjectPool_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__ObjectPool_1____c<T>* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_1<T>* __9__6_0;

  static inline ::UnityEngine::UIElements::__ObjectPool_1____c<T>* New_ctor();

  /// @brief Method <.ctor>b__6_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T __ctor_b__6_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__ObjectPool_1____c<T>* getStaticF___9();

  static inline ::System::Func_1<T>* getStaticF___9__6_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__ObjectPool_1____c<T>* value);

  static inline void setStaticF___9__6_0(::System::Func_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectPool_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ObjectPool_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObjectPool_1____c(__ObjectPool_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectPool_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObjectPool_1____c(__ObjectPool_1____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5966 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ObjectPool`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ObjectPool`1<T>*
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__ObjectPool_1____c<T>;

  /// @brief Field CreateFunc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CreateFunc, put = __cordl_internal_set_CreateFunc)) ::System::Func_1<T>* CreateFunc;

  /// @brief Field m_MaxSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxSize, put = __cordl_internal_set_m_MaxSize)) int32_t m_MaxSize;

  /// @brief Field m_Stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stack, put = __cordl_internal_set_m_Stack)) ::System::Collections::Generic::Stack_1<T>* m_Stack;

  __declspec(property(get = get_maxSize, put = set_maxSize)) int32_t maxSize;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Get();

  static inline ::UnityEngine::UIElements::ObjectPool_1<T>* New_ctor(::System::Func_1<T>* CreateFunc, int32_t maxSize);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release(T element);

  /// @brief Method Size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Size();

  constexpr ::System::Func_1<T>*& __cordl_internal_get_CreateFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get_CreateFunc() const;

  constexpr int32_t const& __cordl_internal_get_m_MaxSize() const;

  constexpr int32_t& __cordl_internal_get_m_MaxSize();

  constexpr ::System::Collections::Generic::Stack_1<T>*& __cordl_internal_get_m_Stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> const& __cordl_internal_get_m_Stack() const;

  constexpr void __cordl_internal_set_CreateFunc(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_m_MaxSize(int32_t value);

  constexpr void __cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<T>* CreateFunc, int32_t maxSize);

  /// @brief Method get_maxSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_maxSize();

  /// @brief Method set_maxSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maxSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectPool_1(ObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectPool_1(ObjectPool_1 const&) = delete;

  /// @brief Field m_Stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<T>* ___m_Stack;

  /// @brief Field m_MaxSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_MaxSize;

  /// @brief Field CreateFunc, offset: 0x20, size: 0x8, def value: None
  ::System::Func_1<T>* ___CreateFunc;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5967 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ObjectPool_1, "UnityEngine.UIElements", "ObjectPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__ObjectPool_1____c, "UnityEngine.UIElements", "ObjectPool`1/<>c");
