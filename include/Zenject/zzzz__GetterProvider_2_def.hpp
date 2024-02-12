#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GetterProvider_2)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
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
struct InjectSources;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TObj, typename TResult> class GetterProvider_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::GetterProvider_2);
// Type: Zenject::GetterProvider`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TObj, typename TResult>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15862))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10335))
// CS Name: ::Zenject::GetterProvider`2<TObj,TResult>*
class CORDL_TYPE GetterProvider_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _identifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__identifier, put = __cordl_internal_set__identifier))::System::Object* _identifier;

  /// @brief Field _method, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__method, put = __cordl_internal_set__method))::System::Func_2<TObj, TResult>* _method;

  /// @brief Field _matchAll, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__matchAll, put = __cordl_internal_set__matchAll)) bool _matchAll;

  /// @brief Field _sourceType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__sourceType, put = __cordl_internal_set__sourceType))::Zenject::InjectSources _sourceType;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr ::System::Object*& __cordl_internal_get__identifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__identifier() const;

  constexpr void __cordl_internal_set__identifier(::System::Object* value);

  constexpr ::System::Func_2<TObj, TResult>*& __cordl_internal_get__method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObj, TResult>*> const& __cordl_internal_get__method() const;

  constexpr void __cordl_internal_set__method(::System::Func_2<TObj, TResult>* value);

  constexpr bool& __cordl_internal_get__matchAll();

  constexpr bool const& __cordl_internal_get__matchAll() const;

  constexpr void __cordl_internal_set__matchAll(bool value);

  constexpr ::Zenject::InjectSources& __cordl_internal_get__sourceType();

  constexpr ::Zenject::InjectSources const& __cordl_internal_get__sourceType() const;

  constexpr void __cordl_internal_set__sourceType(::Zenject::InjectSources value);

  static inline ::Zenject::GetterProvider_2<TObj, TResult>* New_ctor(::System::Object* identifier, ::System::Func_2<TObj, TResult>* method, ::Zenject::DiContainer* container,
                                                                     ::Zenject::InjectSources sourceType, bool matchAll);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* identifier, ::System::Func_2<TObj, TResult>* method, ::Zenject::DiContainer* container, ::Zenject::InjectSources sourceType, bool matchAll);

  /// @brief Method get_IsCached, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetSubContext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::InjectContext* GetSubContext(::Zenject::InjectContext* parent);

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "GetterProvider_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetterProvider_2(GetterProvider_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetterProvider_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetterProvider_2(GetterProvider_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetterProvider_2();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _identifier, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____identifier;

  /// @brief Field _method, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<TObj, TResult>* ____method;

  /// @brief Field _matchAll, offset: 0x28, size: 0x1, def value: None
  bool ____matchAll;

  /// @brief Field _sourceType, offset: 0x2c, size: 0x4, def value: None
  ::Zenject::InjectSources ____sourceType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::GetterProvider_2, "Zenject", "GetterProvider`2");
