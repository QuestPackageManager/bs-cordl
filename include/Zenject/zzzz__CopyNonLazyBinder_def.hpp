#pragma once
// IWYU pragma private; include "Zenject\CopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Zenject::CopyNonLazyBinder*);
DEFINE_IL2CPP_CLASS(::Zenject::CopyNonLazyBinder*, "Zenject", "CopyNonLazyBinder");
// Dependencies Zenject.NonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.CopyNonLazyBinder
class CORDL_TYPE CopyNonLazyBinder : public ::Zenject::NonLazyBinder {
public:
  // Declarations
  /// @brief Field _secondaryBindInfos, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__secondaryBindInfos,
                      put = __cordl_internal_set__secondaryBindInfos)) ::System::Collections::Generic::List_1<::Zenject::BindInfo*>* _secondaryBindInfos;

  /// @brief Method AddSecondaryCopyBindInfo, addr 0x6e4f058, size 0x104, virtual false, abstract: false, final false
  inline void AddSecondaryCopyBindInfo(::Zenject::BindInfo* bindInfo);

  /// @brief Method CopyIntoAllSubContainers, addr 0x6e49c00, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::NonLazyBinder* CopyIntoAllSubContainers();

  /// @brief Method CopyIntoDirectSubContainers, addr 0x6e4f274, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::NonLazyBinder* CopyIntoDirectSubContainers();

  /// @brief Method MoveIntoAllSubContainers, addr 0x6e4f290, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::NonLazyBinder* MoveIntoAllSubContainers();

  /// @brief Method MoveIntoDirectSubContainers, addr 0x6e4f2ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::NonLazyBinder* MoveIntoDirectSubContainers();

  static inline ::Zenject::CopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method SetInheritanceMethod, addr 0x6e4f15c, size 0x118, virtual false, abstract: false, final false
  inline void SetInheritanceMethod(::Zenject::BindingInheritanceMethods method);

  constexpr ::System::Collections::Generic::List_1<::Zenject::BindInfo*>* const& __cordl_internal_get__secondaryBindInfos() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*& __cordl_internal_get__secondaryBindInfos();

  constexpr void __cordl_internal_set__secondaryBindInfos(::System::Collections::Generic::List_1<::Zenject::BindInfo*>* value);

  /// @brief Method .ctor, addr 0x6e4afcc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14054 };

  /// @brief Field _secondaryBindInfos, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::BindInfo*>* ____secondaryBindInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::CopyNonLazyBinder, ____secondaryBindInfos) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::CopyNonLazyBinder) == 0x20, "Size mismatch!");

} // namespace Zenject
