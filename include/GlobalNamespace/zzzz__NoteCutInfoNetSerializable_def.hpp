#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutInfoNetSerializable.hpp"
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
// CS Name: ::NoteCutInfoNetSerializable*
class CORDL_TYPE NoteCutInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field colorType, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType))::GlobalNamespace::ColorType colorType;

  /// @brief Field cutNormal, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_cutNormal, put = __cordl_internal_set_cutNormal))::GlobalNamespace::Vector3Serializable cutNormal;

  /// @brief Field cutPoint, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_cutPoint, put = __cordl_internal_set_cutPoint))::GlobalNamespace::Vector3Serializable cutPoint;

  /// @brief Field cutWasOk, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_cutWasOk, put = __cordl_internal_set_cutWasOk)) bool cutWasOk;

  /// @brief Field gameplayType, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_gameplayType, put = __cordl_internal_set_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  /// @brief Field lineLayer, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_lineLayer, put = __cordl_internal_set_lineLayer))::GlobalNamespace::NoteLineLayer lineLayer;

  /// @brief Field moveVec, offset 0x7c, size 0xc
  __declspec(property(get = __cordl_internal_get_moveVec, put = __cordl_internal_set_moveVec))::GlobalNamespace::Vector3Serializable moveVec;

  /// @brief Field noteLineIndex, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLineIndex, put = __cordl_internal_set_noteLineIndex)) int32_t noteLineIndex;

  /// @brief Field notePosition, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_notePosition, put = __cordl_internal_set_notePosition))::GlobalNamespace::Vector3Serializable notePosition;

  /// @brief Field noteRotation, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_noteRotation, put = __cordl_internal_set_noteRotation))::GlobalNamespace::QuaternionSerializable noteRotation;

  /// @brief Field noteScale, offset 0x4c, size 0xc
  __declspec(property(get = __cordl_internal_get_noteScale, put = __cordl_internal_set_noteScale))::GlobalNamespace::Vector3Serializable noteScale;

  /// @brief Field noteTime, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_noteTime, put = __cordl_internal_set_noteTime)) float_t noteTime;

  /// @brief Field saberDir, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_saberDir, put = __cordl_internal_set_saberDir))::GlobalNamespace::Vector3Serializable saberDir;

  /// @brief Field saberSpeed, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_saberSpeed, put = __cordl_internal_set_saberSpeed)) float_t saberSpeed;

  /// @brief Field timeToNextColorNote, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_timeToNextColorNote, put = __cordl_internal_set_timeToNextColorNote)) float_t timeToNextColorNote;

  /// @brief Method Deserialize, addr 0x1515bfc, size 0x118, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x1515fe8, size 0xe4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutInfoNetSerializable* Init(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteData* noteData, ::UnityEngine::Vector3 notePosition,
                                                             ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale, ::UnityEngine::Vector3 moveVec);

  /// @brief Method Init, addr 0x15160cc, size 0x224, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutInfoNetSerializable* Init(float_t saberSpeed, bool cutWasOk, ::UnityEngine::Vector3 saberDir, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal,
                                                             ::GlobalNamespace::__NoteData__GameplayType gameplayType, ::GlobalNamespace::ColorType colorType,
                                                             ::GlobalNamespace::NoteLineLayer lineLayer, int32_t noteLineIndex, float_t noteTime, float_t timeToNextColorNote,
                                                             ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale,
                                                             ::UnityEngine::Vector3 moveVec);

  static inline ::GlobalNamespace::NoteCutInfoNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x1515b98, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteCutInfoNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x1515ddc, size 0x104, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get_colorType();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_cutNormal() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_cutNormal();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_cutPoint() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_cutPoint();

  constexpr bool const& __cordl_internal_get_cutWasOk() const;

  constexpr bool& __cordl_internal_get_cutWasOk();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __cordl_internal_get_gameplayType() const;

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __cordl_internal_get_gameplayType();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_lineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_lineLayer();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_moveVec() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_moveVec();

  constexpr int32_t const& __cordl_internal_get_noteLineIndex() const;

  constexpr int32_t& __cordl_internal_get_noteLineIndex();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_notePosition() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_notePosition();

  constexpr ::GlobalNamespace::QuaternionSerializable const& __cordl_internal_get_noteRotation() const;

  constexpr ::GlobalNamespace::QuaternionSerializable& __cordl_internal_get_noteRotation();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_noteScale() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_noteScale();

  constexpr float_t const& __cordl_internal_get_noteTime() const;

  constexpr float_t& __cordl_internal_get_noteTime();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_saberDir() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_saberDir();

  constexpr float_t const& __cordl_internal_get_saberSpeed() const;

  constexpr float_t& __cordl_internal_get_saberSpeed();

  constexpr float_t const& __cordl_internal_get_timeToNextColorNote() const;

  constexpr float_t& __cordl_internal_get_timeToNextColorNote();

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set_cutNormal(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_cutPoint(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_cutWasOk(bool value);

  constexpr void __cordl_internal_set_gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr void __cordl_internal_set_lineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_moveVec(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_noteLineIndex(int32_t value);

  constexpr void __cordl_internal_set_notePosition(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_noteRotation(::GlobalNamespace::QuaternionSerializable value);

  constexpr void __cordl_internal_set_noteScale(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_noteTime(float_t value);

  constexpr void __cordl_internal_set_saberDir(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_saberSpeed(float_t value);

  constexpr void __cordl_internal_set_timeToNextColorNote(float_t value);

  /// @brief Method .ctor, addr 0x1515f88, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutInfoNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutInfoNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutInfoNetSerializable(NoteCutInfoNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutInfoNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutInfoNetSerializable(NoteCutInfoNetSerializable const&) = delete;

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
