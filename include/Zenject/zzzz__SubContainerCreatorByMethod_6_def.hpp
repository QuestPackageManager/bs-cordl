#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByMethod_6.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod_6)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Action_7;
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
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6> class SubContainerCreatorByMethod_6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByMethod_6);
// Dependencies Zenject.SubContainerCreatorByMethodBase
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
// Is value type: false
// CS Name: Zenject.SubContainerCreatorByMethod`6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>
class CORDL_TYPE SubContainerCreatorByMethod_6 : public ::Zenject::SubContainerCreatorByMethodBase {
public:
  // Declarations
  /// @brief Field _installMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__installMethod,
                      put = __cordl_internal_set__installMethod)) ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* _installMethod;

  /// @brief Method CreateSubContainer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  static inline ::Zenject::SubContainerCreatorByMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*
  New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
           ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installMethod);

  constexpr ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* const& __cordl_internal_get__installMethod() const;

  constexpr ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*& __cordl_internal_get__installMethod();

  constexpr void __cordl_internal_set__installMethod(::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                    ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installMethod);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByMethod_6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByMethod_6(SubContainerCreatorByMethod_6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByMethod_6(SubContainerCreatorByMethod_6 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12595 };

  /// @brief Field _installMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* ____installMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_6, "Zenject", "SubContainerCreatorByMethod`6");
