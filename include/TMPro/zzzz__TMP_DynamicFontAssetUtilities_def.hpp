#pragma once
// IWYU pragma private; include "TMPro/TMP_DynamicFontAssetUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_DynamicFontAssetUtilities)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace TMPro {
struct TMP_DynamicFontAssetUtilities_FontReference;
}
// Forward declare root types
namespace TMPro {
class TMP_DynamicFontAssetUtilities;
}
namespace TMPro {
struct TMP_DynamicFontAssetUtilities_FontReference;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_DynamicFontAssetUtilities);
MARK_VAL_T(::TMPro::TMP_DynamicFontAssetUtilities_FontReference);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_DynamicFontAssetUtilities/FontReference
struct CORDL_TYPE TMP_DynamicFontAssetUtilities_FontReference {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x67314dc, size 0x23c, virtual false, abstract: false, final false
  inline void _ctor(::StringW fontFilePath, ::StringW faceNameAndStyle, int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_DynamicFontAssetUtilities_FontReference();

  // Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "faceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hashCode", ty: "uint64_t",
  // modifiers: "", def_value: None }]
  constexpr TMP_DynamicFontAssetUtilities_FontReference(::StringW familyName, ::StringW styleName, int32_t faceIndex, ::StringW filePath, uint64_t hashCode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15866 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field familyName, offset: 0x0, size: 0x8, def value: None
  ::StringW familyName;

  /// @brief Field styleName, offset: 0x8, size: 0x8, def value: None
  ::StringW styleName;

  /// @brief Field faceIndex, offset: 0x10, size: 0x4, def value: None
  int32_t faceIndex;

  /// @brief Field filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW filePath;

  /// @brief Field hashCode, offset: 0x20, size: 0x8, def value: None
  uint64_t hashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities_FontReference, familyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities_FontReference, styleName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities_FontReference, faceIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities_FontReference, filePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities_FontReference, hashCode) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_DynamicFontAssetUtilities_FontReference, 0x28>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_DynamicFontAssetUtilities
class CORDL_TYPE TMP_DynamicFontAssetUtilities : public ::System::Object {
public:
  // Declarations
  using FontReference = ::TMPro::TMP_DynamicFontAssetUtilities_FontReference;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::TMPro::TMP_DynamicFontAssetUtilities* s_Instance;

  /// @brief Field s_RegularStyleNameHashCode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_s_RegularStyleNameHashCode, put = __cordl_internal_set_s_RegularStyleNameHashCode)) uint32_t s_RegularStyleNameHashCode;

  /// @brief Field s_SystemFontLookup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_s_SystemFontLookup,
                      put = __cordl_internal_set_s_SystemFontLookup)) ::System::Collections::Generic::Dictionary_2<uint64_t, ::TMPro::TMP_DynamicFontAssetUtilities_FontReference>* s_SystemFontLookup;

  /// @brief Field s_SystemFontPaths, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_s_SystemFontPaths, put = __cordl_internal_set_s_SystemFontPaths)) ::ArrayW<::StringW, ::Array<::StringW>*> s_SystemFontPaths;

  /// @brief Method InitializeSystemFontReferenceCache, addr 0x6730edc, size 0x600, virtual false, abstract: false, final false
  inline void InitializeSystemFontReferenceCache();

  static inline ::TMPro::TMP_DynamicFontAssetUtilities* New_ctor();

  /// @brief Method TryGetSystemFontReference, addr 0x6731718, size 0x80, virtual false, abstract: false, final false
  static inline bool TryGetSystemFontReference(::StringW familyName, ::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference> fontRef);

  /// @brief Method TryGetSystemFontReference, addr 0x6731a20, size 0x84, virtual false, abstract: false, final false
  static inline bool TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference> fontRef);

  /// @brief Method TryGetSystemFontReferenceInternal, addr 0x6731798, size 0x288, virtual false, abstract: false, final false
  inline bool TryGetSystemFontReferenceInternal(::StringW familyName, ::StringW styleName, ::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference> fontRef);

  constexpr uint32_t const& __cordl_internal_get_s_RegularStyleNameHashCode() const;

  constexpr uint32_t& __cordl_internal_get_s_RegularStyleNameHashCode();

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::TMPro::TMP_DynamicFontAssetUtilities_FontReference>* const& __cordl_internal_get_s_SystemFontLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::TMPro::TMP_DynamicFontAssetUtilities_FontReference>*& __cordl_internal_get_s_SystemFontLookup();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_s_SystemFontPaths() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_s_SystemFontPaths();

  constexpr void __cordl_internal_set_s_RegularStyleNameHashCode(uint32_t value);

  constexpr void __cordl_internal_set_s_SystemFontLookup(::System::Collections::Generic::Dictionary_2<uint64_t, ::TMPro::TMP_DynamicFontAssetUtilities_FontReference>* value);

  constexpr void __cordl_internal_set_s_SystemFontPaths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x6731aa4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_DynamicFontAssetUtilities* getStaticF_s_Instance();

  static inline void setStaticF_s_Instance(::TMPro::TMP_DynamicFontAssetUtilities* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_DynamicFontAssetUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_DynamicFontAssetUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_DynamicFontAssetUtilities(TMP_DynamicFontAssetUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_DynamicFontAssetUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_DynamicFontAssetUtilities(TMP_DynamicFontAssetUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15867 };

  /// @brief Field s_SystemFontLookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::TMPro::TMP_DynamicFontAssetUtilities_FontReference>* ___s_SystemFontLookup;

  /// @brief Field s_SystemFontPaths, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___s_SystemFontPaths;

  /// @brief Field s_RegularStyleNameHashCode, offset: 0x20, size: 0x4, def value: None
  uint32_t ___s_RegularStyleNameHashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities, ___s_SystemFontLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities, ___s_SystemFontPaths) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities, ___s_RegularStyleNameHashCode) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_DynamicFontAssetUtilities, 0x28>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_DynamicFontAssetUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_DynamicFontAssetUtilities*, "TMPro", "TMP_DynamicFontAssetUtilities");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_DynamicFontAssetUtilities_FontReference, "TMPro", "TMP_DynamicFontAssetUtilities/FontReference");
