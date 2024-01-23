#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryProviderWrapper_1)
namespace System {
class Object;
}
namespace Zenject {
template <typename TValue> class IFactory_1;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FactoryProviderWrapper_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryProviderWrapper_1);
// Type: Zenject::FactoryProviderWrapper`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10981))
// CS Name: ::Zenject::FactoryProviderWrapper`1<TContract>*
class CORDL_TYPE FactoryProviderWrapper_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _provider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__provider, put = __cordl_internal_set__provider))::Zenject::IProvider* _provider;

  /// @brief Field _injectContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__injectContext, put = __cordl_internal_set__injectContext))::Zenject::InjectContext* _injectContext;

  /// @brief Convert operator to "::Zenject::IFactory_1<TContract>"
  constexpr operator ::Zenject::IFactory_1<TContract>*() noexcept;

  /// @brief Convert to "::Zenject::IFactory_1<TContract>"
  constexpr ::Zenject::IFactory_1<TContract>* i___Zenject__IFactory_1_TContract_() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  constexpr ::Zenject::IProvider*& __cordl_internal_get__provider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& __cordl_internal_get__provider() const;

  constexpr void __cordl_internal_set__provider(::Zenject::IProvider* value);

  constexpr ::Zenject::InjectContext*& __cordl_internal_get__injectContext();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __cordl_internal_get__injectContext() const;

  constexpr void __cordl_internal_set__injectContext(::Zenject::InjectContext* value);

  static inline ::Zenject::FactoryProviderWrapper_1<TContract>* New_ctor(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TContract Create();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "FactoryProviderWrapper_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryProviderWrapper_1(FactoryProviderWrapper_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryProviderWrapper_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryProviderWrapper_1(FactoryProviderWrapper_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryProviderWrapper_1();

public:
  /// @brief Field _provider, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IProvider* ____provider;

  /// @brief Field _injectContext, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectContext* ____injectContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryProviderWrapper_1, "Zenject", "FactoryProviderWrapper`1");
