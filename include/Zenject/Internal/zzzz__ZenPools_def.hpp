#pragma once
// IWYU pragma private; include "Zenject/Internal/ZenPools.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenPools)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject::Internal {
class LookupId;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectableInfo;
}
namespace Zenject {
template <typename TValue> class StaticMemoryPool_1;
}
// Forward declare root types
namespace Zenject::Internal {
class ZenPools;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::ZenPools);
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ZenPools
class CORDL_TYPE ZenPools : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bindInfoPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__bindInfoPool, put = setStaticF__bindInfoPool)) ::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>* _bindInfoPool;

  /// @brief Field _bindStatementPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__bindStatementPool, put = setStaticF__bindStatementPool)) ::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>* _bindStatementPool;

  /// @brief Field _contextPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__contextPool, put = setStaticF__contextPool)) ::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>* _contextPool;

  /// @brief Field _lookupIdPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__lookupIdPool, put = setStaticF__lookupIdPool)) ::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>* _lookupIdPool;

  /// @brief Method DespawnArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DespawnArray(::ArrayW<T, ::Array<T>*> arr);

  /// @brief Method DespawnBindInfo, addr 0x4b56990, size 0x90, virtual false, abstract: false, final false
  static inline void DespawnBindInfo(::Zenject::BindInfo* bindInfo);

  /// @brief Method DespawnDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline void DespawnDictionary(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary);

  /// @brief Method DespawnHashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DespawnHashSet(::System::Collections::Generic::HashSet_1<T>* set);

  /// @brief Method DespawnInjectContext, addr 0x4b56be4, size 0x90, virtual false, abstract: false, final false
  static inline void DespawnInjectContext(::Zenject::InjectContext* context);

  /// @brief Method DespawnList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DespawnList(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method DespawnLookupId, addr 0x4b56abc, size 0x80, virtual false, abstract: false, final false
  static inline void DespawnLookupId(::Zenject::Internal::LookupId* lookupId);

  /// @brief Method DespawnStatement, addr 0x4b56888, size 0x90, virtual false, abstract: false, final false
  static inline void DespawnStatement(::Zenject::BindStatement* statement);

  /// @brief Method SpawnArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> SpawnArray(int32_t length);

  /// @brief Method SpawnBindInfo, addr 0x4b56918, size 0x78, virtual false, abstract: false, final false
  static inline ::Zenject::BindInfo* SpawnBindInfo();

  /// @brief Method SpawnDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* SpawnDictionary();

  /// @brief Method SpawnHashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::HashSet_1<T>* SpawnHashSet();

  /// @brief Method SpawnInjectContext, addr 0x4b56c74, size 0xcc, virtual false, abstract: false, final false
  static inline ::Zenject::InjectContext* SpawnInjectContext(::Zenject::DiContainer* container, ::Zenject::InjectableInfo* injectableInfo, ::Zenject::InjectContext* currentContext,
                                                             ::System::Object* targetInstance, ::System::Type* targetType, ::System::Object* concreteIdentifier);

  /// @brief Method SpawnInjectContext, addr 0x4b56b3c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectContext* SpawnInjectContext(::Zenject::DiContainer* container, ::System::Type* memberType);

  /// @brief Method SpawnList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* SpawnList();

  /// @brief Method SpawnLookupId, addr 0x4b56a20, size 0x9c, virtual false, abstract: false, final false
  static inline ::Zenject::Internal::LookupId* SpawnLookupId(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId);

  /// @brief Method SpawnStatement, addr 0x4b56810, size 0x78, virtual false, abstract: false, final false
  static inline ::Zenject::BindStatement* SpawnStatement();

  static inline ::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>* getStaticF__bindInfoPool();

  static inline ::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>* getStaticF__bindStatementPool();

  static inline ::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>* getStaticF__contextPool();

  static inline ::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>* getStaticF__lookupIdPool();

  static inline void setStaticF__bindInfoPool(::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>* value);

  static inline void setStaticF__bindStatementPool(::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>* value);

  static inline void setStaticF__contextPool(::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>* value);

  static inline void setStaticF__lookupIdPool(::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenPools();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenPools", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenPools(ZenPools&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenPools", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenPools(ZenPools const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ZenPools, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::ZenPools);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ZenPools*, "Zenject.Internal", "ZenPools");
