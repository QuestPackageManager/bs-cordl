#pragma once
// IWYU pragma private; include "GlobalNamespace/BitMask256.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitMask256)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BitMask256;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitMask256);
// Dependencies IBitMask`1<T>, LiteNetLib.Utils.INetImmutableSerializable`1<T>, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BitMask256
struct CORDL_TYPE BitMask256 {
public:
  // Declarations
  __declspec(property(get = get_bitCount)) int32_t bitCount;

  /// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>"
  constexpr operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMask256>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BitMask256>*();

  /// @brief Method CreateFromSerializedData, addr 0x271f290, size 0x2c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BitMask256 CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x271f2bc, size 0x6c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x271f448, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x271f3fc, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BitMask256 other);

  /// @brief Method GetBits, addr 0x271ef40, size 0x154, virtual true, abstract: false, final true
  inline uint64_t GetBits(int32_t offset, int32_t count);

  /// @brief Method GetHashCode, addr 0x271f4f0, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Serialize, addr 0x271f230, size 0x60, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SetBits, addr 0x271ee70, size 0xd0, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BitMask256 SetBits(int32_t offset, uint64_t bits);

  /// @brief Method ToString, addr 0x271f328, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x271ee58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t d0, uint64_t d1, uint64_t d2, uint64_t d3);

  /// @brief Method .ctor, addr 0x271ee64, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  /// @brief Method get_bitCount, addr 0x271ee44, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_bitCount();

  /// @brief Method get_maxValue, addr 0x271ee4c, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 get_maxValue();

  /// @brief Convert to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>"
  constexpr ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>* i___GlobalNamespace__IBitMask_1___GlobalNamespace__BitMask256_();

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>* i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__BitMask256_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BitMask256>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BitMask256>* i___System__IEquatable_1___GlobalNamespace__BitMask256_();

  /// @brief Method op_BitwiseAnd, addr 0x271f0ac, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_BitwiseAnd(::ByRef<::GlobalNamespace::BitMask256> a, ::ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_BitwiseOr, addr 0x271f094, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_BitwiseOr(::ByRef<::GlobalNamespace::BitMask256> a, ::ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_Equality, addr 0x271f18c, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::GlobalNamespace::BitMask256> a, ::ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_ExclusiveOr, addr 0x271f0c4, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_ExclusiveOr(::ByRef<::GlobalNamespace::BitMask256> a, ::ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_Implicit, addr 0x271f224, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_Implicit___GlobalNamespace__BitMask256(uint64_t value);

  /// @brief Method op_Inequality, addr 0x271f1d8, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::GlobalNamespace::BitMask256> a, ::ByRef<::GlobalNamespace::BitMask256> b);

  /// @brief Method op_LeftShift, addr 0x271f0dc, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_LeftShift(::ByRef<::GlobalNamespace::BitMask256> a, int32_t bits);

  /// @brief Method op_RightShift, addr 0x271f134, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask256 op_RightShift(::ByRef<::GlobalNamespace::BitMask256> a, int32_t bits);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitMask256();

  // Ctor Parameters [CppParam { name: "_d0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d2", ty:
  // "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d3", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr BitMask256(uint64_t _d0, uint64_t _d1, uint64_t _d2, uint64_t _d3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16975 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _d0, offset: 0x0, size: 0x8, def value: None
  uint64_t _d0;

  /// @brief Field _d1, offset: 0x8, size: 0x8, def value: None
  uint64_t _d1;

  /// @brief Field _d2, offset: 0x10, size: 0x8, def value: None
  uint64_t _d2;

  /// @brief Field _d3, offset: 0x18, size: 0x8, def value: None
  uint64_t _d3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitMask256, _d0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMask256, _d1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMask256, _d2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMask256, _d3) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BitMask256, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMask256, "", "BitMask256");
