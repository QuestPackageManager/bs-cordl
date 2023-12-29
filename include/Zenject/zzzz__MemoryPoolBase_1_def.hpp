#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryPoolBase_1)
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace Zenject {
template <typename TValue> class IFactory_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class MemoryPoolSettings;
}
namespace Zenject {
class IMemoryPool;
}
namespace System {
class Object;
}
namespace Zenject {
class IValidatable;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class MemoryPoolBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPoolBase_1);
// Type: Zenject::MemoryPoolBase`1
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10977))
// CS Name: ::Zenject::MemoryPoolBase`1<TContract>*
class CORDL_TYPE MemoryPoolBase_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inactiveItems, offset 0x10, size 0x8
  __declspec(property(get = __get__inactiveItems, put = __set__inactiveItems))::System::Collections::Generic::Stack_1<TContract>* _inactiveItems;

  /// @brief Field _factory, offset 0x18, size 0x8
  __declspec(property(get = __get__factory, put = __set__factory))::Zenject::IFactory_1<TContract>* _factory;

  /// @brief Field _settings, offset 0x20, size 0x8
  __declspec(property(get = __get__settings, put = __set__settings))::Zenject::MemoryPoolSettings* _settings;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _activeCount, offset 0x30, size 0x4
  __declspec(property(get = __get__activeCount, put = __set__activeCount)) int32_t _activeCount;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  __declspec(property(get = get_InactiveItems))::System::Collections::Generic::IEnumerable_1<TContract>* InactiveItems;

  __declspec(property(get = get_NumTotal)) int32_t NumTotal;

  __declspec(property(get = get_NumInactive)) int32_t NumInactive;

  __declspec(property(get = get_NumActive)) int32_t NumActive;

  __declspec(property(get = get_ItemType))::System::Type* ItemType;

  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  /// @brief Convert operator to "::Zenject::IMemoryPool"
  constexpr operator ::Zenject::IMemoryPool*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Collections::Generic::Stack_1<TContract>*& __get__inactiveItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<TContract>*> const& __get__inactiveItems() const;

  constexpr void __set__inactiveItems(::System::Collections::Generic::Stack_1<TContract>* value);

  constexpr ::Zenject::IFactory_1<TContract>*& __get__factory();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IFactory_1<TContract>*> const& __get__factory() const;

  constexpr void __set__factory(::Zenject::IFactory_1<TContract>* value);

  constexpr ::Zenject::MemoryPoolSettings*& __get__settings();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::MemoryPoolSettings*> const& __get__settings() const;

  constexpr void __set__settings(::Zenject::MemoryPoolSettings* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr int32_t& __get__activeCount();

  constexpr int32_t const& __get__activeCount() const;

  constexpr void __set__activeCount(int32_t value);

  /// @brief Method Construct addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Construct(::Zenject::IFactory_1<TContract>* factory, ::Zenject::DiContainer* container, ::Zenject::MemoryPoolSettings* settings);

  /// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_InactiveItems addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<TContract>* get_InactiveItems();

  /// @brief Method get_NumTotal addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_NumTotal();

  /// @brief Method get_NumInactive addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_NumInactive();

  /// @brief Method get_NumActive addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_NumActive();

  /// @brief Method get_ItemType addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Type* get_ItemType();

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method Zenject.IMemoryPool.Despawn addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Zenject_IMemoryPool_Despawn(::System::Object* item);

  /// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Despawn(TContract item);

  /// @brief Method AllocNew addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TContract AllocNew();

  /// @brief Method Zenject.IValidatable.Validate addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Zenject_IValidatable_Validate();

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Clear();

  /// @brief Method ShrinkBy addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void ShrinkBy(int32_t numToRemove);

  /// @brief Method ExpandBy addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void ExpandBy(int32_t numToAdd);

  /// @brief Method GetInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TContract GetInternal();

  /// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Resize(int32_t desiredPoolSize);

  /// @brief Method ExpandPool addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ExpandPool();

  /// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnDespawned(TContract item);

  /// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnSpawned(TContract item);

  /// @brief Method OnCreated addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnCreated(TContract item);

  /// @brief Method OnDestroyed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnDestroyed(TContract item);

  static inline ::Zenject::MemoryPoolBase_1<TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenInjectMethod0 addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolBase_1(MemoryPoolBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolBase_1(MemoryPoolBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolBase_1();

public:
  /// @brief Field _inactiveItems, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<TContract>* ____inactiveItems;

  /// @brief Field _factory, offset: 0x18, size: 0x8, def value: None
  ::Zenject::IFactory_1<TContract>* ____factory;

  /// @brief Field _settings, offset: 0x20, size: 0x8, def value: None
  ::Zenject::MemoryPoolSettings* ____settings;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _activeCount, offset: 0x30, size: 0x4, def value: None
  int32_t ____activeCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPoolBase_1, "Zenject", "MemoryPoolBase`1");
