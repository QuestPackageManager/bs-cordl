#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByInstanceGetter)
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class ISubContainerCreator;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByInstanceGetter;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByInstanceGetter);
// Type: Zenject::SubContainerCreatorByInstanceGetter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11245))
// CS Name: ::Zenject::SubContainerCreatorByInstanceGetter*
class CORDL_TYPE SubContainerCreatorByInstanceGetter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _subcontainerGetter, offset 0x10, size 0x8
  __declspec(property(get = __get__subcontainerGetter, put = __set__subcontainerGetter))::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* _subcontainerGetter;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*& __get__subcontainerGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*> const& __get__subcontainerGetter() const;

  constexpr void __set__subcontainerGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* value);

  static inline ::Zenject::SubContainerCreatorByInstanceGetter* New_ctor(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subcontainerGetter);

  /// @brief Method .ctor addr 0x2f0b6b8 size 0x28 virtual false final false
  inline void _ctor(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subcontainerGetter);

  /// @brief Method CreateSubContainer addr 0x2f0b6e0 size 0x84 virtual true final true
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstanceGetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByInstanceGetter(SubContainerCreatorByInstanceGetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstanceGetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByInstanceGetter(SubContainerCreatorByInstanceGetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByInstanceGetter();

public:
  /// @brief Field _subcontainerGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* ____subcontainerGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByInstanceGetter, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByInstanceGetter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByInstanceGetter*, "Zenject", "SubContainerCreatorByInstanceGetter");
