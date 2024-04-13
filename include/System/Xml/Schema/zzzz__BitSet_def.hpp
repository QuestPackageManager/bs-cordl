#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitSet)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class BitSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::BitSet);
// Type: System.Xml.Schema::BitSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::BitSet*
class CORDL_TYPE BitSet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item)) bool Item[];

  /// @brief Field bits, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bits, put = __cordl_internal_set_bits))::ArrayW<uint32_t, ::Array<uint32_t>*> bits;

  /// @brief Field count, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Method And, addr 0x2df71ec, size 0xb8, virtual false, abstract: false, final false
  inline void And(::System::Xml::Schema::BitSet* other);

  /// @brief Method Clear, addr 0x2df700c, size 0x54, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x2df74c8, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::BitSet* Clone();

  /// @brief Method EnsureLength, addr 0x2df70bc, size 0x94, virtual false, abstract: false, final false
  inline void EnsureLength(int32_t nRequiredLength);

  /// @brief Method Equals, addr 0x2df7380, size 0x148, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Get, addr 0x2df6fb0, size 0x5c, virtual false, abstract: false, final false
  inline bool Get(int32_t index);

  /// @brief Method GetHashCode, addr 0x2df7348, size 0x38, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Intersects, addr 0x2df7604, size 0xe0, virtual false, abstract: false, final false
  inline bool Intersects(::System::Xml::Schema::BitSet* other);

  static inline ::System::Xml::Schema::BitSet* New_ctor();

  static inline ::System::Xml::Schema::BitSet* New_ctor(int32_t count);

  /// @brief Method NextSet, addr 0x2df7150, size 0x9c, virtual false, abstract: false, final false
  inline int32_t NextSet(int32_t startFrom);

  /// @brief Method Or, addr 0x2df72a4, size 0xa4, virtual false, abstract: false, final false
  inline void Or(::System::Xml::Schema::BitSet* other);

  /// @brief Method Set, addr 0x2df7060, size 0x5c, virtual false, abstract: false, final false
  inline void Set(int32_t index);

  /// @brief Method Subscript, addr 0x2df6f9c, size 0x8, virtual false, abstract: false, final false
  inline int32_t Subscript(int32_t bitIndex);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_bits() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_bits();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr void __cordl_internal_set_bits(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_count(int32_t value);

  /// @brief Method .ctor, addr 0x2df6f24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2df6f2c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(int32_t count);

  /// @brief Method get_Count, addr 0x2df6fa4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsEmpty, addr 0x2df759c, size 0x68, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x2df6fac, size 0x4, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitSet(BitSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitSet(BitSet const&) = delete;

  /// @brief Field count, offset: 0x10, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field bits, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___bits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::BitSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::BitSet, ___count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BitSet, ___bits) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::BitSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BitSet*, "System.Xml.Schema", "BitSet");
