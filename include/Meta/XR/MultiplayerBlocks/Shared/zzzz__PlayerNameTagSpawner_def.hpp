#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/PlayerNameTagSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNameTagSpawner)
namespace Meta::XR::MultiplayerBlocks::Shared {
class INameTagSpawner;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct PlatformInfo;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class PlayerNameTagSpawner__SpawnCoroutine_d__4;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class PlayerNameTagSpawner;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class PlayerNameTagSpawner__SpawnCoroutine_d__4;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner/<SpawnCoroutine>d__4
class CORDL_TYPE PlayerNameTagSpawner__SpawnCoroutine_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner> __4__this;

  /// @brief Field playerName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName)) ::StringW playerName;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x58caabc, size 0x16c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58cac28, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x58cac30, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x58cac68, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x58caab8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner> value);

  constexpr void __cordl_internal_set_playerName(::StringW value);

  /// @brief Method .ctor, addr 0x58ca620, size 0x8, virtual false, abstract: false, final false
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
  constexpr PlayerNameTagSpawner__SpawnCoroutine_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagSpawner__SpawnCoroutine_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerNameTagSpawner__SpawnCoroutine_d__4(PlayerNameTagSpawner__SpawnCoroutine_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagSpawner__SpawnCoroutine_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerNameTagSpawner__SpawnCoroutine_d__4(PlayerNameTagSpawner__SpawnCoroutine_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20382 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner> _____4__this;

  /// @brief Field playerName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___playerName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4, ___playerName) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4, 0x30>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner
class CORDL_TYPE PlayerNameTagSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SpawnCoroutine_d__4 = ::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4;

  /// @brief Field _nameTagSpawner, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nameTagSpawner, put = __cordl_internal_set__nameTagSpawner)) ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner* _nameTagSpawner;

  /// @brief Field namePostfix, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_namePostfix, put = __cordl_internal_set_namePostfix)) ::ArrayW<::StringW, ::Array<::StringW>*> namePostfix;

  /// @brief Field namePrefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_namePrefix, put = __cordl_internal_set_namePrefix)) ::ArrayW<::StringW, ::Array<::StringW>*> namePrefix;

  /// @brief Method GetRandomName, addr 0x58ca7d4, size 0x124, virtual false, abstract: false, final false
  inline ::StringW GetRandomName();

  static inline ::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner* New_ctor();

  /// @brief Method OnEntitlementFinished, addr 0x58ca628, size 0x1ac, virtual false, abstract: false, final false
  inline void OnEntitlementFinished(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo info);

  /// @brief Method SpawnCoroutine, addr 0x58ca5c0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SpawnCoroutine(::StringW playerName);

  /// @brief Method Start, addr 0x58ca518, size 0xa8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner* const& __cordl_internal_get__nameTagSpawner() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*& __cordl_internal_get__nameTagSpawner();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_namePostfix() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_namePostfix();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_namePrefix() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_namePrefix();

  constexpr void __cordl_internal_set__nameTagSpawner(::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner* value);

  constexpr void __cordl_internal_set_namePostfix(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_namePrefix(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x58ca8f8, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerNameTagSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerNameTagSpawner(PlayerNameTagSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerNameTagSpawner(PlayerNameTagSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20383 };

  /// @brief Field namePrefix, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___namePrefix;

  /// @brief Field namePostfix, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___namePostfix;

  /// @brief Field _nameTagSpawner, offset: 0x30, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner* ____nameTagSpawner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner, ___namePrefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner, ___namePostfix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner, ____nameTagSpawner) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner*, "Meta.XR.MultiplayerBlocks.Shared", "PlayerNameTagSpawner");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::PlayerNameTagSpawner__SpawnCoroutine_d__4*, "Meta.XR.MultiplayerBlocks.Shared", "PlayerNameTagSpawner/<SpawnCoroutine>d__4");
