#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
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
class SubContainerCreatorByMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByMethod);
// Type: Zenject::SubContainerCreatorByMethod
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SubContainerCreatorByMethod*
class CORDL_TYPE SubContainerCreatorByMethod : public ::Zenject::SubContainerCreatorByMethodBase {
public:
  // Declarations
  /// @brief Field _installMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__installMethod, put = __cordl_internal_set__installMethod)) ::System::Action_1<::Zenject::DiContainer*>* _installMethod;

  /// @brief Method CreateSubContainer, addr 0x4ac611c, size 0x98, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  static inline ::Zenject::SubContainerCreatorByMethod* New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                 ::System::Action_1<::Zenject::DiContainer*>* installMethod);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get__installMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get__installMethod() const;

  constexpr void __cordl_internal_set__installMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  /// @brief Method .ctor, addr 0x4ac60e0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo, ::System::Action_1<::Zenject::DiContainer*>* installMethod);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByMethod(SubContainerCreatorByMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByMethod(SubContainerCreatorByMethod const&) = delete;

  /// @brief Field _installMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ____installMethod;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12546 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByMethod, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByMethod, ____installMethod) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByMethod*, "Zenject", "SubContainerCreatorByMethod");
