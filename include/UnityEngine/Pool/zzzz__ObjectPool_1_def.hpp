#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace UnityEngine::Pool {
template <typename T> class IObjectPool_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Pool {
template <typename T> struct PooledObject_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Pool::ObjectPool_1);
// Type: UnityEngine.Pool::ObjectPool`1
// SizeInfo { instance_size: 72, native_size: 68, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Pool {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10368))
// CS Name: ::UnityEngine.Pool::ObjectPool`1<T>*
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(get = __get_m_List, put = __set_m_List))::System::Collections::Generic::List_1<T>* m_List;

  /// @brief Field m_CreateFunc, offset 0x18, size 0x8
  __declspec(property(get = __get_m_CreateFunc, put = __set_m_CreateFunc))::System::Func_1<T>* m_CreateFunc;

  /// @brief Field m_ActionOnGet, offset 0x20, size 0x8
  __declspec(property(get = __get_m_ActionOnGet, put = __set_m_ActionOnGet))::System::Action_1<T>* m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ActionOnRelease, put = __set_m_ActionOnRelease))::System::Action_1<T>* m_ActionOnRelease;

  /// @brief Field m_ActionOnDestroy, offset 0x30, size 0x8
  __declspec(property(get = __get_m_ActionOnDestroy, put = __set_m_ActionOnDestroy))::System::Action_1<T>* m_ActionOnDestroy;

  /// @brief Field m_MaxSize, offset 0x38, size 0x4
  __declspec(property(get = __get_m_MaxSize, put = __set_m_MaxSize)) int32_t m_MaxSize;

  /// @brief Field m_CollectionCheck, offset 0x3c, size 0x1
  __declspec(property(get = __get_m_CollectionCheck, put = __set_m_CollectionCheck)) bool m_CollectionCheck;

  /// @brief Field <CountAll>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__CountAll_k__BackingField, put = __set__CountAll_k__BackingField)) int32_t _CountAll_k__BackingField;

  __declspec(property(get = get_CountAll, put = set_CountAll)) int32_t CountAll;

  __declspec(property(get = get_CountInactive)) int32_t CountInactive;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Pool::IObjectPool_1<T>"
  constexpr operator ::UnityEngine::Pool::IObjectPool_1<T>*() noexcept;

  constexpr ::System::Collections::Generic::List_1<T>*& __get_m_List();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __get_m_List() const;

  constexpr void __set_m_List(::System::Collections::Generic::List_1<T>* value);

  constexpr ::System::Func_1<T>*& __get_m_CreateFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __get_m_CreateFunc() const;

  constexpr void __set_m_CreateFunc(::System::Func_1<T>* value);

  constexpr ::System::Action_1<T>*& __get_m_ActionOnGet();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get_m_ActionOnGet() const;

  constexpr void __set_m_ActionOnGet(::System::Action_1<T>* value);

  constexpr ::System::Action_1<T>*& __get_m_ActionOnRelease();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get_m_ActionOnRelease() const;

  constexpr void __set_m_ActionOnRelease(::System::Action_1<T>* value);

  constexpr ::System::Action_1<T>*& __get_m_ActionOnDestroy();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get_m_ActionOnDestroy() const;

  constexpr void __set_m_ActionOnDestroy(::System::Action_1<T>* value);

  constexpr int32_t& __get_m_MaxSize();

  constexpr int32_t const& __get_m_MaxSize() const;

  constexpr void __set_m_MaxSize(int32_t value);

  constexpr bool& __get_m_CollectionCheck();

  constexpr bool const& __get_m_CollectionCheck() const;

  constexpr void __set_m_CollectionCheck(bool value);

  constexpr int32_t& __get__CountAll_k__BackingField();

  constexpr int32_t const& __get__CountAll_k__BackingField() const;

  constexpr void __set__CountAll_k__BackingField(int32_t value);

  /// @brief Method get_CountAll addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_CountAll();

  /// @brief Method set_CountAll addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_CountAll(int32_t value);

  /// @brief Method get_CountInactive addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_CountInactive();

  static inline ::UnityEngine::Pool::ObjectPool_1<T>* New_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease,
                                                               ::System::Action_1<T>* actionOnDestroy, bool collectionCheck, int32_t defaultCapacity, int32_t maxSize);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease, ::System::Action_1<T>* actionOnDestroy, bool collectionCheck,
                    int32_t defaultCapacity, int32_t maxSize);

  /// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T Get();

  /// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::UnityEngine::Pool::PooledObject_1<T> Get(ByRef<T> v);

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Release(T element);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Clear();

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

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
  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_List;

  /// @brief Field m_CreateFunc, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_CreateFunc;

  /// @brief Field m_ActionOnGet, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<T>* ___m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<T>* ___m_ActionOnRelease;

  /// @brief Field m_ActionOnDestroy, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<T>* ___m_ActionOnDestroy;

  /// @brief Field m_MaxSize, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_MaxSize;

  /// @brief Field m_CollectionCheck, offset: 0x3c, size: 0x1, def value: None
  bool ___m_CollectionCheck;

  /// @brief Field <CountAll>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____CountAll_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Pool
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Pool::ObjectPool_1, "UnityEngine.Pool", "ObjectPool`1");
