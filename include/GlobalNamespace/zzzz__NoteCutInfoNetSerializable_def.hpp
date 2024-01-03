#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "GlobalNamespace/zzzz__QuaternionSerializable_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutInfoNetSerializable)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutInfoNetSerializable);
// Type: ::NoteCutInfoNetSerializable
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15041)), TypeDefinitionIndex(TypeDefinitionIndex(14752)), TypeDefinitionIndex(TypeDefinitionIndex(14760)),
// TypeDefinitionIndex(TypeDefinitionIndex(15039)), TypeDefinitionIndex(TypeDefinitionIndex(15033)), TypeDefinitionIndex(TypeDefinitionIndex(14757))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(15026)) CS Name: ::NoteCutInfoNetSerializable*
class CORDL_TYPE NoteCutInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field saberSpeed, offset 0x14, size 0x4
  __declspec(property(get = __get_saberSpeed, put = __set_saberSpeed)) float_t saberSpeed;

  /// @brief Field cutWasOk, offset 0x18, size 0x1
  __declspec(property(get = __get_cutWasOk, put = __set_cutWasOk)) bool cutWasOk;

  /// @brief Field saberDir, offset 0x1c, size 0xc
  __declspec(property(get = __get_saberDir, put = __set_saberDir))::GlobalNamespace::Vector3Serializable saberDir;

  /// @brief Field cutPoint, offset 0x28, size 0xc
  __declspec(property(get = __get_cutPoint, put = __set_cutPoint))::GlobalNamespace::Vector3Serializable cutPoint;

  /// @brief Field cutNormal, offset 0x34, size 0xc
  __declspec(property(get = __get_cutNormal, put = __set_cutNormal))::GlobalNamespace::Vector3Serializable cutNormal;

  /// @brief Field notePosition, offset 0x40, size 0xc
  __declspec(property(get = __get_notePosition, put = __set_notePosition))::GlobalNamespace::Vector3Serializable notePosition;

  /// @brief Field noteScale, offset 0x4c, size 0xc
  __declspec(property(get = __get_noteScale, put = __set_noteScale))::GlobalNamespace::Vector3Serializable noteScale;

  /// @brief Field noteRotation, offset 0x58, size 0xc
  __declspec(property(get = __get_noteRotation, put = __set_noteRotation))::GlobalNamespace::QuaternionSerializable noteRotation;

  /// @brief Field gameplayType, offset 0x64, size 0x4
  __declspec(property(get = __get_gameplayType, put = __set_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  /// @brief Field colorType, offset 0x68, size 0x4
  __declspec(property(get = __get_colorType, put = __set_colorType))::GlobalNamespace::ColorType colorType;

  /// @brief Field noteTime, offset 0x6c, size 0x4
  __declspec(property(get = __get_noteTime, put = __set_noteTime)) float_t noteTime;

  /// @brief Field noteLineIndex, offset 0x70, size 0x4
  __declspec(property(get = __get_noteLineIndex, put = __set_noteLineIndex)) int32_t noteLineIndex;

  /// @brief Field lineLayer, offset 0x74, size 0x4
  __declspec(property(get = __get_lineLayer, put = __set_lineLayer))::GlobalNamespace::NoteLineLayer lineLayer;

  /// @brief Field timeToNextColorNote, offset 0x78, size 0x4
  __declspec(property(get = __get_timeToNextColorNote, put = __set_timeToNextColorNote)) float_t timeToNextColorNote;

  /// @brief Field moveVec, offset 0x7c, size 0xc
  __declspec(property(get = __get_moveVec, put = __set_moveVec))::GlobalNamespace::Vector3Serializable moveVec;

  constexpr float_t& __get_saberSpeed();

  constexpr float_t const& __get_saberSpeed() const;

  constexpr void __set_saberSpeed(float_t value);

  constexpr bool& __get_cutWasOk();

  constexpr bool const& __get_cutWasOk() const;

  constexpr void __set_cutWasOk(bool value);

  constexpr ::GlobalNamespace::Vector3Serializable& __get_saberDir();

  constexpr ::GlobalNamespace::Vector3Serializable const& __get_saberDir() const;

  constexpr void __set_saberDir(::GlobalNamespace::Vector3Serializable value);

  constexpr ::GlobalNamespace::Vector3Serializable& __get_cutPoint();

  constexpr ::GlobalNamespace::Vector3Serializable const& __get_cutPoint() const;

  constexpr void __set_cutPoint(::GlobalNamespace::Vector3Serializable value);

  constexpr ::GlobalNamespace::Vector3Serializable& __get_cutNormal();

  constexpr ::GlobalNamespace::Vector3Serializable const& __get_cutNormal() const;

  constexpr void __set_cutNormal(::GlobalNamespace::Vector3Serializable value);

  constexpr ::GlobalNamespace::Vector3Serializable& __get_notePosition();

  constexpr ::GlobalNamespace::Vector3Serializable const& __get_notePosition() const;

  constexpr void __set_notePosition(::GlobalNamespace::Vector3Serializable value);

  constexpr ::GlobalNamespace::Vector3Serializable& __get_noteScale();

  constexpr ::GlobalNamespace::Vector3Serializable const& __get_noteScale() const;

  constexpr void __set_noteScale(::GlobalNamespace::Vector3Serializable value);

  constexpr ::GlobalNamespace::QuaternionSerializable& __get_noteRotation();

  constexpr ::GlobalNamespace::QuaternionSerializable const& __get_noteRotation() const;

  constexpr void __set_noteRotation(::GlobalNamespace::QuaternionSerializable value);

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __get_gameplayType();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __get_gameplayType() const;

  constexpr void __set_gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr ::GlobalNamespace::ColorType& __get_colorType();

  constexpr ::GlobalNamespace::ColorType const& __get_colorType() const;

  constexpr void __set_colorType(::GlobalNamespace::ColorType value);

  constexpr float_t& __get_noteTime();

  constexpr float_t const& __get_noteTime() const;

  constexpr void __set_noteTime(float_t value);

  constexpr int32_t& __get_noteLineIndex();

  constexpr int32_t const& __get_noteLineIndex() const;

  constexpr void __set_noteLineIndex(int32_t value);

  constexpr ::GlobalNamespace::NoteLineLayer& __get_lineLayer();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get_lineLayer() const;

  constexpr void __set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr float_t& __get_timeToNextColorNote();

  constexpr float_t const& __get_timeToNextColorNote() const;

  constexpr void __set_timeToNextColorNote(float_t value);

  constexpr ::GlobalNamespace::Vector3Serializable& __get_moveVec();

  constexpr ::GlobalNamespace::Vector3Serializable const& __get_moveVec() const;

  constexpr void __set_moveVec(::GlobalNamespace::Vector3Serializable value);

  /// @brief Method Obtain, addr 0x12a4288, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteCutInfoNetSerializable* Obtain();

  /// @brief Method Deserialize, addr 0x12a42ec, size 0x118, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Serialize, addr 0x12a44cc, size 0x104, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  static inline ::GlobalNamespace::NoteCutInfoNetSerializable* New_ctor();

  /// @brief Method .ctor, addr 0x12a4678, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x12a46d8, size 0xe4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutInfoNetSerializable* Init(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteData* noteData, ::UnityEngine::Vector3 notePosition,
                                                             ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale, ::UnityEngine::Vector3 moveVec);

  /// @brief Method Init, addr 0x12a47bc, size 0x224, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutInfoNetSerializable* Init(float_t saberSpeed, bool cutWasOk, ::UnityEngine::Vector3 saberDir, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal,
                                                             ::GlobalNamespace::__NoteData__GameplayType gameplayType, ::GlobalNamespace::ColorType colorType,
                                                             ::GlobalNamespace::NoteLineLayer lineLayer, int32_t noteLineIndex, float_t noteTime, float_t timeToNextColorNote,
                                                             ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale,
                                                             ::UnityEngine::Vector3 moveVec);

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutInfoNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutInfoNetSerializable(NoteCutInfoNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutInfoNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutInfoNetSerializable(NoteCutInfoNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutInfoNetSerializable();

public:
  /// @brief Field saberSpeed, offset: 0x14, size: 0x4, def value: None
  float_t ___saberSpeed;

  /// @brief Field cutWasOk, offset: 0x18, size: 0x1, def value: None
  bool ___cutWasOk;

  /// @brief Field saberDir, offset: 0x1c, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___saberDir;

  /// @brief Field cutPoint, offset: 0x28, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___cutPoint;

  /// @brief Field cutNormal, offset: 0x34, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___cutNormal;

  /// @brief Field notePosition, offset: 0x40, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___notePosition;

  /// @brief Field noteScale, offset: 0x4c, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___noteScale;

  /// @brief Field noteRotation, offset: 0x58, size: 0xc, def value: None
  ::GlobalNamespace::QuaternionSerializable ___noteRotation;

  /// @brief Field gameplayType, offset: 0x64, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__GameplayType ___gameplayType;

  /// @brief Field colorType, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  /// @brief Field noteTime, offset: 0x6c, size: 0x4, def value: None
  float_t ___noteTime;

  /// @brief Field noteLineIndex, offset: 0x70, size: 0x4, def value: None
  int32_t ___noteLineIndex;

  /// @brief Field lineLayer, offset: 0x74, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___lineLayer;

  /// @brief Field timeToNextColorNote, offset: 0x78, size: 0x4, def value: None
  float_t ___timeToNextColorNote;

  /// @brief Field moveVec, offset: 0x7c, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___moveVec;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutInfoNetSerializable, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___saberSpeed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___cutWasOk) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___saberDir) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___cutPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___cutNormal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___notePosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___noteScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___noteRotation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___gameplayType) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___colorType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___noteTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___noteLineIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___lineLayer) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___timeToNextColorNote) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfoNetSerializable, ___moveVec) == 0x7c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutInfoNetSerializable*, "", "NoteCutInfoNetSerializable");
