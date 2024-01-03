#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MethodMultipleProviderUntyped)
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
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
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Zenject {
class MethodMultipleProviderUntyped;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MethodMultipleProviderUntyped);
// Type: Zenject::MethodMultipleProviderUntyped
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11206))
// CS Name: ::Zenject::MethodMultipleProviderUntyped*
class CORDL_TYPE MethodMultipleProviderUntyped : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _method, offset 0x18, size 0x8
  __declspec(property(get = __get__method, put = __set__method))::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* _method;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& __get__method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> const& __get__method() const;

  constexpr void __set__method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value);

  static inline ::Zenject::MethodMultipleProviderUntyped* New_ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* method,
                                                                   ::Zenject::DiContainer* container);

  /// @brief Method .ctor, addr 0x2f083dc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* method, ::Zenject::DiContainer* container);

  /// @brief Method get_IsCached, addr 0x2f08408, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x2f08410, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType, addr 0x2f08418, size 0x18, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x2f08430, size 0x580, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "MethodMultipleProviderUntyped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodMultipleProviderUntyped(MethodMultipleProviderUntyped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodMultipleProviderUntyped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodMultipleProviderUntyped(MethodMultipleProviderUntyped const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodMultipleProviderUntyped();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _method, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* ____method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MethodMultipleProviderUntyped, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::MethodMultipleProviderUntyped, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::MethodMultipleProviderUntyped, ____method) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::MethodMultipleProviderUntyped);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MethodMultipleProviderUntyped*, "Zenject", "MethodMultipleProviderUntyped");
