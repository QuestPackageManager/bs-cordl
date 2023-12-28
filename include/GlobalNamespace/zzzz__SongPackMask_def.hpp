#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BitMask256_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SongPackMask)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct BitMask256;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SongPackMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SongPackMask);
// Type: ::SongPackMask
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14990))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15047))
// CS Name: ::SongPackMask
struct CORDL_TYPE SongPackMask {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SongPackMask>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::SongPackMask>*();

  /// @brief Method .ctor addr 0x12a97c0 size 0x78 virtual false final false
  inline void _ctor(::StringW packId);

  /// @brief Method .ctor addr 0x12a9838 size 0xc virtual false final false
  inline void _ctor(::GlobalNamespace::BitMask256 bloomFilter);

  /// @brief Method .ctor addr 0x12a9844 size 0x78 virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* packs);

  /// @brief Method get_all addr 0x12a98bc size 0xc virtual false final false
  static inline ::GlobalNamespace::SongPackMask get_all();

  /// @brief Method op_BitwiseOr addr 0x12a98c8 size 0x18 virtual false final false
  static inline ::GlobalNamespace::SongPackMask op_BitwiseOr(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_BitwiseAnd addr 0x12a98e0 size 0x18 virtual false final false
  static inline ::GlobalNamespace::SongPackMask op_BitwiseAnd(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_Equality addr 0x12a98f8 size 0x4c virtual false final false
  static inline bool op_Equality(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_Inequality addr 0x12a9944 size 0x4c virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_Implicit addr 0x12a9990 size 0x14 virtual false final false
  static inline ::GlobalNamespace::SongPackMask op_Implicit___GlobalNamespace__SongPackMask(::StringW id);

  /// @brief Method Contains addr 0x12a99a4 size 0x54 virtual false final false
  inline bool Contains(::GlobalNamespace::SongPackMask other);

  /// @brief Method DifferenceFrom addr 0x12a99f8 size 0x74 virtual false final false
  inline int32_t DifferenceFrom(::GlobalNamespace::SongPackMask other);

  /// @brief Method Serialize addr 0x12a9a6c size 0x4 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method CreateFromSerializedData addr 0x12a9a70 size 0x2c virtual true final true
  inline ::GlobalNamespace::SongPackMask CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize addr 0x12a9a9c size 0x28 virtual false final false
  static inline ::GlobalNamespace::SongPackMask Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method ToString addr 0x12a9ac4 size 0x78 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToShortString addr 0x12a9b3c size 0x60 virtual false final false
  inline ::StringW ToShortString();

  /// @brief Method ToBytes addr 0x12a9b9c size 0x60 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes();

  /// @brief Method GetHashCode addr 0x12a9bfc size 0x4 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x12a9c00 size 0x4c virtual true final true
  inline bool Equals(::GlobalNamespace::SongPackMask other);

  /// @brief Method Equals addr 0x12a9c4c size 0xb0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method TryParse addr 0x12a9cfc size 0x130 virtual false final false
  static inline bool TryParse(::StringW stringSerializedMask, ByRef<::GlobalNamespace::SongPackMask> songPackMask);

  /// @brief Method Parse addr 0x12a9e2c size 0x9c virtual false final false
  static inline ::GlobalNamespace::SongPackMask Parse(::StringW stringSerializedMask);

  /// @brief Method FromBytes addr 0x12a9ec8 size 0x74 virtual false final false
  static inline ::GlobalNamespace::SongPackMask FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset);

  // Ctor Parameters [CppParam { name: "_bloomFilter", ty: "::GlobalNamespace::BitMask256", modifiers: "", def_value: None }]
  constexpr SongPackMask(::GlobalNamespace::BitMask256 _bloomFilter) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMask();

  /// @brief Field _bloomFilter, offset: 0x0, size: 0x20, def value: None
  ::GlobalNamespace::BitMask256 _bloomFilter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field kHashCount offset 0xffffffff size 0x4
  static constexpr int32_t kHashCount{ static_cast<int32_t>(0x2) };

  /// @brief Field kHashBits offset 0xffffffff size 0x4
  static constexpr int32_t kHashBits{ static_cast<int32_t>(0xd) };

  /// @brief Field kToStringPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringPrefix{ u"[SongPackMask " };

  /// @brief Field kToStringSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringSuffix{ u"]" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMask, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMask, "", "SongPackMask");
