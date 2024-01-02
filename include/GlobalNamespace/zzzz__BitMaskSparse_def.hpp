#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitMaskSparse)
namespace GlobalNamespace {
template <typename T> class IBitMask_1;
}
namespace System::Collections::Generic {
template <typename T> class SortedSet_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class __BitMaskSparse____c;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BitMaskSparse;
}
namespace GlobalNamespace {
class __BitMaskSparse____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BitMaskSparse);
MARK_REF_PTR_T(::GlobalNamespace::__BitMaskSparse____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14992))
// CS Name: ::BitMaskSparse::<>c*
class CORDL_TYPE __BitMaskSparse____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BitMaskSparse____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<uint32_t, ::StringW>* __9__8_0;

  static inline void setStaticF___9(::GlobalNamespace::__BitMaskSparse____c* value);

  static inline ::GlobalNamespace::__BitMaskSparse____c* getStaticF___9();

  static inline void setStaticF___9__8_0(::System::Func_2<uint32_t, ::StringW>* value);

  static inline ::System::Func_2<uint32_t, ::StringW>* getStaticF___9__8_0();

  static inline ::GlobalNamespace::__BitMaskSparse____c* New_ctor();

  /// @brief Method .ctor, addr 0x12a2080, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ToString>b__8_0, addr 0x12a2088, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__8_0(uint32_t i);

  // Ctor Parameters [CppParam { name: "", ty: "__BitMaskSparse____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BitMaskSparse____c(__BitMaskSparse____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BitMaskSparse____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BitMaskSparse____c(__BitMaskSparse____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BitMaskSparse____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BitMaskSparse____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BitMaskSparse
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14993))
// CS Name: ::BitMaskSparse*
class CORDL_TYPE BitMaskSparse : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BitMaskSparse____c;

  /// @brief Field <bitCount>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__bitCount_k__BackingField, put = __set__bitCount_k__BackingField)) int32_t _bitCount_k__BackingField;

  /// @brief Field _sparseSet, offset 0x18, size 0x8
  __declspec(property(get = __get__sparseSet, put = __set__sparseSet))::System::Collections::Generic::SortedSet_1<uint32_t>* _sparseSet;

  __declspec(property(get = get_bitCount)) int32_t bitCount;

  /// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>"
  constexpr operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr int32_t& __get__bitCount_k__BackingField();

  constexpr int32_t const& __get__bitCount_k__BackingField() const;

  constexpr void __set__bitCount_k__BackingField(int32_t value);

  constexpr ::System::Collections::Generic::SortedSet_1<uint32_t>*& __get__sparseSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedSet_1<uint32_t>*> const& __get__sparseSet() const;

  constexpr void __set__sparseSet(::System::Collections::Generic::SortedSet_1<uint32_t>* value);

  /// @brief Method get_bitCount, addr 0x12a1d5c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_bitCount();

  static inline ::GlobalNamespace::BitMaskSparse* New_ctor(int32_t bitCount);

  /// @brief Method .ctor, addr 0x12a0478, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t bitCount);

  /// @brief Method Equals, addr 0x12a1d64, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BitMaskSparse* other);

  /// @brief Method SetBits, addr 0x12a1dd0, size 0x90, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BitMaskSparse* SetBits(int32_t offset, uint64_t bits);

  /// @brief Method GetBits, addr 0x12a1e60, size 0x98, virtual true, abstract: false, final true
  inline uint64_t GetBits(int32_t offset, int32_t count);

  /// @brief Method ToString, addr 0x12a1ef8, size 0x124, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Serialize, addr 0x12a0818, size 0x194, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize, addr 0x12a09c4, size 0x94, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "BitMaskSparse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitMaskSparse(BitMaskSparse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitMaskSparse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitMaskSparse(BitMaskSparse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitMaskSparse();

public:
  /// @brief Field <bitCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____bitCount_k__BackingField;

  /// @brief Field _sparseSet, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::SortedSet_1<uint32_t>* ____sparseSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BitMaskSparse, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMaskSparse, ____bitCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitMaskSparse, ____sparseSet) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BitMaskSparse);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMaskSparse*, "", "BitMaskSparse");
NEED_NO_BOX(::GlobalNamespace::__BitMaskSparse____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BitMaskSparse____c*, "", "BitMaskSparse/<>c");
