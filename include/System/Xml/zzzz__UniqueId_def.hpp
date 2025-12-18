#pragma once
// IWYU pragma private; include "System/Xml/UniqueId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniqueId)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class UniqueId;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::UniqueId);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.UniqueId
class CORDL_TYPE UniqueId : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CharArrayLength)) int32_t CharArrayLength;

  __declspec(property(get = get_IsGuid)) bool IsGuid;

  /// @brief Field char2val, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_char2val, put = setStaticF_char2val)) ::ArrayW<int16_t, ::Array<int16_t>*> char2val;

  /// @brief Field idHigh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_idHigh, put = __cordl_internal_set_idHigh)) int64_t idHigh;

  /// @brief Field idLow, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_idLow, put = __cordl_internal_set_idLow)) int64_t idLow;

  /// @brief Field s, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) ::StringW s;

  /// @brief Method Equals, addr 0x5f4fa9c, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5f4fb40, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Xml::UniqueId* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> guid, int32_t offset);

  static inline ::System::Xml::UniqueId* New_ctor(::StringW value);

  /// @brief Method ToCharArray, addr 0x5f4f364, size 0x628, virtual false, abstract: false, final false
  inline int32_t ToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset);

  /// @brief Method ToString, addr 0x5f4f994, size 0x80, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UnsafeDecode, addr 0x5f4f2fc, size 0x34, virtual false, abstract: false, final false
  inline int32_t UnsafeDecode(int16_t* char2val, char16_t ch1, char16_t ch2);

  /// @brief Method UnsafeEncode, addr 0x5f4f330, size 0x20, virtual false, abstract: false, final false
  inline void UnsafeEncode(char16_t* val2char, uint8_t b, char16_t* pch);

  /// @brief Method UnsafeGetInt32, addr 0x5f4fb88, size 0x8, virtual false, abstract: false, final false
  inline int32_t UnsafeGetInt32(uint8_t* pb);

  /// @brief Method UnsafeGetInt64, addr 0x5f4ecd8, size 0x8, virtual false, abstract: false, final false
  inline int64_t UnsafeGetInt64(uint8_t* pb);

  /// @brief Method UnsafeParse, addr 0x5f4ed8c, size 0x558, virtual false, abstract: false, final false
  inline void UnsafeParse(char16_t* chars, int32_t charCount);

  /// @brief Method UnsafeSetInt32, addr 0x5f4fb90, size 0x8, virtual false, abstract: false, final false
  inline void UnsafeSetInt32(int32_t value, uint8_t* pb);

  /// @brief Method UnsafeSetInt64, addr 0x5f4f98c, size 0x8, virtual false, abstract: false, final false
  inline void UnsafeSetInt64(int64_t value, uint8_t* pb);

  constexpr int64_t const& __cordl_internal_get_idHigh() const;

  constexpr int64_t& __cordl_internal_get_idHigh();

  constexpr int64_t const& __cordl_internal_get_idLow() const;

  constexpr int64_t& __cordl_internal_get_idLow();

  constexpr ::StringW const& __cordl_internal_get_s() const;

  constexpr ::StringW& __cordl_internal_get_s();

  constexpr void __cordl_internal_set_idHigh(int64_t value);

  constexpr void __cordl_internal_set_idLow(int64_t value);

  constexpr void __cordl_internal_set_s(::StringW value);

  /// @brief Method .ctor, addr 0x5f4eab4, size 0x224, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> guid, int32_t offset);

  /// @brief Method .ctor, addr 0x5f4ece0, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_char2val();

  /// @brief Method get_CharArrayLength, addr 0x5f4f2e4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_CharArrayLength();

  /// @brief Method get_IsGuid, addr 0x5f4f350, size 0x14, virtual false, abstract: false, final false
  inline bool get_IsGuid();

  /// @brief Method op_Equality, addr 0x5f4fa14, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::UniqueId* id1, ::System::Xml::UniqueId* id2);

  static inline void setStaticF_char2val(::ArrayW<int16_t, ::Array<int16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniqueId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniqueId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniqueId(UniqueId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniqueId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniqueId(UniqueId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16906 };

  /// @brief Field idLow, offset: 0x10, size: 0x8, def value: None
  int64_t ___idLow;

  /// @brief Field idHigh, offset: 0x18, size: 0x8, def value: None
  int64_t ___idHigh;

  /// @brief Field s, offset: 0x20, size: 0x8, def value: None
  ::StringW ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::UniqueId, ___idLow) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::UniqueId, ___idHigh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::UniqueId, ___s) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::UniqueId, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::UniqueId);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::UniqueId*, "System.Xml", "UniqueId");
