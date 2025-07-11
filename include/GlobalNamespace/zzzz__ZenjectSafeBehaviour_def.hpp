#pragma once
// IWYU pragma private; include "GlobalNamespace/ZenjectSafeBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ZenjectSafeBehaviour)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class ZenjectSafeBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ZenjectSafeBehaviour);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZenjectSafeBehaviour
class CORDL_TYPE ZenjectSafeBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _isInjected, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isInjected, put = __cordl_internal_set__isInjected)) bool _isInjected;

  /// @brief Field _wasOnEnableCalled, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__wasOnEnableCalled, put = __cordl_internal_set__wasOnEnableCalled)) bool _wasOnEnableCalled;

  /// @brief Method Inject, addr 0x4086a84, size 0x20, virtual false, abstract: false, final false
  inline void Inject();

  static inline ::GlobalNamespace::ZenjectSafeBehaviour* New_ctor();

  /// @brief Method OnEnable, addr 0x4086ac4, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEnablePostInjection, addr 0x4086ae4, size 0x4, virtual true, abstract: false, final false
  inline void OnEnablePostInjection();

  /// @brief Method TryInvokeOnEnablePostInjection, addr 0x4086aa4, size 0x20, virtual false, abstract: false, final false
  inline void TryInvokeOnEnablePostInjection();

  constexpr bool const& __cordl_internal_get__isInjected() const;

  constexpr bool& __cordl_internal_get__isInjected();

  constexpr bool const& __cordl_internal_get__wasOnEnableCalled() const;

  constexpr bool& __cordl_internal_get__wasOnEnableCalled();

  constexpr void __cordl_internal_set__isInjected(bool value);

  constexpr void __cordl_internal_set__wasOnEnableCalled(bool value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4086b88, size 0x250, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenInjectMethod0, addr 0x4086ae8, size 0xa0, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x4081e80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectSafeBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSafeBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectSafeBehaviour(ZenjectSafeBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSafeBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectSafeBehaviour(ZenjectSafeBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17901 };

  /// @brief Field _isInjected, offset: 0x20, size: 0x1, def value: None
  bool ____isInjected;

  /// @brief Field _wasOnEnableCalled, offset: 0x21, size: 0x1, def value: None
  bool ____wasOnEnableCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZenjectSafeBehaviour, ____isInjected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZenjectSafeBehaviour, ____wasOnEnableCalled) == 0x21, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ZenjectSafeBehaviour, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ZenjectSafeBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ZenjectSafeBehaviour*, "", "ZenjectSafeBehaviour");
