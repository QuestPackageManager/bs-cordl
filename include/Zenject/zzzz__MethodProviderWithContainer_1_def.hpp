#pragma once
// IWYU pragma private; include "Zenject/MethodProviderWithContainer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MethodProviderWithContainer_1)
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
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TValue> class MethodProviderWithContainer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MethodProviderWithContainer_1);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: Zenject.MethodProviderWithContainer`1<TValue>
class CORDL_TYPE MethodProviderWithContainer_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__method, put = __cordl_internal_set__method)) ::System::Func_2<::Zenject::DiContainer*, TValue>* _method;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::MethodProviderWithContainer_1<TValue>* New_ctor(::System::Func_2<::Zenject::DiContainer*, TValue>* method);

  constexpr ::System::Func_2<::Zenject::DiContainer*, TValue>* const& __cordl_internal_get__method() const;

  constexpr ::System::Func_2<::Zenject::DiContainer*, TValue>*& __cordl_internal_get__method();

  constexpr void __cordl_internal_set__method(::System::Func_2<::Zenject::DiContainer*, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<::Zenject::DiContainer*, TValue>* method);

  /// @brief Method get_IsCached, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodProviderWithContainer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodProviderWithContainer_1(MethodProviderWithContainer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodProviderWithContainer_1(MethodProviderWithContainer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14534 };

  /// @brief Field _method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::DiContainer*, TValue>* ____method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderWithContainer_1, "Zenject", "MethodProviderWithContainer`1");
