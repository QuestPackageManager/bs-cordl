#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MethodProviderWithContainer_5)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> class Func_6;
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
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> class MethodProviderWithContainer_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MethodProviderWithContainer_5);
// Type: Zenject::MethodProviderWithContainer`5
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
// Is value type: false
// CS Name: ::Zenject::MethodProviderWithContainer`5<TParam1,TParam2,TParam3,TParam4,TValue>*
class CORDL_TYPE MethodProviderWithContainer_5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__method, put = __cordl_internal_set__method))::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TValue>* _method;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::MethodProviderWithContainer_5<TParam1, TParam2, TParam3, TParam4, TValue>*
  New_ctor(::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TValue>* method);

  constexpr ::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TValue>*& __cordl_internal_get__method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TValue>*> const& __cordl_internal_get__method() const;

  constexpr void __cordl_internal_set__method(::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TValue>* method);

  /// @brief Method get_IsCached, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodProviderWithContainer_5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodProviderWithContainer_5(MethodProviderWithContainer_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodProviderWithContainer_5(MethodProviderWithContainer_5 const&) = delete;

  /// @brief Field _method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TValue>* ____method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderWithContainer_5, "Zenject", "MethodProviderWithContainer`5");
