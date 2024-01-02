#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StaticMemoryPoolBaseBase_1)
namespace Zenject {
template <typename TValue> class IDespawnableMemoryPool_1;
}
namespace System {
class Type;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class IMemoryPool;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template <typename TValue> class StaticMemoryPoolBaseBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPoolBaseBase_1);
// Type: Zenject::StaticMemoryPoolBaseBase`1
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11084))
// CS Name: ::Zenject::StaticMemoryPoolBaseBase`1<TValue>*
class CORDL_TYPE StaticMemoryPoolBaseBase_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _stack, offset 0x10, size 0x8
  __declspec(property(get = __get__stack, put = __set__stack))::System::Collections::Generic::Stack_1<TValue>* _stack;

  /// @brief Field _onDespawnedMethod, offset 0x18, size 0x8
  __declspec(property(get = __get__onDespawnedMethod, put = __set__onDespawnedMethod))::System::Action_1<TValue>* _onDespawnedMethod;

  /// @brief Field _activeCount, offset 0x20, size 0x4
  __declspec(property(get = __get__activeCount, put = __set__activeCount)) int32_t _activeCount;

  __declspec(property(put = set_OnDespawnedMethod))::System::Action_1<TValue>* OnDespawnedMethod;

  __declspec(property(get = get_NumTotal)) int32_t NumTotal;

  __declspec(property(get = get_NumActive)) int32_t NumActive;

  __declspec(property(get = get_NumInactive)) int32_t NumInactive;

  __declspec(property(get = get_ItemType))::System::Type* ItemType;

  /// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
  constexpr operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IMemoryPool"
  constexpr operator ::Zenject::IMemoryPool*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Collections::Generic::Stack_1<TValue>*& __get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<TValue>*> const& __get__stack() const;

  constexpr void __set__stack(::System::Collections::Generic::Stack_1<TValue>* value);

  constexpr ::System::Action_1<TValue>*& __get__onDespawnedMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TValue>*> const& __get__onDespawnedMethod() const;

  constexpr void __set__onDespawnedMethod(::System::Action_1<TValue>* value);

  constexpr int32_t& __get__activeCount();

  constexpr int32_t const& __get__activeCount() const;

  constexpr void __set__activeCount(int32_t value);

  static inline ::Zenject::StaticMemoryPoolBaseBase_1<TValue>* New_ctor(::System::Action_1<TValue>* onDespawnedMethod);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<TValue>* onDespawnedMethod);

  /// @brief Method set_OnDespawnedMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_OnDespawnedMethod(::System::Action_1<TValue>* value);

  /// @brief Method get_NumTotal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_NumTotal();

  /// @brief Method get_NumActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_NumActive();

  /// @brief Method get_NumInactive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_NumInactive();

  /// @brief Method get_ItemType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* get_ItemType();

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Resize(int32_t desiredPoolSize);

  /// @brief Method ResizeInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResizeInternal(int32_t desiredPoolSize);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ClearActiveCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearActiveCount();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ShrinkBy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ShrinkBy(int32_t numToRemove);

  /// @brief Method ExpandBy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ExpandBy(int32_t numToAdd);

  /// @brief Method SpawnInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue SpawnInternal();

  /// @brief Method Zenject.IMemoryPool.Despawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Zenject_IMemoryPool_Despawn(::System::Object* item);

  /// @brief Method Despawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Despawn(TValue element);

  /// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TValue Alloc();

  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBaseBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticMemoryPoolBaseBase_1(StaticMemoryPoolBaseBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBaseBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticMemoryPoolBaseBase_1(StaticMemoryPoolBaseBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticMemoryPoolBaseBase_1();

public:
  /// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<TValue>* ____stack;

  /// @brief Field _onDespawnedMethod, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<TValue>* ____onDespawnedMethod;

  /// @brief Field _activeCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____activeCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPoolBaseBase_1, "Zenject", "StaticMemoryPoolBaseBase`1");
