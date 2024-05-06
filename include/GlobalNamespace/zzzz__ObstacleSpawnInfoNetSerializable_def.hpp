#pragma once
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
// Type: ::ObstacleSpawnInfoNetSerializable
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleSpawnInfoNetSerializable*
class CORDL_TYPE ObstacleSpawnInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field duration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field height, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) int32_t height;

  /// @brief Field jumpDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_jumpDuration, put = __cordl_internal_set_jumpDuration)) float_t jumpDuration;

  /// @brief Field jumpEndPos, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_jumpEndPos, put = __cordl_internal_set_jumpEndPos))::GlobalNamespace::Vector3Serializable jumpEndPos;

  /// @brief Field lineIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lineIndex, put = __cordl_internal_set_lineIndex)) int32_t lineIndex;

  /// @brief Field lineLayer, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_lineLayer, put = __cordl_internal_set_lineLayer))::GlobalNamespace::NoteLineLayer lineLayer;

  /// @brief Field moveDuration, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_moveDuration, put = __cordl_internal_set_moveDuration)) float_t moveDuration;

  /// @brief Field moveEndPos, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_moveEndPos, put = __cordl_internal_set_moveEndPos))::GlobalNamespace::Vector3Serializable moveEndPos;

  /// @brief Field moveStartPos, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_moveStartPos, put = __cordl_internal_set_moveStartPos))::GlobalNamespace::Vector3Serializable moveStartPos;

  /// @brief Field noteLinesDistance, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLinesDistance, put = __cordl_internal_set_noteLinesDistance)) float_t noteLinesDistance;

  /// @brief Field obstacleHeight, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_obstacleHeight, put = __cordl_internal_set_obstacleHeight)) float_t obstacleHeight;

  /// @brief Field rotation, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field time, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Field width, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) int32_t width;

  /// @brief Method Deserialize, addr 0x1505bdc, size 0x118, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x1505960, size 0x120, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* Init(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width, int32_t height,
                                                                   ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight,
                                                                   float_t moveDuration, float_t jumpDuration, float_t noteLinesDistance, float_t rotation);

  static inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x15058fc, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x1505ad8, size 0x104, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr int32_t const& __cordl_internal_get_height() const;

  constexpr int32_t& __cordl_internal_get_height();

  constexpr float_t const& __cordl_internal_get_jumpDuration() const;

  constexpr float_t& __cordl_internal_get_jumpDuration();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_jumpEndPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_jumpEndPos();

  constexpr int32_t const& __cordl_internal_get_lineIndex() const;

  constexpr int32_t& __cordl_internal_get_lineIndex();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_lineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_lineLayer();

  constexpr float_t const& __cordl_internal_get_moveDuration() const;

  constexpr float_t& __cordl_internal_get_moveDuration();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_moveEndPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_moveEndPos();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_moveStartPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_moveStartPos();

  constexpr float_t const& __cordl_internal_get_noteLinesDistance() const;

  constexpr float_t& __cordl_internal_get_noteLinesDistance();

  constexpr float_t const& __cordl_internal_get_obstacleHeight() const;

  constexpr float_t& __cordl_internal_get_obstacleHeight();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr int32_t const& __cordl_internal_get_width() const;

  constexpr int32_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_height(int32_t value);

  constexpr void __cordl_internal_set_jumpDuration(float_t value);

  constexpr void __cordl_internal_set_jumpEndPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_lineIndex(int32_t value);

  constexpr void __cordl_internal_set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_moveDuration(float_t value);

  constexpr void __cordl_internal_set_moveEndPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_moveStartPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_noteLinesDistance(float_t value);

  constexpr void __cordl_internal_set_obstacleHeight(float_t value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_time(float_t value);

  constexpr void __cordl_internal_set_width(int32_t value);

  /// @brief Method .ctor, addr 0x1505a80, size 0x58, virtual false, abstract: false, final false
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

  /// @brief Field time, offset: 0x14, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field lineIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___lineIndex;

  /// @brief Field lineLayer, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___lineLayer;

  /// @brief Field duration, offset: 0x20, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field width, offset: 0x24, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x28, size: 0x4, def value: None
  int32_t ___height;

  /// @brief Field moveStartPos, offset: 0x2c, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___moveStartPos;

  /// @brief Field moveEndPos, offset: 0x38, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___moveEndPos;

  /// @brief Field jumpEndPos, offset: 0x44, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___jumpEndPos;

  /// @brief Field obstacleHeight, offset: 0x50, size: 0x4, def value: None
  float_t ___obstacleHeight;

  /// @brief Field moveDuration, offset: 0x54, size: 0x4, def value: None
  float_t ___moveDuration;

  /// @brief Field jumpDuration, offset: 0x58, size: 0x4, def value: None
  float_t ___jumpDuration;

  /// @brief Field noteLinesDistance, offset: 0x5c, size: 0x4, def value: None
  float_t ___noteLinesDistance;

  /// @brief Field rotation, offset: 0x60, size: 0x4, def value: None
  float_t ___rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSpawnInfoNetSerializable, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___time) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___lineIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___lineLayer) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___width) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___height) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___moveStartPos) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___moveEndPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___jumpEndPos) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___obstacleHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___moveDuration) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___jumpDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___noteLinesDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnInfoNetSerializable, ___rotation) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSpawnInfoNetSerializable*, "", "ObstacleSpawnInfoNetSerializable");
