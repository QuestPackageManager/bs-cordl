#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByInstanceGetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByInstanceGetter)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByInstanceGetter;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByInstanceGetter);
// Dependencies System.Object, Zenject.ISubContainerCreator
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerCreatorByInstanceGetter
class CORDL_TYPE SubContainerCreatorByInstanceGetter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _subcontainerGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__subcontainerGetter,
                      put = __cordl_internal_set__subcontainerGetter)) ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* _subcontainerGetter;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  /// @brief Method CreateSubContainer, addr 0x4b4177c, size 0x84, virtual true, abstract: false, final true
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  static inline ::Zenject::SubContainerCreatorByInstanceGetter* New_ctor(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subcontainerGetter);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* const& __cordl_internal_get__subcontainerGetter() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*& __cordl_internal_get__subcontainerGetter();

  constexpr void __cordl_internal_set__subcontainerGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* value);

  /// @brief Method .ctor, addr 0x4b41754, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subcontainerGetter);

  /// @brief Convert to "::Zenject::ISubContainerCreator"
  constexpr ::Zenject::ISubContainerCreator* i___Zenject__ISubContainerCreator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByInstanceGetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstanceGetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByInstanceGetter(SubContainerCreatorByInstanceGetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstanceGetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByInstanceGetter(SubContainerCreatorByInstanceGetter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12587 };

  /// @brief Field _subcontainerGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* ____subcontainerGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerCreatorByInstanceGetter, ____subcontainerGetter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByInstanceGetter, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByInstanceGetter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByInstanceGetter*, "Zenject", "SubContainerCreatorByInstanceGetter");
