#pragma once
// IWYU pragma private; include "GlobalNamespace/VFXController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXController)
namespace GlobalNamespace {
class VFXController__MainCoroutine_d__9;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class VFXController;
}
namespace GlobalNamespace {
class VFXController__MainCoroutine_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VFXController);
MARK_REF_PTR_T(::GlobalNamespace::VFXController__MainCoroutine_d__9);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VFXController/<MainCoroutine>d__9
class CORDL_TYPE VFXController__MainCoroutine_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::VFXController> __4__this;

  /// @brief Field deactivateAfterDuration, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_deactivateAfterDuration, put = __cordl_internal_set_deactivateAfterDuration)) bool deactivateAfterDuration;

  /// @brief Field duration, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39bf698, size 0x180, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::VFXController__MainCoroutine_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39bf818, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39bf820, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39bf858, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39bf694, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::VFXController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::VFXController>& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get_deactivateAfterDuration() const;

  constexpr bool& __cordl_internal_get_deactivateAfterDuration();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VFXController> value);

  constexpr void __cordl_internal_set_deactivateAfterDuration(bool value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x39bf664, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXController__MainCoroutine_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXController__MainCoroutine_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXController__MainCoroutine_d__9(VFXController__MainCoroutine_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXController__MainCoroutine_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXController__MainCoroutine_d__9(VFXController__MainCoroutine_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16441 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VFXController> _____4__this;

  /// @brief Field deactivateAfterDuration, offset: 0x28, size: 0x1, def value: None
  bool ___deactivateAfterDuration;

  /// @brief Field duration, offset: 0x2c, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VFXController__MainCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXController__MainCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXController__MainCoroutine_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXController__MainCoroutine_d__9, ___deactivateAfterDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXController__MainCoroutine_d__9, ___duration) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VFXController__MainCoroutine_d__9, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VFXController
class CORDL_TYPE VFXController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _MainCoroutine_d__9 = ::GlobalNamespace::VFXController__MainCoroutine_d__9;

  /// @brief Field _animation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__animation, put = __cordl_internal_set__animation)) ::UnityW<::UnityEngine::Animation> _animation;

  /// @brief Field _deactivateAfterAnimationDuration, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__deactivateAfterAnimationDuration, put = __cordl_internal_set__deactivateAfterAnimationDuration)) bool _deactivateAfterAnimationDuration;

  /// @brief Field _particleSystems, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystems,
                      put = __cordl_internal_set__particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>
      _particleSystems;

  __declspec(property(get = get_animation)) ::UnityW<::UnityEngine::Animation> animation;

  __declspec(property(get = get_particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> particleSystems;

  /// @brief Method Awake, addr 0x39bf4ac, size 0x24, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method MainCoroutine, addr 0x39bf5e0, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* MainCoroutine(bool deactivateAfterDuration, float_t duration);

  static inline ::GlobalNamespace::VFXController* New_ctor();

  /// @brief Method Play, addr 0x39bf4d0, size 0x110, virtual false, abstract: false, final false
  inline void Play();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get__animation() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get__animation();

  constexpr bool const& __cordl_internal_get__deactivateAfterAnimationDuration() const;

  constexpr bool& __cordl_internal_get__deactivateAfterAnimationDuration();

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const& __cordl_internal_get__particleSystems() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>& __cordl_internal_get__particleSystems();

  constexpr void __cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value);

  constexpr void __cordl_internal_set__deactivateAfterAnimationDuration(bool value);

  constexpr void __cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> value);

  /// @brief Method .ctor, addr 0x39bf68c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animation, addr 0x39bf49c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animation> get_animation();

  /// @brief Method get_particleSystems, addr 0x39bf4a4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> get_particleSystems();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXController(VFXController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXController(VFXController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16442 };

  /// @brief Field _particleSystems, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> ____particleSystems;

  /// @brief Field _animation, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ____animation;

  /// @brief Field _deactivateAfterAnimationDuration, offset: 0x30, size: 0x1, def value: None
  bool ____deactivateAfterAnimationDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VFXController, ____particleSystems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXController, ____animation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXController, ____deactivateAfterAnimationDuration) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VFXController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VFXController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VFXController*, "", "VFXController");
NEED_NO_BOX(::GlobalNamespace::VFXController__MainCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VFXController__MainCoroutine_d__9*, "", "VFXController/<MainCoroutine>d__9");
