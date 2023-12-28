#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::ZenjectSafeBehaviour
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15314))
// CS Name: ::ZenjectSafeBehaviour*
class CORDL_TYPE ZenjectSafeBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _isInjected, offset 0x18, size 0x1
  __declspec(property(get = __get__isInjected, put = __set__isInjected)) bool _isInjected;

  /// @brief Field _wasOnEnableCalled, offset 0x19, size 0x1
  __declspec(property(get = __get__wasOnEnableCalled, put = __set__wasOnEnableCalled)) bool _wasOnEnableCalled;

  constexpr bool& __get__isInjected();

  constexpr bool const& __get__isInjected() const;

  constexpr void __set__isInjected(bool value);

  constexpr bool& __get__wasOnEnableCalled();

  constexpr bool const& __get__wasOnEnableCalled() const;

  constexpr void __set__wasOnEnableCalled(bool value);

  /// @brief Method Inject addr 0x280c338 size 0x20 virtual false final false
  inline void Inject();

  /// @brief Method OnEnable addr 0x280c378 size 0x20 virtual false final false
  inline void OnEnable();

  /// @brief Method TryInvokeOnEnablePostInjection addr 0x280c358 size 0x20 virtual false final false
  inline void TryInvokeOnEnablePostInjection();

  /// @brief Method OnEnablePostInjection addr 0x280c398 size 0x4 virtual true final false
  inline void OnEnablePostInjection();

  static inline ::GlobalNamespace::ZenjectSafeBehaviour* New_ctor();

  /// @brief Method .ctor addr 0x280772c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method __zenInjectMethod0 addr 0x280c39c size 0xa0 virtual false final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x280c43c size 0x254 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSafeBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectSafeBehaviour(ZenjectSafeBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSafeBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectSafeBehaviour(ZenjectSafeBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectSafeBehaviour();

public:
  /// @brief Field _isInjected, offset: 0x18, size: 0x1, def value: None
  bool ____isInjected;

  /// @brief Field _wasOnEnableCalled, offset: 0x19, size: 0x1, def value: None
  bool ____wasOnEnableCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ZenjectSafeBehaviour, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ZenjectSafeBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ZenjectSafeBehaviour*, "", "ZenjectSafeBehaviour");
