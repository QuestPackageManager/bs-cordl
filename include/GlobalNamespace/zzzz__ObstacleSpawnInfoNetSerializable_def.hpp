#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleSpawnInfoNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleSpawnInfoNetSerializable)
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleSpawnInfoNetSerializable);
// Dependencies NoteLineLayer, PoolableSerializable, Vector3Serializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleSpawnInfoNetSerializable
class CORDL_TYPE ObstacleSpawnInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field endBeat, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_endBeat, put = __cordl_internal_set_endBeat)) float_t endBeat;

  /// @brief Field height, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) int32_t height;

  /// @brief Field lineIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lineIndex, put = __cordl_internal_set_lineIndex)) int32_t lineIndex;

  /// @brief Field lineLayer, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_lineLayer, put = __cordl_internal_set_lineLayer)) ::GlobalNamespace::NoteLineLayer lineLayer;

  /// @brief Field moveOffset, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_moveOffset, put = __cordl_internal_set_moveOffset)) ::GlobalNamespace::Vector3Serializable moveOffset;

  /// @brief Field obstacleHeight, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_obstacleHeight, put = __cordl_internal_set_obstacleHeight)) float_t obstacleHeight;

  /// @brief Field obstacleWidth, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_obstacleWidth, put = __cordl_internal_set_obstacleWidth)) float_t obstacleWidth;

  /// @brief Field rotation, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field startBeat, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_startBeat, put = __cordl_internal_set_startBeat)) float_t startBeat;

  /// @brief Field time, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Field width, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) int32_t width;

  /// @brief Method Deserialize, addr 0x272382c, size 0xe0, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x2723648, size 0x80, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* Init(float_t time, float_t startBeat, float_t endBeat, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float_t duration,
                                                                   int32_t width, int32_t height, ::UnityEngine::Vector3 moveOffset, float_t obstacleWidth, float_t obstacleHeight, float_t rotation);

  static inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x27235e4, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x2723720, size 0x10c, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr float_t const& __cordl_internal_get_endBeat() const;

  constexpr float_t& __cordl_internal_get_endBeat();

  constexpr int32_t const& __cordl_internal_get_height() const;

  constexpr int32_t& __cordl_internal_get_height();

  constexpr int32_t const& __cordl_internal_get_lineIndex() const;

  constexpr int32_t& __cordl_internal_get_lineIndex();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_lineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_lineLayer();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_moveOffset() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_moveOffset();

  constexpr float_t const& __cordl_internal_get_obstacleHeight() const;

  constexpr float_t& __cordl_internal_get_obstacleHeight();

  constexpr float_t const& __cordl_internal_get_obstacleWidth() const;

  constexpr float_t& __cordl_internal_get_obstacleWidth();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr float_t const& __cordl_internal_get_startBeat() const;

  constexpr float_t& __cordl_internal_get_startBeat();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr int32_t const& __cordl_internal_get_width() const;

  constexpr int32_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_endBeat(float_t value);

  constexpr void __cordl_internal_set_height(int32_t value);

  constexpr void __cordl_internal_set_lineIndex(int32_t value);

  constexpr void __cordl_internal_set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_moveOffset(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_obstacleHeight(float_t value);

  constexpr void __cordl_internal_set_obstacleWidth(float_t value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_startBeat(float_t value);

  constexpr void __cordl_internal_set_time(float_t value);

  constexpr void __cordl_internal_set_width(int32_t value);

  /// @brief Method .ctor, addr 0x27236c8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleSpawnInfoNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleSpawnInfoNetSerializable(ObstacleSpawnInfoNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSpawnInfoNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleSpawnInfoNetSerializable(ObstacleSpawnInfoNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17014 };

  /// @brief Field time, offset: 0x14, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field startBeat, offset: 0x18, size: 0x4, def value: None
  float_t ___startBeat;

  /// @brief Field endBeat, offset: 0x1c, size: 0x4, def value: None
  float_t ___endBeat;

  /// @brief Field lineIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___lineIndex;

  /// @brief Field lineLayer, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___lineLayer;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field width, offset: 0x2c, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x30, size: 0x4, def value: None
  int32_t ___height;

  /// @brief Field moveOffset, offset: 0x34, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___moveOffset;

  /// @brief Field obstacleWidth, offset: 0x40, size: 0x4, def value: None
  float_t ___obstacleWidth;

  /// @brief Field obstacleHeight, offset: 0x44, size: 0x4, def value: None
  float_t ___obstacleHeight;

  /// @brief Field rotation, offset: 0x48, size: 0x4, def value: None
  float_t ___rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___time) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___startBeat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___endBeat) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___lineIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___lineLayer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___width) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___height) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___moveOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___obstacleWidth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___obstacleHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___rotation) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSpawnInfoNetSerializable, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSpawnInfoNetSerializable*, "", "ObstacleSpawnInfoNetSerializable");
