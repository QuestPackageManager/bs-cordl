#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BTSStarTextEffectsManager)
namespace GlobalNamespace {
class __BTSStarTextEffectsManager___DespawnEffectDelayed_d__5;
}
namespace GlobalNamespace {
class __BTSStarTextEffectController__Pool;
}
namespace GlobalNamespace {
class BTSStarTextEventEffect;
}
namespace GlobalNamespace {
class BTSStarTextEffectController;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEffectsManager;
}
namespace GlobalNamespace {
class __BTSStarTextEffectsManager___DespawnEffectDelayed_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSStarTextEffectsManager);
MARK_REF_PTR_T(::GlobalNamespace::__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5);
// Type: ::<DespawnEffectDelayed>d__5
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3980))
// CS Name: ::BTSStarTextEffectsManager::<DespawnEffectDelayed>d__5*
class CORDL_TYPE __BTSStarTextEffectsManager___DespawnEffectDelayed_d__5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field effectController, offset 0x20, size 0x8
  __declspec(property(get = __get_effectController, put = __set_effectController))::GlobalNamespace::BTSStarTextEffectController* effectController;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::BTSStarTextEffectsManager* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::BTSStarTextEffectController*& __get_effectController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSStarTextEffectController*> const& __get_effectController() const;

  constexpr void __set_effectController(::GlobalNamespace::BTSStarTextEffectController* value);

  constexpr ::GlobalNamespace::BTSStarTextEffectsManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSStarTextEffectsManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::BTSStarTextEffectsManager* value);

  static inline ::GlobalNamespace::__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x221d650 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x221d680 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x221d684 size 0xd8 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x221d75c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x221d764 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x221d7a4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BTSStarTextEffectsManager___DespawnEffectDelayed_d__5(__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BTSStarTextEffectsManager___DespawnEffectDelayed_d__5(__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BTSStarTextEffectsManager___DespawnEffectDelayed_d__5();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field effectController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BTSStarTextEffectController* ___effectController;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BTSStarTextEffectsManager* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BTSStarTextEffectsManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3981))
// CS Name: ::BTSStarTextEffectsManager*
class CORDL_TYPE BTSStarTextEffectsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DespawnEffectDelayed_d__5 = ::GlobalNamespace::__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5;

  /// @brief Field _btsStarTextEventEffect, offset 0x18, size 0x8
  __declspec(property(get = __get__btsStarTextEventEffect, put = __set__btsStarTextEventEffect))::GlobalNamespace::BTSStarTextEventEffect* _btsStarTextEventEffect;

  /// @brief Field _btsStarTextEffectControllerPool, offset 0x20, size 0x8
  __declspec(property(get = __get__btsStarTextEffectControllerPool,
                      put = __set__btsStarTextEffectControllerPool))::GlobalNamespace::__BTSStarTextEffectController__Pool* _btsStarTextEffectControllerPool;

  constexpr ::GlobalNamespace::BTSStarTextEventEffect*& __get__btsStarTextEventEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSStarTextEventEffect*> const& __get__btsStarTextEventEffect() const;

  constexpr void __set__btsStarTextEventEffect(::GlobalNamespace::BTSStarTextEventEffect* value);

  constexpr ::GlobalNamespace::__BTSStarTextEffectController__Pool*& __get__btsStarTextEffectControllerPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BTSStarTextEffectController__Pool*> const& __get__btsStarTextEffectControllerPool() const;

  constexpr void __set__btsStarTextEffectControllerPool(::GlobalNamespace::__BTSStarTextEffectController__Pool* value);

  /// @brief Method Start addr 0x221d2d8 size 0x88 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x221d410 size 0x88 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleBTSStarTextEventEffect addr 0x221d548 size 0x94 virtual false final false
  inline void HandleBTSStarTextEventEffect(::UnityEngine::Sprite* sprite, ::UnityEngine::Transform* parentTransform, float_t desiredAnimationLength);

  /// @brief Method DespawnEffectDelayed addr 0x221d5dc size 0x74 virtual false final false
  inline ::System::Collections::IEnumerator* DespawnEffectDelayed(::GlobalNamespace::BTSStarTextEffectController* effectController);

  static inline ::GlobalNamespace::BTSStarTextEffectsManager* New_ctor();

  /// @brief Method .ctor addr 0x221d678 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSStarTextEffectsManager(BTSStarTextEffectsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSStarTextEffectsManager(BTSStarTextEffectsManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSStarTextEffectsManager();

public:
  /// @brief Field _btsStarTextEventEffect, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BTSStarTextEventEffect* ____btsStarTextEventEffect;

  /// @brief Field _btsStarTextEffectControllerPool, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__BTSStarTextEffectController__Pool* ____btsStarTextEffectControllerPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEffectsManager, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEffectsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEffectsManager*, "", "BTSStarTextEffectsManager");
NEED_NO_BOX(::GlobalNamespace::__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5*, "", "BTSStarTextEffectsManager/<DespawnEffectDelayed>d__5");
