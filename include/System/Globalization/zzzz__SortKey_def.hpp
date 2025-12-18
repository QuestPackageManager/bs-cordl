#pragma once
// IWYU pragma private; include "System/Globalization/SortKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortKey)
namespace System::Globalization {
struct CompareOptions;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Globalization {
class SortKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::SortKey);
// Dependencies System.Globalization.CompareOptions, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.SortKey
class CORDL_TYPE SortKey : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_KeyData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> KeyData;

  __declspec(property(get = get_OriginalString)) ::StringW OriginalString;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field lcid, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_lcid, put = __cordl_internal_set_lcid)) int32_t lcid;

  /// @brief Field options, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_options, put = __cordl_internal_set_options)) ::System::Globalization::CompareOptions options;

  /// @brief Field source, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::StringW source;

  /// @brief Method Compare, addr 0x5a21780, size 0x174, virtual false, abstract: false, final false
  static inline int32_t Compare(::System::Globalization::SortKey* sortkey1, ::System::Globalization::SortKey* sortkey2);

  /// @brief Method Equals, addr 0x5a21a1c, size 0xbc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x5a21ad8, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Globalization::SortKey* New_ctor();

  static inline ::System::Globalization::SortKey* New_ctor(int32_t lcid, ::StringW source, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Globalization::CompareOptions opt, int32_t lv1Length,
                                                           int32_t lv2Length, int32_t lv3Length, int32_t kanaSmallLength, int32_t markTypeLength, int32_t katakanaLength, int32_t kanaWidthLength,
                                                           int32_t identLength);

  static inline ::System::Globalization::SortKey* New_ctor(int32_t lcid, ::StringW source, ::System::Globalization::CompareOptions opt);

  static inline ::System::Globalization::SortKey* New_ctor(::StringW localeName, ::StringW str, ::System::Globalization::CompareOptions options, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyData);

  /// @brief Method ToString, addr 0x5a21b40, size 0x148, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_key() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_key();

  constexpr int32_t const& __cordl_internal_get_lcid() const;

  constexpr int32_t& __cordl_internal_get_lcid();

  constexpr ::System::Globalization::CompareOptions const& __cordl_internal_get_options() const;

  constexpr ::System::Globalization::CompareOptions& __cordl_internal_get_options();

  constexpr ::StringW const& __cordl_internal_get_source() const;

  constexpr ::StringW& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_lcid(int32_t value);

  constexpr void __cordl_internal_set_options(::System::Globalization::CompareOptions value);

  constexpr void __cordl_internal_set_source(::StringW value);

  /// @brief Method .ctor, addr 0x5a21c88, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5a219c8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t lcid, ::StringW source, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Globalization::CompareOptions opt, int32_t lv1Length, int32_t lv2Length, int32_t lv3Length,
                    int32_t kanaSmallLength, int32_t markTypeLength, int32_t katakanaLength, int32_t kanaWidthLength, int32_t identLength);

  /// @brief Method .ctor, addr 0x5a218f4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(int32_t lcid, ::StringW source, ::System::Globalization::CompareOptions opt);

  /// @brief Method .ctor, addr 0x5a219d4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW localeName, ::StringW str, ::System::Globalization::CompareOptions options, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyData);

  /// @brief Method get_KeyData, addr 0x5a21a14, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyData();

  /// @brief Method get_OriginalString, addr 0x5a21a0c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_OriginalString();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortKey(SortKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortKey(SortKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3637 };

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
static_assert(offsetof(::System::Globalization::SortKey, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::SortKey, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::SortKey, ___options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::SortKey, ___lcid) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::SortKey, 0x28>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::SortKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::SortKey*, "System.Globalization", "SortKey");
