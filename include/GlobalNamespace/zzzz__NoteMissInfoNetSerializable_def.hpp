#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteMissInfoNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteMissInfoNetSerializable)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteMissInfoNetSerializable);
// Dependencies ColorType, NoteLineLayer, PoolableSerializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteMissInfoNetSerializable
class CORDL_TYPE NoteMissInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field <colorType>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__colorType_k__BackingField, put = __cordl_internal_set__colorType_k__BackingField)) ::GlobalNamespace::ColorType _colorType_k__BackingField;

  /// @brief Field <noteLineIndex>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__noteLineIndex_k__BackingField, put = __cordl_internal_set__noteLineIndex_k__BackingField)) int32_t _noteLineIndex_k__BackingField;

  /// @brief Field <noteLineLayer>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__noteLineLayer_k__BackingField,
                      put = __cordl_internal_set__noteLineLayer_k__BackingField)) ::GlobalNamespace::NoteLineLayer _noteLineLayer_k__BackingField;

  /// @brief Field <noteTime>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__noteTime_k__BackingField, put = __cordl_internal_set__noteTime_k__BackingField)) float_t _noteTime_k__BackingField;

  __declspec(property(get = get_colorType, put = set_colorType)) ::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_noteLineIndex, put = set_noteLineIndex)) int32_t noteLineIndex;

  __declspec(property(get = get_noteLineLayer, put = set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer noteLineLayer;

  __declspec(property(get = get_noteTime, put = set_noteTime)) float_t noteTime;

  /// @brief Method Deserialize, addr 0x2722b20, size 0x7c, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x2722cbc, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteMissInfoNetSerializable* Init(::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer lineLayer, int32_t noteLineIndex, float_t noteTime);

  /// @brief Method Init, addr 0x2722c90, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteMissInfoNetSerializable* Init(::GlobalNamespace::NoteData* noteData);

  static inline ::GlobalNamespace::NoteMissInfoNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x2722abc, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteMissInfoNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x2722b9c, size 0x9c, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get__colorType_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get__colorType_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__noteLineIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__noteLineIndex_k__BackingField();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get__noteLineLayer_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get__noteLineLayer_k__BackingField();

  constexpr float_t const& __cordl_internal_get__noteTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__noteTime_k__BackingField();

  constexpr void __cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set__noteLineIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set__noteTime_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x2722c38, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorType, addr 0x2722a7c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorType get_colorType();

  /// @brief Method get_noteLineIndex, addr 0x2722a9c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_noteLineIndex();

  /// @brief Method get_noteLineLayer, addr 0x2722aac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteLineLayer get_noteLineLayer();

  /// @brief Method get_noteTime, addr 0x2722a8c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteTime();

  /// @brief Method set_colorType, addr 0x2722a84, size 0x8, virtual false, abstract: false, final false
  inline void set_colorType(::GlobalNamespace::ColorType value);

  /// @brief Method set_noteLineIndex, addr 0x2722aa4, size 0x8, virtual false, abstract: false, final false
  inline void set_noteLineIndex(int32_t value);

  /// @brief Method set_noteLineLayer, addr 0x2722ab4, size 0x8, virtual false, abstract: false, final false
  inline void set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method set_noteTime, addr 0x2722a94, size 0x8, virtual false, abstract: false, final false
  inline void set_noteTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteMissInfoNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteMissInfoNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteMissInfoNetSerializable(NoteMissInfoNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteMissInfoNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteMissInfoNetSerializable(NoteMissInfoNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17012 };

  /// @brief Field <colorType>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ____colorType_k__BackingField;

  /// @brief Field <noteTime>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____noteTime_k__BackingField;

  /// @brief Field <noteLineIndex>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____noteLineIndex_k__BackingField;

  /// @brief Field <noteLineLayer>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ____noteLineLayer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteMissInfoNetSerializable, ____colorType_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMissInfoNetSerializable, ____noteTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMissInfoNetSerializable, ____noteLineIndex_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMissInfoNetSerializable, ____noteLineLayer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteMissInfoNetSerializable, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteMissInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteMissInfoNetSerializable*, "", "NoteMissInfoNetSerializable");
