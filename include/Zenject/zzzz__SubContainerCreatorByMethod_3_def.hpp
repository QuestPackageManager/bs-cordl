#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod_3)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3> class SubContainerCreatorByMethod_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByMethod_3);
// Type: Zenject::SubContainerCreatorByMethod`3
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11246))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11250))
// CS Name: ::Zenject::SubContainerCreatorByMethod`3<TParam1,TParam2,TParam3>*
class CORDL_TYPE SubContainerCreatorByMethod_3 : public ::Zenject::SubContainerCreatorByMethodBase {
public:
  // Declarations
  /// @brief Field _installMethod, offset 0x20, size 0x8
  __declspec(property(get = __get__installMethod, put = __set__installMethod))::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* _installMethod;

  constexpr ::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>*& __get__installMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>*> const& __get__installMethod() const;

  constexpr void __set__installMethod(::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* value);

  static inline ::Zenject::SubContainerCreatorByMethod_3<TParam1, TParam2, TParam3>* New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                                              ::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* installMethod);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                    ::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* installMethod);

  /// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByMethod_3(SubContainerCreatorByMethod_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByMethod_3(SubContainerCreatorByMethod_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByMethod_3();

public:
  /// @brief Field _installMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* ____installMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_3, "Zenject", "SubContainerCreatorByMethod`3");
