#pragma once
// IWYU pragma private; include "Mono/Security/ASN1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ASN1)
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Mono::Security {
class ASN1;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::ASN1);
// Dependencies System.Object
namespace Mono::Security {
// Is value type: false
// CS Name: Mono.Security.ASN1
class CORDL_TYPE ASN1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::Mono::Security::ASN1* Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Tag)) uint8_t Tag;

  __declspec(property(get = get_Value, put = set_Value)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Value;

  /// @brief Field elist, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_elist, put = __cordl_internal_set_elist)) ::System::Collections::ArrayList* elist;

  /// @brief Field m_aValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_aValue, put = __cordl_internal_set_m_aValue)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_aValue;

  /// @brief Field m_nTag, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_nTag, put = __cordl_internal_set_m_nTag)) uint8_t m_nTag;

  /// @brief Method Add, addr 0x3c2f490, size 0x8c, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* Add(::Mono::Security::ASN1* asn1);

  /// @brief Method CompareArray, addr 0x3c2f3f8, size 0x88, virtual false, abstract: false, final false
  inline bool CompareArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array1, ::ArrayW<uint8_t, ::Array<uint8_t>*> array2);

  /// @brief Method CompareValue, addr 0x3c2f480, size 0x10, virtual false, abstract: false, final false
  inline bool CompareValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method Decode, addr 0x3c2f168, size 0x11c, virtual false, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> asn1, ::ByRef<int32_t> anPos, int32_t anLength);

  /// @brief Method DecodeTLV, addr 0x3c2fba0, size 0x124, virtual false, abstract: false, final false
  inline void DecodeTLV(::ArrayW<uint8_t, ::Array<uint8_t>*> asn1, ::ByRef<int32_t> pos, ::ByRef<uint8_t> tag, ::ByRef<int32_t> length, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> content);

  /// @brief Method Element, addr 0x3c2fdf4, size 0x154, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* Element(int32_t index, uint8_t anTag);

  /// @brief Method GetBytes, addr 0x3c2f51c, size 0x684, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  static inline ::Mono::Security::ASN1* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::ASN1* New_ctor(uint8_t tag);

  static inline ::Mono::Security::ASN1* New_ctor(uint8_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ToString, addr 0x3c2ff48, size 0x294, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_elist() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_elist();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_aValue() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_aValue();

  constexpr uint8_t const& __cordl_internal_get_m_nTag() const;

  constexpr uint8_t& __cordl_internal_get_m_nTag();

  constexpr void __cordl_internal_set_elist(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_m_aValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_nTag(uint8_t value);

  /// @brief Method .ctor, addr 0x3c2f004, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x3c2efa8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(uint8_t tag);

  /// @brief Method .ctor, addr 0x3c2efd4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint8_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_Count, addr 0x3c2f284, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x3c2fcc4, size 0x130, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x3c2f2a8, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_Tag, addr 0x3c2f2a0, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_Tag();

  /// @brief Method get_Value, addr 0x3c2f2c0, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Value();

  /// @brief Method set_Value, addr 0x3c2f350, size 0xa8, virtual false, abstract: false, final false
  inline void set_Value(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ASN1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ASN1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ASN1(ASN1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ASN1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ASN1(ASN1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15908 };

  /// @brief Field m_nTag, offset: 0x10, size: 0x1, def value: None
  uint8_t ___m_nTag;

  /// @brief Field m_aValue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_aValue;

  /// @brief Field elist, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___elist;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::ASN1, ___m_nTag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::ASN1, ___m_aValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::ASN1, ___elist) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::ASN1, 0x28>, "Size mismatch!");

} // namespace Mono::Security
NEED_NO_BOX(::Mono::Security::ASN1);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::ASN1*, "Mono.Security", "ASN1");
