#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPackMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BitMask256_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SongPackMask)
namespace GlobalNamespace {
struct BitMask256;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct SongPackMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SongPackMask);
// Dependencies BitMask256, LiteNetLib.Utils.INetImmutableSerializable`1<T>, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: SongPackMask
struct CORDL_TYPE SongPackMask {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SongPackMask>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::SongPackMask>*();

  /// @brief Method Contains, addr 0x2725cdc, size 0x54, virtual false, abstract: false, final false
  inline bool Contains(::GlobalNamespace::SongPackMask other);

  /// @brief Method CreateFromSerializedData, addr 0x2725da8, size 0x2c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::SongPackMask CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x2725dd4, size 0x28, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SongPackMask Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method DifferenceFrom, addr 0x2725d30, size 0x74, virtual false, abstract: false, final false
  inline int32_t DifferenceFrom(::GlobalNamespace::SongPackMask other);

  /// @brief Method Equals, addr 0x2725f84, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2725f38, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::SongPackMask other);

  /// @brief Method FromBytes, addr 0x27261f8, size 0x74, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SongPackMask FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset);

  /// @brief Method GetHashCode, addr 0x2725f34, size 0x4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Parse, addr 0x2726164, size 0x94, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SongPackMask Parse(::StringW stringSerializedMask);

  /// @brief Method Serialize, addr 0x2725da4, size 0x4, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToBytes, addr 0x2725ed4, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes();

  /// @brief Method ToShortString, addr 0x2725e74, size 0x60, virtual false, abstract: false, final false
  inline ::StringW ToShortString();

  /// @brief Method ToString, addr 0x2725dfc, size 0x78, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x2726034, size 0x130, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW stringSerializedMask, ::ByRef<::GlobalNamespace::SongPackMask> songPackMask);

  /// @brief Method .ctor, addr 0x2725b70, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BitMask256 bloomFilter);

  /// @brief Method .ctor, addr 0x2725af8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW packId);

  /// @brief Method .ctor, addr 0x2725b7c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* packs);

  /// @brief Method get_all, addr 0x2725bf4, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SongPackMask get_all();

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>* i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__SongPackMask_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SongPackMask>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::SongPackMask>* i___System__IEquatable_1___GlobalNamespace__SongPackMask_();

  /// @brief Method op_BitwiseAnd, addr 0x2725c18, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SongPackMask op_BitwiseAnd(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_BitwiseOr, addr 0x2725c00, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SongPackMask op_BitwiseOr(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_Equality, addr 0x2725c30, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_Implicit, addr 0x2725cc8, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SongPackMask op_Implicit___GlobalNamespace__SongPackMask(::StringW id);

  /// @brief Method op_Inequality, addr 0x2725c7c, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMask();

  // Ctor Parameters [CppParam { name: "_bloomFilter", ty: "::GlobalNamespace::BitMask256", modifiers: "", def_value: None }]
  constexpr SongPackMask(::GlobalNamespace::BitMask256 _bloomFilter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17024 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field kHashBits offset 0xffffffff size 0x4
  static constexpr int32_t kHashBits{ static_cast<int32_t>(0xf) };

  /// @brief Field kHashCount offset 0xffffffff size 0x4
  static constexpr int32_t kHashCount{ static_cast<int32_t>(0x2) };

  /// @brief Field kToStringPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringPrefix{ u"[SongPackMask " };

  /// @brief Field kToStringSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringSuffix{ u"]" };

  /// @brief Field _bloomFilter, offset: 0x0, size: 0x20, def value: None
  ::GlobalNamespace::BitMask256 _bloomFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPackMask, _bloomFilter) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMask, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMask, "", "SongPackMask");
