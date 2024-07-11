#pragma once
// IWYU pragma private; include "Zenject/CopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(CopyNonLazyBinder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class NonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class CopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::CopyNonLazyBinder);
// Type: Zenject::CopyNonLazyBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::CopyNonLazyBinder*
class CORDL_TYPE CopyNonLazyBinder : public ::Zenject::NonLazyBinder {
public:
  // Declarations
  /// @brief Field _secondaryBindInfos, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__secondaryBindInfos, put = __cordl_internal_set__secondaryBindInfos))::System::Collections::Generic::List_1<::Zenject::BindInfo*>* _secondaryBindInfos;

  /// @brief Method AddSecondaryCopyBindInfo, addr 0x36627d8, size 0xf0, virtual false, abstract: false, final false
  inline void AddSecondaryCopyBindInfo(::Zenject::BindInfo* bindInfo);

  /// @brief Method CopyIntoAllSubContainers, addr 0x365cf4c, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::NonLazyBinder* CopyIntoAllSubContainers();

  /// @brief Method CopyIntoDirectSubContainers, addr 0x3662a0c, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::NonLazyBinder* CopyIntoDirectSubContainers();

  /// @brief Method MoveIntoAllSubContainers, addr 0x3662a28, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::NonLazyBinder* MoveIntoAllSubContainers();

  /// @brief Method MoveIntoDirectSubContainers, addr 0x3662a44, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::NonLazyBinder* MoveIntoDirectSubContainers();

  static inline ::Zenject::CopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method SetInheritanceMethod, addr 0x36628c8, size 0x144, virtual false, abstract: false, final false
  inline void SetInheritanceMethod(::Zenject::BindingInheritanceMethods method);

  constexpr ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*& __cordl_internal_get__secondaryBindInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::BindInfo*>*> const& __cordl_internal_get__secondaryBindInfos() const;

  constexpr void __cordl_internal_set__secondaryBindInfos(::System::Collections::Generic::List_1<::Zenject::BindInfo*>* value);

  /// @brief Method .ctor, addr 0x365e404, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyNonLazyBinder(CopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyNonLazyBinder(CopyNonLazyBinder const&) = delete;

  /// @brief Field _secondaryBindInfos, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::BindInfo*>* ____secondaryBindInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::CopyNonLazyBinder, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::CopyNonLazyBinder, ____secondaryBindInfos) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::CopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CopyNonLazyBinder*, "Zenject", "CopyNonLazyBinder");
