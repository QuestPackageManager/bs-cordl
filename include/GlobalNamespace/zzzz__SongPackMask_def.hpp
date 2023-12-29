#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SongPackMask)
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace GlobalNamespace {
struct BitMask128;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct SongPackMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SongPackMask);
// Type: ::SongPackMask
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15192))
// CS Name: ::SongPackMask
struct CORDL_TYPE SongPackMask {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SongPackMask>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::SongPackMask>*();

  /// @brief Method .ctor addr 0x12375f8 size 0x64 virtual false final false
  inline void _ctor(::StringW packId);

  /// @brief Method .ctor addr 0x123765c size 0x8 virtual false final false
  inline void _ctor(::GlobalNamespace::BitMask128 bloomFilter);

  /// @brief Method .ctor addr 0x1237664 size 0x64 virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* packs);

  /// @brief Method get_all addr 0x12376c8 size 0xc virtual false final false
  static inline ::GlobalNamespace::SongPackMask get_all();

  /// @brief Method op_BitwiseOr addr 0x12376d4 size 0xc virtual false final false
  static inline ::GlobalNamespace::SongPackMask op_BitwiseOr(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_BitwiseAnd addr 0x12376e0 size 0xc virtual false final false
  static inline ::GlobalNamespace::SongPackMask op_BitwiseAnd(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_Equality addr 0x12376ec size 0x18 virtual false final false
  static inline bool op_Equality(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_Inequality addr 0x1237704 size 0x18 virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b);

  /// @brief Method op_Implicit addr 0x123771c size 0x28 virtual false final false
  static inline ::GlobalNamespace::SongPackMask op_Implicit___GlobalNamespace__SongPackMask(::StringW id);

  /// @brief Method Contains addr 0x1237744 size 0x1c virtual false final false
  inline bool Contains(::GlobalNamespace::SongPackMask other);

  /// @brief Method DifferenceFrom addr 0x1237760 size 0x60 virtual false final false
  inline int32_t DifferenceFrom(::GlobalNamespace::SongPackMask other);

  /// @brief Method Serialize addr 0x12377c0 size 0x4 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method CreateFromSerializedData addr 0x12377c4 size 0x8 virtual true final true
  inline ::GlobalNamespace::SongPackMask CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize addr 0x12377cc size 0x4 virtual false final false
  static inline ::GlobalNamespace::SongPackMask Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method ToString addr 0x12377d0 size 0x78 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToShortString addr 0x1237848 size 0x48 virtual false final false
  inline ::StringW ToShortString();

  /// @brief Method ToBytes addr 0x1237890 size 0x48 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes();

  /// @brief Method GetHashCode addr 0x12378d8 size 0x48 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x1237920 size 0x24 virtual true final true
  inline bool Equals(::GlobalNamespace::SongPackMask other);

  /// @brief Method Equals addr 0x1237944 size 0x84 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method TryParse addr 0x12379c8 size 0x128 virtual false final false
  static inline bool TryParse(::StringW stringSerializedMask, ByRef<::GlobalNamespace::SongPackMask> songPackMask);

  /// @brief Method Parse addr 0x1237af0 size 0x90 virtual false final false
  static inline ::GlobalNamespace::SongPackMask Parse(::StringW stringSerializedMask);

  /// @brief Method FromBytes addr 0x1237b80 size 0x58 virtual false final false
  static inline ::GlobalNamespace::SongPackMask FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset);

  // Ctor Parameters [CppParam { name: "_bloomFilter", ty: "::GlobalNamespace::BitMask128", modifiers: "", def_value: None }]
  constexpr SongPackMask(::GlobalNamespace::BitMask128 _bloomFilter) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMask();

  /// @brief Field _bloomFilter, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::BitMask128 _bloomFilter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMask, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMask, _bloomFilter) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMask, "", "SongPackMask");
