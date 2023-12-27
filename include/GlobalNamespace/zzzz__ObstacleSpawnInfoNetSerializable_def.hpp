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
namespace UnityEngine {
struct Vector3;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct NoteLineLayer;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15033)), TypeDefinitionIndex(TypeDefinitionIndex(14760)), TypeDefinitionIndex(TypeDefinitionIndex(15039))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15029))
// CS Name: ::ObstacleSpawnInfoNetSerializable*
class CORDL_TYPE ObstacleSpawnInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field time, offset 0x14, size 0x4
  __declspec(property(get = __get_time, put = __set_time)) float_t time;

  /// @brief Field lineIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_lineIndex, put = __set_lineIndex)) int32_t lineIndex;

  /// @brief Field lineLayer, offset 0x1c, size 0x4
  __declspec(property(get = __get_lineLayer, put = __set_lineLayer))::GlobalNamespace::NoteLineLayer lineLayer;

  /// @brief Field duration, offset 0x20, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

  /// @brief Field width, offset 0x24, size 0x4
  __declspec(property(get = __get_width, put = __set_width)) int32_t width;

  /// @brief Field height, offset 0x28, size 0x4
  __declspec(property(get = __get_height, put = __set_height)) int32_t height;

  /// @brief Field moveStartPos, offset 0x2c, size 0xc
  __declspec(property(get = __get_moveStartPos, put = __set_moveStartPos))::GlobalNamespace::Vector3Serializable moveStartPos;

  /// @brief Field moveEndPos, offset 0x38, size 0xc
  __declspec(property(get = __get_moveEndPos, put = __set_moveEndPos))::GlobalNamespace::Vector3Serializable moveEndPos;

  /// @brief Field jumpEndPos, offset 0x44, size 0xc
  __declspec(property(get = __get_jumpEndPos, put = __set_jumpEndPos))::GlobalNamespace::Vector3Serializable jumpEndPos;

  /// @brief Field obstacleHeight, offset 0x50, size 0x4
  __declspec(property(get = __get_obstacleHeight, put = __set_obstacleHeight)) float_t obstacleHeight;

  /// @brief Field moveDuration, offset 0x54, size 0x4
  __declspec(property(get = __get_moveDuration, put = __set_moveDuration)) float_t moveDuration;

  /// @brief Field jumpDuration, offset 0x58, size 0x4
  __declspec(property(get = __get_jumpDuration, put = __set_jumpDuration)) float_t jumpDuration;

  /// @brief Field noteLinesDistance, offset 0x5c, size 0x4
  __declspec(property(get = __get_noteLinesDistance, put = __set_noteLinesDistance)) float_t noteLinesDistance;

  /// @brief Field rotation, offset 0x60, size 0x4
  __declspec(property(get = __get_rotation, put = __set_rotation)) float_t rotation;

  constexpr float_t& __get_time();

  constexpr float_t const& __get_time() const;

  constexpr void __set_time(float_t value);

  constexpr int32_t& __get_lineIndex();

  constexpr int32_t const& __get_lineIndex() const;

  constexpr void __set_lineIndex(int32_t value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get_lineLayer();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get_lineLayer() const;

  constexpr void __set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  constexpr int32_t& __get_width();

  constexpr int32_t const& __get_width() const;

  constexpr void __set_width(int32_t value);

  constexpr int32_t& __get_height();

  constexpr int32_t const& __get_height() const;

  constexpr void __set_height(int32_t value);

  constexpr ::GlobalNamespace::Vector3Serializable& __get_moveStartPos();

  constexpr ::GlobalNamespace::Vector3Serializable const& __get_moveStartPos() const;

  constexpr void __set_moveStartPos(::GlobalNamespace::Vector3Serializable value);

  constexpr ::GlobalNamespace::Vector3Serializable& __get_moveEndPos();

  constexpr ::GlobalNamespace::Vector3Serializable const& __get_moveEndPos() const;

  constexpr void __set_moveEndPos(::GlobalNamespace::Vector3Serializable value);

  constexpr ::GlobalNamespace::Vector3Serializable& __get_jumpEndPos();

  constexpr ::GlobalNamespace::Vector3Serializable const& __get_jumpEndPos() const;

  constexpr void __set_jumpEndPos(::GlobalNamespace::Vector3Serializable value);

  constexpr float_t& __get_obstacleHeight();

  constexpr float_t const& __get_obstacleHeight() const;

  constexpr void __set_obstacleHeight(float_t value);

  constexpr float_t& __get_moveDuration();

  constexpr float_t const& __get_moveDuration() const;

  constexpr void __set_moveDuration(float_t value);

  constexpr float_t& __get_jumpDuration();

  constexpr float_t const& __get_jumpDuration() const;

  constexpr void __set_jumpDuration(float_t value);

  constexpr float_t& __get_noteLinesDistance();

  constexpr float_t const& __get_noteLinesDistance() const;

  constexpr void __set_noteLinesDistance(float_t value);

  constexpr float_t& __get_rotation();

  constexpr float_t const& __get_rotation() const;

  constexpr void __set_rotation(float_t value);

  /// @brief Method Obtain addr 0x12a51a8 size 0x64 virtual false final false
  static inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* Obtain();

  /// @brief Method Init addr 0x12a520c size 0x120 virtual false final false
  inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* Init(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width, int32_t height,
                                                                   ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight,
                                                                   float_t moveDuration, float_t jumpDuration, float_t noteLinesDistance, float_t rotation);

  static inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* New_ctor();

  /// @brief Method .ctor addr 0x12a532c size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method Serialize addr 0x12a5384 size 0x104 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x12a5488 size 0x118 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleSpawnInfoNetSerializable(ObstacleSpawnInfoNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSpawnInfoNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleSpawnInfoNetSerializable(ObstacleSpawnInfoNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleSpawnInfoNetSerializable();

public:
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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSpawnInfoNetSerializable*, "", "ObstacleSpawnInfoNetSerializable");
