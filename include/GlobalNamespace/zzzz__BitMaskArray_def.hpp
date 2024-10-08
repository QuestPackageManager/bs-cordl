#pragma once
// IWYU pragma private; include "GlobalNamespace/BitMaskArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitMaskArray)
namespace GlobalNamespace {
template <typename T> class IBitMask_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BitMaskArray;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BitMaskArray);
// Type: ::BitMaskArray
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BitMaskArray*
class CORDL_TYPE BitMaskArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field <bitCount>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__bitCount_k__BackingField, put = __cordl_internal_set__bitCount_k__BackingField)) int32_t _bitCount_k__BackingField;

  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::ArrayW<uint64_t, ::Array<uint64_t>*> _data;

  __declspec(property(get = get_bitCount)) int32_t bitCount;

  /// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>"
  constexpr operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>*() noexcept;

  /// @brief Method Deserialize, addr 0x26dd804, size 0xc4, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x26dd33c, size 0x64, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BitMaskArray* other);

  /// @brief Method GetBits, addr 0x26dd48c, size 0x118, virtual true, abstract: false, final true
  inline uint64_t GetBits(int32_t offset, int32_t count);

  static inline ::GlobalNamespace::BitMaskArray* New_ctor(int32_t bitCount);

  /// @brief Method Serialize, addr 0x26dd69c, size 0x168, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SetBits, addr 0x26dd3a0, size 0xec, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BitMaskArray* SetBits(int32_t offset, uint64_t bits);

  /// @brief Method ToString, addr 0x26dd5a4, size 0xf8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__bitCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__bitCount_k__BackingField();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get__data() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get__data();

  constexpr void __cordl_internal_set__bitCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__data(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x26dd2c0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t bitCount);

  /// @brief Method get_bitCount, addr 0x26dd2b8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_bitCount();

  /// @brief Convert to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>"
  constexpr ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>* i___GlobalNamespace__IBitMask_1___GlobalNamespace__BitMaskArray__() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>* i___System__IEquatable_1___GlobalNamespace__BitMaskArray__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitMaskArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitMaskArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitMaskArray(BitMaskArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitMaskArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitMaskArray(BitMaskArray const&) = delete;

  /// @brief Field <bitCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____bitCount_k__BackingField;

  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ____data;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16917 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BitMaskArray, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMaskArray, ____bitCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMaskArray, ____data) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BitMaskArray);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMaskArray*, "", "BitMaskArray");
