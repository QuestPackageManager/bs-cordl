#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatSignalListener)
namespace GlobalNamespace {
class FloatUnityEvent;
}
namespace GlobalNamespace {
class FloatSignal;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatSignalListener;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatSignalListener);
// Type: ::FloatSignalListener
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13945))
// CS Name: ::FloatSignalListener*
class CORDL_TYPE FloatSignalListener : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _floatSignal, offset 0x18, size 0x8
  __declspec(property(get = __get__floatSignal, put = __set__floatSignal))::GlobalNamespace::FloatSignal* _floatSignal;

  /// @brief Field _unityEvent, offset 0x20, size 0x8
  __declspec(property(get = __get__unityEvent, put = __set__unityEvent))::GlobalNamespace::FloatUnityEvent* _unityEvent;

  constexpr ::GlobalNamespace::FloatSignal*& __get__floatSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSignal*> const& __get__floatSignal() const;

  constexpr void __set__floatSignal(::GlobalNamespace::FloatSignal* value);

  constexpr ::GlobalNamespace::FloatUnityEvent*& __get__unityEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatUnityEvent*> const& __get__unityEvent() const;

  constexpr void __set__unityEvent(::GlobalNamespace::FloatUnityEvent* value);

  /// @brief Method OnEnable addr 0x1fa19c4 size 0xa0 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x1fa1a64 size 0xa0 virtual false final false
  inline void OnDisable();

  /// @brief Method HandleEvent addr 0x1fa1b04 size 0x60 virtual false final false
  inline void HandleEvent(float_t f);

  static inline ::GlobalNamespace::FloatSignalListener* New_ctor();

  /// @brief Method .ctor addr 0x1fa1b64 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FloatSignalListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatSignalListener(FloatSignalListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatSignalListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatSignalListener(FloatSignalListener const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatSignalListener();

public:
  /// @brief Field _floatSignal, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FloatSignal* ____floatSignal;

  /// @brief Field _unityEvent, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FloatUnityEvent* ____unityEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatSignalListener, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatSignalListener, ____floatSignal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatSignalListener, ____unityEvent) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatSignalListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatSignalListener*, "", "FloatSignalListener");
