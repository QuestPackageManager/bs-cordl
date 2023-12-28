#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DecoratorProvider_1)
namespace Zenject::Internal {
class IDecoratorProvider;
}
namespace System {
struct Guid;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
template <typename TParam1, typename TValue> class IFactory_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject::Internal {
template <typename TContract> class DecoratorProvider_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Internal::DecoratorProvider_1);
// Type: Zenject.Internal::DecoratorProvider`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11370))
// CS Name: ::Zenject.Internal::DecoratorProvider`1<TContract>*
class CORDL_TYPE DecoratorProvider_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cachedInstances, offset 0x10, size 0x8
  __declspec(property(get = __get__cachedInstances,
                      put = __set__cachedInstances))::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>* _cachedInstances;

  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _factoryBindIds, offset 0x20, size 0x8
  __declspec(property(get = __get__factoryBindIds, put = __set__factoryBindIds))::System::Collections::Generic::List_1<::System::Guid>* _factoryBindIds;

  /// @brief Field _decoratorFactories, offset 0x28, size 0x8
  __declspec(property(get = __get__decoratorFactories, put = __set__decoratorFactories))::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>* _decoratorFactories;

  /// @brief Convert operator to "::Zenject::Internal::IDecoratorProvider"
  constexpr operator ::Zenject::Internal::IDecoratorProvider*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>*& __get__cachedInstances();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>*> const&
  __get__cachedInstances() const;

  constexpr void __set__cachedInstances(::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::System::Guid>*& __get__factoryBindIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Guid>*> const& __get__factoryBindIds() const;

  constexpr void __set__factoryBindIds(::System::Collections::Generic::List_1<::System::Guid>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>*& __get__decoratorFactories();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>*> const& __get__decoratorFactories() const;

  constexpr void __set__decoratorFactories(::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>* value);

  static inline ::Zenject::Internal::DecoratorProvider_1<TContract>* New_ctor(::Zenject::DiContainer* container);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container);

  /// @brief Method AddFactoryId addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AddFactoryId(::System::Guid factoryBindId);

  /// @brief Method LazyInitializeDecoratorFactories addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void LazyInitializeDecoratorFactories();

  /// @brief Method GetAllInstances addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void GetAllInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method WrapProviderInstances addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void WrapProviderInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method DecorateInstance addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Object* DecorateInstance(::System::Object* instance, ::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "DecoratorProvider_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoratorProvider_1(DecoratorProvider_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoratorProvider_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoratorProvider_1(DecoratorProvider_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoratorProvider_1();

public:
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
