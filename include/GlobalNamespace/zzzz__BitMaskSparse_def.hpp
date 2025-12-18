#pragma once
// IWYU pragma private; include "GlobalNamespace/BitMaskSparse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitMaskSparse)
namespace GlobalNamespace {
class BitMaskSparse___c;
}
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
namespace System::Collections::Generic {
template <typename T> class SortedSet_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BitMaskSparse;
}
namespace GlobalNamespace {
class BitMaskSparse___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BitMaskSparse);
MARK_REF_PTR_T(::GlobalNamespace::BitMaskSparse___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitMaskSparse/<>c
class CORDL_TYPE BitMaskSparse___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BitMaskSparse___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<uint32_t, ::StringW>* __9__8_0;

  static inline ::GlobalNamespace::BitMaskSparse___c* New_ctor();

  /// @brief Method <ToString>b__8_0, addr 0x367c03c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__8_0(uint32_t i);

  /// @brief Method .ctor, addr 0x367c038, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BitMaskSparse___c* getStaticF___9();

  static inline ::System::Func_2<uint32_t, ::StringW>* getStaticF___9__8_0();

  static inline void setStaticF___9(::GlobalNamespace::BitMaskSparse___c* value);

  static inline void setStaticF___9__8_0(::System::Func_2<uint32_t, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitMaskSparse___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitMaskSparse___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitMaskSparse___c(BitMaskSparse___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitMaskSparse___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitMaskSparse___c(BitMaskSparse___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BitMaskSparse___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitMaskSparse
class CORDL_TYPE BitMaskSparse : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::BitMaskSparse___c;

  /// @brief Field <bitCount>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__bitCount_k__BackingField, put = __cordl_internal_set__bitCount_k__BackingField)) int32_t _bitCount_k__BackingField;

  /// @brief Field _sparseSet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sparseSet, put = __cordl_internal_set__sparseSet)) ::System::Collections::Generic::SortedSet_1<uint32_t>* _sparseSet;

  __declspec(property(get = get_bitCount)) int32_t bitCount;

  /// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>"
  constexpr operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>*() noexcept;

  /// @brief Method Deserialize, addr 0x367a994, size 0x9c, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x367bd00, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BitMaskSparse* other);

  /// @brief Method GetBits, addr 0x367be1c, size 0x98, virtual true, abstract: false, final true
  inline uint64_t GetBits(int32_t offset, int32_t count);

  static inline ::GlobalNamespace::BitMaskSparse* New_ctor(int32_t bitCount);

  /// @brief Method Serialize, addr 0x367a7a8, size 0x1d8, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SetBits, addr 0x367bd7c, size 0xa0, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BitMaskSparse* SetBits(int32_t offset, uint64_t bits);

  /// @brief Method ToString, addr 0x367beb4, size 0x130, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__bitCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__bitCount_k__BackingField();

  constexpr ::System::Collections::Generic::SortedSet_1<uint32_t>* const& __cordl_internal_get__sparseSet() const;

  constexpr ::System::Collections::Generic::SortedSet_1<uint32_t>*& __cordl_internal_get__sparseSet();

  constexpr void __cordl_internal_set__bitCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__sparseSet(::System::Collections::Generic::SortedSet_1<uint32_t>* value);

  /// @brief Method .ctor, addr 0x367a448, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t bitCount);

  /// @brief Method get_bitCount, addr 0x367bcf8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_bitCount();

  /// @brief Convert to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>"
  constexpr ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>* i___GlobalNamespace__IBitMask_1___GlobalNamespace__BitMaskSparse__() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>* i___System__IEquatable_1___GlobalNamespace__BitMaskSparse__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitMaskSparse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitMaskSparse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitMaskSparse(BitMaskSparse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitMaskSparse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitMaskSparse(BitMaskSparse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20837 };

  /// @brief Field <bitCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____bitCount_k__BackingField;

  /// @brief Field _sparseSet, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::SortedSet_1<uint32_t>* ____sparseSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitMaskSparse, ____bitCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMaskSparse, ____sparseSet) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BitMaskSparse, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BitMaskSparse);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMaskSparse*, "", "BitMaskSparse");
NEED_NO_BOX(::GlobalNamespace::BitMaskSparse___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMaskSparse___c*, "", "BitMaskSparse/<>c");
