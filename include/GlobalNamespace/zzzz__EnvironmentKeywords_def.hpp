#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentKeywords)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentKeywords;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentKeywords);
// Type: ::EnvironmentKeywords
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4174))
// CS Name: ::EnvironmentKeywords*
class CORDL_TYPE EnvironmentKeywords : public ::System::Object {
public:
  // Declarations
  /// @brief Field _environmentKeywords, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentKeywords,
                      put = __cordl_internal_set__environmentKeywords))::System::Collections::Generic::IReadOnlyList_1<::StringW>* _environmentKeywords;

  /// @brief Field _environmentKeywordsSet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentKeywordsSet,
                      put = __cordl_internal_set__environmentKeywordsSet))::System::Collections::Generic::HashSet_1<::StringW>* _environmentKeywordsSet;

  __declspec(property(get = get_environmentKeywords))::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& __cordl_internal_get__environmentKeywords();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> const& __cordl_internal_get__environmentKeywords() const;

  constexpr void __cordl_internal_set__environmentKeywords(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__environmentKeywordsSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__environmentKeywordsSet() const;

  constexpr void __cordl_internal_set__environmentKeywordsSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method get_environmentKeywords, addr 0x22403a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords();

  static inline ::GlobalNamespace::EnvironmentKeywords* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords);

  /// @brief Method .ctor, addr 0x22403ac, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords);

  /// @brief Method HasKeyword, addr 0x22404b0, size 0x58, virtual false, abstract: false, final false
  inline bool HasKeyword(::StringW keyword);

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentKeywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentKeywords(EnvironmentKeywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentKeywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentKeywords(EnvironmentKeywords const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentKeywords();

public:
  /// @brief Field _environmentKeywords, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* ____environmentKeywords;

  /// @brief Field _environmentKeywordsSet, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____environmentKeywordsSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentKeywords, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentKeywords, ____environmentKeywords) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentKeywords, ____environmentKeywordsSet) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentKeywords);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentKeywords*, "", "EnvironmentKeywords");
