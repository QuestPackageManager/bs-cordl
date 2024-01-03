#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortKey)
namespace System {
class Object;
}
namespace System::Globalization {
struct CompareOptions;
}
// Forward declare root types
namespace System::Globalization {
class SortKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::SortKey);
// Type: System.Globalization::SortKey
// SizeInfo { instance_size: 40, native_size: 24, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3659)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3710))
// CS Name: ::System.Globalization::SortKey*
class CORDL_TYPE SortKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field source, offset 0x10, size 0x8
  __declspec(property(get = __get_source, put = __set_source))::StringW source;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field options, offset 0x20, size 0x4
  __declspec(property(get = __get_options, put = __set_options))::System::Globalization::CompareOptions options;

  /// @brief Field lcid, offset 0x24, size 0x4
  __declspec(property(get = __get_lcid, put = __set_lcid)) int32_t lcid;

  __declspec(property(get = get_OriginalString))::StringW OriginalString;

  __declspec(property(get = get_KeyData))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyData;

  constexpr ::StringW& __get_source();

  constexpr ::StringW const& __get_source() const;

  constexpr void __set_source(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_key();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_key() const;

  constexpr void __set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Globalization::CompareOptions& __get_options();

  constexpr ::System::Globalization::CompareOptions const& __get_options() const;

  constexpr void __set_options(::System::Globalization::CompareOptions value);

  constexpr int32_t& __get_lcid();

  constexpr int32_t const& __get_lcid() const;

  constexpr void __set_lcid(int32_t value);

  /// @brief Method Compare, addr 0x256b2d0, size 0x174, virtual false, abstract: false, final false
  static inline int32_t Compare(::System::Globalization::SortKey* sortkey1, ::System::Globalization::SortKey* sortkey2);

  static inline ::System::Globalization::SortKey* New_ctor(int32_t lcid, ::StringW source, ::System::Globalization::CompareOptions opt);

  /// @brief Method .ctor, addr 0x256b444, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(int32_t lcid, ::StringW source, ::System::Globalization::CompareOptions opt);

  static inline ::System::Globalization::SortKey* New_ctor(int32_t lcid, ::StringW source, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Globalization::CompareOptions opt, int32_t lv1Length,
                                                           int32_t lv2Length, int32_t lv3Length, int32_t kanaSmallLength, int32_t markTypeLength, int32_t katakanaLength, int32_t kanaWidthLength,
                                                           int32_t identLength);

  /// @brief Method .ctor, addr 0x256b518, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t lcid, ::StringW source, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Globalization::CompareOptions opt, int32_t lv1Length, int32_t lv2Length, int32_t lv3Length,
                    int32_t kanaSmallLength, int32_t markTypeLength, int32_t katakanaLength, int32_t kanaWidthLength, int32_t identLength);

  static inline ::System::Globalization::SortKey* New_ctor(::StringW localeName, ::StringW str, ::System::Globalization::CompareOptions options, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyData);

  /// @brief Method .ctor, addr 0x256b558, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::StringW localeName, ::StringW str, ::System::Globalization::CompareOptions options, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyData);

  /// @brief Method get_OriginalString, addr 0x256b5a0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_OriginalString();

  /// @brief Method get_KeyData, addr 0x256b5a8, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyData();

  /// @brief Method Equals, addr 0x256b5b0, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x256b660, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x256b6c8, size 0x1f0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::System::Globalization::SortKey* New_ctor();

  /// @brief Method .ctor, addr 0x256b8b8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SortKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortKey(SortKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortKey(SortKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortKey();

public:
  /// @brief Field source, offset: 0x10, size: 0x8, def value: None
  ::StringW ___source;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___key;

  /// @brief Field options, offset: 0x20, size: 0x4, def value: None
  ::System::Globalization::CompareOptions ___options;

  /// @brief Field lcid, offset: 0x24, size: 0x4, def value: None
  int32_t ___lcid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::SortKey, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::SortKey, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::SortKey, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::SortKey, ___options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::SortKey, ___lcid) == 0x24, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::SortKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::SortKey*, "System.Globalization", "SortKey");
