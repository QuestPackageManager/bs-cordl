#pragma once
// IWYU pragma private; include "Zenject/Internal/DecoratorProvider_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/Internal/zzzz__IDecoratorProvider_def.hpp"
CORDL_MODULE_EXPORT(DecoratorProvider_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template <typename TParam1, typename TValue> class IFactory_2;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject::Internal {
template <typename TContract> class DecoratorProvider_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Internal::DecoratorProvider_1);
// Dependencies System.Object, Zenject.Internal.IDecoratorProvider
namespace Zenject::Internal {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.Internal.DecoratorProvider`1<TContract>
class CORDL_TYPE DecoratorProvider_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cachedInstances, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__cachedInstances,
      put = __cordl_internal_set__cachedInstances)) ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>* _cachedInstances;

  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _decoratorFactories, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__decoratorFactories,
                      put = __cordl_internal_set__decoratorFactories)) ::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>* _decoratorFactories;

  /// @brief Field _factoryBindIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__factoryBindIds, put = __cordl_internal_set__factoryBindIds)) ::System::Collections::Generic::List_1<::System::Guid>* _factoryBindIds;

  /// @brief Convert operator to "::Zenject::Internal::IDecoratorProvider"
  constexpr operator ::Zenject::Internal::IDecoratorProvider*() noexcept;

  /// @brief Method AddFactoryId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddFactoryId(::System::Guid factoryBindId);

  /// @brief Method DecorateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* DecorateInstance(::System::Object* instance, ::Zenject::InjectContext* context);

  /// @brief Method GetAllInstances, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void GetAllInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method LazyInitializeDecoratorFactories, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LazyInitializeDecoratorFactories();

  static inline ::Zenject::Internal::DecoratorProvider_1<TContract>* New_ctor(::Zenject::DiContainer* container);

  /// @brief Method WrapProviderInstances, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void WrapProviderInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>* const& __cordl_internal_get__cachedInstances() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>*& __cordl_internal_get__cachedInstances();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>* const& __cordl_internal_get__decoratorFactories() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>*& __cordl_internal_get__decoratorFactories();

  constexpr ::System::Collections::Generic::List_1<::System::Guid>* const& __cordl_internal_get__factoryBindIds() const;

  constexpr ::System::Collections::Generic::List_1<::System::Guid>*& __cordl_internal_get__factoryBindIds();

  constexpr void __cordl_internal_set__cachedInstances(::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__decoratorFactories(::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>* value);

  constexpr void __cordl_internal_set__factoryBindIds(::System::Collections::Generic::List_1<::System::Guid>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container);

  /// @brief Convert to "::Zenject::Internal::IDecoratorProvider"
  constexpr ::Zenject::Internal::IDecoratorProvider* i___Zenject__Internal__IDecoratorProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoratorProvider_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecoratorProvider_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoratorProvider_1(DecoratorProvider_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoratorProvider_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoratorProvider_1(DecoratorProvider_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12712 };

  /// @brief Field _cachedInstances, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>* ____cachedInstances;

  /// @brief Field _container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _factoryBindIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Guid>* ____factoryBindIds;

  /// @brief Field _decoratorFactories, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>* ____decoratorFactories;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Internal::DecoratorProvider_1, "Zenject.Internal", "DecoratorProvider`1");
