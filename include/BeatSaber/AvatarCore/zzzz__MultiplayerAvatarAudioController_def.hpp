#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/MultiplayerAvatarAudioController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerAvatarAudioController)
namespace BeatSaber::AvatarCore {
class MultiplayerAvatarAudioController__Start_d__4;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class MultiplayerAvatarAudioController;
}
namespace BeatSaber::AvatarCore {
class MultiplayerAvatarAudioController__Start_d__4;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController__Start_d__4);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.MultiplayerAvatarAudioController/<Start>d__4
class CORDL_TYPE MultiplayerAvatarAudioController__Start_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarAudioController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x224ffa0, size 0xd4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::BeatSaber::AvatarCore::MultiplayerAvatarAudioController__Start_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2250074, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x225007c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22500b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x224ff9c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarAudioController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarAudioController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarAudioController> value);

  /// @brief Method .ctor, addr 0x224ff6c, size 0x28, virtual false, abstract: false, final false
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
  constexpr MultiplayerAvatarAudioController__Start_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarAudioController__Start_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerAvatarAudioController__Start_d__4(MultiplayerAvatarAudioController__Start_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarAudioController__Start_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerAvatarAudioController__Start_d__4(MultiplayerAvatarAudioController__Start_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17591 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarAudioController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController__Start_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController__Start_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController__Start_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::MultiplayerAvatarAudioController__Start_d__4, 0x28>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
// Dependencies UnityEngine.MonoBehaviour
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.MultiplayerAvatarAudioController
class CORDL_TYPE MultiplayerAvatarAudioController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__4 = ::BeatSaber::AvatarCore::MultiplayerAvatarAudioController__Start_d__4;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _connectedPlayer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  __declspec(property(put = set_connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  static inline ::BeatSaber::AvatarCore::MultiplayerAvatarAudioController* New_ctor();

  /// @brief Method Start, addr 0x224ff0c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method .ctor, addr 0x224ff94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_connectedPlayer, addr 0x224ff04, size 0x8, virtual false, abstract: false, final false
  inline void set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerAvatarAudioController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarAudioController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerAvatarAudioController(MultiplayerAvatarAudioController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarAudioController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerAvatarAudioController(MultiplayerAvatarAudioController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17592 };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _connectedPlayer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController, ____connectedPlayer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::MultiplayerAvatarAudioController, 0x30>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController*, "BeatSaber.AvatarCore", "MultiplayerAvatarAudioController");
NEED_NO_BOX(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController__Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController__Start_d__4*, "BeatSaber.AvatarCore", "MultiplayerAvatarAudioController/<Start>d__4");
