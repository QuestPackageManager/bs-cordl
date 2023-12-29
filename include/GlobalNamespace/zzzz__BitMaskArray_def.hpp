#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitMaskArray)
namespace LiteNetLib::Utils {
class NetDataWriter;
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
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class BitMaskArray;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BitMaskArray);
// Type: ::BitMaskArray
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15139))
// CS Name: ::BitMaskArray*
class CORDL_TYPE BitMaskArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field <bitCount>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__bitCount_k__BackingField, put = __set__bitCount_k__BackingField)) int32_t _bitCount_k__BackingField;

  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::ArrayW<uint64_t, ::Array<uint64_t>*> _data;

  __declspec(property(get = get_bitCount)) int32_t bitCount;

  /// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>"
  constexpr operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr int32_t& __get__bitCount_k__BackingField();

  constexpr int32_t const& __get__bitCount_k__BackingField() const;

  constexpr void __set__bitCount_k__BackingField(int32_t value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get__data();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get__data() const;

  constexpr void __set__data(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method get_bitCount addr 0x122f414 size 0x8 virtual true final true
  inline int32_t get_bitCount();

  static inline ::GlobalNamespace::BitMaskArray* New_ctor(int32_t bitCount);

  /// @brief Method .ctor addr 0x122f41c size 0x7c virtual false final false
  inline void _ctor(int32_t bitCount);

  /// @brief Method Equals addr 0x122f498 size 0x64 virtual true final true
  inline bool Equals(::GlobalNamespace::BitMaskArray* other);

  /// @brief Method SetBits addr 0x122f4fc size 0xfc virtual true final true
  inline ::GlobalNamespace::BitMaskArray* SetBits(int32_t offset, uint64_t bits);

  /// @brief Method GetBits addr 0x122f5f8 size 0x11c virtual true final true
  inline uint64_t GetBits(int32_t offset, int32_t count);

  /// @brief Method ToString addr 0x122f714 size 0xf8 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Serialize addr 0x122f80c size 0x15c virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x122f968 size 0xcc virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "BitMaskArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitMaskArray(BitMaskArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitMaskArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitMaskArray(BitMaskArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitMaskArray();

public:
  /// @brief Field <bitCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____bitCount_k__BackingField;

  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BitMaskArray, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMaskArray, ____bitCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMaskArray, ____data) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BitMaskArray);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMaskArray*, "", "BitMaskArray");
