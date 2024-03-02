#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MethodProviderUntyped)
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
class MethodProviderUntyped;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MethodProviderUntyped);
// Type: Zenject::MethodProviderUntyped
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::MethodProviderUntyped*
class CORDL_TYPE MethodProviderUntyped : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _method, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__method, put = __cordl_internal_set__method))::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* _method;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x3018274, size 0x2dc, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x301825c, size 0x18, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::MethodProviderUntyped* New_ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* method, ::Zenject::DiContainer* container);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>*& __cordl_internal_get__method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::System::Object*>*> const& __cordl_internal_get__method() const;

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__method(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x3018220, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* method, ::Zenject::DiContainer* container);

  /// @brief Method get_IsCached, addr 0x301824c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x3018254, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodProviderUntyped();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderUntyped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodProviderUntyped(MethodProviderUntyped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderUntyped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodProviderUntyped(MethodProviderUntyped const&) = delete;

  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _method, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* ____method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MethodProviderUntyped, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::MethodProviderUntyped, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::MethodProviderUntyped, ____method) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::MethodProviderUntyped);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MethodProviderUntyped*, "Zenject", "MethodProviderUntyped");
