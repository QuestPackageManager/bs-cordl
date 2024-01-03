#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXController)
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
class __VFXController___MainCoroutine_d__9;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Animation;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class VFXController;
}
namespace GlobalNamespace {
class __VFXController___MainCoroutine_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VFXController);
MARK_REF_PTR_T(::GlobalNamespace::__VFXController___MainCoroutine_d__9);
// Type: ::<MainCoroutine>d__9
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14383))
// CS Name: ::VFXController::<MainCoroutine>d__9*
class CORDL_TYPE __VFXController___MainCoroutine_d__9 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::VFXController* __4__this;

  /// @brief Field deactivateAfterDuration, offset 0x28, size 0x1
  __declspec(property(get = __get_deactivateAfterDuration, put = __set_deactivateAfterDuration)) bool deactivateAfterDuration;

  /// @brief Field duration, offset 0x2c, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

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

  constexpr ::GlobalNamespace::VFXController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VFXController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::VFXController* value);

  constexpr bool& __get_deactivateAfterDuration();

  constexpr bool const& __get_deactivateAfterDuration() const;

  constexpr void __set_deactivateAfterDuration(bool value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  static inline ::GlobalNamespace::__VFXController___MainCoroutine_d__9* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x20f4784, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x20f47b4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x20f47b8, size 0x184, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x20f493c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x20f4944, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x20f4984, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__VFXController___MainCoroutine_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VFXController___MainCoroutine_d__9(__VFXController___MainCoroutine_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VFXController___MainCoroutine_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VFXController___MainCoroutine_d__9(__VFXController___MainCoroutine_d__9 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VFXController___MainCoroutine_d__9();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::VFXController* _____4__this;

  /// @brief Field deactivateAfterDuration, offset: 0x28, size: 0x1, def value: None
  bool ___deactivateAfterDuration;

  /// @brief Field duration, offset: 0x2c, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VFXController___MainCoroutine_d__9, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VFXController___MainCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VFXController___MainCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VFXController___MainCoroutine_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VFXController___MainCoroutine_d__9, ___deactivateAfterDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VFXController___MainCoroutine_d__9, ___duration) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VFXController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14384))
// CS Name: ::VFXController*
class CORDL_TYPE VFXController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _MainCoroutine_d__9 = ::GlobalNamespace::__VFXController___MainCoroutine_d__9;

  /// @brief Field _particleSystems, offset 0x18, size 0x8
  __declspec(property(get = __get__particleSystems, put = __set__particleSystems))::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> _particleSystems;

  /// @brief Field _animation, offset 0x20, size 0x8
  __declspec(property(get = __get__animation, put = __set__animation))::UnityEngine::Animation* _animation;

  /// @brief Field _deactivateAfterAnimationDuration, offset 0x28, size 0x1
  __declspec(property(get = __get__deactivateAfterAnimationDuration, put = __set__deactivateAfterAnimationDuration)) bool _deactivateAfterAnimationDuration;

  __declspec(property(get = get_animation))::UnityEngine::Animation* animation;

  __declspec(property(get = get_particleSystems))::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> particleSystems;

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*>& __get__particleSystems();

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> const& __get__particleSystems() const;

  constexpr void __set__particleSystems(::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> value);

  constexpr ::UnityEngine::Animation*& __get__animation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> const& __get__animation() const;

  constexpr void __set__animation(::UnityEngine::Animation* value);

  constexpr bool& __get__deactivateAfterAnimationDuration();

  constexpr bool const& __get__deactivateAfterAnimationDuration() const;

  constexpr void __set__deactivateAfterAnimationDuration(bool value);

  /// @brief Method get_animation, addr 0x20f45b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Animation* get_animation();

  /// @brief Method get_particleSystems, addr 0x20f45bc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> get_particleSystems();

  /// @brief Method Awake, addr 0x20f45c4, size 0x24, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Play, addr 0x20f45e8, size 0x110, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method MainCoroutine, addr 0x20f46f8, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* MainCoroutine(bool deactivateAfterDuration, float_t duration);

  static inline ::GlobalNamespace::VFXController* New_ctor();

  /// @brief Method .ctor, addr 0x20f47ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VFXController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXController(VFXController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXController(VFXController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXController();

public:
  /// @brief Field _particleSystems, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> ____particleSystems;

  /// @brief Field _animation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Animation* ____animation;

  /// @brief Field _deactivateAfterAnimationDuration, offset: 0x28, size: 0x1, def value: None
  bool ____deactivateAfterAnimationDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VFXController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXController, ____particleSystems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXController, ____animation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXController, ____deactivateAfterAnimationDuration) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VFXController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VFXController*, "", "VFXController");
NEED_NO_BOX(::GlobalNamespace::__VFXController___MainCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VFXController___MainCoroutine_d__9*, "", "VFXController/<MainCoroutine>d__9");
