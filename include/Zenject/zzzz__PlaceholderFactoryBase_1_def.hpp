#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PlaceholderFactoryBase_1)
namespace Zenject {
class IPlaceholderFactory;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IValidatable;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TValue> class PlaceholderFactoryBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PlaceholderFactoryBase_1);
// Type: Zenject::PlaceholderFactoryBase`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11026))
// CS Name: ::Zenject::PlaceholderFactoryBase`1<TValue>*
class CORDL_TYPE PlaceholderFactoryBase_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _provider, offset 0x10, size 0x8
  __declspec(property(get = __get__provider, put = __set__provider))::Zenject::IProvider* _provider;

  /// @brief Field _injectContext, offset 0x18, size 0x8
  __declspec(property(get = __get__injectContext, put = __set__injectContext))::Zenject::InjectContext* _injectContext;

  __declspec(property(get = get_ParamTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* ParamTypes;

  /// @brief Convert operator to "::Zenject::IPlaceholderFactory"
  constexpr operator ::Zenject::IPlaceholderFactory*() noexcept;

  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  constexpr ::Zenject::IProvider*& __get__provider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& __get__provider() const;

  constexpr void __set__provider(::Zenject::IProvider* value);

  constexpr ::Zenject::InjectContext*& __get__injectContext();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get__injectContext() const;

  constexpr void __set__injectContext(::Zenject::InjectContext* value);

  /// @brief Method Construct addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Construct(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext);

  /// @brief Method CreateInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue CreateInternal(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Validate();

  /// @brief Method get_ParamTypes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ParamTypes();

  static inline ::Zenject::PlaceholderFactoryBase_1<TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenInjectMethod0 addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaceholderFactoryBase_1(PlaceholderFactoryBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaceholderFactoryBase_1(PlaceholderFactoryBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaceholderFactoryBase_1();

public:
  /// @brief Field _provider, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IProvider* ____provider;

  /// @brief Field _injectContext, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectContext* ____injectContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactoryBase_1, "Zenject", "PlaceholderFactoryBase`1");
