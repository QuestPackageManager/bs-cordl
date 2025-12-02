#pragma once
// IWYU pragma private; include "Zenject/PlaceholderFactoryBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlaceholderFactoryBase_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
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
namespace Zenject {
class IPlaceholderFactory;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class IValidatable;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TValue> class PlaceholderFactoryBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PlaceholderFactoryBase_1);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: Zenject.PlaceholderFactoryBase`1<TValue>
class CORDL_TYPE PlaceholderFactoryBase_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ParamTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ParamTypes;

  /// @brief Field _injectContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__injectContext, put = __cordl_internal_set__injectContext)) ::Zenject::InjectContext* _injectContext;

  /// @brief Field _provider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__provider, put = __cordl_internal_set__provider)) ::Zenject::IProvider* _provider;

  /// @brief Convert operator to "::Zenject::IPlaceholderFactory"
  constexpr operator ::Zenject::IPlaceholderFactory*() noexcept;

  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  /// @brief Method Construct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Construct(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext);

  /// @brief Method CreateInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue CreateInternal(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  static inline ::Zenject::PlaceholderFactoryBase_1<TValue>* New_ctor();

  /// @brief Method Validate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Validate();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get__injectContext() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get__injectContext();

  constexpr ::Zenject::IProvider* const& __cordl_internal_get__provider() const;

  constexpr ::Zenject::IProvider*& __cordl_internal_get__provider();

  constexpr void __cordl_internal_set__injectContext(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set__provider(::Zenject::IProvider* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenInjectMethod0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ParamTypes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ParamTypes();

  /// @brief Convert to "::Zenject::IPlaceholderFactory"
  constexpr ::Zenject::IPlaceholderFactory* i___Zenject__IPlaceholderFactory() noexcept;

  /// @brief Convert to "::Zenject::IValidatable"
  constexpr ::Zenject::IValidatable* i___Zenject__IValidatable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaceholderFactoryBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaceholderFactoryBase_1(PlaceholderFactoryBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaceholderFactoryBase_1(PlaceholderFactoryBase_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14349 };

  /// @brief Field _provider, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IProvider* ____provider;

  /// @brief Field _injectContext, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectContext* ____injectContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactoryBase_1, "Zenject", "PlaceholderFactoryBase`1");
