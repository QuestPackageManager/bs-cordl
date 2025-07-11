#pragma once
// IWYU pragma private; include "Zenject/AnimatorInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_2_def.hpp"
CORDL_MODULE_EXPORT(AnimatorInstaller)
namespace System {
class Object;
}
namespace UnityEngine {
class Animator;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class AnimatorInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AnimatorInstaller);
// Dependencies Zenject.Installer`2<TParam1, TDerived>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.AnimatorInstaller
class CORDL_TYPE AnimatorInstaller : public ::Zenject::Installer_2<::UnityW<::UnityEngine::Animator>, ::Zenject::AnimatorInstaller*> {
public:
  // Declarations
  /// @brief Field _animator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Method InstallBindings, addr 0x4b44670, size 0xb8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::Zenject::AnimatorInstaller* New_ctor(::UnityEngine::Animator* animator);

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  /// @brief Method __zenCreate, addr 0x4b44728, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b447e8, size 0x268, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b44614, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animator* animator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatorInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorInstaller(AnimatorInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorInstaller(AnimatorInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12643 };

  /// @brief Field _animator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::AnimatorInstaller, ____animator) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::AnimatorInstaller, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AnimatorInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AnimatorInstaller*, "Zenject", "AnimatorInstaller");
