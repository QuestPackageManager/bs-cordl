#pragma once
// IWYU pragma private; include "Zenject/SignalTickPriorityCopyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalTickPriorityCopyBinder)
namespace Zenject {
class SignalCopyBinder;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Forward declare root types
namespace Zenject {
class SignalTickPriorityCopyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalTickPriorityCopyBinder);
// Dependencies Zenject.SignalCopyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SignalTickPriorityCopyBinder
class CORDL_TYPE SignalTickPriorityCopyBinder : public ::Zenject::SignalCopyBinder {
public:
  // Declarations
  __declspec(property(get = get_SignalBindInfo, put = set_SignalBindInfo)) ::Zenject::SignalDeclarationBindInfo* SignalBindInfo;

  /// @brief Field <SignalBindInfo>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__SignalBindInfo_k__BackingField,
                      put = __cordl_internal_set__SignalBindInfo_k__BackingField)) ::Zenject::SignalDeclarationBindInfo* _SignalBindInfo_k__BackingField;

  static inline ::Zenject::SignalTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

  /// @brief Method WithTickPriority, addr 0x4af5a60, size 0x24, virtual false, abstract: false, final false
  inline ::Zenject::SignalCopyBinder* WithTickPriority(int32_t priority);

  constexpr ::Zenject::SignalDeclarationBindInfo* const& __cordl_internal_get__SignalBindInfo_k__BackingField() const;

  constexpr ::Zenject::SignalDeclarationBindInfo*& __cordl_internal_get__SignalBindInfo_k__BackingField();

  constexpr void __cordl_internal_set__SignalBindInfo_k__BackingField(::Zenject::SignalDeclarationBindInfo* value);

  /// @brief Method .ctor, addr 0x4af5500, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

  /// @brief Method get_SignalBindInfo, addr 0x4af5a50, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SignalDeclarationBindInfo* get_SignalBindInfo();

  /// @brief Method set_SignalBindInfo, addr 0x4af5a58, size 0x8, virtual false, abstract: false, final false
  inline void set_SignalBindInfo(::Zenject::SignalDeclarationBindInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalTickPriorityCopyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalTickPriorityCopyBinder(SignalTickPriorityCopyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalTickPriorityCopyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalTickPriorityCopyBinder(SignalTickPriorityCopyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11999 };

  /// @brief Field <SignalBindInfo>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SignalDeclarationBindInfo* ____SignalBindInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SignalTickPriorityCopyBinder, ____SignalBindInfo_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SignalTickPriorityCopyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalTickPriorityCopyBinder*, "Zenject", "SignalTickPriorityCopyBinder");
