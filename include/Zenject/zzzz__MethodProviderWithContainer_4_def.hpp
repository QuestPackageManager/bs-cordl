#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MethodProviderWithContainer_4)
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class IProvider;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename TResult> class Func_5;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> class MethodProviderWithContainer_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MethodProviderWithContainer_4);
// Type: Zenject::MethodProviderWithContainer`4
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11214))
// CS Name: ::Zenject::MethodProviderWithContainer`4<TParam1,TParam2,TParam3,TValue>*
class CORDL_TYPE MethodProviderWithContainer_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _method, offset 0x10, size 0x8
  __declspec(property(get = __get__method, put = __set__method))::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TValue>* _method;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  constexpr ::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TValue>*& __get__method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TValue>*> const& __get__method() const;

  constexpr void __set__method(::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TValue>* value);

  static inline ::Zenject::MethodProviderWithContainer_4<TParam1, TParam2, TParam3, TValue>* New_ctor(::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TValue>* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TValue>* method);

  /// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodProviderWithContainer_4(MethodProviderWithContainer_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodProviderWithContainer_4(MethodProviderWithContainer_4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodProviderWithContainer_4();

public:
  /// @brief Field _method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TValue>* ____method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderWithContainer_4, "Zenject", "MethodProviderWithContainer`4");
