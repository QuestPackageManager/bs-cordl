#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod_2)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2> class SubContainerCreatorByMethod_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByMethod_2);
// Type: Zenject::SubContainerCreatorByMethod`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2>
// Is value type: false
// CS Name: ::Zenject::SubContainerCreatorByMethod`2<TParam1,TParam2>*
class CORDL_TYPE SubContainerCreatorByMethod_2 : public ::Zenject::SubContainerCreatorByMethodBase {
public:
  // Declarations
  /// @brief Field _installMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__installMethod, put = __cordl_internal_set__installMethod))::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* _installMethod;

  /// @brief Method CreateSubContainer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  static inline ::Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>* New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                                     ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installMethod);

  constexpr ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& __cordl_internal_get__installMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*> const& __cordl_internal_get__installMethod() const;

  constexpr void __cordl_internal_set__installMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo, ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installMethod);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByMethod_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2 const&) = delete;

  /// @brief Field _installMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* ____installMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_2, "Zenject", "SubContainerCreatorByMethod`2");
