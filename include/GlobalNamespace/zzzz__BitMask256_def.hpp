#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitMask256)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class Object;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
template <typename T> class IBitMask_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct BitMask256;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitMask256);
// Type: ::BitMask256
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14990))
// CS Name: ::BitMask256
struct CORDL_TYPE BitMask256 {
public:
  // Declarations
  __declspec(property(get = get_bitCount)) int32_t bitCount;

  /// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>"
  constexpr operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMask256>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BitMask256>*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>*();

  /// @brief Method get_bitCount, addr 0x12a1000, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_bitCount();

  /// @brief Method get_maxValue, addr 0x12a1008, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 get_maxValue();

  /// @brief Method .ctor, addr 0x12a1014, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t d0, uint64_t d1, uint64_t d2, uint64_t d3);

  /// @brief Method .ctor, addr 0x12a1020, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  /// @brief Method SetBits, addr 0x12a102c, size 0xcc, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BitMask256 SetBits(int32_t offset, uint64_t bits);

  /// @brief Method GetBits, addr 0x12a10f8, size 0x160, virtual true, abstract: false, final true
  inline uint64_t GetBits(int32_t offset, int32_t count);

  /// @brief Method op_BitwiseOr, addr 0x12a1258, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_BitwiseOr(ByRef<::GlobalNamespace::BitMask256> a, ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_BitwiseAnd, addr 0x12a1270, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_BitwiseAnd(ByRef<::GlobalNamespace::BitMask256> a, ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_ExclusiveOr, addr 0x12a1288, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_ExclusiveOr(ByRef<::GlobalNamespace::BitMask256> a, ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_LeftShift, addr 0x12a12a0, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_LeftShift(ByRef<::GlobalNamespace::BitMask256> a, int32_t bits);

  /// @brief Method op_RightShift, addr 0x12a12f8, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_RightShift(ByRef<::GlobalNamespace::BitMask256> a, int32_t bits);

  /// @brief Method op_Equality, addr 0x12a1350, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Equality(ByRef<::GlobalNamespace::BitMask256> a, ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_Inequality, addr 0x12a139c, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Inequality(ByRef<::GlobalNamespace::BitMask256> a, ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_Implicit, addr 0x12a13e8, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_Implicit___GlobalNamespace__BitMask256(uint64_t value);

  /// @brief Method Serialize, addr 0x12a13f4, size 0x60, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method CreateFromSerializedData, addr 0x12a1454, size 0x2c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BitMask256 CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x12a1480, size 0x6c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method ToString, addr 0x12a14ec, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Equals, addr 0x12a15c0, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BitMask256 other);

  /// @brief Method Equals, addr 0x12a160c, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x12a16b4, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "_d0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d2", ty:
  // "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d3", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr BitMask256(uint64_t _d0, uint64_t _d1, uint64_t _d2, uint64_t _d3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitMask256();

  /// @brief Field _d0, offset: 0x0, size: 0x8, def value: None
  uint64_t _d0;

  /// @brief Field _d1, offset: 0x8, size: 0x8, def value: None
  uint64_t _d1;

  /// @brief Field _d2, offset: 0x10, size: 0x8, def value: None
  uint64_t _d2;

  /// @brief Field _d3, offset: 0x18, size: 0x8, def value: None
  uint64_t _d3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BitMask256, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMask256, _d0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMask256, _d1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMask256, _d2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMask256, _d3) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMask256, "", "BitMask256");
