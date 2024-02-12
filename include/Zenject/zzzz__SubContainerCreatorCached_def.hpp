#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorCached)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorCached;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorCached);
// Type: Zenject::SubContainerCreatorCached
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10436))
// CS Name: ::Zenject::SubContainerCreatorCached*
class CORDL_TYPE SubContainerCreatorCached : public ::System::Object {
public:
  // Declarations
  /// @brief Field _subCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__subCreator, put = __cordl_internal_set__subCreator))::Zenject::ISubContainerCreator* _subCreator;

  /// @brief Field _isLookingUp, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isLookingUp, put = __cordl_internal_set__isLookingUp)) bool _isLookingUp;

  /// @brief Field _subContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__subContainer, put = __cordl_internal_set__subContainer))::Zenject::DiContainer* _subContainer;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  /// @brief Convert to "::Zenject::ISubContainerCreator"
  constexpr ::Zenject::ISubContainerCreator* i___Zenject__ISubContainerCreator() noexcept;

  constexpr ::Zenject::ISubContainerCreator*& __cordl_internal_get__subCreator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ISubContainerCreator*> const& __cordl_internal_get__subCreator() const;

  constexpr void __cordl_internal_set__subCreator(::Zenject::ISubContainerCreator* value);

  constexpr bool& __cordl_internal_get__isLookingUp();

  constexpr bool const& __cordl_internal_get__isLookingUp() const;

  constexpr void __cordl_internal_set__isLookingUp(bool value);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__subContainer();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__subContainer() const;

  constexpr void __cordl_internal_set__subContainer(::Zenject::DiContainer* value);

  static inline ::Zenject::SubContainerCreatorCached* New_ctor(::Zenject::ISubContainerCreator* subCreator);

  /// @brief Method .ctor, addr 0x2f29534, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ISubContainerCreator* subCreator);

  /// @brief Method CreateSubContainer, addr 0x2f2955c, size 0x180, virtual true, abstract: false, final true
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorCached", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorCached(SubContainerCreatorCached&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorCached", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorCached(SubContainerCreatorCached const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorCached();

public:
  /// @brief Field _subCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ISubContainerCreator* ____subCreator;

  /// @brief Field _isLookingUp, offset: 0x18, size: 0x1, def value: None
  bool ____isLookingUp;

  /// @brief Field _subContainer, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____subContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorCached, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorCached, ____subCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorCached, ____isLookingUp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorCached, ____subContainer) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorCached);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorCached*, "Zenject", "SubContainerCreatorCached");
