#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlyingScoreSpawner)
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
class __FlyingScoreEffect__Pool;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner__InitData;
}
namespace GlobalNamespace {
struct __FlyingScoreSpawner__SpawnPosition;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct __FlyingScoreSpawner__SpawnPosition;
}
namespace GlobalNamespace {
class FlyingScoreSpawner;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner__InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition);
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreSpawner);
MARK_REF_PTR_T(::GlobalNamespace::__FlyingScoreSpawner__InitData);
// Type: ::SpawnPosition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::FlyingScoreSpawner::SpawnPosition
struct CORDL_TYPE __FlyingScoreSpawner__SpawnPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____FlyingScoreSpawner__SpawnPosition_Unwrapped
  enum struct ____FlyingScoreSpawner__SpawnPosition_Unwrapped : int32_t {
    __E_Underground = static_cast<int32_t>(0x0),
    __E_AboveGround = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____FlyingScoreSpawner__SpawnPosition_Unwrapped() const noexcept {
    return static_cast<____FlyingScoreSpawner__SpawnPosition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingScoreSpawner__SpawnPosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FlyingScoreSpawner__SpawnPosition(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AboveGround value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const AboveGround;

  /// @brief Field Underground value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const Underground;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingScoreSpawner::InitData*
class CORDL_TYPE __FlyingScoreSpawner__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field spawnPosition, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_spawnPosition, put = __cordl_internal_set_spawnPosition))::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition;

  static inline ::GlobalNamespace::__FlyingScoreSpawner__InitData* New_ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition);

  constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const& __cordl_internal_get_spawnPosition() const;

  constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition& __cordl_internal_get_spawnPosition();

  constexpr void __cordl_internal_set_spawnPosition(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition value);

  /// @brief Method .ctor, addr 0x242fe40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingScoreSpawner__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FlyingScoreSpawner__InitData(__FlyingScoreSpawner__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FlyingScoreSpawner__InitData(__FlyingScoreSpawner__InitData const&) = delete;

  /// @brief Field spawnPosition, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition ___spawnPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreSpawner__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlyingScoreSpawner__InitData, ___spawnPosition) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FlyingScoreSpawner
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingScoreSpawner*
class CORDL_TYPE FlyingScoreSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__FlyingScoreSpawner__InitData;

  using SpawnPosition = ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition;

  /// @brief Field _flyingScoreEffectPool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingScoreEffectPool, put = __cordl_internal_set__flyingScoreEffectPool))::GlobalNamespace::__FlyingScoreEffect__Pool* _flyingScoreEffectPool;

  /// @brief Field _initData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__FlyingScoreSpawner__InitData* _initData;

  /// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

  /// @brief Method HandleFlyingObjectEffectDidFinish, addr 0x242fd1c, size 0x11c, virtual true, abstract: false, final true
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  static inline ::GlobalNamespace::FlyingScoreSpawner* New_ctor();

  /// @brief Method SpawnFlyingScore, addr 0x242fa98, size 0x284, virtual false, abstract: false, final false
  inline void SpawnFlyingScore(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color);

  constexpr ::GlobalNamespace::__FlyingScoreEffect__Pool*& __cordl_internal_get__flyingScoreEffectPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreEffect__Pool*> const& __cordl_internal_get__flyingScoreEffectPool() const;

  constexpr ::GlobalNamespace::__FlyingScoreSpawner__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreSpawner__InitData*> const& __cordl_internal_get__initData() const;

  constexpr void __cordl_internal_set__flyingScoreEffectPool(::GlobalNamespace::__FlyingScoreEffect__Pool* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__FlyingScoreSpawner__InitData* value);

  /// @brief Method .ctor, addr 0x242fe38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent* i___GlobalNamespace__IFlyingObjectEffectDidFinishEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingScoreSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingScoreSpawner(FlyingScoreSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingScoreSpawner(FlyingScoreSpawner const&) = delete;

  /// @brief Field _flyingScoreEffectPool, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__FlyingScoreEffect__Pool* ____flyingScoreEffectPool;

  /// @brief Field _initData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__FlyingScoreSpawner__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreSpawner, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner, ____flyingScoreEffectPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner, ____initData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, "", "FlyingScoreSpawner/SpawnPosition");
NEED_NO_BOX(::GlobalNamespace::FlyingScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreSpawner*, "", "FlyingScoreSpawner");
NEED_NO_BOX(::GlobalNamespace::__FlyingScoreSpawner__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreSpawner__InitData*, "", "FlyingScoreSpawner/InitData");
