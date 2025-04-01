#pragma once
// IWYU pragma private; include "GlobalNamespace/BitMask128.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitMask128)
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
struct BitMask128;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitMask128);
// Dependencies IBitMask`1<T>, LiteNetLib.Utils.INetImmutableSerializable`1<T>, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BitMask128
struct CORDL_TYPE BitMask128 {
public:
  // Declarations
  __declspec(property(get = get_bitCount)) int32_t bitCount;

  /// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>"
  constexpr operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMask128>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BitMask128>*();

  /// @brief Method CreateFromSerializedData, addr 0x271b4b4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BitMask128 CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x271b4bc, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask128 Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x271b5ac, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x271b588, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BitMask128 other);

  /// @brief Method GetBits, addr 0x271b2b4, size 0xb8, virtual true, abstract: false, final true
  inline uint64_t GetBits(int32_t offset, int32_t count);

  /// @brief Method GetHashCode, addr 0x271b634, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Serialize, addr 0x271b474, size 0x40, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SetBits, addr 0x271b24c, size 0x68, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BitMask128 SetBits(int32_t offset, uint64_t bits);

  /// @brief Method ToString, addr 0x271b4fc, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x271b23c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t d0, uint64_t d1);

  /// @brief Method .ctor, addr 0x271b244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  /// @brief Method get_bitCount, addr 0x271b228, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_bitCount();

  /// @brief Method get_maxValue, addr 0x271b230, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask128 get_maxValue();

  /// @brief Convert to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>"
  constexpr ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>* i___GlobalNamespace__IBitMask_1___GlobalNamespace__BitMask128_();

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>* i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__BitMask128_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BitMask128>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BitMask128>* i___System__IEquatable_1___GlobalNamespace__BitMask128_();

  /// @brief Method op_BitwiseAnd, addr 0x271b380, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask128 op_BitwiseAnd(::ByRef<::GlobalNamespace::BitMask128> a, ::ByRef<::GlobalNamespace::BitMask128> b);

  /// @brief Method op_BitwiseOr, addr 0x271b36c, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask128 op_BitwiseOr(::ByRef<::GlobalNamespace::BitMask128> a, ::ByRef<::GlobalNamespace::BitMask128> b);

  /// @brief Method op_Equality, addr 0x271b410, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::GlobalNamespace::BitMask128> a, ::ByRef<::GlobalNamespace::BitMask128> b);

  /// @brief Method op_ExclusiveOr, addr 0x271b394, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask128 op_ExclusiveOr(::ByRef<::GlobalNamespace::BitMask128> a, ::ByRef<::GlobalNamespace::BitMask128> b);

  /// @brief Method op_Implicit, addr 0x271b468, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask128 op_Implicit___GlobalNamespace__BitMask128(uint64_t value);

  /// @brief Method op_Inequality, addr 0x271b43c, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::GlobalNamespace::BitMask128> a, ::ByRef<::GlobalNamespace::BitMask128> b);

  /// @brief Method op_LeftShift, addr 0x271b3a8, size 0x34, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask128 op_LeftShift(::ByRef<::GlobalNamespace::BitMask128> a, int32_t bits);

  /// @brief Method op_RightShift, addr 0x271b3dc, size 0x34, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BitMask128 op_RightShift(::ByRef<::GlobalNamespace::BitMask128> a, int32_t bits);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitMask128();

  // Ctor Parameters [CppParam { name: "_d0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d1", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr BitMask128(uint64_t _d0, uint64_t _d1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16972 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _d0, offset: 0x0, size: 0x8, def value: None
  uint64_t _d0;

  /// @brief Field _d1, offset: 0x8, size: 0x8, def value: None
  uint64_t _d1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitMask128, _d0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMask128, _d1) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BitMask128, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMask128, "", "BitMask128");
