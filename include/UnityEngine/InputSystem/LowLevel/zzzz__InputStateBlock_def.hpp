#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateBlock)
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateBlock);
// Type: UnityEngine.InputSystem.LowLevel::InputStateBlock
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputStateBlock
struct CORDL_TYPE InputStateBlock {
public:
  // Declarations
  /// @brief Field FormatBit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatBit, put = setStaticF_FormatBit))::UnityEngine::InputSystem::Utilities::FourCC FormatBit;

  /// @brief Field FormatByte, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatByte, put = setStaticF_FormatByte))::UnityEngine::InputSystem::Utilities::FourCC FormatByte;

  /// @brief Field FormatDouble, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatDouble, put = setStaticF_FormatDouble))::UnityEngine::InputSystem::Utilities::FourCC FormatDouble;

  /// @brief Field FormatFloat, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatFloat, put = setStaticF_FormatFloat))::UnityEngine::InputSystem::Utilities::FourCC FormatFloat;

  /// @brief Field FormatInt, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatInt, put = setStaticF_FormatInt))::UnityEngine::InputSystem::Utilities::FourCC FormatInt;

  /// @brief Field FormatInvalid, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatInvalid, put = setStaticF_FormatInvalid))::UnityEngine::InputSystem::Utilities::FourCC FormatInvalid;

  /// @brief Field FormatLong, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatLong, put = setStaticF_FormatLong))::UnityEngine::InputSystem::Utilities::FourCC FormatLong;

  /// @brief Field FormatPose, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatPose, put = setStaticF_FormatPose))::UnityEngine::InputSystem::Utilities::FourCC FormatPose;

  /// @brief Field FormatQuaternion, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatQuaternion, put = setStaticF_FormatQuaternion))::UnityEngine::InputSystem::Utilities::FourCC FormatQuaternion;

  /// @brief Field FormatSBit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatSBit, put = setStaticF_FormatSBit))::UnityEngine::InputSystem::Utilities::FourCC FormatSBit;

  /// @brief Field FormatSByte, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatSByte, put = setStaticF_FormatSByte))::UnityEngine::InputSystem::Utilities::FourCC FormatSByte;

  /// @brief Field FormatShort, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatShort, put = setStaticF_FormatShort))::UnityEngine::InputSystem::Utilities::FourCC FormatShort;

  /// @brief Field FormatUInt, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatUInt, put = setStaticF_FormatUInt))::UnityEngine::InputSystem::Utilities::FourCC FormatUInt;

  /// @brief Field FormatULong, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatULong, put = setStaticF_FormatULong))::UnityEngine::InputSystem::Utilities::FourCC FormatULong;

  /// @brief Field FormatUShort, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatUShort, put = setStaticF_FormatUShort))::UnityEngine::InputSystem::Utilities::FourCC FormatUShort;

  /// @brief Field FormatVector2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatVector2, put = setStaticF_FormatVector2))::UnityEngine::InputSystem::Utilities::FourCC FormatVector2;

  /// @brief Field FormatVector2Byte, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatVector2Byte, put = setStaticF_FormatVector2Byte))::UnityEngine::InputSystem::Utilities::FourCC FormatVector2Byte;

  /// @brief Field FormatVector2Short, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatVector2Short, put = setStaticF_FormatVector2Short))::UnityEngine::InputSystem::Utilities::FourCC FormatVector2Short;

  /// @brief Field FormatVector3, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatVector3, put = setStaticF_FormatVector3))::UnityEngine::InputSystem::Utilities::FourCC FormatVector3;

  /// @brief Field FormatVector3Byte, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatVector3Byte, put = setStaticF_FormatVector3Byte))::UnityEngine::InputSystem::Utilities::FourCC FormatVector3Byte;

  /// @brief Field FormatVector3Short, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FormatVector3Short, put = setStaticF_FormatVector3Short))::UnityEngine::InputSystem::Utilities::FourCC FormatVector3Short;

  __declspec(property(get = get_alignedSizeInBytes)) uint32_t alignedSizeInBytes;

  __declspec(property(get = get_bitOffset, put = set_bitOffset)) uint32_t bitOffset;

  __declspec(property(get = get_byteOffset, put = set_byteOffset)) uint32_t byteOffset;

  __declspec(property(get = get_effectiveBitOffset)) uint32_t effectiveBitOffset;

  __declspec(property(get = get_effectiveByteOffset)) uint32_t effectiveByteOffset;

  __declspec(property(get = get_format, put = set_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  __declspec(property(get = get_sizeInBits, put = set_sizeInBits)) uint32_t sizeInBits;

  /// @brief Method CopyToFrom, addr 0x319a554, size 0x8c, virtual false, abstract: false, final false
  inline void CopyToFrom(::cordl_internals::Ptr<void> toStatePtr, ::cordl_internals::Ptr<void> fromStatePtr);

  /// @brief Method FloatToPrimitiveValue, addr 0x31996d4, size 0x4a0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FloatToPrimitiveValue(float_t value);

  /// @brief Method GetPrimitiveFormatFromType, addr 0x3198718, size 0x4dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC GetPrimitiveFormatFromType(::System::Type* type);

  /// @brief Method GetSizeOfPrimitiveFormatInBits, addr 0x3198430, size 0x2e8, virtual false, abstract: false, final false
  static inline int32_t GetSizeOfPrimitiveFormatInBits(::UnityEngine::InputSystem::Utilities::FourCC type);

  /// @brief Method ReadDouble, addr 0x3199b74, size 0x2fc, virtual false, abstract: false, final false
  inline double_t ReadDouble(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadFloat, addr 0x3198fd8, size 0x2fc, virtual false, abstract: false, final false
  inline float_t ReadFloat(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadInt, addr 0x3198c4c, size 0x1d0, virtual false, abstract: false, final false
  inline int32_t ReadInt(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method Write, addr 0x319a294, size 0x2c0, virtual false, abstract: false, final false
  inline void Write(::cordl_internals::Ptr<void> statePtr, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method WriteDouble, addr 0x3199e70, size 0x424, virtual false, abstract: false, final false
  inline void WriteDouble(::cordl_internals::Ptr<void> statePtr, double_t value);

  /// @brief Method WriteFloat, addr 0x31992d4, size 0x400, virtual false, abstract: false, final false
  inline void WriteFloat(::cordl_internals::Ptr<void> statePtr, float_t value);

  /// @brief Method WriteInt, addr 0x3198e1c, size 0x1bc, virtual false, abstract: false, final false
  inline void WriteInt(::cordl_internals::Ptr<void> statePtr, int32_t value);

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatBit();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatByte();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatDouble();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatFloat();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatInt();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatInvalid();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatLong();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatPose();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatQuaternion();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatSBit();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatSByte();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatShort();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatUInt();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatULong();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatUShort();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatVector2();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatVector2Byte();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatVector2Short();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatVector3();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatVector3Byte();

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_FormatVector3Short();

  /// @brief Method get_alignedSizeInBytes, addr 0x318f9dc, size 0x10, virtual false, abstract: false, final false
  inline uint32_t get_alignedSizeInBytes();

  /// @brief Method get_bitOffset, addr 0x3198c14, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_bitOffset();

  /// @brief Method get_byteOffset, addr 0x3198c04, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_byteOffset();

  /// @brief Method get_effectiveBitOffset, addr 0x3198c40, size 0xc, virtual false, abstract: false, final false
  inline uint32_t get_effectiveBitOffset();

  /// @brief Method get_effectiveByteOffset, addr 0x3198c34, size 0xc, virtual false, abstract: false, final false
  inline uint32_t get_effectiveByteOffset();

  /// @brief Method get_format, addr 0x3198bf4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_sizeInBits, addr 0x3198c24, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_sizeInBits();

  static inline void setStaticF_FormatBit(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatByte(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatDouble(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatFloat(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatInt(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatInvalid(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatLong(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatPose(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatQuaternion(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatSBit(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatSByte(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatShort(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatUInt(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatULong(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatUShort(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatVector2(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatVector2Byte(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatVector2Short(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatVector3(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatVector3Byte(::UnityEngine::InputSystem::Utilities::FourCC value);

  static inline void setStaticF_FormatVector3Short(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method set_bitOffset, addr 0x3198c1c, size 0x8, virtual false, abstract: false, final false
  inline void set_bitOffset(uint32_t value);

  /// @brief Method set_byteOffset, addr 0x3198c0c, size 0x8, virtual false, abstract: false, final false
  inline void set_byteOffset(uint32_t value);

  /// @brief Method set_format, addr 0x3198bfc, size 0x8, virtual false, abstract: false, final false
  inline void set_format(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method set_sizeInBits, addr 0x3198c2c, size 0x8, virtual false, abstract: false, final false
  inline void set_sizeInBits(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateBlock();

  // Ctor Parameters [CppParam { name: "_format_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "m_ByteOffset", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_bitOffset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_sizeInBits_k__BackingField", ty:
  // "uint32_t", modifiers: "", def_value: None }]
  constexpr InputStateBlock(::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField, uint32_t m_ByteOffset, uint32_t _bitOffset_k__BackingField,
                            uint32_t _sizeInBits_k__BackingField) noexcept;

  /// @brief Field <format>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField;

  /// @brief Field m_ByteOffset, offset: 0x4, size: 0x4, def value: None
  uint32_t m_ByteOffset;

  /// @brief Field <bitOffset>k__BackingField, offset: 0x8, size: 0x4, def value: None
  uint32_t _bitOffset_k__BackingField;

  /// @brief Field <sizeInBits>k__BackingField, offset: 0xc, size: 0x4, def value: None
  uint32_t _sizeInBits_k__BackingField;

  /// @brief Field AutomaticOffset offset 0xffffffff size 0x4
  static constexpr uint32_t AutomaticOffset{ static_cast<uint32_t>(0x40f000feu) };

  /// @brief Field InvalidOffset offset 0xffffffff size 0x4
  static constexpr uint32_t InvalidOffset{ static_cast<uint32_t>(0xf000feffu) };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kFormatBit offset 0xffffffff size 0x4
  static constexpr int32_t kFormatBit{ static_cast<int32_t>(0x42495420) };

  /// @brief Field kFormatByte offset 0xffffffff size 0x4
  static constexpr int32_t kFormatByte{ static_cast<int32_t>(0x42595445) };

  /// @brief Field kFormatDouble offset 0xffffffff size 0x4
  static constexpr int32_t kFormatDouble{ static_cast<int32_t>(0x44424c20) };

  /// @brief Field kFormatFloat offset 0xffffffff size 0x4
  static constexpr int32_t kFormatFloat{ static_cast<int32_t>(0x464c5420) };

  /// @brief Field kFormatInt offset 0xffffffff size 0x4
  static constexpr int32_t kFormatInt{ static_cast<int32_t>(0x494e5420) };

  /// @brief Field kFormatInvalid offset 0xffffffff size 0x4
  static constexpr int32_t kFormatInvalid{ static_cast<int32_t>(0x0) };

  /// @brief Field kFormatLong offset 0xffffffff size 0x4
  static constexpr int32_t kFormatLong{ static_cast<int32_t>(0x4c4e4720) };

  /// @brief Field kFormatPose offset 0xffffffff size 0x4
  static constexpr int32_t kFormatPose{ static_cast<int32_t>(0x506f7365) };

  /// @brief Field kFormatQuaternion offset 0xffffffff size 0x4
  static constexpr int32_t kFormatQuaternion{ static_cast<int32_t>(0x51554154) };

  /// @brief Field kFormatSBit offset 0xffffffff size 0x4
  static constexpr int32_t kFormatSBit{ static_cast<int32_t>(0x53424954) };

  /// @brief Field kFormatSByte offset 0xffffffff size 0x4
  static constexpr int32_t kFormatSByte{ static_cast<int32_t>(0x53425954) };

  /// @brief Field kFormatShort offset 0xffffffff size 0x4
  static constexpr int32_t kFormatShort{ static_cast<int32_t>(0x53485254) };

  /// @brief Field kFormatUInt offset 0xffffffff size 0x4
  static constexpr int32_t kFormatUInt{ static_cast<int32_t>(0x55494e54) };

  /// @brief Field kFormatULong offset 0xffffffff size 0x4
  static constexpr int32_t kFormatULong{ static_cast<int32_t>(0x554c4e47) };

  /// @brief Field kFormatUShort offset 0xffffffff size 0x4
  static constexpr int32_t kFormatUShort{ static_cast<int32_t>(0x55534854) };

  /// @brief Field kFormatVector2 offset 0xffffffff size 0x4
  static constexpr int32_t kFormatVector2{ static_cast<int32_t>(0x56454332) };

  /// @brief Field kFormatVector3 offset 0xffffffff size 0x4
  static constexpr int32_t kFormatVector3{ static_cast<int32_t>(0x56454333) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateBlock, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBlock, _format_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBlock, m_ByteOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBlock, _bitOffset_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBlock, _sizeInBits_k__BackingField) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateBlock, "UnityEngine.InputSystem.LowLevel", "InputStateBlock");
